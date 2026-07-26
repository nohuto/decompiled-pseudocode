/*
 * XREFs of ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0074750
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072FFC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0073D08 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     ndisCancelIdleRequestSync @ 0x1C0070648 (ndisCancelIdleRequestSync.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00715E4 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0074E5C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0075220 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A080 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

__int64 __fastcall ndisRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v5; // esi
  KIRQL v6; // al
  KIRQL v8; // al
  KIRQL v9; // si
  __int64 v10; // r8
  bool v11; // cf
  KIRQL v12; // si
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  _KEVENT *p_PowerD0CompleteEvent; // rbp
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // esi
  _NDIS_MINIPORT_AOAC *v18; // rbx

  AoAc = a1->AoAc;
  v5 = a1->Flags & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( AoAc->ActiveState == NdisNicActive )
  {
    KeReleaseSpinLock(&AoAc->Lock, v6);
    return 0LL;
  }
  KeReleaseSpinLock(&AoAc->Lock, v6);
  if ( v5 )
    return ndisWdfRequestNicActive(a1, a2, NdisAoAcTempRefNone);
  if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
    ndisCancelIdleRequestSync(a1, 7u, 0, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v9 = v8;
    if ( !AoAc->SSIdleConfirmed )
    {
      AoAc->ActiveState = NdisNicActive;
      KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
      v10 = MEMORY[0xFFFFF78000000008];
      v11 = AoAc->IsInCsResiliency != 0;
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
      AoAc->CurrentCsResiliencyStartTime = v10 & -(__int64)v11;
      KeReleaseSpinLock(&AoAc->Lock, v9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop((__int64)a1, 7);
      return 0LL;
    }
    KeReleaseSpinLock(&AoAc->Lock, v8);
  }
  KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficTotalDX);
  v12 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ActiveState = AoAc->ActiveState;
  if ( ActiveState == NdisNicQuiet )
  {
    if ( AoAc->DeviceGone )
    {
      KeReleaseSpinLock(&AoAc->Lock, v12);
      v17 = -1073741823;
    }
    else
    {
      ++AoAc->CsPowerTransitions;
      p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
      AoAc->ActiveState = NdisNicResuming;
      v15 = MEMORY[0xFFFFF78000000008];
      v11 = AoAc->IsInCsResiliency != 0;
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
      AoAc->CurrentCsResiliencyStartTime = v15 & -(__int64)v11;
      KeClearEvent(&a1->PowerD0CompleteEvent);
      KeReleaseSpinLock(&AoAc->Lock, v12);
      v16 = ndisRequestDevicePowerD0((__int64)a1, 6u);
      v17 = v16;
      if ( v16 == 259 )
        goto LABEL_26;
      v18 = a1->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a1, 0x470u, v16);
      v18->LastUnexpectedFailureLine[1] = v18->LastUnexpectedFailureLine[0];
      v18->LastUnexpectedFailureLine[0] = 1136;
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_dq(0x11u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v17, a1);
    }
  }
  else
  {
    if ( ActiveState == NdisNicError )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
        WPP_SF_q(0x12u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1);
      KeReleaseSpinLock(&AoAc->Lock, v12);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock(&AoAc->Lock, v12);
    v17 = 259;
  }
  if ( v17 == 259 )
  {
    p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
LABEL_26:
    if ( a2 == RunSynchronous )
    {
      KeWaitForSingleObject(p_PowerD0CompleteEvent, Executive, 0, 0, 0LL);
      return 0;
    }
  }
  return v17;
}
