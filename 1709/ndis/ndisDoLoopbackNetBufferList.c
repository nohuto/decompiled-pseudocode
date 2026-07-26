/*
 * XREFs of ndisDoLoopbackNetBufferList @ 0x1C0054230
 * Callers:
 *     ndisMLoopbackNetBufferLists @ 0x1C0055C7C (ndisMLoopbackNetBufferLists.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeNetBufferList @ 0x1C0014360 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0019050 (NdisAllocateNetBufferAndNetBufferList.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0059B5C (ndisInvokeNextReceiveHandler.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  SIZE_T DataLength; // r15
  __int64 v9; // rbx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // rdi
  unsigned __int64 v12; // rdx
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v14; // rsi
  __int64 v15; // rax
  char *v16; // rbp
  __int64 *v17; // r14
  char *v18; // rax
  __int64 v19; // rcx
  char *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r15d
  __int64 v23; // rbx
  size_t i; // r8
  unsigned int v25; // ecx

  v5 = a3;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qqq(0x40u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2, a3);
  DataLength = *(unsigned int *)(a2 + 24);
  v9 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, DataLength) + 7) & 0xFFFFFFF8;
  if ( !((v9 + DataLength) >> 32) )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v9 + DataLength), 0x706C444Eu);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = (unsigned __int64)PoolWithTag + v9;
      if ( (struct _MDL *)((char *)PoolWithTag + v9) >= PoolWithTag )
      {
        PoolWithTag->Next = 0LL;
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->ByteCount = DataLength;
        PoolWithTag->StartVa = (PVOID)(v12 & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->Size = 8 * ((((v12 & 0xFFF) + DataLength + 4095) >> 12) + 6);
        PoolWithTag->ByteOffset = v12 & 0xFFF;
        MmBuildMdlForNonPagedPool(PoolWithTag);
        NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(
                                      ndisNetBufferListPool,
                                      0,
                                      0,
                                      v11,
                                      0,
                                      DataLength);
        v14 = NetBufferAndNetBufferList;
        if ( NetBufferAndNetBufferList )
        {
          v15 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
          if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
            v16 = *(char **)(v15 + 24);
          else
            v16 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v15, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
          if ( v16 )
          {
            v17 = *(__int64 **)(a2 + 8);
            v18 = (*((_BYTE *)v17 + 10) & 5) != 0
                ? (char *)v17[3]
                : (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v18 )
            {
              v19 = *(unsigned int *)(a2 + 16);
              v20 = &v18[v19];
              v21 = *((_DWORD *)v17 + 10) - v19;
              if ( v21 > (unsigned int)DataLength )
                v21 = DataLength;
              v22 = DataLength - v21;
              v23 = v21;
              for ( i = v21; ; i = v25 )
              {
                memmove(v16, v20, i);
                v17 = (__int64 *)*v17;
                v16 += v23;
                if ( !v17 || !v22 )
                  break;
                v20 = (*((_BYTE *)v17 + 10) & 5) != 0
                    ? (char *)v17[3]
                    : (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                if ( !v20 )
                  break;
                v25 = *((_DWORD *)v17 + 10);
                if ( v22 < v25 )
                  v25 = v22;
                v22 -= v25;
                v23 = v25;
              }
              v14->Flags |= 0x80u;
              v14->NblFlags |= 0x8000u;
              v5 = a3;
              v14->SourceHandle = *(void **)(a3 + 120);
              v14->NetBufferListInfo[5] = *(void **)(a3 + 120);
              if ( (a5 & 2) != 0 )
                v14->Flags |= 0x200u;
              if ( ndisNblTrackerMode )
                ndisNblTrackerTransferOwnershipInternal(v14, (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA8, 0LL, 0x9Bu, 0);
              ndisInvokeNextReceiveHandler(
                v14,
                *(struct _NDIS_FILTER_BLOCK **)(a1 + 2520),
                *(void **)(a1 + 2504),
                *(void (**)(void))(a1 + 2632));
              if ( ndisNblTrackerMode )
                ndisNblTrackerTransferOwnershipInternal(v14, 0LL, 0xA8uLL, 0x9Cu, 0);
              if ( (v11->MdlFlags & 0x20) != 0 )
                MmUnmapLockedPages(v11->MappedSystemVa, v11);
              ExFreePoolWithTag(v11, 0);
              NdisFreeNetBufferList(v14);
              goto LABEL_40;
            }
          }
          NdisFreeNetBufferList(v14);
          v5 = a3;
        }
        if ( (v11->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v11->MappedSystemVa, v11);
      }
      ExFreePoolWithTag(v11, 0);
    }
  }
LABEL_40:
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qqq(0x41u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2, v5);
}
