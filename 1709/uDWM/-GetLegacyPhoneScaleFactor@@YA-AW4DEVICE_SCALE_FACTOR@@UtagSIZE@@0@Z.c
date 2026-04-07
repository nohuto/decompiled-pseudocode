/*
 * XREFs of ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800A1C38
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18003509C (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1800353F0 (-LoadScalingOverrides@@YAXXZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800449C8 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x1800A1B64 (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 */

__int64 __fastcall GetLegacyPhoneScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  enum DEVICE_SCALE_FACTOR v4; // esi
  unsigned int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  enum DEVICE_SCALE_FACTOR v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  LoadScalingOverrides();
  v4 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
    v4 = (unsigned int)CalcBucketedScaleFactor(a1, a2);
  v7 = v4;
  v6[0] = 0;
  v8 = CalcBucketedScaleFactor(a1, a2);
  if ( !byte_1800C16EC )
  {
    ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
      v6,
      &v8,
      (unsigned int *)&v7);
    byte_1800C16EC = 1;
  }
  return (unsigned int)v4;
}
