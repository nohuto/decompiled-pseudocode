/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x14045950C
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400618B4 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
