/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x140164458
 * Callers:
 *     LdrpGetRcConfig @ 0x1400131C8 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x14057D7AC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x1400136C0 (LdrpInitMuiCrits.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
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
  HANDLE v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  __int64 v15; // rbx
  unsigned int i; // r8d
  _DWORD *v17; // rdx
  PIMAGE_NT_HEADERS v18; // rax
  unsigned int CheckSum; // r9d
  int v20; // r8d
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int16 v23; // ax
  PVOID PoolWithTag; // rax
  void *v25; // rbx
  PVOID v26; // rax
  _QWORD *v27; // rcx
  PVOID v28; // r9
  __int64 v29; // rbx
  void *v31; // [rsp+70h] [rbp+8h]

  v12 = 0LL;
  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 )
    return 0;
  LdrpInitMuiCrits(a1, (__int64)a2, (__int64)a3);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v13 = 0;
  v14 = AlternateResourceModuleCount;
  while ( v13 < AlternateResourceModuleCount )
  {
    v15 = 9LL * v13;
    if ( *((_QWORD *)AlternateResourceModules + 9 * v13 + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && *((_QWORD *)AlternateResourceModules + 9 * v13 + 2) )
        goto LABEL_57;
      if ( (a7 & 1) != 0
        && *((_QWORD *)AlternateResourceModules + 9 * v13 + 4)
        && a6
        && *((_WORD *)AlternateResourceModules + 36 * v13) == a6 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v27 = AlternateResourceModules;
        *a2 = (PVOID)*((_QWORD *)AlternateResourceModules + v15 + 4);
        if ( a3 )
          *a3 = (HANDLE)v27[v15 + 5];
        goto LABEL_57;
      }
    }
    ++v13;
  }
  if ( (a7 & 0x10) != 0 )
    goto LABEL_57;
  if ( !AlternateResourceModules )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x900uLL, 0x69507472u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_57;
    memset(PoolWithTag, 0, 0x900uLL);
    AlternateResourceModules = v25;
    AltResMemBlockCount = 32;
LABEL_39:
    v14 = AlternateResourceModuleCount;
    goto LABEL_14;
  }
  if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
  {
    v28 = ExAllocatePoolWithTag(PagedPool, 72LL * (unsigned int)(AltResMemBlockCount + 32), 0x69507472u);
    v31 = v28;
    if ( !v28 )
      goto LABEL_57;
    v29 = (unsigned int)AltResMemBlockCount;
    memset(v28, 0, 72LL * (unsigned int)(AltResMemBlockCount + 32));
    memmove(v31, AlternateResourceModules, 72 * v29);
    ExFreePoolWithTag(AlternateResourceModules, 0);
    AlternateResourceModules = v31;
    AltResMemBlockCount += 32;
    goto LABEL_39;
  }
LABEL_14:
  for ( i = 0; i < v14; ++i )
  {
    v17 = AlternateResourceModules;
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && !*((_QWORD *)AlternateResourceModules + 9 * i + 2) )
      {
        *((_QWORD *)AlternateResourceModules + 9 * i + 2) = a4;
        v17[18 * i + 16] = a8;
        goto LABEL_57;
      }
      if ( (a7 & 1) != 0 && !*((_QWORD *)AlternateResourceModules + 9 * i + 4) )
      {
        v23 = *((_WORD *)AlternateResourceModules + 36 * i);
        if ( v23 == a6 || !v23 )
        {
          *((_QWORD *)AlternateResourceModules + 9 * i + 4) = *a2;
          if ( a3 )
            v12 = *a3;
          *(_QWORD *)&v17[18 * i + 10] = v12;
          LOWORD(v17[18 * i]) = a6;
          v17[18 * i + 16] = a8;
          *(_QWORD *)&v17[18 * i + 12] = a9;
          goto LABEL_57;
        }
      }
    }
  }
  v18 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v18 )
  {
    CheckSum = v18->OptionalHeader.CheckSum;
    v20 = AlternateResourceModuleCount;
    v21 = 9LL * (unsigned int)AlternateResourceModuleCount;
    v22 = AlternateResourceModules;
    *((_QWORD *)AlternateResourceModules + v21 + 1) = a1;
    v22[v21 + 2] = a4;
    if ( (a7 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      v22[v21 + 4] = v26;
      if ( a3 )
        v12 = *a3;
      v22[v21 + 5] = v12;
      v22[v21 + 6] = a9;
    }
    else
    {
      v22[v21 + 4] = 0LL;
      v22[v21 + 5] = 0LL;
      v22[v21 + 6] = 0LL;
    }
    LOWORD(v22[v21]) = a6;
    LODWORD(v22[v21 + 3]) = CheckSum;
    LODWORD(v22[v21 + 8]) = a8;
    AlternateResourceModuleCount = v20 + 1;
  }
LABEL_57:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return 1;
}
