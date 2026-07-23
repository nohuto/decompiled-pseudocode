/*
 * XREFs of RtlDequeueUmsCompletionListItems @ 0x1800EF780
 * Callers:
 *     <none>
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 */

NTSTATUS __fastcall RtlDequeueUmsCompletionListItems(__int64 a1, LARGE_INTEGER *a2, __int64 *a3)
{
  NTSTATUS result; // eax
  volatile __int64 *v7; // rbp
  __int64 v8; // rcx

  result = 0;
  if ( !a1 || !a3 )
    return -1073741811;
  v7 = *(volatile __int64 **)a1;
  *a3 = 0LL;
  while ( 1 )
  {
    v8 = _InterlockedExchange64(v7, 0LL);
    if ( v8 )
      break;
    if ( a2 && !a2->QuadPart )
      return 258;
    result = ZwWaitForSingleObject(*(HANDLE *)(a1 + 8), 0, a2);
    if ( result )
      return result;
  }
  *a3 = v8;
  return result;
}
