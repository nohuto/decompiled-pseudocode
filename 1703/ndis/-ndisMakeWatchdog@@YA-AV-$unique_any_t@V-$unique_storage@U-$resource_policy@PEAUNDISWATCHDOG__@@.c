/*
 * XREFs of ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18
 * Callers:
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00BC09C (ndisFForwardNetPnPEventToFilter.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00F7440 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z @ 0x1C00A5338 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B57BC (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 */

struct _NDIS_REFCOUNT_BLOCK **__fastcall ndisMakeWatchdog(
        struct _NDIS_REFCOUNT_BLOCK **a1,
        _QWORD *a2,
        _NDIS_REFCOUNT_STACK_ENTRY a3,
        __int64 a4,
        unsigned __int64 a5)
{
  struct _NDIS_REFCOUNT_BLOCK *Watchdog; // rbx
  struct _NDIS_REFCOUNT_BLOCK **result; // rax

  Watchdog = (struct _NDIS_REFCOUNT_BLOCK *)ndisAllocateWatchdog();
  ndisArmWatchdog(Watchdog, a2, a3, (_NDIS_REFCOUNT_STACK_ENTRY)270000, a5);
  result = a1;
  *a1 = Watchdog;
  return result;
}
