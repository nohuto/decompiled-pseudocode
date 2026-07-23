/*
 * XREFs of KiScanInterruptObjectList @ 0x140182B80
 * Callers:
 *     KiChainedDispatch @ 0x140182930 (KiChainedDispatch.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x140006060 (KiCallInterruptServiceRoutine.c)
 *     PerfInfoLogInterrupt @ 0x140010A80 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiDispatchPassiveInterrupts @ 0x140204B90 (KiDispatchPassiveInterrupts.c)
 */

void __fastcall KiScanInterruptObjectList()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v4; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v6; // r10
  __int64 CurrentThread; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r12
  bool v13; // zf
  int v14; // edi
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // edx
  unsigned __int8 v19; // [rsp+20h] [rbp-38h]
  LARGE_INTEGER v20[6]; // [rsp+28h] [rbp-30h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(v1 + 92));
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v4 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v6 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v6 = v4 ^ __ROR4__(*v6, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v8 = v4 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v8;
    v9 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v8;
    v10 = v8 + v9;
    v11 = v10;
    if ( HIDWORD(v10) )
      v11 = -1;
    *(_DWORD *)(CurrentThread + 80) = v11;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v8);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v12 = v1 + 8;
  v13 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v13 )
    EtwGetKernelTraceTimestamp(v20, 0x20004000u);
  while ( 2 )
  {
    v14 = 0;
    do
    {
      v15 = v12 - 8;
      if ( (*(_DWORD *)(v15 + 104) & 1) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v16 = *(unsigned __int8 *)(v15 + 93);
        if ( !(_BYTE)v16 )
        {
          KiDispatchPassiveInterrupts(v15);
          goto LABEL_26;
        }
        if ( (_BYTE)v16 != *(_BYTE *)(v1 + 92) )
          __writecr8(v16);
        v19 = KiCallInterruptServiceRoutine(v15, 1);
        v17 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v17 != *(_BYTE *)(v15 + 93) )
          __writecr8(v17);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        v18 = v19;
        BYTE1(v18) = *(_BYTE *)(v15 + 88);
        PerfInfoLogInterrupt(v15, v18, (__int64)v20);
        EtwGetKernelTraceTimestamp(v20, 0x20004000u);
      }
      if ( v19 )
      {
        if ( *(_WORD *)(v15 + 108) != 1 )
          goto LABEL_26;
        ++v14;
      }
      v12 = *(_QWORD *)(v15 + 8);
    }
    while ( v12 != v1 + 8 );
    if ( v14 )
      continue;
    break;
  }
LABEL_26:
  _disable();
}
