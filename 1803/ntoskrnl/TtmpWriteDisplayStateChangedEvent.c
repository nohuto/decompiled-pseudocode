/*
 * XREFs of TtmpWriteDisplayStateChangedEvent @ 0x1407728B8
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140771D94 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x14077343C (TtmiWriteEventToAllQueues.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x140777938 (TtmiLogTerminalDisplayStateChangedEvent.c)
 */

__int64 __fastcall TtmpWriteDisplayStateChangedEvent(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  _DWORD v7[138]; // [rsp+20h] [rbp-228h] BYREF

  memset(v7, 0, 0x21CuLL);
  v4 = (unsigned int)a2[67];
  v5 = a2[68];
  v7[1] = a2[7];
  v7[2] = v4;
  v7[3] = v5;
  v7[0] = 2;
  TtmiLogTerminalDisplayStateChangedEvent(v7[1], v4);
  return TtmiWriteEventToAllQueues(a1, v7);
}
