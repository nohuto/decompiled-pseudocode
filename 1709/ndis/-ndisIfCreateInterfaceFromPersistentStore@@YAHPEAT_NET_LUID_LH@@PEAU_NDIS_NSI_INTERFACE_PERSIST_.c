/*
 * XREFs of ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C0020380
 * Callers:
 *     ndisIfCreatePersistedInterface @ 0x1C00414E8 (ndisIfCreatePersistedInterface.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C7114 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00DABA0 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C00204BC (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0020520 (ndisIfFindInterfaceByNetLuid.c)
 *     ndisIfFindCompartmentBlock @ 0x1C00205BC (ndisIfFindCompartmentBlock.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF__guid__guid_ @ 0x1C0040D30 (WPP_SF__guid__guid_.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B4408 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00B48CC (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 */

__int64 __fastcall ndisIfCreateInterfaceFromPersistentStore(
        union _NET_LUID_LH *a1,
        struct _GUID *a2,
        enum NdisIfBlockSource a3)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 InterfaceByNetLuid; // rbx
  KIRQL v10; // r8
  KIRQL v11; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned int CompartmentId; // ecx
  int Interface; // eax
  int v15; // ecx
  __int64 CompartmentBlock; // rbp
  KIRQL v18; // r10
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(172LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
  LOBYTE(v7) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a1->Value, v8, v7);
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( InterfaceByNetLuid )
    goto LABEL_15;
  v22 = (a1->Value >> 24) & 0xFFFFFF;
  if ( v22 - 0x8000 > 0x4000 )
  {
    v6 = ndisIfAllocateAndVerifyNetLuidIndex(*((_WORD *)&a1->Info + 3), &v22, 0, 0);
    if ( v6 )
      goto LABEL_12;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock(a2 + 66);
  KeReleaseSpinLock(&ndisIfListLock, v11);
  if ( NetworkBlock && a3 == NdisIfBlockSourcePersistedNetSetup )
    goto LABEL_7;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a2[67].Data1);
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1LL);
    a2[67].Data1 = v19;
  }
  KeReleaseSpinLock(&ndisIfListLock, v18);
  if ( !CompartmentBlock )
  {
LABEL_15:
    v6 = -1073741823;
    goto LABEL_12;
  }
  NetworkBlock = *(struct _NDIS_IF_NETWORK_BLOCK **)(CompartmentBlock + 56);
  if ( NetworkBlock )
  {
    a2[66] = NetworkBlock->NetworkGuid;
LABEL_7:
    CompartmentId = NetworkBlock->Compartment->CompartmentId;
    if ( a2[67].Data1 != CompartmentId )
      a2[67].Data1 = CompartmentId;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, a1, (struct _NDIS_NSI_INTERFACE_PERSIST_RW *)a2, 0LL, a3);
    v15 = v6;
    if ( Interface < 0 )
      v15 = -1073741823;
    v6 = v15;
    goto LABEL_12;
  }
  if ( (unsigned __int8)byte_1C009875D >= 3u )
    WPP_SF__guid__guid_(v21, v20, &a2[65], &a2[66]);
  v6 = -1073741252;
LABEL_12:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqd(174LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, v6);
  return v6;
}
