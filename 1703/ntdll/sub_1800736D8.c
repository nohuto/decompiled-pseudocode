/*
 * XREFs of sub_1800736D8 @ 0x1800736D8
 * Callers:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1800736D8(signed __int64 *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // r8

  a2[1] = (signed __int64)NtCurrentTeb()->ClientId.UniqueThread;
  _m_prefetchw(a1);
  result = *a1;
  do
  {
    v3 = result;
    *a2 = result;
    result = _InterlockedCompareExchange64(a1, (signed __int64)a2, result);
  }
  while ( result != v3 );
  return result;
}
