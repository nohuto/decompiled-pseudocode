/*
 * XREFs of IopProbeAndLockPages_0 @ 0x1401EFEC4
 * Callers:
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14020ECE8 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MiProbeAndLockPages(a1, a2 != 0, a3 != 0);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
