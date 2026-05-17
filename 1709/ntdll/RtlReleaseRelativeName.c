/*
 * XREFs of RtlReleaseRelativeName @ 0x180018D50
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapResourceFile @ 0x180018AC4 (LdrpMapResourceFile.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0604 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x1801101AC (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      NtClose(*(HANDLE *)(v1 + 8));
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
