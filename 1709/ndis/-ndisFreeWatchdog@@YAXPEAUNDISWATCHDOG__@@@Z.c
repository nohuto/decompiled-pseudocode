/*
 * XREFs of ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0001278 (ndisDereferenceFilter.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001EC50 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisCancelIdleRequestSync @ 0x1C006FDF4 (ndisCancelIdleRequestSync.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00BA65C (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00C436C (ndisFForwardNetPnPEventToFilter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FE704 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0103C68 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C000F020 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 */

void __fastcall ndisFreeWatchdog(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax
  struct _NDIS_REFCOUNT_BLOCK *v2; // rbx
  _NDIS_REFCOUNT_STACK_ENTRY *v3; // rdi
  __int64 v4; // r8
  struct _NDIS_REFCOUNT_BLOCK **v5; // rdx

  if ( a1 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v1 = ndisRefCountHandleFromRefCountBlock(a1);
    v2 = v1;
    if ( v1 )
    {
      v3 = &v1[2].RefWithStack[0].Block.References[2];
      if ( !KeReadStateEvent((PRKEVENT)&v1[2].RefWithStack[0].Block.References[2])
        && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)v2) )
      {
        KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
      v4 = *(_QWORD *)&v2[3].RefWithStack[0].Block.Dereferences[4];
      if ( *(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 8) != (struct _NDIS_REFCOUNT_BLOCK *)&v2[3].RefWithStack[0].Block.Dereferences[4]
        || (v5 = (struct _NDIS_REFCOUNT_BLOCK **)*((_QWORD *)v2[3].RefWithStack + 7),
            *v5 != (struct _NDIS_REFCOUNT_BLOCK *)&v2[3].RefWithStack[0].Block.Dereferences[4]) )
      {
        __fastfail(3u);
      }
      *v5 = (struct _NDIS_REFCOUNT_BLOCK *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      ExReleasePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v2, 0x7377444Eu);
    }
  }
}
