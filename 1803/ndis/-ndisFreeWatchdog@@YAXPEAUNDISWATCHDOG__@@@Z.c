/*
 * XREFs of ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0011E1C (ndisDereferenceFilter.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024608 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisCancelIdleRequestSync @ 0x1C0070648 (ndisCancelIdleRequestSync.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B101C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01028C8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C00094EC (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A7D4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
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
