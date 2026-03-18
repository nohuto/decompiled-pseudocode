/*
 * XREFs of ??1SensorDispatcherObject@CRIMBase@@QEAA@XZ @ 0x1C01219E0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::~SensorDispatcherObject(
        CRIMBase::SensorDispatcherObject *this,
        __int64 a2)
{
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
}
