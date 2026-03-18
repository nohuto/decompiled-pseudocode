/*
 * XREFs of ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68
 * Callers:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18006C4C0 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18006CA20 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18006CB70 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180137EC0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1CDisplayRegKey@@QEAA@XZ @ 0x18018854C (--1CDisplayRegKey@@QEAA@XZ.c)
 *     ?ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z @ 0x180188570 (-ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z.c)
 */

void CDwmCoreWinSqm::RecordDisplayDriverName(void)
{
  DWORD i; // ebx
  int v1; // eax
  int v2; // eax
  const unsigned __int16 *v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned __int16 *v6; // rax
  bool v7[8]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v11[264]; // [rsp+3A8h] [rbp+2A0h] BYREF
  unsigned __int16 v12[19]; // [rsp+5B8h] [rbp+4B0h] BYREF
  WCHAR SubKey[245]; // [rsp+5DEh] [rbp+4D6h] BYREF
  size_t v14[66]; // [rsp+7C8h] [rbp+6C0h] BYREF

  memset_0(DisplayDevice.DeviceName, 0, 0x344uLL);
  DisplayDevice.cb = 840;
  for ( i = 0; EnumDisplayDevicesW(0LL, i, &DisplayDevice, 2u); ++i )
  {
    if ( (DisplayDevice.StateFlags & 1) == 0 )
      goto LABEL_15;
    if ( (DisplayDevice.StateFlags & 8) == 0 )
    {
      v1 = StringCchCopyW(v11, 0x104uLL, (size_t *)DisplayDevice.DeviceString);
      if ( ((v1 + 0x80000000) & 0x80000000) == 0 && v1 != -2147024774 )
        goto LABEL_15;
      v2 = StringCchCopyW(v12, 0x104uLL, (size_t *)DisplayDevice.DeviceKey);
      if ( ((v2 + 0x80000000) & 0x80000000) == 0 && v2 != -2147024774 )
        goto LABEL_12;
      v7[0] = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, &phkResult) == 0;
      if ( !CDisplayRegKey::ReadString((CDisplayRegKey *)v7, v3, v4, (unsigned __int16 *)v14)
        || StringCchCatW(v11, v5, v14) >= 0 )
      {
        CDisplayRegKey::~CDisplayRegKey((CDisplayRegKey *)v7);
LABEL_12:
        v6 = v11;
        LODWORD(v9[0]) = 2;
        if ( !v11[0] )
          v6 = L"(null)";
        v9[1] = v6;
        WinSqmAddToStream(0LL, 3335LL, 1LL, v9);
LABEL_15:
        DisplayDevice.cb = 840;
        continue;
      }
      CDisplayRegKey::~CDisplayRegKey((CDisplayRegKey *)v7);
    }
  }
}
