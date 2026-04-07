/*
 * XREFs of ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180013F00
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x180013D54 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180013E40 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1800140A8 (-LoadScalingOverrides@@YAXXZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180049DE4 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 */

__int64 __fastcall GetLegacyModernScaleFactor(unsigned int a1)
{
  enum DEVICE_SCALE_FACTOR v2; // ebx
  unsigned int v3; // edx
  __int64 v4; // rax
  enum DEVICE_SCALE_FACTOR v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  LoadScalingOverrides();
  v2 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    v3 = 0;
    v4 = 0LL;
    v2 = SCALE_100_PERCENT;
    do
    {
      if ( a1 >= *(_DWORD *)((char *)&ModernScaleFactorCutoffs + v4) )
        v2 = *(_DWORD *)((char *)&unk_1800AC984 + v4);
      ++v3;
      v4 += 4LL;
    }
    while ( v3 < 2 );
  }
  v6 = v2;
  v7 = a1;
  v8 = 1;
  if ( !byte_1800C0E9C )
  {
    ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
      &v8,
      &v7,
      &v6);
    byte_1800C0E9C = 1;
  }
  return (unsigned int)v2;
}
