/*
 * XREFs of IopProbeAndLockPages @ 0x140038BFC
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14020ECE8 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  __int64 v8; // r8
  __int64 result; // rax

  v7 = a3 == 0;
  v8 = 1LL;
  if ( v7 )
    v8 = a3;
  MiProbeAndLockPages(a1, 0LL, v8);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
