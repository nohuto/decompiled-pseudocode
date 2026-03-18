/*
 * XREFs of ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0058D64
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXPEAUtagMONITOR@@@Z @ 0x1C0055640 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXPEAUtagMONITOR@@@Z.c)
 *     GetMouseSensitivity @ 0x1C012E400 (GetMouseSensitivity.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C012E4A8 (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)this;
  if ( (unsigned int)(v1 - 1) > 0x13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v1);
    LODWORD(v1) = *(_DWORD *)this;
  }
  return (unsigned int)v1;
}
