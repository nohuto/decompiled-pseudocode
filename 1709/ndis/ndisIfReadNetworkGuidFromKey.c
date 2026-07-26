/*
 * XREFs of ndisIfReadNetworkGuidFromKey @ 0x1C00205F0
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00C7520 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0020558 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003DC64 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF__guid_ @ 0x1C0040CB8 (WPP_SF__guid_.c)
 *     ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00C7BD8 (-QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReadNetworkGuidFromKey(KRegKey *this, struct _GUID *a2)
{
  int v4; // edi
  int ValueGuid; // eax
  unsigned int v6; // ebx
  KIRQL v8; // di
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _GUID v10; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v11; // [rsp+30h] [rbp-28h] BYREF

  v4 = KRegKey::QueryValueGuid(this, L"IsolationCompartment", &v11);
  ValueGuid = KRegKey::QueryValueGuid(this, L"IsolationNetwork", a2);
  v6 = 0;
  if ( v4 < 0 )
  {
    if ( ValueGuid >= 0 )
      return v6;
    if ( v4 == -1073741772 && ValueGuid == -1073741772 )
    {
      *a2 = *ndisIfGetDefaultNetworkGuid(&v10);
      return v6;
    }
    return (unsigned int)-1073741823;
  }
  if ( ValueGuid >= 0 )
  {
    if ( (unsigned __int8)byte_1C009875D >= 3u )
      WPP_SF_(192LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids);
    return (unsigned int)-1073741823;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(&v11);
  if ( CompartmentBlockByGuid )
  {
    *a2 = CompartmentBlockByGuid->LoopbackNetwork->NetworkGuid;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    return v6;
  }
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( (unsigned __int8)byte_1C009875D >= 3u )
    WPP_SF__guid_(193LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, &v11);
  return 3221225473LL;
}
