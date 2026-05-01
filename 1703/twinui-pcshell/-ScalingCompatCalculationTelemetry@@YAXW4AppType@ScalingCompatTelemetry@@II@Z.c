/*
 * XREFs of ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801773BC
 * Callers:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180177418 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x1801779F0 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180177548 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180177760 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 */

void __fastcall ScalingCompatCalculationTelemetry(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rcx

  if ( !byte_180244EA8 )
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
    byte_180244EA8 = 1;
  }
}
