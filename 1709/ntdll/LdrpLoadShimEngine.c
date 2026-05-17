/*
 * XREFs of LdrpLoadShimEngine @ 0x18001566C
 * Callers:
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2880 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     LdrpInitializationFailure @ 0x180002208 (LdrpInitializationFailure.c)
 *     LdrpPinModule @ 0x180011838 (LdrpPinModule.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x180015878 (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpInitializeShimDllDependencies @ 0x180015900 (LdrpInitializeShimDllDependencies.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpLoadDll @ 0x1800317B0 (LdrpLoadDll.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180038070 (RtlReleasePath.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpInitializeNode @ 0x180072C90 (LdrpInitializeNode.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

char __fastcall LdrpLoadShimEngine(PCWSTR SourceString)
{
  char v2; // si
  void (__fastcall *v3)(_QWORD); // r14
  __int64 v4; // rdi
  __int64 *v5; // rbx
  int Dll; // ecx
  __int64 v8; // rcx
  int v9; // ebx
  char v10; // al
  char v11; // al
  __int64 i; // rax
  __int64 v13; // [rsp+30h] [rbp-89h]
  __int64 v14; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v16[15]; // [rsp+60h] [rbp-59h] BYREF
  char v17; // [rsp+DCh] [rbp+23h]

  v2 = 1;
  LdrpInitializeDllPath(0LL, 16385LL, v16);
  g_ShimsLoading = 1;
  v3 = (void (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                            g_pfnSE_ShimDllLoaded,
                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    Dll = LdrpLoadDll((unsigned int)&DestinationString, (unsigned int)v16, 0, 0, (__int64)&v14);
    if ( Dll < 0 )
    {
      v10 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v13) = Dll;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2185,
          (unsigned int)"LdrpLoadShimEngine",
          0,
          "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v13);
        v10 = LdrpDebugFlags;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(v14 + 104) |= 0x100u;
      LdrpPinModule(v14);
      v8 = v14;
      if ( *(_DWORD *)(*(_QWORD *)(v14 + 152) + 56LL) == 7 )
      {
        v9 = LdrpInitializeNode(*(_QWORD *)(v14 + 152));
        if ( v9 < 0 )
        {
          v11 = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LODWORD(v13) = v9;
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              2211,
              (unsigned int)"LdrpLoadShimEngine",
              0,
              "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
              &DestinationString,
              v13);
            v11 = LdrpDebugFlags;
          }
          if ( (v11 & 0x10) != 0 )
            __debugbreak();
          v2 = 0;
          LdrpInitializationFailure(v9);
          ZwTerminateProcess(-1LL, (unsigned int)v9);
          break;
        }
        v8 = v14;
      }
      v3(*(_QWORD *)(v8 + 48));
      LdrpDereferenceModule(v14);
    }
    SourceString += (unsigned __int64)DestinationString.MaximumLength >> 1;
  }
  if ( v17 )
    RtlReleasePath(v16[0]);
  ((void (*)(void))(__ROR8__(g_pfnSE_InstallBeforeInit, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
  v4 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = qword_18015F3B0; (__int64 *)i != &qword_18015F3B0; i = *(_QWORD *)i )
    {
      v14 = i;
      *(_BYTE *)(i + 105) &= ~8u;
    }
  }
  v5 = (__int64 *)qword_18015F3B0;
  if ( LdrInitState >= 2 )
    goto LABEL_10;
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
LABEL_10:
    if ( v5 == &qword_18015F3B0 )
      break;
    v14 = (__int64)v5;
    LdrpSendShimEngineInitialNotifications(v5[19], v4);
  }
  g_ShimsLoading = 0;
  g_ShimsEnabled = 1;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v2;
}
