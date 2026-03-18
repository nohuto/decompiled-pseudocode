/*
 * XREFs of MmCanThreadFault @ 0x1400D5780
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     EtwpStackTraceDispatcher @ 0x14027FCEC (EtwpStackTraceDispatcher.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 */

__int64 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v1; // edx
  __int64 v2; // rax

  if ( KeGetEffectiveIrql() >= 2u )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
    return 0LL;
  if ( (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc )
    return 0LL;
  v1 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0
                             + 8LL * *((unsigned __int16 *)&CurrentThread->ApcState.Process[1].SecureState.Flags + 2))
                 + 5680LL);
  if ( !v2 )
    return 0LL;
  LOBYTE(v1) = CurrentThread != *(struct _KTHREAD **)(v2 + 96);
  return v1;
}
