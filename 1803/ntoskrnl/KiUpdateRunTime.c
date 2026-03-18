/*
 * XREFs of KiUpdateRunTime @ 0x1401099B0
 * Callers:
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 * Callees:
 *     KiShouldScanSharedReadyQueue @ 0x1400EAB34 (KiShouldScanSharedReadyQueue.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400ECA74 (KiCheckPreferredHeteroProcessor.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x140109440 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x140247D04 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x140277C7C (PoSetProcessorQoS.c)
 */

char __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // bp
  int v4; // esi
  __int64 v5; // rcx
  __int64 CurrentThread; // rdi
  unsigned __int64 v7; // rax
  struct _KPRCB *v8; // r14
  _KPRCBFLAG v9; // eax
  unsigned int PrcbFlags; // ecx
  int v11; // edx
  unsigned int v12; // edx
  char v13; // al
  __int16 v15; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v15;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  v4 = MEMORY[0xFFFFF78000000320];
  if ( (v3 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)CurrentPrcb, CurrentPrcb->LastTick, MEMORY[0xFFFFF78000000320], a2, a1);
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v7 = *(_QWORD *)(CurrentThread + 72);
    if ( v7 >= *(_QWORD *)(CurrentThread + 32) )
      goto LABEL_5;
    LODWORD(v7) = KiCheckPreferredHeteroProcessor(CurrentThread, (__int64)CurrentPrcb, 1);
    if ( (_DWORD)v7 )
      goto LABEL_5;
    v8 = KeGetCurrentPrcb();
    v9.PrcbFlags = (volatile int)v8->PrcbFlags;
    if ( (v9.PrcbFlags & 0xC) == 0 )
    {
      if ( ((*(_BYTE *)(CurrentThread + 120) ^ LOBYTE(v9.PrcbFlags)) & 3) != 0 )
        KeCheckAndApplyBamQos(v8, CurrentThread);
      goto LABEL_4;
    }
    _disable();
    PrcbFlags = v8->PrcbFlags.PrcbFlags & 0xFFFFFFF3;
    v11 = *(_DWORD *)(CurrentThread + 120) & 3;
    if ( v11 != (v8->PrcbFlags.PrcbFlags & 3) )
    {
      v12 = PrcbFlags | (4 * v11);
      v8->PrcbFlags.PrcbFlags = v12;
      v13 = PoSetProcessorQoS(v8, (v12 >> 2) & 3);
      PrcbFlags = v8->PrcbFlags.PrcbFlags;
      if ( !v13 )
      {
LABEL_23:
        if ( (PrcbFlags & 0xC) == 0 )
          KeUpdatePendingQosRequest(v8);
        if ( (v15 & 0x200) != 0 )
          _enable();
        goto LABEL_4;
      }
      PrcbFlags &= 0xFFFFFFF3;
    }
    v8->PrcbFlags.PrcbFlags = PrcbFlags;
    goto LABEL_23;
  }
LABEL_4:
  LOBYTE(v7) = KiCheckGroupSchedulingQuantumEnd((__int64)CurrentPrcb, CurrentThread);
  if ( (_BYTE)v7 )
  {
LABEL_5:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(v5) = 2;
      LOBYTE(v7) = HalRequestSoftwareInterrupt(v5);
    }
    return v7;
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v4) < 0 )
  {
    LODWORD(v7) = KiShouldScanSharedReadyQueue(v5);
    if ( !(_DWORD)v7 || (LODWORD(v7) = CurrentPrcb->SharedReadyQueue->ReadySummary, (v7 & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        LOBYTE(v7) = v4 + 75;
        CurrentPrcb->ReadyScanTick = v4 + 75;
      }
    }
  }
  return v7;
}
