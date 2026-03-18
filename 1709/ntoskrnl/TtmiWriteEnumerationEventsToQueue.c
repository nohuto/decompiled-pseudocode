/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x14070FB44
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140710648 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14070D41C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x14071102C (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edx
  _DWORD v6[138]; // [rsp+20h] [rbp-228h] BYREF

  v3 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  if ( v3 < 0 )
  {
    v4 = 1166;
LABEL_3:
    TtmiLogError("TtmiWriteEnumerationEventsToQueue", v4, v3, v3);
    return (unsigned int)v3;
  }
  memset(v6, 0, 0x21CuLL);
  v6[0] = 1;
  v3 = TtmiWriteEventToSingleQueue(a2, v6);
  if ( v3 < 0 )
  {
    v4 = 1177;
    goto LABEL_3;
  }
  return 0LL;
}
