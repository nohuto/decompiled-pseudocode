/*
 * XREFs of LdrLoadDll @ 0x180035920
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     LdrpLoadWow64 @ 0x1800846F4 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D7C70 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x18010B774 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpLoadDll @ 0x1800317B0 (LdrpLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  ULONG v9; // ebx
  NTSTATUS v10; // ebx
  char *v11; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-C8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-B8h] BYREF
  char v14; // [rsp+BCh] [rbp-3Ch]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      145,
      (unsigned int)"LdrLoadDll",
      3,
      "DLL name: %wZ\n",
      DllName);
  if ( (LdrpPolicyBits & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( !DllCharacteristics )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v9 = *DllCharacteristics;
  if ( (v9 & 4) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
LABEL_15:
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v10 = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
      v10 = LdrpLoadDll((__int64)DllName, (int)Path, v9, 1, &BaseAddress);
      if ( v14 )
        RtlReleasePath(Path[0]);
      if ( v10 >= 0 )
      {
        v11 = (char *)BaseAddress;
        *DllHandle = (PVOID)*((_QWORD *)BaseAddress + 6);
        LdrpDereferenceModule(v11);
      }
    }
    goto LABEL_21;
  }
  if ( (LdrpDebugFlags & 3) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      169,
      (unsigned int)"LdrLoadDll",
      0,
      "Nonpackaged process attempted to load a packaged DLL.\n");
  if ( (LdrpDebugFlags & 0x10) != 0 )
    __debugbreak();
  v10 = -1073741398;
LABEL_21:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      206,
      (unsigned int)"LdrLoadDll",
      4,
      "Status: 0x%08lx\n",
      v10);
  return v10;
}
