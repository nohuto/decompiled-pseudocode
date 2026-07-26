/*
 * XREFs of ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B57BC
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A9958 (ndisMInitializeMiniportBlock.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXKK_K@Z @ 0x1C00B5B18 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00B57FC (--0NdisWatchdogState@@QEAA@XZ.c)
 */

struct NDISWATCHDOG__ *ndisAllocateWatchdog(void)
{
  struct NDISWATCHDOG__ *result; // rax

  result = (struct NDISWATCHDOG__ *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x7377444Eu);
  if ( result )
    result = (struct NDISWATCHDOG__ *)NdisWatchdogState::NdisWatchdogState(result);
  if ( !result )
    return (struct NDISWATCHDOG__ *)-1LL;
  return result;
}
