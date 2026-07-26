/*
 * XREFs of ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00BA61C
 * Callers:
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00BF61C (ndisMInitializeMiniportBlock.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00BF928 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00BA530 (--0NdisWatchdogState@@QEAA@XZ.c)
 */

struct NDISWATCHDOG__ *ndisAllocateWatchdog(void)
{
  struct NDISWATCHDOG__ *result; // rax

  result = (struct NDISWATCHDOG__ *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x7377444Eu);
  if ( result )
    result = (struct NDISWATCHDOG__ *)NdisWatchdogState::NdisWatchdogState((char *)result);
  if ( !result )
    return (struct NDISWATCHDOG__ *)-1LL;
  return result;
}
