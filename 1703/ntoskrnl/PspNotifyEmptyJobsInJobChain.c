/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x14054715C
 * Callers:
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1405471A8 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 768), 0xBu);
  for ( i = *(_QWORD **)(a1 + 944); i; i = (_QWORD *)i[134] )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
