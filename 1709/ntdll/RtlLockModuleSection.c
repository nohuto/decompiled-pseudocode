/*
 * XREFs of RtlLockModuleSection @ 0x180082A40
 * Callers:
 *     RtlpRegisterLockedMemoryZone @ 0x1800827A4 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180082830 (RtlpRegisterLockedMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpLocateModuleSectionInLockedSectionList @ 0x180082BE0 (RtlpLocateModuleSectionInLockedSectionList.c)
 *     LdrEnumerateLoadedModules @ 0x180082C20 (LdrEnumerateLoadedModules.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 ModuleSectionInLockedSectionList; // rax
  unsigned __int64 v6; // rbx
  void *Heap; // rax
  int v8; // edi
  unsigned __int64 *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpLockedSectionListLock, a2, a3, a4);
  ModuleSectionInLockedSectionList = RtlpLocateModuleSectionInLockedSectionList(a1);
  v6 = ModuleSectionInLockedSectionList;
  if ( ModuleSectionInLockedSectionList )
  {
    ++*(_DWORD *)(ModuleSectionInLockedSectionList + 32);
    v8 = 0;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    v6 = (unsigned __int64)Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      v11 = a1;
      v12 = -1073741275;
      v8 = LdrEnumerateLoadedModules(0LL, RtlpModuleEnumeratorCallback, &v11);
      if ( v8 >= 0 )
      {
        v8 = v12;
        if ( v12 >= 0 )
        {
          *(_QWORD *)(v6 + 16) = v13;
          *(_QWORD *)(v6 + 24) = v14;
          *(_DWORD *)(v6 + 32) = 1;
          v9 = (unsigned __int64 *)off_180159678[0];
          if ( *(_UNKNOWN ***)off_180159678[0] != &RtlpLockedSectionList )
            __fastfail(3u);
          *(_QWORD *)v6 = &RtlpLockedSectionList;
          *(_QWORD *)(v6 + 8) = v9;
          *v9 = v6;
          off_180159678[0] = (_UNKNOWN **)v6;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpLockedSectionListLock);
  if ( v8 < 0 && v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return (unsigned int)v8;
}
