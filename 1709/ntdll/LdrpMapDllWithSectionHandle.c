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
  int v5; // r15d
  _UNICODE_STRING *v6; // rdx
  int LoadedDllByNameLockHeld; // eax
  PIMAGE_NT_HEADERS v8; // r14
  __int64 v9; // rax
  PIMAGE_NT_HEADERS v11; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+18h] BYREF
  unsigned int TimeDateStamp; // [rsp+78h] [rbp+20h]
  unsigned int SizeOfImage; // [rsp+7Ch] [rbp+24h]

  v2 = LdrpMinimalMapModule();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = v2;
    v3 = RtlImageNtHeaderEx(0, *(PVOID *)(v4 + 48), *(_QWORD *)(a1 + 160), &OutHeaders);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v11 = OutHeaders;
        v5 = 0;
        *(_DWORD *)(v4 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v4 + 64) = v11->OptionalHeader.SizeOfImage;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v6 = 0LL;
        if ( (*(_DWORD *)(a1 + 32) & 0x20) == 0 )
          v6 = (_UNICODE_STRING *)(v4 + 72);
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(v4 + 88), v6, *(_DWORD *)(v4 + 264));
        v8 = OutHeaders;
        if ( LoadedDllByNameLockHeld == -1073741515 )
        {
          TimeDateStamp = OutHeaders->FileHeader.TimeDateStamp;
          SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
          LdrpFindLoadedDllByMappingLockHeld(*(PVOID *)(v4 + 48), OutHeaders);
        }
        LdrpInsertDataTableEntry(v4);
        LdrpInsertModuleToIndexLockHeld(v4, v8);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      }
      if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = LdrpCompleteMapModule(a1, (__int64)OutHeaders, v5);
        if ( v3 >= 0 )
        {
          v3 = LdrpProcessMappedModule(v4, *(unsigned int *)(a1 + 32), 1LL);
          if ( v3 >= 0 )
          {
            LdrpLogNewDllLoad(*(_QWORD *)(a1 + 48), v4);
            v9 = *(_QWORD *)(a1 + 48);
            if ( v9 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v9 + 48);
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
