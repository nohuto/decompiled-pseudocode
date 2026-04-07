/*
 * XREFs of ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18003509C
 * Callers:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180035010 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180035188 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180035248 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1800353F0 (-LoadScalingOverrides@@YAXXZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18009F4BC (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800A1C38 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 */

__int64 __fastcall CImmersiveOrPrimaryMonitor::_initimpl(HMONITOR a1, struct SCALINGINFO *const a2)
{
  int Error; // edi
  enum DEVICE_SCALE_FACTOR v4; // ecx
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // eax
  unsigned int v7; // ecx
  enum DEVICE_SCALE_FACTOR LegacyPhoneScaleFactor; // eax
  int v9; // ecx
  _BYTE v10[8]; // [rsp+20h] [rbp-19h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-11h]
  unsigned int v12; // [rsp+2Ch] [rbp-Dh]
  int v13; // [rsp+38h] [rbp-1h]
  int v14; // [rsp+3Ch] [rbp+3h]
  struct tagSIZE v15; // [rsp+40h] [rbp+7h]
  struct tagSIZE v16; // [rsp+48h] [rbp+Fh]

  if ( (unsigned int)GetCurrentDpiInfo(a1, v10) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  LoadScalingOverrides();
  v4 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride )
  {
    *(_DWORD *)a2 = g_legacyCompatScalingOverride;
  }
  else
  {
    *(_DWORD *)a2 = v11;
    v4 = v12;
  }
  *((_DWORD *)a2 + 2) = v4;
  if ( (unsigned int)QuirkIsEnabled(589832LL) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(v11);
    v7 = v12;
    *(_DWORD *)a2 = LegacyModernScaleFactor;
    LegacyPhoneScaleFactor = GetLegacyModernScaleFactor(v7);
  }
  else
  {
    if ( !(unsigned int)QuirkIsEnabled(589831LL) )
    {
      if ( (unsigned int)QuirkIsEnabled(589834LL) )
      {
        v9 = *(_DWORD *)a2;
        switch ( *(_DWORD *)a2 )
        {
          case 0xAF:
            v9 = 150;
            break;
          case 0xE1:
            v9 = 200;
            break;
          case 0x15E:
            v9 = 300;
            break;
        }
        *(_DWORD *)a2 = v9;
      }
      goto LABEL_8;
    }
    LegacyPhoneScaleFactor = GetLegacyPhoneScaleFactor(v15, v16);
    *(_DWORD *)a2 = LegacyPhoneScaleFactor;
  }
  *((_DWORD *)a2 + 2) = LegacyPhoneScaleFactor;
LABEL_8:
  *((_DWORD *)a2 + 4) = (v16.cx + v16.cy) / 2;
  *((_DWORD *)a2 + 8) = v15.cx;
  *((_DWORD *)a2 + 7) = v15.cy;
  *((_DWORD *)a2 + 5) = v13;
  *((_DWORD *)a2 + 6) = v14;
  GetStartTilesScaleFactor((const struct _DPI_INFORMATION *)v10, (unsigned int *)a2 + 3);
  return (unsigned int)Error;
}
