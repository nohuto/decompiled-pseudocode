/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x14016399C
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x14013DE98 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x140163988 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x14013E790 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // r15d
  _QWORD *v5; // rsi
  char *v6; // rcx
  void *v7; // rcx
  bool v8; // zf
  unsigned int v9; // ecx
  int v10; // eax
  PVOID PoolWithTag; // rax
  void *v12; // rdi
  PVOID v13; // rbx

  v2 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v3 <= 0 )
        goto LABEL_21;
      v4 = v3 - 1;
      v5 = (char *)AlternateResourceModules + 64 * (__int64)(v3 - 1);
      if ( v5[1] == a1 )
        break;
LABEL_5:
      v3 = v4;
    }
    v6 = (char *)v5[4];
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v6);
      v7 = (void *)v5[5];
      if ( v7 )
      {
        ZwClose(v7);
        v5[5] = 0LL;
      }
      v5[4] = 0LL;
    }
    if ( v3 != AlternateResourceModuleCount )
      memmove(v5, v5 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v3) << 6);
    v8 = AlternateResourceModuleCount == 1;
    v9 = --AlternateResourceModuleCount;
    if ( v8 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v10 = 0;
    }
    else
    {
      if ( v9 >= AltResMemBlockCount - 32 )
      {
LABEL_20:
        v2 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v2 = 0;
        goto LABEL_21;
      }
      v13 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(v13, 0);
      AlternateResourceModules = v12;
      v10 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v10;
    goto LABEL_20;
  }
  v2 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v2;
}
