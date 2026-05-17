/*
 * XREFs of LdrpIncrementModuleLoadCount @ 0x18002E76C
 * Callers:
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800203DC (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFastpthReloadedDll @ 0x18002E270 (LdrpFastpthReloadedDll.c)
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 *     LdrGetDllHandleByMapping @ 0x18007A390 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007D190 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpIncrementModuleLoadCount(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 != -1 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 24) = v4 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v3 + 28);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
