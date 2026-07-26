/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E490C
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 *     ndisReferenceMiniportByGuid @ 0x1C00502C8 (ndisReferenceMiniportByGuid.c)
 *     ndisPowerSaveClearStop @ 0x1C00B0570 (ndisPowerSaveClearStop.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C26E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rax
  Ndis::BindRegistry *v3; // rbx
  enum Ndis::ReadBindingsOptions::Flags v4; // r8d
  __int64 v5; // r8
  __int64 v6; // r9

  ndisIfCreateOrUpdateInterface(a1);
  v2 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceMiniportByGuid(a1);
  v3 = (Ndis::BindRegistry *)v2;
  if ( v2 )
  {
    ndisPowerSaveStop(v2, 8);
    Ndis::BindRegistry::Reload(v3, 0LL, v4);
    ndisPowerSaveClearStop((struct _NDIS_MINIPORT_BLOCK *)v3, 8);
    ndisDereferenceMiniport((__int64)v3, 0x22u, v5, v6);
  }
}
