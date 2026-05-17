/*
 * XREFs of RtlSetProxiedProcessId @ 0x180003BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetProxiedProcessId(int a1)
{
  struct _TEB *v1; // rdx
  __int64 result; // rax

  v1 = NtCurrentTeb();
  if ( !v1 )
    return 0LL;
  result = HIDWORD(v1->SystemReserved1[47]);
  HIDWORD(v1->SystemReserved1[47]) = a1;
  return result;
}
