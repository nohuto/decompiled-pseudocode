/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C012451C
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0122D60 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C0127C70 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 * Callees:
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C012299C (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int result; // eax
  PVOID v5; // rbx
  PRKEVENT v6; // rdi
  PRKEVENT Event; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h]

  v2 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0xE )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  result = CRIMBase::SensorDispatcherObject::GetWorkAndWait((v2 << 6) + a1 + 144, (__int64)&Event);
  v5 = Object;
  v6 = Event;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    result = KeWaitForSingleObject(v5, WrUserRequest, 0, 0, 0LL);
    if ( v6 )
      result = ObfDereferenceObject(v6);
    if ( v5 )
      return ObfDereferenceObject(v5);
  }
  return result;
}
