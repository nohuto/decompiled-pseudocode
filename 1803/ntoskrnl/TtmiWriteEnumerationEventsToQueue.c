/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x1407733B8
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140773EC4 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140770B7C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edx
  _DWORD v6[138]; // [rsp+20h] [rbp-228h] BYREF

  v3 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  if ( v3 < 0 )
  {
    v4 = 1167;
LABEL_3:
    TtmiLogError("TtmiWriteEnumerationEventsToQueue", v4, v3, v3);
    return (unsigned int)v3;
  }
  memset(v6, 0, 0x21CuLL);
  v6[0] = 1;
  v3 = TtmiWriteEventToSingleQueue(a2, v6);
  if ( v3 < 0 )
  {
    v4 = 1178;
    goto LABEL_3;
  }
  return 0LL;
}
