/*
 * XREFs of ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000F194
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0010D44 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMDoesMiniportNeedCoNdisNdProxy(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (a1->Flags & 0x20000) != 0 && !ndisMediaTypeCl[a1->MediaType] && (a1->MiniportAttributes & 0x400) == 0;
}
