/*
 * XREFs of ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001D114 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ndisDereferenceFilter @ 0x1C00252A0 (ndisDereferenceFilter.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00BC09C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00BED60 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00F7440 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000C190 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0016AF4 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
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
      v4 = *(_QWORD *)&v2[3].RefWithStack[0].Block.Dereferences[2];
      v5 = *(struct _NDIS_REFCOUNT_BLOCK ***)&v2[3].RefWithStack[0].Block.Dereferences[4];
      if ( *(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 8) != (struct _NDIS_REFCOUNT_BLOCK *)&v2[3].RefWithStack[0].Block.Dereferences[2]
        || *v5 != (struct _NDIS_REFCOUNT_BLOCK *)&v2[3].RefWithStack[0].Block.Dereferences[2] )
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
