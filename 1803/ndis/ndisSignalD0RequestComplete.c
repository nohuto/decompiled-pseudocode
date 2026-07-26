/*
 * XREFs of ndisSignalD0RequestComplete @ 0x1C000F564
 * Callers:
 *     ndisSignalD0CompleteWorkItem @ 0x1C0066690 (ndisSignalD0CompleteWorkItem.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071E10 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 * Callees:
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0074118 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisPowerSaveClearStop @ 0x1C00B0570 (ndisPowerSaveClearStop.c)
 */

int __fastcall ndisSignalD0RequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  KIRQL v4; // al
  _NDIS_MINIPORT_EVENT LastD0Reason; // bp
  int v6; // ecx
  unsigned __int64 MaxWakeIrpLatencyMs; // rax
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  struct _KEVENT *PowerCompleteEvent; // rcx
  ULONGLONG v10; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LastD0Reason = a1->LastD0Reason;
  a1->SyncFlags &= ~2u;
  a1->LastD0CompleteStatus = a2;
  a1->LastD0Reason = NdisMEvent_Unknown;
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v4);
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    McTemplateK0jqxq(
      v6,
      (unsigned int)&DevicePowerOnComplete,
      (_DWORD)a1 + 4032,
      (_DWORD)a1 + 4032,
      a1->IfIndex,
      a1->NetLuid.Value,
      a2);
  if ( LastD0Reason == NdisMEventD0_SystemResume )
  {
    if ( !a2 )
      ndisPowerSaveClearStop(a1, (enum _NDIS_SS_STOP_REASON)((unsigned __int16)LastD0Reason + 1));
  }
  else if ( (unsigned __int16)LastD0Reason > NdisMEventD0_SystemResume
         && ((unsigned __int16)LastD0Reason <= NdisMEventD0_AoAcWake || LastD0Reason == NdisMEventD0_AoAcSurpriseWake) )
  {
    ndisNicActiveRequestComplete(a1, a2);
  }
  KeSetEvent(&a1->PowerD0CompleteEvent, 0, 0);
  LODWORD(MaxWakeIrpLatencyMs) = a1->Flags;
  if ( (MaxWakeIrpLatencyMs & 0x80u) != 0LL )
  {
    PowerCompleteEvent = a1->PowerCompleteEvent;
    a1->PowerCompleteStatus = a2;
    LODWORD(MaxWakeIrpLatencyMs) = KeSetEvent(PowerCompleteEvent, 0, 0);
  }
  AoAc = a1->AoAc;
  if ( AoAc )
  {
    ++AoAc->WakeIrpCount;
    v10 = KeQueryUnbiasedInterruptTime() - AoAc->WakeIrpStartTime + 5000;
    MaxWakeIrpLatencyMs = AoAc->MaxWakeIrpLatencyMs;
    AoAc->LastWakeIrpLatencyMs = v10 / 0x2710;
    if ( MaxWakeIrpLatencyMs <= v10 / 0x2710 )
      MaxWakeIrpLatencyMs = v10 / 0x2710;
    AoAc->TotalWakeIrpLatencyMs += v10 / 0x2710;
    AoAc->MaxWakeIrpLatencyMs = MaxWakeIrpLatencyMs;
  }
  return MaxWakeIrpLatencyMs;
}
