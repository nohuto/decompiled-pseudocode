/*
 * XREFs of ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10
 * Callers:
 *     ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00A8A30 (-ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D334 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C0012ED4 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C0013120 (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ndisStartNsiClient @ 0x1C00136BC (ndisStartNsiClient.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B9F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ndisStopNsiProvider @ 0x1C0045340 (ndisStopNsiProvider.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A8A50 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ndisStartNsiProvider @ 0x1C00A8B1C (ndisStartNsiProvider.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00AD630 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00AF260 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00B673C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B7034 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00CFFEC (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00D0208 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 */

__int64 ndisInitializeNsiHelper(void)
{
  int started; // ebx
  struct _LIST_ENTRY *Flink; // r14
  int Network; // ebp
  __int64 v3; // rsi
  unsigned __int8 v4; // r12
  KIRQL v5; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r15
  unsigned __int16 v7; // cx
  KIRQL v8; // bl
  Ndis::BindRegistry *v9; // rcx
  KIRQL v11; // bl
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_(25LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids);
  if ( ndisNsiInitialized == 1 )
  {
LABEL_19:
    started = 0;
  }
  else
  {
    started = ndisStartNsiProvider();
    if ( started >= 0 )
    {
      started = ndisStartNsiClient();
      if ( started >= 0 )
      {
        ndisNsiInitialized = 1;
        ndisIfInitGetCompartmentList();
        ndisIfInitGetNetworkList();
        Flink = ndisIfCompartmentList.Flink;
        Network = 0;
        while ( 1 )
        {
          if ( Flink == &ndisIfCompartmentList )
          {
            if ( ndisIsInNetSetupMode() )
              Ndis::BindRegistry::ReadNetworkInterfaceListV2(v9);
            if ( !ndisIsInNetSetupMode() )
              ndisIfInitGetInterfaceList();
            goto LABEL_19;
          }
          v3 = (__int64)Flink;
          Flink = Flink->Flink;
          v4 = 0;
          v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v3 + 80));
          KeReleaseSpinLock(&ndisIfListLock, v5);
          if ( NetworkBlock )
            goto LABEL_9;
          Network = ndisIfCreateNetwork((struct _GUID *)(v3 + 80), *(_DWORD *)(v3 + 16));
          if ( Network >= 0 )
          {
            v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v3 + 80));
            KeReleaseSpinLock(&ndisIfListLock, v11);
            if ( !NetworkBlock )
              goto LABEL_13;
LABEL_9:
            *(_QWORD *)(v3 + 56) = NetworkBlock;
            if ( !*(_QWORD *)(v3 + 1704) )
            {
              v7 = *(_WORD *)(v3 + 78);
              if ( v7 )
              {
                v12 = (*(_QWORD *)(v3 + 72) >> 24) & 0xFFFFFF;
                if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v12, 0, 0) )
                {
LABEL_12:
                  Network = ndisIfCreateInterface(
                              NetworkBlock,
                              v4,
                              (struct _NDIS_NSI_COMPARTMENT_RW *)(v3 + 64),
                              0LL,
                              0LL,
                              0LL,
                              NdisIfBlockSourceAutomaticLoopback);
                  goto LABEL_13;
                }
                *(_QWORD *)(v3 + 72) = 0LL;
              }
              v4 = 1;
              goto LABEL_12;
            }
LABEL_13:
            if ( Network >= 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v3 + 44));
              ndisNsiNotifyClientCompartmentChange(v3, 1LL);
              v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              COMPARTMENTBLOCK_DECREMENT_REF(v3);
              KeReleaseSpinLock(&ndisIfListLock, v8);
            }
          }
        }
      }
      ndisStopNsiProvider();
    }
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(26LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (unsigned int)started);
  return (unsigned int)started;
}
