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

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  int v4; // edi
  int v5; // r15d
  PVOID *v6; // rsi
  char *v7; // rcx
  PVOID v8; // rcx
  bool v9; // zf
  unsigned int v10; // ecx
  int v11; // eax
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  PVOID v14; // rbx

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_21;
      v5 = v4 - 1;
      v6 = (PVOID *)((char *)AlternateResourceModules + 64 * (__int64)(v4 - 1));
      if ( v6[1] == DllHandle )
        break;
LABEL_5:
      v4 = v5;
    }
    v7 = (char *)v6[4];
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v7);
      v8 = v6[5];
      if ( v8 )
      {
        ZwClose(v8);
        v6[5] = 0LL;
      }
      v6[4] = 0LL;
    }
    if ( v4 != AlternateResourceModuleCount )
      memmove(v6, v6 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v4) << 6);
    v9 = AlternateResourceModuleCount == 1;
    v10 = --AlternateResourceModuleCount;
    if ( v9 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v11 = 0;
    }
    else
    {
      if ( v10 >= AltResMemBlockCount - 32 )
      {
LABEL_20:
        v3 = 1;
        goto LABEL_5;
      }
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6,
                      0x69507472u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v3 = 0;
        goto LABEL_21;
      }
      v14 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(v14, 0);
      AlternateResourceModules = v13;
      v11 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v11;
    goto LABEL_20;
  }
  v3 = 1;
LABEL_21:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v3;
}
