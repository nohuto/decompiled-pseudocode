/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x1406D9738
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1406DA238 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1406D71AC (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x1406DAC1C (TtmiWriteEventToSingleQueue.c)
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
