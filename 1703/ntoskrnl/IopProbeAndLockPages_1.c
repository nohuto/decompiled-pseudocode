/*
 * XREFs of IopProbeAndLockPages_1 @ 0x1401F5CD4
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14020ECE8 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(_DWORD *a1, char a2, __int64 a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  char v8; // dl
  __int64 result; // rax

  v7 = a2 == 0;
  v8 = 1;
  if ( v7 )
    v8 = a2;
  MiProbeAndLockPages(a1, v8, 1);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
