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

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  NTSTATUS LoadedDllByMapping; // ebx
  char *v5; // rdi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h]
  PVOID BaseAddressa; // [rsp+58h] [rbp+20h]

  LoadedDllByMapping = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &OutHeaders);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = (char *)BaseAddressa;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount((__int64)BaseAddressa);
        if ( LoadedDllByMapping >= 0 )
          *DllHandle = (PVOID)*((_QWORD *)BaseAddressa + 6);
      }
      else
      {
        LoadedDllByMapping = -1073741515;
        v5 = (char *)BaseAddressa;
      }
      LdrpDereferenceModule(v5);
    }
  }
  return LoadedDllByMapping;
}
