/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140598F20
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400B9690 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
