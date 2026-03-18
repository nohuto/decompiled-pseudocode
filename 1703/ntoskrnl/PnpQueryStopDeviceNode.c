/*
 * XREFs of PnpQueryStopDeviceNode @ 0x1406A9C98
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x1406A9AF8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x14006815C (PoFxActivateDevice.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x140132630 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1401F8A9C (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1401FB198 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x1406A64CC (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x1406A7BEC (IopQueryReconfiguration.c)
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
