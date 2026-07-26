/*
 * XREFs of ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00DC740
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0042820 (ndisIfDeletePersistedInterface.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00B2770 (NdisIfFreeNetLuidIndex.c)
 */

__int64 ndisIfInitGetInterfaceList(void)
{
  char *PoolWithTag; // rdi
  int InterfaceFromPersistentStore; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  __int64 i; // r15
  __int64 v8; // rdx
  _QWORD *v9; // r9
  NET_IFTYPE v10; // dx
  __int64 v11; // rax
  _QWORD v13[14]; // [rsp+20h] [rbp-39h] BYREF
  UINT32 NetLuidIndex; // [rsp+C0h] [rbp+67h] BYREF
  NET_IFTYPE v15; // [rsp+C4h] [rbp+6Bh]

  PoolWithTag = 0LL;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(0xA9u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[1]) = 0;
  v13[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v13[3]) = 10;
  v13[4] = 0x100000000LL;
  v13[5] = 0LL;
  LODWORD(v13[6]) = 8;
  v13[7] = 0LL;
  LODWORD(v13[8]) = 1156;
  LODWORD(v13[13]) = 0;
  InterfaceFromPersistentStore = NsiEnumerateObjectsAllParametersEx(v13);
  if ( InterfaceFromPersistentStore >= 0 )
  {
    v2 = v13[13];
    if ( LODWORD(v13[13]) )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          v2 = v13[13];
        }
        v3 = 8 * v2;
        PoolWithTag = 0LL;
        if ( 8 * (unsigned __int64)v2 > 0xFFFFFFFF || 1164 * v2 < 8 * v2 )
        {
          InterfaceFromPersistentStore = -1073741670;
          goto LABEL_26;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1156LL * v2, 0x6669444Eu);
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v4 + 1156LL * LODWORD(v13[13]));
        v13[5] = PoolWithTag;
        v13[7] = &PoolWithTag[v4];
        LODWORD(v13[6]) = 8;
        LODWORD(v13[8]) = 1156;
        InterfaceFromPersistentStore = NsiEnumerateObjectsAllParametersEx(v13);
        if ( InterfaceFromPersistentStore != 261 )
          goto LABEL_13;
        v2 = v13[13];
      }
      InterfaceFromPersistentStore = -1073741670;
LABEL_13:
      if ( InterfaceFromPersistentStore >= 0 )
      {
        v5 = 0;
        v6 = v13[5];
        for ( i = v13[7]; v5 < LODWORD(v13[13]); ++v5 )
        {
          v8 = i + 1156LL * v5;
          if ( *(_BYTE *)v8 == 0xAE && *(_BYTE *)(v8 + 1) && *(_WORD *)(v8 + 2) >= 0x484u )
          {
            v9 = (_QWORD *)(v6 + 8LL * v5);
            if ( (*(_DWORD *)(v8 + 1084) & 1) != 0 )
            {
              v10 = *(_WORD *)(v6 + 8LL * v5 + 6);
              v15 = v10;
              v11 = (*v9 >> 24) & 0xFFFFFFLL;
              NetLuidIndex = (*v9 >> 24) & 0xFFFFFF;
              if ( (unsigned __int8)byte_1C009961D >= 4u )
                WPP_SF_dd(0xAAu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v10, v11);
              ndisIfDeletePersistedInterface((__int64)&NetLuidIndex);
              NdisIfFreeNetLuidIndex(v15, NetLuidIndex);
            }
            else
            {
              InterfaceFromPersistentStore = ndisIfCreateInterfaceFromPersistentStore(
                                               (union _NET_LUID_LH *)(v6 + 8LL * v5),
                                               (struct _GUID *)v8,
                                               NdisIfBlockSourcePersistedNsi);
            }
          }
        }
      }
LABEL_26:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(0xABu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, InterfaceFromPersistentStore);
  return (unsigned int)InterfaceFromPersistentStore;
}
