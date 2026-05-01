/*
 * XREFs of ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x1801779F0
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009461C (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 * Callees:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801773BC (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180177418 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x18017747C (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x1801778CC (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 *     ?LoadScalingOverrides@@YAXXZ @ 0x180177B88 (-LoadScalingOverrides@@YAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CImmersiveOrPrimaryMonitor::_initimpl(HMONITOR a1, struct SCALINGINFO *const a2)
{
  signed int v3; // r14d
  signed int LastError; // eax
  enum DEVICE_SCALE_FACTOR v5; // eax
  int LegacyModernScaleFactor; // eax
  unsigned int v7; // ecx
  struct tagSIZE v8; // rbx
  struct tagSIZE v9; // rdi
  enum DEVICE_SCALE_FACTOR v10; // r15d
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  _BYTE v15[8]; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-31h]
  unsigned int v17; // [rsp+2Ch] [rbp-2Dh]
  int v18; // [rsp+38h] [rbp-21h]
  int v19; // [rsp+3Ch] [rbp-1Dh]
  struct tagSIZE v20; // [rsp+40h] [rbp-19h]
  struct tagSIZE v21; // [rsp+48h] [rbp-11h]

  if ( (unsigned int)GetCurrentDpiInfo(a1, v15) )
  {
    v3 = 0;
    LoadScalingOverrides();
    v5 = g_legacyCompatScalingOverride;
    if ( g_legacyCompatScalingOverride )
    {
      *(_DWORD *)a2 = g_legacyCompatScalingOverride;
    }
    else
    {
      *(_DWORD *)a2 = v16;
      v5 = v17;
    }
    *((_DWORD *)a2 + 2) = v5;
    if ( (unsigned int)QuirkIsEnabled(589832LL) )
    {
      LegacyModernScaleFactor = GetLegacyModernScaleFactor(v16);
      v7 = v17;
      *(_DWORD *)a2 = LegacyModernScaleFactor;
      *((_DWORD *)a2 + 2) = GetLegacyModernScaleFactor(v7);
    }
    else if ( (unsigned int)QuirkIsEnabled(589831LL) )
    {
      v8 = v21;
      v9 = v20;
      LoadScalingOverrides();
      v10 = g_legacyCompatScalingOverride;
      if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
        v10 = (unsigned int)CalcBucketedScaleFactor(v9, v8);
      v11 = CalcBucketedScaleFactor(v9, v8);
      ScalingCompatCalculationTelemetry(0, v11, v10);
      *(_DWORD *)a2 = v10;
      *((_DWORD *)a2 + 2) = v10;
    }
    else if ( (unsigned int)QuirkIsEnabled(589834LL) )
    {
      v12 = *(_DWORD *)a2;
      switch ( *(_DWORD *)a2 )
      {
        case 0xAF:
          v12 = 150;
          break;
        case 0xE1:
          v12 = 200;
          break;
        case 0x15E:
          v12 = 300;
          break;
      }
      *(_DWORD *)a2 = v12;
    }
    v13 = v21.cx + v21.cy;
    *((_DWORD *)a2 + 8) = v20.cx;
    *((_DWORD *)a2 + 7) = v20.cy;
    *((_DWORD *)a2 + 5) = v18;
    *((_DWORD *)a2 + 6) = v19;
    *((_DWORD *)a2 + 4) = v13 / 2;
    GetStartTilesScaleFactor((const struct _DPI_INFORMATION *)v15, (unsigned int *)a2 + 3);
  }
  else
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v3;
}
