/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x140022DDC
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14043EF34 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
