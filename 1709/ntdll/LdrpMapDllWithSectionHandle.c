/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x1800220AC
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpLoadKnownDll @ 0x180035B64 (LdrpLoadKnownDll.c)
 * Callees:
 *     LdrpInsertDataTableEntry @ 0x180021DDC (LdrpInsertDataTableEntry.c)
 *     LdrpCompleteMapModule @ 0x180021F28 (LdrpCompleteMapModule.c)
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180022430 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpLogNewDllLoad @ 0x180022528 (LdrpLogNewDllLoad.c)
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180029BB0 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180029CD4 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 *     LdrpCorProcessImports @ 0x1800877D4 (LdrpCorProcessImports.c)
 */

__int64 __fastcall LdrpMapDllWithSectionHandle(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // r15d
  int v7; // r8d
  int v8; // edx
  int LoadedDllByNameLockHeld; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF
  int v17; // [rsp+7Ch] [rbp+24h]

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v14 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0LL, *(_QWORD *)(v4 + 48), v5, &v15);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v13 = v15;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = *(_DWORD *)(v15 + 8);
        *(_DWORD *)(v4 + 64) = *(_DWORD *)(v13 + 80);
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v7 = *(_DWORD *)(a1 + 32);
        v8 = 0;
        if ( (v7 & 0x20) == 0 )
          v8 = v4 + 72;
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                    (int)v4 + 88,
                                    v8,
                                    v7,
                                    (unsigned int)&v14,
                                    *(_DWORD *)(v4 + 264));
        v10 = v15;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          v16 = *(_DWORD *)(v15 + 8);
          v17 = *(_DWORD *)(v15 + 80);
          LdrpFindLoadedDllByMappingLockHeld(*(_QWORD *)(v4 + 48), v15, &v16, &v14);
        }
        if ( !v14 )
        {
          LdrpInsertDataTableEntry(v4);
          LdrpInsertModuleToIndexLockHeld(v4, v10);
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( v14 )
        {
          LdrpLoadContextReplaceModule(a1, v14);
          return (unsigned int)v3;
        }
      }
      if ( (void *)qword_1801595D0 == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, v15, v6);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(unsigned int *)(a1 + 32), 1LL);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v11 = *(_QWORD *)(a1 + 48);
            if ( v11 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v11 + 48);
            if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 && (*(_BYTE *)(v4 + 104) & 4) == 0 )
            {
              LdrpLogDllState(*(_QWORD *)(v4 + 48), v4 + 72, 5294LL);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
            else if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
            {
              return (unsigned int)LdrpCorProcessImports(v4);
            }
            else
            {
              LdrpMapAndSnapDependency(a1);
              return (unsigned int)**(_DWORD **)(a1 + 40);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
