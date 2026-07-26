/*
 * XREFs of ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4
 * Callers:
 *     ndisIfCreatePersistedInterface @ 0x1C0042630 (ndisIfCreatePersistedInterface.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C14A8 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00DC740 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BFA4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001D438 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF__guid__guid_ @ 0x1C0041EC0 (WPP_SF__guid__guid_.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C0118 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C0D64 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
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
  ULONG64 Value_high; // rcx
  KIRQL v12; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned int CompartmentId; // ecx
  int Interface; // eax
  int v16; // ecx
  _LIST_ENTRY *CompartmentBlock; // rbp
  KIRQL v19; // r10
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(172LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
  LOBYTE(v7) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a1->Value, v8, v7);
  KeReleaseSpinLock(&ndisIfListLock, v10);
  if ( InterfaceByNetLuid )
    goto LABEL_15;
  Value_high = HIWORD(a1->Value);
  v23 = (a1->Value >> 24) & 0xFFFFFF;
  if ( v23 - 32512 > 0x4100 )
  {
    v6 = ndisIfAllocateAndVerifyNetLuidIndex(Value_high, &v23, 0, 0);
    if ( v6 )
      goto LABEL_12;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NetworkBlock = ndisIfFindNetworkBlock(a2 + 66);
  KeReleaseSpinLock(&ndisIfListLock, v12);
  if ( NetworkBlock && a3 == NdisIfBlockSourcePersistedNetSetup )
    goto LABEL_7;
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a2[67].Data1);
  if ( !CompartmentBlock )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    a2[67].Data1 = v20;
  }
  KeReleaseSpinLock(&ndisIfListLock, v19);
  if ( !CompartmentBlock )
  {
LABEL_15:
    v6 = -1073741823;
    goto LABEL_12;
  }
  NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)CompartmentBlock[3].Blink;
  if ( NetworkBlock )
  {
    a2[66] = NetworkBlock->NetworkGuid;
LABEL_7:
    CompartmentId = NetworkBlock->Compartment->CompartmentId;
    if ( a2[67].Data1 != CompartmentId )
      a2[67].Data1 = CompartmentId;
    Interface = ndisIfCreateInterface(NetworkBlock, 0, 0LL, a1, (struct _NDIS_NSI_INTERFACE_PERSIST_RW *)a2, 0LL, a3);
    v16 = v6;
    if ( Interface < 0 )
      v16 = -1073741823;
    v6 = v16;
    goto LABEL_12;
  }
  if ( (unsigned __int8)byte_1C009961D >= 3u )
    WPP_SF__guid__guid_(v22, v21, &a2[65], &a2[66]);
  v6 = -1073741252;
LABEL_12:
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqd(174LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, v6);
  return v6;
}
