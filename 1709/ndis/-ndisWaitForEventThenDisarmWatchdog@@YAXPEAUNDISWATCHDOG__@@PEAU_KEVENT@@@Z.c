/*
 * XREFs of ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4
 * Callers:
 *     ndisCancelIdleRequestSync @ 0x1C006FDF4 (ndisCancelIdleRequestSync.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00BA65C (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FE704 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0103C68 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00AB518 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C00AB55C (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisWaitForEventThenDisarmWatchdog(struct _NDIS_REFCOUNT_BLOCK *a1, struct _KEVENT *a2)
{
  struct _NDIS_REFCOUNT_BLOCK *v3; // rbx

  if ( a1 == (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
  }
  else
  {
    v3 = ndisRefCountHandleFromRefCountBlock(a1);
    NdisWatchdogState::Disarm((NdisWatchdogState *)v3);
    NdisWatchdogState::WaitSynchronously((NdisWatchdogState *)v3, a2);
  }
}
