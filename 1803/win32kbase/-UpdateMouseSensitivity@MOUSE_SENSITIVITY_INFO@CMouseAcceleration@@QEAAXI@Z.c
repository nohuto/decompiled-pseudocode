/*
 * XREFs of ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C013389C
 * Callers:
 *     UpdateMouseSensitivity @ 0x1C012EDC0 (UpdateMouseSensitivity.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C01336B8 (--0CMouseAcceleration@@IEAA@I@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  *(_DWORD *)this = v2;
  if ( v2 > 2 )
  {
    v5 = v2 - 3;
    v6 = v2 << 8;
    if ( v5 > 7 )
      v4 = (v6 - 1536) >> 2;
    else
      v4 = (v6 - 512) >> 3;
  }
  else
  {
    v4 = (8 * v2) & 0x7FFFFFF;
  }
  *((_DWORD *)this + 1) = v4;
}
