/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14073E2DC
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14073E140 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PnpFindMountableDevice @ 0x14014523C (PnpFindMountableDevice.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x140146BA0 (PoFxActivateDevice.c)
 *     PnpLockMountableDevice @ 0x14015E398 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x14023DF78 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x140738E78 (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x14073A2FC (IopQueryReconfiguration.c)
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
