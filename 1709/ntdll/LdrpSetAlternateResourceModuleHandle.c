/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x180074F58
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrSetMUICacheType @ 0x18008CE90 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCMFRemoveFromStandbyQueue @ 0x18008F13C (LdrpCMFRemoveFromStandbyQueue.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E0C68 (LdrpSpecialCacheTypeHandle.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        _QWORD *a2,
        HANDLE *a3,
        __int64 a4,
        unsigned int a5,
        __int16 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int i; // ebx
  char *v15; // rcx
  unsigned int v16; // r14d
  char *v17; // rbx
  PIMAGE_NT_HEADERS v18; // rax
  __int64 CheckSum; // r8
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  int v22; // ecx
  _QWORD *v23; // r12
  int v24; // eax
  int v25; // eax
  HANDLE v26; // rax
  PVOID v27; // rax
  __int64 v28; // rax
  HANDLE v29; // rax
  _QWORD *v30; // rcx
  PVOID Heap; // rax
  char *v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-48h]

  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 && a5 == -1 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v13 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= AlternateResourceModuleCount )
      goto LABEL_11;
    v15 = (char *)AlternateResourceModules + 72 * i;
    if ( *((_QWORD *)v15 + 1) != a1 )
    {
      if ( (a7 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(*((_QWORD *)v15 + 5) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LdrpSpecialCacheTypeHandle(v15, 0LL, v11, v12);
        v13 = 0LL;
      }
      continue;
    }
    if ( (a7 & 2) != 0 && *((_QWORD *)v15 + 2)
      || (a7 & 4) != 0 && a6 && *(_WORD *)v15 == a6 && *((_DWORD *)v15 + 15) != -1 )
    {
      goto LABEL_94;
    }
    if ( (a7 & 1) != 0 && *((_QWORD *)v15 + 4) && a6 && *(_WORD *)v15 == a6 )
      break;
  }
  if ( *a2 == -1LL || a5 != -1 )
  {
LABEL_61:
    v30 = AlternateResourceModules;
    *a2 = *((_QWORD *)AlternateResourceModules + 9 * i + 4);
    if ( a3 )
      *a3 = (HANDLE)v30[9 * i + 5];
    goto LABEL_94;
  }
  if ( (a7 & 0x20) == 0 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*a2 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( a3 )
      NtClose(*a3);
    goto LABEL_61;
  }
  v13 = 0LL;
  if ( *((_QWORD *)v15 + 4) == -1LL )
    *((_QWORD *)v15 + 4) = 0LL;
LABEL_11:
  if ( (a7 & 0x10) != 0 )
    goto LABEL_94;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               8u,
               AlternateResourceModules,
               72LL * (unsigned int)(AltResMemBlockCount + 32));
      v13 = 0LL;
      if ( !Heap )
        goto LABEL_94;
      AlternateResourceModules = Heap;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x900uLL);
    v13 = 0LL;
    if ( !v27 )
      goto LABEL_94;
    AlternateResourceModules = v27;
    AltResMemBlockCount = 32;
  }
  v16 = 0;
  v34 = 0;
  while ( v16 < AlternateResourceModuleCount )
  {
    v17 = (char *)AlternateResourceModules + 72 * v16;
    if ( *((_QWORD *)v17 + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && !*((_QWORD *)v17 + 2) )
      {
        *((_QWORD *)v17 + 2) = a4;
        *((_DWORD *)v17 + 16) = a8;
        goto LABEL_94;
      }
      if ( (a7 & 1) != 0 && !*((_QWORD *)v17 + 4) && (!*(_WORD *)v17 || *(_WORD *)v17 == a6) )
      {
        *((_QWORD *)v17 + 4) = *a2;
        if ( a3 )
          v26 = *a3;
        else
          v26 = 0LL;
        *((_QWORD *)v17 + 5) = v26;
        *(_WORD *)v17 = a6;
        *((_DWORD *)v17 + 16) = a8;
        *((_QWORD *)v17 + 6) = a9;
        *((_DWORD *)v17 + 14) = a5;
        if ( a5 != -1 )
          LdrpCMFRemoveFromStandbyQueue(a5, 0LL, v11, v12, v34);
        if ( gMUICacheType != (_DWORD)v13 )
        {
          LOBYTE(v13) = 1;
          if ( (int)LdrpSpecialCacheTypeHandle(v17, v13, v11, v12) >= 0
            && (gMUICacheType & 2) != 0
            && *((_DWORD *)AlternateResourceModules + 18 * v16 + 16) == -1073741799 )
          {
            *a2 = *((_QWORD *)AlternateResourceModules + 9 * v16 + 4);
          }
        }
        goto LABEL_94;
      }
      if ( (a7 & 4) != 0 )
      {
        *((_DWORD *)v17 + 15) = a5;
        if ( a5 != -1 )
          LdrpCMFRemoveFromStandbyQueue(a5, 0LL, v11, v12, v34);
        goto LABEL_94;
      }
    }
    v34 = ++v16;
  }
  v18 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v18 )
  {
    CheckSum = v18->OptionalHeader.CheckSum;
    v20 = 9LL * (unsigned int)AlternateResourceModuleCount;
    v21 = AlternateResourceModules;
    *((_QWORD *)AlternateResourceModules + v20 + 1) = a1;
    v21[v20 + 2] = a4;
    v22 = a7 & 1;
    if ( (a7 & 1) != 0 )
    {
      v23 = a2;
      if ( a2 )
        v28 = *a2;
      else
        v28 = 0LL;
      v21[v20 + 4] = v28;
      if ( a3 )
        v29 = *a3;
      else
        v29 = 0LL;
      v21[v20 + 5] = v29;
      v21[v20 + 6] = a9;
    }
    else
    {
      v21[v20 + 4] = 0LL;
      v21[v20 + 5] = 0LL;
      v21[v20 + 6] = 0LL;
      v23 = a2;
    }
    LOWORD(v21[v20]) = a6;
    LODWORD(v21[v20 + 3]) = CheckSum;
    v24 = -1;
    if ( (a7 & 4) == 0 )
      v24 = a5;
    LODWORD(v21[v20 + 7]) = v24;
    v25 = a5;
    if ( (a7 & 4) == 0 )
      v25 = -1;
    HIDWORD(v21[v20 + 7]) = v25;
    if ( a5 != -1 )
    {
      LdrpCMFRemoveFromStandbyQueue(a5, v21, CheckSum, 0LL, v34);
      v22 = a7 & 1;
    }
    LODWORD(v21[v20 + 8]) = a8;
    if ( gMUICacheType )
    {
      if ( v22 )
      {
        v32 = (char *)&v21[9 * v16];
        LOBYTE(v21) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v32, v21, CheckSum, 0LL) >= 0
          && (gMUICacheType & 2) != 0
          && *((_DWORD *)AlternateResourceModules + 18 * v16 + 16) == -1073741799 )
        {
          *v23 = *((_QWORD *)AlternateResourceModules + 9 * v16 + 4);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_94:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
