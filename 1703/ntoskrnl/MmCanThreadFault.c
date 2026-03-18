/*
 * XREFs of MmCanThreadFault @ 0x1400E49D0
 * Callers:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( KeGetEffectiveIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
      && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[1].Flink != KiExecuteDpc )
    {
      if ( MmPhysicalMemoryBlock )
      {
        v1 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(CurrentThread->ApcState.Process[1].SecurePid))
                       + 5544LL);
        if ( v1 )
        {
          if ( CurrentThread != *(struct _KTHREAD **)(v1 + 96) )
            return 1;
        }
      }
    }
  }
  return result;
}
