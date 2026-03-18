/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x14012F768
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DCE94 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x1400DD0A8 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x1405DBD24 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1400DC158 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        PVOID *a2,
        HANDLE *a3,
        __int64 a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        __int64 a9)
{
  HANDLE v11; // rdi
  unsigned int i; // ecx
  __int64 v13; // rbx
  PVOID PoolWithTag; // rsi
  unsigned int j; // edx
  PIMAGE_NT_HEADERS v16; // rax
  unsigned int CheckSum; // r9d
  int v18; // r8d
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int16 v21; // ax
  PVOID v22; // rax
  PVOID v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rbx

  v11 = 0LL;
  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = 0; i < AlternateResourceModuleCount; ++i )
  {
    v13 = 9LL * i;
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && *((_QWORD *)AlternateResourceModules + 9 * i + 2) )
        goto LABEL_56;
      if ( (a7 & 1) != 0
        && *((_QWORD *)AlternateResourceModules + 9 * i + 4)
        && a6
        && *((_WORD *)AlternateResourceModules + 36 * i) == a6 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v24 = AlternateResourceModules;
        *a2 = (PVOID)*((_QWORD *)AlternateResourceModules + v13 + 4);
        if ( a3 )
          *a3 = (HANDLE)v24[v13 + 5];
        goto LABEL_56;
      }
    }
  }
  if ( (a7 & 0x10) != 0 )
    goto LABEL_56;
  PoolWithTag = AlternateResourceModules;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72LL * (unsigned int)(AltResMemBlockCount + 32), 0x69507472u);
      if ( !PoolWithTag )
        goto LABEL_56;
      v25 = (unsigned int)AltResMemBlockCount;
      memset(PoolWithTag, 0, 72LL * (unsigned int)(AltResMemBlockCount + 32));
      memmove(PoolWithTag, AlternateResourceModules, 72 * v25);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = PoolWithTag;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v22 = ExAllocatePoolWithTag(PagedPool, 0x900uLL, 0x69507472u);
    PoolWithTag = v22;
    if ( !v22 )
      goto LABEL_56;
    memset(v22, 0, 0x900uLL);
    AlternateResourceModules = PoolWithTag;
    AltResMemBlockCount = 32;
  }
  for ( j = 0; j < AlternateResourceModuleCount; ++j )
  {
    if ( *((_QWORD *)PoolWithTag + 9 * j + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && !*((_QWORD *)PoolWithTag + 9 * j + 2) )
      {
        *((_QWORD *)PoolWithTag + 9 * j + 2) = a4;
        *((_DWORD *)PoolWithTag + 18 * j + 16) = a8;
        goto LABEL_56;
      }
      if ( (a7 & 1) != 0 && !*((_QWORD *)PoolWithTag + 9 * j + 4) )
      {
        v21 = *((_WORD *)PoolWithTag + 36 * j);
        if ( v21 == a6 || !v21 )
        {
          *((_QWORD *)PoolWithTag + 9 * j + 4) = *a2;
          if ( a3 )
            v11 = *a3;
          *((_QWORD *)PoolWithTag + 9 * j + 5) = v11;
          *((_WORD *)PoolWithTag + 36 * j) = a6;
          *((_DWORD *)PoolWithTag + 18 * j + 16) = a8;
          *((_QWORD *)PoolWithTag + 9 * j + 6) = a9;
          goto LABEL_56;
        }
      }
    }
  }
  v16 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v16 )
  {
    CheckSum = v16->OptionalHeader.CheckSum;
    v18 = AlternateResourceModuleCount;
    v19 = 9LL * (unsigned int)AlternateResourceModuleCount;
    v20 = AlternateResourceModules;
    *((_QWORD *)AlternateResourceModules + v19 + 1) = a1;
    v20[v19 + 2] = a4;
    if ( (a7 & 1) != 0 )
    {
      if ( a2 )
        v23 = *a2;
      else
        v23 = 0LL;
      v20[v19 + 4] = v23;
      if ( a3 )
        v11 = *a3;
      v20[v19 + 5] = v11;
      v20[v19 + 6] = a9;
    }
    else
    {
      v20[v19 + 4] = 0LL;
      v20[v19 + 5] = 0LL;
      v20[v19 + 6] = 0LL;
    }
    LOWORD(v20[v19]) = a6;
    LODWORD(v20[v19 + 3]) = CheckSum;
    LODWORD(v20[v19 + 8]) = a8;
    AlternateResourceModuleCount = v18 + 1;
  }
LABEL_56:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return 1;
}
