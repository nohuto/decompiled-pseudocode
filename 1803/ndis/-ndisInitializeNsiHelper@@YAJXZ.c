/*
 * XREFs of ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0
 * Callers:
 *     ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00C9750 (-ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BFA4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0023388 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00233A8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00237EC (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ndisStartNsiClient @ 0x1C0023BA8 (ndisStartNsiClient.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ndisStopNsiProvider @ 0x1C0042FB0 (ndisStopNsiProvider.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B7824 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C0118 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C0D64 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00C1690 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00C9770 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ndisStartNsiProvider @ 0x1C00C983C (ndisStartNsiProvider.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00DC528 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00DC740 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 */

__int64 ndisInitializeNsiHelper(void)
{
  int started; // ebx
  struct _LIST_ENTRY *Flink; // r14
  int Network; // ebp
  struct _LIST_ENTRY *v3; // rsi
  unsigned __int8 v4; // r12
  KIRQL v5; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r15
  unsigned __int64 v7; // rcx
  KIRQL v8; // bl
  Ndis::BindRegistry *v9; // rcx
  KIRQL v11; // bl
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(25LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
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
          v3 = Flink;
          Flink = Flink->Flink;
          v4 = 0;
          v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v3[5]);
          KeReleaseSpinLock(&ndisIfListLock, v5);
          if ( NetworkBlock )
            goto LABEL_9;
          Network = ndisIfCreateNetwork((struct _GUID *)&v3[5], (unsigned int)v3[1].Flink);
          if ( Network >= 0 )
          {
            v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v3[5]);
            KeReleaseSpinLock(&ndisIfListLock, v11);
            if ( !NetworkBlock )
              goto LABEL_13;
LABEL_9:
            v3[3].Blink = &NetworkBlock->Link;
            if ( !v3[106].Blink )
            {
              if ( HIWORD(v3[4].Blink) )
              {
                v7 = (unsigned __int64)v3[4].Blink >> 48;
                v12 = ((unsigned __int64)v3[4].Blink >> 24) & 0xFFFFFF;
                if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v12, 0, 0) )
                {
LABEL_12:
                  Network = ndisIfCreateInterface(
                              NetworkBlock,
                              v4,
                              (struct _NDIS_NSI_COMPARTMENT_RW *)&v3[4],
                              0LL,
                              0LL,
                              0LL,
                              NdisIfBlockSourceAutomaticLoopback);
                  goto LABEL_13;
                }
                v3[4].Blink = 0LL;
              }
              v4 = 1;
              goto LABEL_12;
            }
LABEL_13:
            if ( Network >= 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)&v3[2].Blink + 1);
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
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(26LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (unsigned int)started);
  return (unsigned int)started;
}
