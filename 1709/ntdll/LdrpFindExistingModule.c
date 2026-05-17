/*
 * XREFs of LdrpFindExistingModule @ 0x180020C4C
 * Callers:
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x180080334 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180022430 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindExistingModule(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v9; // edx
  int LoadedDllByNameLockHeld; // ebx

  *(_QWORD *)a5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = 0;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0, a2, 0, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *(_DWORD *)(*(_QWORD *)a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
