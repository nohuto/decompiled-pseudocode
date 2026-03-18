/*
 * XREFs of PnprWakeDevices @ 0x14042D700
 * Callers:
 *     PnprQuiesceWorker @ 0x14042D5E0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnprGetMillisecondCounter @ 0x14042C26C (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     PoEndPartitionReplace @ 0x1406FC8B4 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x1406FC8D8 (PoEndPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x1406FCA50 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x140700A3C (PoClearBroadcast.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  *(_DWORD *)(PnprContext + 21032) = PnprGetMillisecondCounter(0);
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4);
  PoClearBroadcast();
  PoEndPartitionReplace(a1 + 36, *(unsigned int *)(a1 + 32));
  PoEndPowerStateTasks(a1 + 36);
  PoUnblockConsoleSwitch(a1 + 36, *(unsigned int *)(a1 + 32));
  *(_DWORD *)(PnprContext + 21036) = PnprGetMillisecondCounter(0);
  return 0LL;
}
