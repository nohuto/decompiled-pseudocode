/*
 * XREFs of LdrGetDllHandleByName @ 0x18007D190
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18002E330 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002E76C (LdrpIncrementModuleLoadCount.c)
 *     LdrpFatalExceptionFilter @ 0x1800D6B48 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v7, &v8);
  if ( LoadedDllByName >= 0 )
  {
    if ( v8 < 7 )
    {
      LoadedDllByName = -1073741515;
      v5 = v7;
    }
    else
    {
      v5 = v7;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v7);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v5 + 48);
    }
    LdrpDereferenceModule(v5);
  }
  return (unsigned int)LoadedDllByName;
}
