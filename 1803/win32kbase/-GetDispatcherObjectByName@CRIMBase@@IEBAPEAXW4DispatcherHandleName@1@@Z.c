/*
 * XREFs of ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C000EF94
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C000EF50 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C003AF34 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherObjectByName(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(a1 + 720)) )
  {
    if ( *(_DWORD *)(a1 + 736) != 9 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    return *(_QWORD *)(a1 + 768);
  }
  return v2;
}
