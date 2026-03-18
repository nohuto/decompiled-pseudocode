/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140149348
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x140013514 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14014933C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x1400136C0 (LdrpInitMuiCrits.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  unsigned int v5; // edx
  int i; // edi
  int v7; // r15d
  _QWORD *v8; // rsi
  void *v9; // rcx
  void *v10; // rcx
  bool v11; // zf
  __int64 v12; // rax
  PVOID PoolWithTag; // rdi
  PVOID v14; // rbx

  v4 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits(a1, a2, a3);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    for ( i = AlternateResourceModuleCount; ; i = v7 )
    {
      if ( i <= 0 )
        goto LABEL_23;
      v7 = i - 1;
      v8 = (char *)AlternateResourceModules + 72 * i - 72;
      if ( v8[1] == a1 )
        break;
LABEL_6:
      ;
    }
    v9 = (void *)v8[4];
    if ( v9 && v9 != (void *)-1LL )
    {
      MmUnmapViewInSystemSpace(v9);
      v10 = (void *)v8[5];
      if ( v10 )
      {
        ZwClose(v10);
        v8[5] = 0LL;
      }
      v8[4] = 0LL;
      v5 = AlternateResourceModuleCount;
    }
    if ( i != v5 )
    {
      memmove(v8, v8 + 9, 72LL * (v5 - i));
      v5 = AlternateResourceModuleCount;
    }
    v11 = v5-- == 1;
    AlternateResourceModuleCount = v5;
    if ( v11 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v12 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v5 >= (unsigned int)v12 )
      {
LABEL_22:
        v4 = 1;
        goto LABEL_6;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v12, 0x69507472u);
      if ( !PoolWithTag )
      {
        v4 = 0;
        goto LABEL_23;
      }
      v14 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
      ExFreePoolWithTag(v14, 0);
      AlternateResourceModules = PoolWithTag;
      AltResMemBlockCount -= 32;
    }
    v5 = AlternateResourceModuleCount;
    goto LABEL_22;
  }
  v4 = 1;
LABEL_23:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v4;
}
