/*
 * XREFs of RtlDeleteUmsCompletionList @ 0x1800EF6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall RtlDeleteUmsCompletionList(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    ZwClose();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 0LL;
  }
  return result;
}
