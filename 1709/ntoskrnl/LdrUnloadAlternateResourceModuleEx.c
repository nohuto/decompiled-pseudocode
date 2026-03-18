/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x14013044C
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400DBFB0 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x140130438 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1400DC158 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // r15d
  _QWORD *v5; // rsi
  void *v6; // rcx
  void *v7; // rcx
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // rcx
  PVOID PoolWithTag; // rdi
  PVOID v12; // rbx

  v2 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( v3 > 0 )
    {
      v4 = v3 - 1;
      v5 = (char *)AlternateResourceModules + 72 * v3 - 72;
      if ( v5[1] == a1 )
      {
        v6 = (void *)v5[4];
        if ( v6 && v6 != (void *)-1LL )
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
          memmove(v5, v5 + 9, 72LL * (unsigned int)(AlternateResourceModuleCount - v3));
        v8 = AlternateResourceModuleCount == 1;
        v9 = --AlternateResourceModuleCount;
        if ( v8 )
        {
          ExFreePoolWithTag(AlternateResourceModules, 0);
          AlternateResourceModules = 0LL;
          AltResMemBlockCount = 0;
        }
        else
        {
          v10 = (unsigned int)(AltResMemBlockCount - 32);
          if ( v9 < (unsigned int)v10 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v10, 0x69507472u);
            if ( !PoolWithTag )
            {
              v2 = 0;
              break;
            }
            v12 = AlternateResourceModules;
            memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
            ExFreePoolWithTag(v12, 0);
            AlternateResourceModules = PoolWithTag;
            AltResMemBlockCount -= 32;
          }
        }
        v2 = 1;
      }
      v3 = v4;
    }
  }
  else
  {
    v2 = 1;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v2;
}
