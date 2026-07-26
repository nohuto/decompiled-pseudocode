/*
 * XREFs of ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00B116C
 * Callers:
 *     ndisCancelIdleRequestSync @ 0x1C0070648 (ndisCancelIdleRequestSync.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B101C (ndisFForwardNetPnPEventToFilter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01028C8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00AF370 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B8564 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 */

struct _NDIS_REFCOUNT_BLOCK **__fastcall ndisMakeWatchdog(
        struct _NDIS_REFCOUNT_BLOCK **a1,
        void *a2,
        _NDIS_REFCOUNT_STACK_ENTRY a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct _NDIS_REFCOUNT_BLOCK *Watchdog; // rbx
  struct _NDIS_REFCOUNT_BLOCK **result; // rax

  Watchdog = (struct _NDIS_REFCOUNT_BLOCK *)ndisAllocateWatchdog();
  ndisArmWatchdog(Watchdog, a2, a3, a4, (_NDIS_REFCOUNT_STACK_ENTRY)a5, a6);
  result = a1;
  *a1 = Watchdog;
  return result;
}
