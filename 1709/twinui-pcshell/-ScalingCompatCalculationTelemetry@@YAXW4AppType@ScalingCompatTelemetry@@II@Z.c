/*
 * XREFs of ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801C35C0
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800990F8 (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1801C361C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 * Callees:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1801C374C (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x1801C3960 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 */

void __fastcall ScalingCompatCalculationTelemetry(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rcx

  if ( !byte_1802BAC60 )
  {
    v6 = (_DWORD *)*((_QWORD *)ScalingCompatTelemetry::CScalingCompatTelemetry::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        ScalingCompatTelemetry::CScalingCompatTelemetry::Instance();
        ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v7, a1, a2, a3);
      }
    }
    byte_1802BAC60 = 1;
  }
}
