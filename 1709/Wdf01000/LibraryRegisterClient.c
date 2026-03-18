/*
 * XREFs of LibraryRegisterClient @ 0x1C00159D0
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonRegisterClient @ 0x1C0015A64 (FxLibraryCommonRegisterClient.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C00659F4 (RtlStringCchPrintfW.c)
 *     LibraryLogEvent @ 0x1C007379C (LibraryLogEvent.c)
 */

int __fastcall LibraryRegisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS **WdfDriverGlobals, char **Context)
{
  _CLIENT_INFO *v6; // r8
  int result; // eax
  int v8; // edi
  unsigned int RawDataBuf; // [rsp+20h] [rbp-E8h]
  unsigned int RawDataLen; // [rsp+28h] [rbp-E0h]
  unsigned int Minor; // [rsp+30h] [rbp-D8h]
  unsigned int rawData[4]; // [rsp+40h] [rbp-C8h] BYREF
  wchar_t insertString[72]; // [rsp+50h] [rbp-B8h] BYREF

  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  v6 = (_CLIENT_INFO *)*Context;
  *Context = 0LL;
  if ( Info->Version.Minor > WdfLibraryInfo.Version.Minor )
  {
    Minor = WdfLibraryInfo.Version.Minor;
    RawDataLen = WdfLibraryInfo.Version.Major;
    RawDataBuf = Info->Version.Minor;
    v8 = RtlStringCchPrintfW(
           insertString,
           0x46uLL,
           L"Driver Version: %d.%d Kmdf Lib. Version: %d.%d",
           Info->Version.Major,
           RawDataBuf,
           RawDataLen,
           Minor);
    if ( v8 >= 0 )
    {
      rawData[0] = Info->Version.Major;
      rawData[1] = Info->Version.Minor;
      rawData[2] = WdfLibraryInfo.Version.Major;
      rawData[3] = WdfLibraryInfo.Version.Minor;
      LibraryLogEvent(FxLibraryGlobals.DriverObject, -2147024895, -1073741788, insertString, rawData, 0x10u);
      return -1073741788;
    }
    else
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "ERROR: RtlStringCchPrintfW failed with Status 0x%x\n", v8);
      }
      return v8;
    }
  }
  else
  {
    result = FxLibraryCommonRegisterClient(Info, WdfDriverGlobals, v6);
    if ( result >= 0 )
    {
      *Context = (*WdfDriverGlobals)[-8].DriverName;
      *(_QWORD *)&(*WdfDriverGlobals)[-3].DriverName[16] = Info;
    }
  }
  return result;
}
