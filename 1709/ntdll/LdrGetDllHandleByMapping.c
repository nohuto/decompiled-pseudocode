/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18007A390
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002E76C (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByMapping @ 0x18007A43C (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800D6B48 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int LoadedDllByMapping; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  LoadedDllByMapping = RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(a1, v7, &v9, &v8);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = v9;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount(v9);
        if ( LoadedDllByMapping >= 0 )
          *a2 = *(_QWORD *)(v5 + 48);
      }
      else
      {
        LoadedDllByMapping = -1073741515;
        v5 = v9;
      }
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByMapping;
}
