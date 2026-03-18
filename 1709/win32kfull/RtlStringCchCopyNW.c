/*
 * XREFs of RtlStringCchCopyNW @ 0x1C00DBB38
 * Callers:
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C0058958 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     NtUserCreateWindowStation @ 0x1C00DAB20 (NtUserCreateWindowStation.c)
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C00DB7F4 (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     _SetWatermarkStrings @ 0x1C0121B70 (_SetWatermarkStrings.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A9B7C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01F8440 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
  }
  else if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
  }
  else
  {
    v4 = 0;
    if ( !cchDest )
      goto LABEL_14;
    v5 = cchToCopy - cchDest;
    v6 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v5 + cchDest) )
        break;
      v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_14:
      --pszDest;
      v4 = -2147483643;
    }
  }
  *pszDest = 0;
  return v4;
}
