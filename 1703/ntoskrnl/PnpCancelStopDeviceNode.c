/*
 * XREFs of PnpCancelStopDeviceNode @ 0x1406A9870
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x1406A9900 (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x1406A9AF8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x140131B50 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x1406A7BEC (IopQueryReconfiguration.c)
 */

void __fastcall PnpCancelStopDeviceNode(ULONG_PTR BugCheckParameter2)
{
  struct _DEVICE_OBJECT *v2; // rdx

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 777 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    IopQueryReconfiguration(6, v2);
    PipRestoreDevNodeState(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      PipClearDevNodeFlags(BugCheckParameter2, 0x1000000);
    }
  }
}
