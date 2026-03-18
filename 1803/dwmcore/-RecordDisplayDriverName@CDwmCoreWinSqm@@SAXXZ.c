/*
 * XREFs of ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801C8460
 * Callers:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005FF50 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800609D0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800CF680 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ??1CDisplayRegKey@@QEAA@XZ @ 0x1801C8F98 (--1CDisplayRegKey@@QEAA@XZ.c)
 *     ?ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z @ 0x1801C8FBC (-ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z.c)
 */

void CDwmCoreWinSqm::RecordDisplayDriverName(void)
{
  DWORD i; // ebx
  int v1; // eax
  int v2; // eax
  const unsigned __int16 *v3; // rdx
  unsigned int v4; // r8d
  unsigned __int16 *v5; // rax
  bool v6[8]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v10[264]; // [rsp+3A8h] [rbp+2A0h] BYREF
  unsigned __int16 v11[19]; // [rsp+5B8h] [rbp+4B0h] BYREF
  WCHAR SubKey[245]; // [rsp+5DEh] [rbp+4D6h] BYREF
  size_t v13[66]; // [rsp+7C8h] [rbp+6C0h] BYREF

  memset_0(&DisplayDevice, 0, sizeof(DisplayDevice));
  DisplayDevice.cb = 840;
  for ( i = 0; EnumDisplayDevicesW(0LL, i, &DisplayDevice, 2u); ++i )
  {
    if ( (DisplayDevice.StateFlags & 1) == 0 )
      goto LABEL_15;
    if ( (DisplayDevice.StateFlags & 8) == 0 )
    {
      v1 = StringCchCopyW(v10, 0x104uLL, (size_t *)DisplayDevice.DeviceString);
      if ( ((v1 + 0x80000000) & 0x80000000) == 0 && v1 != -2147024774 )
        goto LABEL_15;
      v2 = StringCchCopyW(v11, 0x104uLL, (size_t *)DisplayDevice.DeviceKey);
      if ( ((v2 + 0x80000000) & 0x80000000) == 0 && v2 != -2147024774 )
        goto LABEL_12;
      v6[0] = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, &phkResult) == 0;
      if ( !CDisplayRegKey::ReadString((CDisplayRegKey *)v6, v3, v4, (unsigned __int16 *)v13)
        || (int)StringCchCatW(v10, 260LL, v13) >= 0 )
      {
        CDisplayRegKey::~CDisplayRegKey((CDisplayRegKey *)v6);
LABEL_12:
        v5 = v10;
        LODWORD(v8[0]) = 2;
        if ( !v10[0] )
          v5 = L"(null)";
        v8[1] = v5;
        WinSqmAddToStream(0LL, 3335LL, 1LL, v8);
LABEL_15:
        DisplayDevice.cb = 840;
        continue;
      }
      CDisplayRegKey::~CDisplayRegKey((CDisplayRegKey *)v6);
    }
  }
}
