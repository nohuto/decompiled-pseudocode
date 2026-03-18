/*
 * XREFs of PnpQueryStopDeviceNode @ 0x1406D4B78
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x1406D49DC (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x1400FC934 (PoFxActivateDevice.c)
 *     PnpFindMountableDevice @ 0x1400FF2B4 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1401589AC (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x140200EA0 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x1406D14C8 (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x1406D28AC (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  int Reconfiguration; // edi
  struct _DEVICE_OBJECT *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 776 )
  {
    if ( a2 && PiRebalanceOptOut(a1) )
      goto LABEL_7;
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(5, v4);
    PipSetDevNodeState(a1, 777);
    if ( Reconfiguration < 0 )
LABEL_7:
      PnpTraceQueryStopFailure(a1);
  }
  return (unsigned int)Reconfiguration;
}
