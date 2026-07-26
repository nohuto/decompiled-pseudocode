/*
 * XREFs of ndisDoLoopbackNetBufferList @ 0x1C005512C
 * Callers:
 *     ndisMLoopbackNetBufferLists @ 0x1C0056B2C (ndisMLoopbackNetBufferLists.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0006520 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00110CC (ndisInvokeNextReceiveHandler.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 */

void __fastcall ndisDoLoopbackNetBufferList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rbp
  SIZE_T DataLength; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  SIZE_T v11; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v13; // rdi
  unsigned __int64 v14; // rdx
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v16; // rsi
  __int64 v17; // rax
  char *v18; // rbp
  __int64 *v19; // r14
  char *v20; // rax
  __int64 v21; // rcx
  char *v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r15d
  __int64 v25; // rbx
  size_t i; // r8
  unsigned int v27; // ecx

  v5 = a3;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qqq(0x40u, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2, a3);
  DataLength = *(unsigned int *)(a2 + 24);
  v9 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, (unsigned int)DataLength) + 7) & 0xFFFFFFF8;
  v10 = (unsigned int)v9;
  v11 = DataLength + v9;
  if ( !HIDWORD(v11) )
  {
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v11, 0x706C444Eu);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      v14 = (unsigned __int64)PoolWithTag + v10;
      if ( (struct _MDL *)((char *)PoolWithTag + v10) >= PoolWithTag )
      {
        PoolWithTag->Next = 0LL;
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->ByteCount = DataLength;
        PoolWithTag->StartVa = (PVOID)(v14 & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->Size = 8 * ((((v14 & 0xFFF) + DataLength + 4095) >> 12) + 6);
        PoolWithTag->ByteOffset = v14 & 0xFFF;
        MmBuildMdlForNonPagedPool(PoolWithTag);
        NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(
                                      ndisNetBufferListPool,
                                      0,
                                      0,
                                      v13,
                                      0,
                                      DataLength);
        v16 = NetBufferAndNetBufferList;
        if ( NetBufferAndNetBufferList )
        {
          v17 = *(_QWORD *)(NetBufferAndNetBufferList->Link.Region + 32);
          if ( (*(_BYTE *)(v17 + 10) & 5) != 0 )
            v18 = *(char **)(v17 + 24);
          else
            v18 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
          if ( v18 )
          {
            v19 = *(__int64 **)(a2 + 8);
            v20 = (*((_BYTE *)v19 + 10) & 5) != 0
                ? (char *)v19[3]
                : (char *)MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v20 )
            {
              v21 = *(unsigned int *)(a2 + 16);
              v22 = &v20[v21];
              v23 = *((_DWORD *)v19 + 10) - v21;
              if ( v23 > (unsigned int)DataLength )
                v23 = DataLength;
              v24 = DataLength - v23;
              v25 = v23;
              for ( i = v23; ; i = v27 )
              {
                memmove(v18, v22, i);
                v19 = (__int64 *)*v19;
                v18 += v25;
                if ( !v19 || !v24 )
                  break;
                v22 = (*((_BYTE *)v19 + 10) & 5) != 0
                    ? (char *)v19[3]
                    : (char *)MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                if ( !v22 )
                  break;
                v27 = *((_DWORD *)v19 + 10);
                if ( v24 < v27 )
                  v27 = v24;
                v24 -= v27;
                v25 = v27;
              }
              v16->Flags |= 0x80u;
              v16->NblFlags |= 0x8000u;
              v5 = a3;
              v16->SourceHandle = *(void **)(a3 + 120);
              v16->NetBufferListInfo[5] = *(void **)(a3 + 120);
              if ( (a5 & 2) != 0 )
                v16->Flags |= 0x200u;
              ndisInvokeNextReceiveHandler(
                v16,
                a4,
                1u,
                2,
                *(struct _NDIS_FILTER_BLOCK **)(a1 + 2520),
                *(void **)(a1 + 2504),
                *(void (**)(void))(a1 + 2632));
              if ( (v13->MdlFlags & 0x20) != 0 )
                MmUnmapLockedPages(v13->MappedSystemVa, v13);
              ExFreePoolWithTag(v13, 0);
              NdisFreeNetBufferList(v16);
              goto LABEL_36;
            }
          }
          NdisFreeNetBufferList(v16);
          v5 = a3;
        }
        if ( (v13->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v13->MappedSystemVa, v13);
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
LABEL_36:
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qqq(0x41u, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2, v5);
}
