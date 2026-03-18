/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x1400E5FE0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  KIRQL CurrentIrql; // di
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  __int16 v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+32h] [rbp-26h]
  int v12; // [rsp+34h] [rbp-24h]
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = a1 + 72;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v3, CurrentIrql);
  for ( ; (*(_DWORD *)(a1 + 56) & 4) != 0; CurrentIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v9 = 2;
    v13[1] = v13;
    v10 = 263;
    v13[0] = v13;
    v8 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v8;
    v11 = 6;
    v12 = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(CurrentIrql);
    KeWaitForGate((__int64)&v10, 0x12u);
  }
  ++*(_QWORD *)(a1 + 40);
  ++*(_QWORD *)(a1 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
  else
    *(_DWORD *)(a1 + 72) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v7;
      if ( !v7 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
