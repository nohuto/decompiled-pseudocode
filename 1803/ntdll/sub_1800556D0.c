/*
 * XREFs of sub_1800556D0 @ 0x1800556D0
 * Callers:
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1800556D0(signed __int64 *a1, signed __int64 *a2)
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
