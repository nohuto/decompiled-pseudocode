/*
 * XREFs of ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0072E58
 * Callers:
 *     ndisSetDevicePower @ 0x1C0012104 (ndisSetDevicePower.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0072390 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00706DC (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0072D70 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

__int64 __fastcall ndisWdfRequestNicActive(
        struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle,
        enum CallRunMode a2,
        enum _NDIS_TMP_REF_REASON a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v7; // di
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  unsigned int v9; // edi
  int v11; // r11d
  __int64 v12; // rdx
  bool v13; // cf
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx

  AoAc = MiniportAdapterHandle->AoAc;
  KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(MiniportAdapterHandle, 2);
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ActiveState = AoAc->ActiveState;
  if ( (unsigned int)(ActiveState - 1) > 1 )
  {
    if ( ActiveState == NdisNicError )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 2u )
        WPP_SF_q(0x10u, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, (__int64)MiniportAdapterHandle);
      KeReleaseSpinLock(&AoAc->Lock, v7);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock(&AoAc->Lock, v7);
    v9 = 259;
LABEL_7:
    if ( a2 == RunSynchronous )
    {
      KeWaitForSingleObject(&AoAc->WdfAoAcDisengagedEvent, Executive, 0, 0, 0LL);
      return 0;
    }
    return v9;
  }
  KeClearEvent(&AoAc->WdfAoAcDisengagedEvent);
  if ( AoAc->ActiveState == NdisNicQuiet )
    ++AoAc->CsPowerTransitions;
  v11 = 3;
  v12 = MEMORY[0xFFFFF78000000008];
  v13 = AoAc->IsInCsResiliency != 0;
  AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
  AoAc->CurrentCsResiliencyStartTime = v12 & -(__int64)v13;
  if ( a3 == NdisAoAcTempRefWake )
  {
    AoAc->TempRefReason = NdisAoAcTempRefWake;
    AoAc->LastWakeTime.QuadPart = MEMORY[0xFFFFF78000000014];
    AoAc->TakeWakeToRefTime = 1;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
  }
  AoAc->ActiveState = v11;
  KeReleaseSpinLock(&AoAc->Lock, v7);
  LOBYTE(v14) = a2 == RunSynchronous;
  v15 = MiniportAdapterHandle->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcDisengage(
          MiniportAdapterHandle->MiniportAdapterContext,
          v14);
  v9 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 == 259 )
      goto LABEL_7;
    v16 = v15;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092616 >= 2u )
      WPP_SF_qD(0xFu, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, (__int64)MiniportAdapterHandle, v15);
    v16 = -1073741823;
  }
  ndisWdfAoAcDisengageComplete(MiniportAdapterHandle, v9);
  return v16;
}
