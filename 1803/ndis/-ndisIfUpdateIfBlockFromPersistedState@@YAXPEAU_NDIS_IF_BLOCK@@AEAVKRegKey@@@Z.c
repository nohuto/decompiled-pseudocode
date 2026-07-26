/*
 * XREFs of ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003F080
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C00424F4 (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001A680 (ndisIfReadNetworkGuidFromKey.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C003F240 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROP.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003F300 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F3AC (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     WPP_SF__guid_ @ 0x1C0041E08 (WPP_SF__guid_.c)
 *     WPP_SF__guid_L @ 0x1C0041E34 (WPP_SF__guid_L.c)
 *     WPP_SF__guid__guid__guid_ @ 0x1C0041EFC (WPP_SF__guid__guid__guid_.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BB098 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rt.c)
 *     ?ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C00C15C0 (-ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE.c)
 *     ??$MakePoolPtr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@YA?AV?$unique_ptr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@U?$KFreePool@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@@wistd@@K@Z @ 0x1C00DC4E4 (--$MakePoolPtr@U_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@@YA-AV-$unique_ptr@U_NDIS_INTERFACE_ADDI.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *a2)
{
  int v4; // edx
  int v5; // ecx
  struct _NDIS_INTERFACE_ADDITIONAL_PROPERTIES *v6; // r8
  int updated; // eax
  __int64 v8; // rdx
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  PVOID v10; // [rsp+38h] [rbp-30h] BYREF
  PVOID v11; // [rsp+40h] [rbp-28h] BYREF
  struct _GUID v12; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0LL;
  if ( (int)KRegKey::QueryValueString(a2, L"IfAlias", &v11) >= 0 )
    ndisIfUpdateStringIfNeeded(a1, v11, &a1->ifAlias, 0LL, 20);
  v10 = 0LL;
  if ( (int)KRegKey::QueryValueString(a2, L"IfDescr", &v10) >= 0 )
    ndisIfUpdateStringIfNeeded(a1, v10, &a1->ifDescr, 2LL, 4);
  if ( (int)ndisIfReadNetworkGuidFromKey(a2, &v12) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v12, 0) < 0
    && (unsigned __int8)byte_1C009961D >= 3u )
  {
    WPP_SF__guid__guid__guid_(v5, v4, (_DWORD)a1 + 540, &a1->Network->NetworkGuid, (__int64)&v12);
  }
  MakePoolPtr<_NDIS_INTERFACE_ADDITIONAL_PROPERTIES>(&P);
  if ( P )
  {
    if ( (int)Ndis::BindRegistry::ReadAdditionalNetworkInterfaceParameters(a2, (struct KRegKey *)P, v6) >= 0 )
    {
      if ( (unsigned __int8)byte_1C009961D >= 4u )
        WPP_SF__guid_(195LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, &a1->InterfaceGuid);
      updated = ndisIfUpdateInterfaceFromPersistentStore(a1->NetLuid, (struct _NDIS_INTERFACE_ADDITIONAL_PROPERTIES *)P);
      if ( updated < 0 && (unsigned __int8)byte_1C009961D >= 2u )
        WPP_SF__guid_L(196LL, v8, &a1->InterfaceGuid, (unsigned int)updated);
    }
    ExFreePoolWithTag(P, 0);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x7274534Bu);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x7274534Bu);
}
