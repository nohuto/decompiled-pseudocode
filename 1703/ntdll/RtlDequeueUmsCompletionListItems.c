/*
 * XREFs of RtlDequeueUmsCompletionListItems @ 0x1800F26D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall RtlDequeueUmsCompletionListItems(volatile __int64 **a1, _QWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  volatile __int64 *v6; // rbp
  __int64 v7; // rcx

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  v6 = *a1;
  *a3 = 0LL;
  while ( 1 )
  {
    v7 = _InterlockedExchange64(v6, 0LL);
    if ( v7 )
      break;
    if ( a2 && !*a2 )
      return 258LL;
    result = ZwWaitForSingleObject();
    if ( (_DWORD)result )
      return result;
  }
  *a3 = v7;
  return result;
}
