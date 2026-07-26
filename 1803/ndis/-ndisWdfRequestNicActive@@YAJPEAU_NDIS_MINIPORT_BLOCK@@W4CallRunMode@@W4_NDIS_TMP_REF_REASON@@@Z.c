/*
 * XREFs of ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0075220
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F884 (ndisSetDevicePower.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0074750 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0072718 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0074E5C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0075140 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
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
  __int64 v11; // rdx
  bool v12; // cf
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx

  AoAc = MiniportAdapterHandle->AoAc;
  KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(MiniportAdapterHandle, 2);
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ActiveState = AoAc->ActiveState;
  if ( (unsigned int)(ActiveState - 1) > 1 )
  {
    if ( ActiveState == NdisNicError )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_q(0x10u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)MiniportAdapterHandle);
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
  v11 = MEMORY[0xFFFFF78000000008];
  v12 = AoAc->IsInCsResiliency != 0;
  AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
  AoAc->CurrentCsResiliencyStartTime = v11 & -(__int64)v12;
  if ( a3 == NdisAoAcTempRefWake )
  {
    AoAc->TempRefReason = NdisAoAcTempRefWake;
    AoAc->LastWakeTime.QuadPart = MEMORY[0xFFFFF78000000014];
    AoAc->TakeWakeToRefTime = 1;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
  }
  AoAc->ActiveState = NdisNicResuming;
  KeReleaseSpinLock(&AoAc->Lock, v7);
  LOBYTE(v13) = a2 == RunSynchronous;
  v14 = MiniportAdapterHandle->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcDisengage(
          MiniportAdapterHandle->MiniportAdapterContext,
          v13);
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 == 259 )
      goto LABEL_7;
    v15 = v14;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099616 >= 2u )
      WPP_SF_qD(0xFu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)MiniportAdapterHandle, v14);
    v15 = -1073741823;
  }
  ndisWdfAoAcDisengageComplete(MiniportAdapterHandle, v9);
  return v15;
}
