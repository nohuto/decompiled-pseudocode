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

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v13[15]; // [rsp+40h] [rbp-B8h] BYREF
  char v14; // [rsp+BCh] [rbp-3Ch]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      145,
      (unsigned int)"LdrLoadDll",
      3,
      "DLL name: %wZ\n",
      a3);
  if ( (LdrpPolicyBits & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( !a2 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v9 = *a2;
  if ( (v9 & 4) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
LABEL_15:
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v10 = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(*(_QWORD *)(a3 + 8), a1, v13);
      v10 = LdrpLoadDll(a3, (int)v13, v9, 1, &v12);
      if ( v14 )
        RtlReleasePath(v13[0]);
      if ( v10 >= 0 )
      {
        v11 = v12;
        *a4 = *(_QWORD *)(v12 + 48);
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
  return (unsigned int)v10;
}
