/*
 * XREFs of ndisGetAdapterRssInfo @ 0x1C00E848C
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015514 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisGetRssProcessorInformation @ 0x1C001F990 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v4; // rcx
  NDIS_STATUS RssProcessorInformation; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // esi
  _DWORD *v9; // rbx
  unsigned int v10; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  __int64 v12; // rcx
  int v13; // esi
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v15; // rdi
  unsigned int v16; // r15d
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  v4 = a2[23];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 24LL) + 32LL) )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v8 = 144;
    if ( v7 >= 0x90 )
    {
      v9 = (_DWORD *)a2[3];
      *a3 = 0;
      memset(v9, 0, 0x90uLL);
      *v9 = 9437568;
      v10 = 144;
      *((_BYTE *)v9 + 12) = a1->MajorNdisVersion;
      *((_BYTE *)v9 + 13) = a1->MinorNdisVersion;
      v9[2] = 144;
      v9[4] = 40;
      v9[5] = 20;
      *(_OWORD *)(v9 + 10) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      v9[14] = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        v9[6] = 60;
        v9[7] = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)(v9 + 15) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)(v9 + 19) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(_QWORD *)(v9 + 23) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        v9[25] = CombinedNdisRSSParameters->DefaultProcessorNumber;
        v10 = a1->CombinedNdisRSSParameters->HashSecretKeySize
            + a1->CombinedNdisRSSParameters->IndirectionTableSize
            + 144;
        v9[2] = v10;
        if ( v7 < v10 )
        {
          v9[19] = 0;
          v9[21] = 0;
        }
        else
        {
          v9[21] = 84;
          memmove(
            v9 + 36,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v12 = (unsigned int)a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v13 = a1->CombinedNdisRSSParameters->HashSecretKeySize + 144;
          v9[19] = a1->CombinedNdisRSSParameters->HashSecretKeySize + 84;
          memmove(
            (char *)v9 + v12,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v8 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v13;
        }
      }
      else
      {
        v9[1] |= 0x40u;
      }
      Size = 0LL;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                                 NonPagedPoolNx,
                                                                 Size,
                                                                 0x2020444Eu,
                                                                 LowPoolPriority);
      v15 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, PoolWithTagPriority, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          v9[8] = 104;
          v9[9] = 40;
          *(_OWORD *)(v9 + 26) = *(_OWORD *)&v15->Header.Type;
          *(_OWORD *)(v9 + 30) = *(_OWORD *)&v15->PreferredNumaNode;
          *((_QWORD *)v9 + 17) = *(_QWORD *)&v15[1].Header.Type;
          v16 = v15->RssProcessorEntrySize * v15->RssProcessorCount + v10;
          v9[2] = v16;
          if ( v7 < v16 )
          {
            v9[31] = 0;
          }
          else
          {
            v9[31] = v8 - 104;
            memmove(
              (char *)v9 + v8,
              &v15->Header.Type + v15->RssProcessorArrayOffset,
              v15->RssProcessorEntrySize * v15->RssProcessorCount);
            v8 += v15->RssProcessorEntrySize * v15->RssProcessorCount;
          }
        }
        ExFreePoolWithTag(v15, 0x2020444Eu);
      }
      a2[7] = v8;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
