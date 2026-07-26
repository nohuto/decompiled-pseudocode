/*
 * XREFs of ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B9E0
 * Callers:
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A8A50 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00D0D58 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentEnumerable(struct _NDIS_IF_COMPARTMENT_BLOCK *a1)
{
  return (a1->LoopbackInfo.Flags & 2) == 0;
}
