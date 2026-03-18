/*
 * XREFs of RtlStringCchCopyW @ 0x1C003767C
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C0015BE0 (NtUserShutdownBlockReasonCreate.c)
 *     _UnregisterClass @ 0x1C0035C58 (_UnregisterClass.c)
 *     _GetClassInfoEx @ 0x1C0039584 (_GetClassInfoEx.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CADD0 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     _RegisterUserApiHook @ 0x1C00E3CBC (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00E3EE4 (_RegisterDManipHook.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C010C780 (NtUserGetDManipHookInitFunction.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0110730 (NtUserShutdownBlockReasonQuery.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C01123B4 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0114D24 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0115020 (LoadWallpaperFilenameFromRegistry.c)
 *     xxxSendShutdownData @ 0x1C013AE48 (xxxSendShutdownData.c)
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01A5438 (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 *     UserGetHipDeviceInfo @ 0x1C01A7A70 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01A7E94 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B4B50 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01C3038 (_GetWOWClass.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020DAF0 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( !cchDest )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_12;
    v4 = 2147483646 - cchDest;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_12:
      --pszDest;
      v3 = -2147483643;
    }
  }
  *pszDest = 0;
  return v3;
}
