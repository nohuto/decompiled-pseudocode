/*
 * XREFs of RtlWow64PushCrossProcessWork @ 0x1800D6680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWow64PushCrossProcessWork(volatile signed __int64 *a1, _DWORD *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  result = *a1;
  do
  {
    *a2 = result;
    v3 = result;
    result = _InterlockedCompareExchange64(a1, __PAIR64__(HIDWORD(result), (int)a2 - (int)a1) + 0x100000000LL, result);
  }
  while ( v3 != result );
  return result;
}
