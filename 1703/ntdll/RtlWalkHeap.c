/*
 * XREFs of RtlWalkHeap @ 0x180007280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWalkHeap(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return sub_180008414(a1, a2, a3);
}
