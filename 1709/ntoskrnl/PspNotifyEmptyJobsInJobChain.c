/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x14050CFA4
 * Callers:
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x14050DA38 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 768), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 944); i; i = (struct _KEVENT *)i[44].Header.WaitListHead.Blink )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
