/*
 * XREFs of ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C00413AC (ndisIfCreateOrUpdateInterface.c)
 *     ndisReferenceMiniportByGuid @ 0x1C004F980 (ndisReferenceMiniportByGuid.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFD0C (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisPowerSaveStop @ 0x1C00C61B0 (ndisPowerSaveStop.c)
 *     ndisPowerSaveClearStop @ 0x1C00C62E0 (ndisPowerSaveClearStop.c)
 */

void __fastcall ndisPnpRefresh(struct _GUID *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rax
  _NDIS_MINIPORT_BLOCK *v3; // rbx
  enum Ndis::ReadBindingsOptions::Flags v4; // r8d

  ndisIfCreateOrUpdateInterface(a1);
  v2 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceMiniportByGuid(a1);
  v3 = v2;
  if ( v2 )
  {
    ndisPowerSaveStop(v2, 8);
    Ndis::BindRegistry::Reload(v3, 0LL, v4);
    ndisPowerSaveClearStop(v3, 8);
    ndisDereferenceMiniport((__int64)v3, 0x22u);
  }
}
