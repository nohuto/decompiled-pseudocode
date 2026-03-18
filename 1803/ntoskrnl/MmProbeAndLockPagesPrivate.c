/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14009ADD8
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140539770 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
