/*
 * XREFs of EtwpStackTraceDispatcher @ 0x1402AE330
 * Callers:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140172664 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140172980 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     MmCanThreadFault @ 0x140130A80 (MmCanThreadFault.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 */

void __fastcall EtwpStackTraceDispatcher(unsigned int *a1, unsigned int *a2, struct _KTHREAD *a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  struct _KTHREAD *v6; // rsi
  unsigned __int8 EffectiveIrql; // al
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r14
  int NestingLevel; // ecx

  CurrentThread = KeGetCurrentThread();
  v5 = a4;
  v6 = a3;
  if ( (a4 & 0x4000) == 0 || KeGetCurrentPrcb()->IdleThread != CurrentThread )
  {
    if ( !a3 )
      v6 = CurrentThread;
    if ( (a4 & 0x3000) != 0x1000 )
      goto LABEL_29;
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread != v6
      || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 && (a4 & 0x4000000) == 0 )
    {
      v5 = a4 & 0xFFFFEFFF;
      goto LABEL_29;
    }
    EffectiveIrql = KeGetEffectiveIrql();
    v10 = 2;
    v11 = EffectiveIrql;
    if ( EffectiveIrql < 2u )
    {
      if ( ((a1[208] & 0x1000000) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0)
        && (unsigned int)MmCanThreadFault()
        && !BYTE6(CurrentThread[1].Queue)
        && KeGetCurrentThread()->ApcStateIndex != 1
        && (v5 & 0x1000000) == 0
        && !_bittest((const signed __int32 *)&CurrentThread->116, 5u) )
      {
        goto LABEL_29;
      }
      v5 &= ~0x1000u;
    }
    else
    {
      v5 &= ~0x1000u;
      NestingLevel = KeGetCurrentPrcb()->NestingLevel;
      if ( EffectiveIrql == 2 )
      {
        if ( !NestingLevel )
          goto LABEL_28;
        goto LABEL_16;
      }
      if ( NestingLevel )
      {
LABEL_16:
        if ( (v5 & 0x8000) == 0 || NestingLevel != 1 )
          goto LABEL_29;
      }
    }
    v10 = v11;
LABEL_28:
    EtwpQueueStackWalkApc((__int64)CurrentThread, v10, a1, a2);
LABEL_29:
    if ( (v5 & 0x1800) != 0 )
      EtwpTraceStackWalk(a1, v5, v6, a2);
  }
}
