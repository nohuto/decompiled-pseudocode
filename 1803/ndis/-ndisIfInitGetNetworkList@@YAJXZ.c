/*
 * XREFs of ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00233A8
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BFA4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00235EC (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

__int64 ndisIfInitGetNetworkList(void)
{
  char *v0; // rdi
  int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // r14d
  KIRQL v7; // r13
  struct _NDIS_IF_NETWORK_BLOCK *v8; // rdi
  char *v9; // rsi
  __int64 v10; // r10
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r12
  struct _GUID *v12; // r15
  _QWORD v14[14]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v15[16]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v16; // [rsp+120h] [rbp+67h]
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // [rsp+128h] [rbp+6Fh] BYREF
  char *PoolWithTag; // [rsp+130h] [rbp+77h]

  v0 = 0LL;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(33LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[1]) = 0;
  v14[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v14[3]) = 6;
  v14[4] = 0x100000000LL;
  v14[5] = 0LL;
  LODWORD(v14[6]) = 16;
  v14[7] = 0LL;
  LODWORD(v14[8]) = 528;
  LODWORD(v14[13]) = 0;
  v1 = NsiEnumerateObjectsAllParametersEx(v14);
  if ( v1 >= 0 )
  {
    v2 = v14[13];
    if ( LODWORD(v14[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v14[13];
        }
        v3 = 16 * v2;
        v0 = 0LL;
        if ( 16 * (unsigned __int64)v2 > 0xFFFFFFFF || 544 * v2 < 16 * v2 )
        {
          v1 = -1073741670;
          goto LABEL_24;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 528LL * v2, 0x6669444Eu);
        v0 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, 528LL * LODWORD(v14[13]));
        v14[5] = v0;
        v14[7] = &v0[v4];
        LODWORD(v14[6]) = 16;
        LODWORD(v14[8]) = 528;
        v1 = NsiEnumerateObjectsAllParametersEx(v14);
        if ( v1 != 261 )
          goto LABEL_11;
        v2 = v14[13];
      }
      v1 = -1073741670;
LABEL_11:
      if ( v1 >= 0 )
      {
        v5 = v14[5];
        v16 = v14[5];
        NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)v14[7];
        v6 = 0;
        v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( LODWORD(v14[13]) )
        {
          v8 = NetworkBlock;
          do
          {
            v9 = (char *)v8 + 528 * v6;
            if ( *v9 == -84 && v9[1] && *((_WORD *)v9 + 1) >= 0x210u )
            {
              CompartmentBlock = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(*((_DWORD *)v9 + 1));
              v12 = (struct _GUID *)(16 * v10 + v5);
              if ( CompartmentBlock )
              {
                NetworkBlock = ndisIfFindNetworkBlock(v12);
                if ( !NetworkBlock )
                  v1 = ndisIfCreateNetworkBlock(
                         CompartmentBlock,
                         v12,
                         (struct _NDIS_NSI_NETWORK_RW *)v8 + v6,
                         &NetworkBlock);
              }
              else
              {
                KeReleaseSpinLock(&ndisIfListLock, v7);
                memset(v15, 0, 0x48uLL);
                LODWORD(v15[3]) = 6;
                v15[2] = &NPI_MS_NDIS_MODULEID;
                v15[0] = 0LL;
                LODWORD(v15[8]) = 528;
                LODWORD(v15[1]) = 0;
                v15[4] = 0x300000000LL;
                v15[5] = v12;
                LODWORD(v15[6]) = 16;
                v15[7] = (char *)v8 + 528 * v6;
                NsiSetAllParametersEx(v15);
                v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              }
              v5 = v16;
            }
            ++v6;
          }
          while ( v6 < LODWORD(v14[13]) );
          v0 = PoolWithTag;
        }
        KeReleaseSpinLock(&ndisIfListLock, v7);
      }
LABEL_24:
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
    }
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(34LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (unsigned int)v1);
  return (unsigned int)v1;
}
