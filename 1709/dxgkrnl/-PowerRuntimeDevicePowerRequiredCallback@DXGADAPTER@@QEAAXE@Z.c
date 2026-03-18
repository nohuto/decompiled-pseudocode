/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001F280
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C00238D0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0023930 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx

  if ( *((_BYTE *)this + 180) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 294));
  }
  else
  {
    v2 = *((_QWORD *)this + 24);
    v3 = a2 == 0;
    v4 = 4LL;
    if ( !v3 )
      v4 = 1LL;
    DpiRequestDevicePowerState(v2, v4);
  }
}
