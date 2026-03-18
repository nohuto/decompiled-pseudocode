/*
 * XREFs of PnpBootPhaseComplete @ 0x1405D518C
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PiDrvDbInit @ 0x14059DF48 (PiDrvDbInit.c)
 */

__int64 PnpBootPhaseComplete()
{
  __int64 result; // rax

  result = PiDrvDbInit(2LL);
  if ( (int)result >= 0 )
  {
    PnpBootMode = 0;
    PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 39LL, 0LL, 0LL, 0LL);
    if ( (PiDevCfgMode & 2) != 0 )
      return PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiDevCfgProcessDeviceCallback, 0LL);
    else
      return 0LL;
  }
  return result;
}
