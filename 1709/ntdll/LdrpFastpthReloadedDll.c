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

__int64 __fastcall LdrpFastpthReloadedDll(_UNICODE_STRING *a1, __int16 a2, __int64 a3, __int64 *a4)
{
  int LoadedDllByName; // ebx
  _UNICODE_STRING *v7; // rdx
  __int16 v9; // si
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v10) = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = 0LL;
LABEL_3:
    LoadedDllByName = LdrpFindLoadedDllByName(a1, v7, (__int64)&v10);
    goto LABEL_4;
  }
  if ( (a2 & 0x200) != 0 )
  {
    v7 = a1;
    a1 = 0LL;
    goto LABEL_3;
  }
LABEL_4:
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( (_DWORD)v10 == 9 )
    {
      LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
      if ( LoadedDllByName >= 0 )
      {
        LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
        if ( LoadedDllByName < 0 )
        {
          v9 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v9 )
            LdrpDrainWorkQueue(0LL);
          LdrpDecrementModuleLoadCountEx(*a4, 0);
          if ( !v9 )
            LdrpDropLastInProgressCount();
        }
      }
    }
    if ( LoadedDllByName < 0 )
    {
      LdrpDereferenceModule((char *)*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
