/*
 * XREFs of PnpCancelStopDeviceNode @ 0x14073DEB8
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14073DF48 (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x14073E140 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x140145284 (PipRestoreDevNodeState.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PnpUnlockMountableDevice @ 0x14015E4C8 (PnpUnlockMountableDevice.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x14073A2FC (IopQueryReconfiguration.c)
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
