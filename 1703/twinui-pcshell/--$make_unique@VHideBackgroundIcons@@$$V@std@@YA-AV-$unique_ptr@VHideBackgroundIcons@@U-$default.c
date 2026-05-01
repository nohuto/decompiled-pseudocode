/*
 * XREFs of ??$make_unique@VHideBackgroundIcons@@$$V@std@@YA?AV?$unique_ptr@VHideBackgroundIcons@@U?$default_delete@VHideBackgroundIcons@@@std@@@0@XZ @ 0x1801692C0
 * Callers:
 *     ??0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180168E30 (--0DesktopBackgroundFactory@@QEAA@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

_QWORD *__fastcall std::make_unique<HideBackgroundIcons,>(_QWORD *a1)
{
  _BYTE *v2; // rbx
  LSTATUS ValueW; // ecx
  signed int v4; // eax
  HWND ShellWindow; // rax
  DWORD pcbData; // [rsp+40h] [rbp-368h] BYREF
  _BYTE *pvData; // [rsp+48h] [rbp-360h] BYREF
  int v9; // [rsp+50h] [rbp-358h]
  _OSVERSIONINFOW VersionInformation; // [rsp+60h] [rbp-348h] BYREF
  char v11; // [rsp+17Ah] [rbp-22Eh]
  _WORD pvParam[264]; // [rsp+180h] [rbp-228h] BYREF

  v9 = 0;
  pvData = operator new(2uLL);
  v2 = pvData;
  *pvData = 0;
  memset(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  VersionInformation.dwOSVersionInfoSize = 284;
  v2[1] = pvParam[0] == 0;
  if ( !GetVersionExW(&VersionInformation) || (unsigned __int8)(v11 - 2) > 1u )
    goto LABEL_13;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Server",
             L"ClientExperienceEnabled",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v4 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v4 = ValueW;
  if ( v4 >= 0 && (_DWORD)pvData )
  {
LABEL_13:
    if ( !v2[1] )
    {
      ShellWindow = GetShellWindow();
      if ( PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 1LL) )
        *v2 = 1;
    }
  }
  *a1 = v2;
  return a1;
}
