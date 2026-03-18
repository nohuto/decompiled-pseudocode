/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C0015A64
 * Callers:
 *     LibraryRegisterClient @ 0x1C00159D0 (LibraryRegisterClient.c)
 * Callees:
 *     GetNameFromPath @ 0x1C0015670 (GetNameFromPath.c)
 *     GetEnhancedVerifierOptions @ 0x1C00166D4 (GetEnhancedVerifierOptions.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0016D74 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     FxAllocateDriverGlobals @ 0x1C0016DA0 (FxAllocateDriverGlobals.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C00733A0 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     McGenEventRegister @ 0x1C00739B8 (McGenEventRegister.c)
 *     LockVerifierSection @ 0x1C0080D88 (LockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // ebp
  unsigned int FuncCount; // eax
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *DriverName; // rbp
  unsigned int *v10; // rbx
  __int64 v11; // rax
  void (__fastcall *p_Functions)(); // rcx
  _WDFFUNCTIONS *v14; // rdx
  unsigned int v15; // r8d
  unsigned __int8 v16; // r9
  void (__fastcall *v17)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v18; // rcx
  const char *v19; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&serviceName.Length = 0LL;
  serviceName.Buffer = 0LL;
  v6 = -1073741811;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v19 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v19 = "unknown";
      }
      else
      {
        v19 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v19 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v19);
    goto LABEL_53;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > WdfVersion.FuncCount )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      Info->FuncCount,
      WdfVersion.FuncCount);
    goto LABEL_53;
  }
  if ( FuncCount > 0x1C0 )
  {
    if ( FuncCount != 451 )
    {
      *(_QWORD *)&serviceName.Length = 0LL;
      serviceName.Buffer = 0LL;
      if ( IsClientInfoValid(ClientInfo) )
        GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
      else
        RtlInitUnicodeString(&serviceName, L"Unknown");
      ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v15, v16);
      goto LABEL_53;
    }
  }
  else if ( FuncCount != 383
         && (FuncCount <= 0x181
          || FuncCount != 444
          && FuncCount > 0x183
          && FuncCount != 432
          && FuncCount != 396
          && FuncCount != 438
          && FuncCount != 446
          && FuncCount != 448) )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
      Info->FuncCount);
    goto LABEL_53;
  }
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( DriverGlobals )
  {
    DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
    v10 = (unsigned int *)&DriverGlobals[-1].DriverName[12];
    GetEnhancedVerifierOptions(ClientInfo, v10);
    if ( (unsigned __int16)*v10 || (*v10 & 0xF00000) != 0 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
      }
      LockVerifierSection(DriverName, ClientInfo->RegistryPath);
      if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
        McGenEventRegister(v18, v17, &KMDF_PERF_PROVIDER_Context, &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
      v11 = Info->FuncCount;
      if ( (unsigned int)v11 > 0x1B6 )
      {
        p_Functions = (void (__fastcall *)())&VfWdfVersion.Functions;
        goto LABEL_16;
      }
      v14 = &VfWdfVersion.Functions;
    }
    else
    {
      v11 = Info->FuncCount;
      if ( (unsigned int)v11 > 0x1B6 )
      {
        p_Functions = (void (__fastcall *)())&WdfVersion.Functions;
LABEL_16:
        *Info->FuncTable = p_Functions;
LABEL_17:
        v6 = 0;
        if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
          return v6;
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
        goto LABEL_53;
      }
      v14 = &WdfVersion.Functions;
    }
    memmove(Info->FuncTable, v14, 8 * v11);
    goto LABEL_17;
  }
LABEL_53:
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
