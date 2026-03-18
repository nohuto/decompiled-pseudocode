/*
 * XREFs of ??1CBaseInput@@UEAA@XZ @ 0x1C0121960
 * Callers:
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C0121A00 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0126D10 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCKeyboardSensor@@UEAAPEAXI@Z @ 0x1C012AEA0 (--_GCKeyboardSensor@@UEAAPEAXI@Z.c)
 *     ??_ECMouseSensor@@UEAAPEAXI@Z @ 0x1C0131840 (--_ECMouseSensor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C01219A8 (--1CRIMBase@@UEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::~CBaseInput(CBaseInput *this, __int64 a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 134) == 0LL;
  *(_QWORD *)this = &CBaseInput::`vftable';
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_QWORD *)this + 132) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  CRIMBase::~CRIMBase(this);
}
