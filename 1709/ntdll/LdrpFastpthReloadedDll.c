/*
 * XREFs of LdrpFastpthReloadedDll @ 0x18002E270
 * Callers:
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDecrementModuleLoadCountEx @ 0x180010E84 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18002E330 (LdrpFindLoadedDllByName.c)
 *     LdrpBuildForwarderLink @ 0x18002E6E0 (LdrpBuildForwarderLink.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002E76C (LdrpIncrementModuleLoadCount.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(int a1, int a2, __int64 a3, __int64 *a4)
{
  int LoadedDllByName; // ebx
  int v7; // r8d
  int v8; // edx
  __int16 v10; // si
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a2;
    v8 = 0;
LABEL_3:
    LoadedDllByName = LdrpFindLoadedDllByName(a1, v8, v7, (_DWORD)a4, (__int64)&v11);
    goto LABEL_4;
  }
  if ( (a2 & 0x200) != 0 )
  {
    v7 = a2;
    v8 = a1;
    a1 = 0;
    goto LABEL_3;
  }
LABEL_4:
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( v11 == 9 )
    {
      LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
      if ( LoadedDllByName >= 0 )
      {
        LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
        if ( LoadedDllByName < 0 )
        {
          v10 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v10 )
            LdrpDrainWorkQueue(0LL);
          LdrpDecrementModuleLoadCountEx(*a4, 0);
          if ( !v10 )
            LdrpDropLastInProgressCount();
        }
      }
    }
    if ( LoadedDllByName < 0 )
    {
      LdrpDereferenceModule(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
