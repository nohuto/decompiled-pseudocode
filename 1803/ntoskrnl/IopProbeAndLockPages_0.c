/*
 * XREFs of IopProbeAndLockPages_0 @ 0x140232AF0
 * Callers:
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402542A8 (MmUpdateMdlTracker.c)
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
