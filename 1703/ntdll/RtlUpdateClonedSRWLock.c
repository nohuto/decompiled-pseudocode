/*
 * XREFs of RtlUpdateClonedSRWLock @ 0x1800E7110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpdateClonedSRWLock(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = a2 != 0 ? 17LL : 1LL;
  *a1 = result;
  return result;
}
