/*
 * XREFs of LdrGetDllHandleEx @ 0x180035770
 * Callers:
 *     CsrClientConnectToServer @ 0x1800067D0 (CsrClientConnectToServer.c)
 *     LdrGetDllHandle @ 0x1800358F0 (LdrGetDllHandle.c)
 *     SbpResolveBasedOnName @ 0x18010B774 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpPinModule @ 0x180011838 (LdrpPinModule.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002E76C (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDll @ 0x180035548 (LdrpFindLoadedDll.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS LoadedDll; // ebx
  PVOID v10; // rdi
  NTSTATUS Count; // eax
  PVOID BaseAddress; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v14; // [rsp+BCh] [rbp-2Ch]

  BaseAddress = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      855,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      "DLL name: %wZ\n",
      DllName);
  LdrpInitializeDllPath(DllName->Buffer, DllPath, Path);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 || !DllHandle && (Flags & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_6;
  }
  LoadedDll = LdrpFindLoadedDll(&DllName->Length, (__int64)Path, (char **)&BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v10 = BaseAddress;
    if ( (Flags & 2) != 0 )
    {
      Count = LdrpPinModule((__int64)BaseAddress);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_15;
      Count = LdrpIncrementModuleLoadCount((__int64)BaseAddress);
    }
    LoadedDll = Count;
LABEL_15:
    if ( LoadedDll >= 0 && DllHandle )
      *DllHandle = (PVOID)*((_QWORD *)v10 + 6);
    LdrpDereferenceModule((char *)v10);
  }
LABEL_6:
  if ( v14 )
    RtlReleasePath(Path[0]);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      905,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      "Status: 0x%08lx\n",
      LoadedDll);
  return LoadedDll;
}
