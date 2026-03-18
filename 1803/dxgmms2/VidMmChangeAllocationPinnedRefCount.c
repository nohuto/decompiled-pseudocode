/*
 * XREFs of VidMmChangeAllocationPinnedRefCount @ 0x1C0013940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmChangeAllocationPinnedRefCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 504);
  _InterlockedExchangeAdd((volatile signed __int32 *)(result + 12), a2);
  return result;
}
