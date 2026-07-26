/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0074268
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0024EFC (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0073210 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     ndisSubmitIdleRequest @ 0x1C0072098 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072CE0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C0074D90 (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A080 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F69DC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F6BEC (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // bp
  KSPIN_LOCK *v5; // rcx
  unsigned int v6; // eax
  KIRQL v7; // al
  int v8; // ebp
  unsigned int v9; // esi
  _NDIS_MINIPORT_AOAC *v10; // rbx
  KIRQL v11; // al
  KIRQL v12; // bl

  AoAc = a1->AoAc;
  v3 = a1->Flags & 0x80;
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( !ndisAoAcIsD0Required(AoAc) && AoAc->ActiveState == NdisNicActive )
  {
    AoAc->ActiveState = NdisNicSuspending;
    KeClearEvent(&AoAc->PowerSuspendCompleteEvent);
    KeClearEvent(&AoAc->NicQuietCheckCompleteEvent);
    if ( AoAc->CurrentActiveStartTime )
    {
      AoAc->TotalCsActiveTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentActiveStartTime;
      AoAc->CurrentActiveStartTime = 0LL;
    }
    if ( (AoAc->WakeFlags.Value & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++AoAc->CsSpuriousWakes;
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    AoAc->WakeFlags.Value = 0;
    AoAc->LastWakePatternId = 0;
    KeReleaseSpinLock(&AoAc->Lock, v4);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendStop(a1, 7);
    if ( v3 )
    {
      v6 = ndisWdfRequestNicQuiet(a1);
    }
    else
    {
      if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
        AoAc->SSIdleConfirmed = 0;
        KeReleaseSpinLock(&AoAc->Lock, v7);
        v8 = ndisSubmitIdleRequest(a1, 1u);
        if ( v8 != 259 )
        {
          v10 = a1->AoAc;
          NdisTraceLoggingUnexpectedAoAcError(a1, 0x618u, 0);
          v10->LastUnexpectedFailureLine[1] = v10->LastUnexpectedFailureLine[0];
          v10->LastUnexpectedFailureLine[0] = 1560;
          if ( (unsigned __int8)byte_1C0099615 >= 2u )
            WPP_SF_dq(0x19u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v8, a1);
          v9 = -1073741823;
          goto LABEL_22;
        }
        v9 = 0;
LABEL_23:
        KeSetEvent(&AoAc->NicQuietCheckCompleteEvent, 0, 0);
        return v9;
      }
      v6 = ndisRequestNicQuiet(a1, 0);
    }
    v9 = v6;
    if ( v6 )
    {
LABEL_22:
      v11 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
      AoAc->ActiveState = NdisNicError;
      v12 = v11;
      KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&AoAc->Lock, v12);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  if ( (unsigned int)(AoAc->ActiveState - 1) <= 1 && AoAc->CurrentCsResiliencyStartTime )
  {
    AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
    AoAc->CurrentCsResiliencyStartTime = 0LL;
  }
  KeReleaseSpinLock(v5, v4);
  return 0LL;
}
