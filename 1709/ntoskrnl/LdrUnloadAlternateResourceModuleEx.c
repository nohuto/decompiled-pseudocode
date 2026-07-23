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

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  int v4; // edi
  int v5; // r15d
  char *v6; // rsi
  void *v7; // rcx
  void *v8; // rcx
  bool v9; // zf
  unsigned int v10; // eax
  __int64 v11; // rcx
  PVOID PoolWithTag; // rdi
  PVOID v13; // rbx

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( v4 > 0 )
    {
      v5 = v4 - 1;
      v6 = (char *)AlternateResourceModules + 72 * v4 - 72;
      if ( *((PVOID *)v6 + 1) == DllHandle )
      {
        v7 = (void *)*((_QWORD *)v6 + 4);
        if ( v7 && v7 != (void *)-1LL )
        {
          MmUnmapViewInSystemSpace(v7);
          v8 = (void *)*((_QWORD *)v6 + 5);
          if ( v8 )
          {
            ZwClose(v8);
            *((_QWORD *)v6 + 5) = 0LL;
          }
          *((_QWORD *)v6 + 4) = 0LL;
        }
        if ( v4 != AlternateResourceModuleCount )
          memmove(v6, v6 + 72, 72LL * (unsigned int)(AlternateResourceModuleCount - v4));
        v9 = AlternateResourceModuleCount == 1;
        v10 = --AlternateResourceModuleCount;
        if ( v9 )
        {
          ExFreePoolWithTag(AlternateResourceModules, 0);
          AlternateResourceModules = 0LL;
          AltResMemBlockCount = 0;
        }
        else
        {
          v11 = (unsigned int)(AltResMemBlockCount - 32);
          if ( v10 < (unsigned int)v11 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v11, 0x69507472u);
            if ( !PoolWithTag )
            {
              v3 = 0;
              break;
            }
            v13 = AlternateResourceModules;
            memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
            ExFreePoolWithTag(v13, 0);
            AlternateResourceModules = PoolWithTag;
            AltResMemBlockCount -= 32;
          }
        }
        v3 = 1;
      }
      v4 = v5;
    }
  }
  else
  {
    v3 = 1;
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return v3;
}
