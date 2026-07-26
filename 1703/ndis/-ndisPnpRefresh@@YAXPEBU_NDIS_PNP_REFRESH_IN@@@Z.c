/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0044894 (ndisIfCreateOrUpdateInterface.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0050DB8 (ndisReferenceMiniportByGuid.c)
 *     ndisPowerSaveClearStop @ 0x1C00A78D8 (ndisPowerSaveClearStop.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B8D44 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisPowerSaveStop @ 0x1C00BE7BC (ndisPowerSaveStop.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rax
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  enum Ndis::ReadBindingsOptions::Flags v4; // r8d

  ndisIfCreateOrUpdateInterface(a1);
  v2 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceMiniportByGuid(a1, 0x22u);
  v3 = v2;
  if ( v2 )
  {
    ndisPowerSaveStop(v2, 8);
    Ndis::BindRegistry::Reload(v3, 0LL, v4);
    ndisPowerSaveClearStop(v3, 8);
    ndisDereferenceMiniport((__int64)v3, 0x22u);
  }
}
