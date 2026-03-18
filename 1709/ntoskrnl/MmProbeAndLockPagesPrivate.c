/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14011D018
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
