/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x18007A43C
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x18007A228 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x18007A390 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180029CD4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, _DWORD *a2, unsigned __int64 *a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = a2[2];
  v11 = a2[20];
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, a3, (__int64)a4);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, a2, &v10, (volatile signed __int32 **)a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*a3 + 152) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
