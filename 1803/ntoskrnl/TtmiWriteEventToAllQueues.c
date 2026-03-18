/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x14077343C
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x14077152C (TtmpPublishDeviceEvent.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x1407728B8 (TtmpWriteDisplayStateChangedEvent.c)
 * Callees:
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiCloseEventQueue @ 0x1407744F8 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407748B0 (TtmiWriteEventToSingleQueue.c)
 */

void __fastcall TtmiWriteEventToAllQueues(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  int v6; // eax

  v2 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD **)(a1 + 80);
  while ( v4 != v2 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = TtmiWriteEventToSingleQueue(v5, a2);
    if ( v6 < 0 )
    {
      TtmiLogError("TtmiWriteEventToAllQueues", 1240, v6, -1);
      TtmiCloseEventQueue(v5);
    }
  }
}
