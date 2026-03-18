/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C01319B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C01339CC (--0CMouseProcessor@@IEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this, __int64 a2)
{
  unsigned int v2; // ebx
  CMouseProcessor *v4; // rax
  CMouseProcessor *v5; // rax

  v2 = 0;
  if ( *((_QWORD *)this + 136) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  *((_QWORD *)this + 136) = 0LL;
  v4 = (CMouseProcessor *)Win32AllocPool(2888LL, 0x70724D50u);
  if ( v4 )
    v5 = CMouseProcessor::CMouseProcessor(v4);
  else
    v5 = 0LL;
  if ( v5 )
    *((_QWORD *)this + 136) = v5;
  else
    return (unsigned int)-1073741801;
  return v2;
}
