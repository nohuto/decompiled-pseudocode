/*
 * XREFs of TtmiWriteEventToAllQueues @ 0x1406D97BC
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1406D7A34 (TtmpPublishDeviceEvent.c)
 *     TtmiSessionTerminalListWorker @ 0x1406D8250 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiCloseEventQueue @ 0x1406DA860 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1406DAC1C (TtmiWriteEventToSingleQueue.c)
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
      TtmiLogError("TtmiWriteEventToAllQueues", 1239, v6, -1);
      TtmiCloseEventQueue(v5);
    }
  }
}
