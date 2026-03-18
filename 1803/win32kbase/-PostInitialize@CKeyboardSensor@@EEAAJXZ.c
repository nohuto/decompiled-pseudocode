/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C012AEE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C0132744 (--0CBaseProcessor@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this, __int64 a2)
{
  unsigned int v2; // ebx
  CBaseProcessor *v4; // rax
  CBaseProcessor *v5; // rdi

  v2 = 0;
  if ( *((_QWORD *)this + 136) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  *((_QWORD *)this + 136) = 0LL;
  v4 = (CBaseProcessor *)Win32AllocPool(40LL, 0x70724D50u);
  v5 = v4;
  if ( v4 )
  {
    CBaseProcessor::CBaseProcessor(v4);
    *(_QWORD *)v5 = &CKeyboardProcessor::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    *((_QWORD *)this + 136) = v5;
  else
    return (unsigned int)-1073741801;
  return v2;
}
