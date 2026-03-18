/*
 * XREFs of RtlStringCchCopyW @ 0x1C009DD08
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     _FindWindowEx @ 0x1C006E920 (_FindWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     _GetClassInfoEx @ 0x1C009DAA0 (_GetClassInfoEx.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CF15C (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     _RegisterUserApiHook @ 0x1C010B46C (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C010B6C4 (_RegisterDManipHook.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0113800 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C0116F50 (NtUserGetDManipHookInitFunction.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C011A810 (NtUserShutdownBlockReasonQuery.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C011BD08 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C011EB54 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C011EE70 (LoadWallpaperFilenameFromRegistry.c)
 *     xxxSendShutdownData @ 0x1C0141AF4 (xxxSendShutdownData.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B7D88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01C5D54 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01CA6A0 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01CAA18 (_SetDisplayMapping.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020F268 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
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
