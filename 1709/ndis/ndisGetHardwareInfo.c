/*
 * XREFs of ndisGetHardwareInfo @ 0x1C00E6CD0
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C001A410 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001CBE8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisGetHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  NDIS_STATUS RssProcessorInformation; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  _DWORD *v10; // rbx
  unsigned int v11; // r14d
  _NDIS_INTERRUPT_BLOCK *InterruptEx; // r8
  int v13; // edx
  _QWORD *Generic; // rdx
  unsigned int i; // r9d
  __int64 v16; // rcx
  int v17; // ecx
  bool v18; // al
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  unsigned int v20; // ebp
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v22; // rsi
  unsigned int v23; // r14d
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  v5 = a2[23];
  v6 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) + 32LL) )
    return (unsigned int)-1073741790;
  v8 = *(_DWORD *)(v5 + 8);
  v9 = 1320;
  v10 = (_DWORD *)a2[3];
  if ( v8 < 0x528 )
    return (unsigned int)-1073741811;
  *a3 = 0;
  memset(v10, 0, 0x528uLL);
  *v10 = 86508160;
  v11 = 1320;
  *((_BYTE *)v10 + 12) = a1->MajorNdisVersion;
  *((_BYTE *)v10 + 13) = a1->MinorNdisVersion;
  *((_WORD *)v10 + 7) = HIWORD(a1->DriverHandle->DriverVersion);
  *((_WORD *)v10 + 8) = a1->DriverHandle->DriverVersion;
  InterruptEx = a1->InterruptEx;
  if ( InterruptEx )
  {
    if ( InterruptEx->MsiSupported )
    {
      v11 = 8 * *((_DWORD *)InterruptEx->Generic + 1) + 1320;
      if ( v8 >= v11 )
      {
        v6 = v10 + 330;
        v10[17] = 1320;
      }
    }
  }
  v10[2] = v11;
  if ( v6 )
    v9 = v11;
  if ( InterruptEx )
  {
    *((_OWORD *)v10 + 2) = *(_OWORD *)&a1->MsiCaps.Header.CapabilityID;
    *((_QWORD *)v10 + 6) = *(_QWORD *)&a1->MsiCaps.Option64Bit.MaskBits;
    *((_QWORD *)v10 + 7) = *(_QWORD *)&a1->MsiXCaps.Header.CapabilityID;
    v10[16] = a1->MsiXCaps.PBATable.TableOffset;
    if ( InterruptEx->MsiSupported )
    {
      v13 = v10[1] | 4;
      v10[1] = v13;
      if ( InterruptEx->MessageUsed )
      {
        v10[7] = *((_DWORD *)InterruptEx->Generic + 1);
        v10[1] = v13 | 8;
        if ( v6 )
        {
          Generic = InterruptEx->Generic;
          for ( i = 0; i < *((_DWORD *)Generic + 1); Generic = InterruptEx->Generic )
          {
            v16 = i++;
            *(_QWORD *)&v6[2 * v16] = Generic[6 * v16 + 2];
          }
        }
        if ( a1->MsiXCaps.Header.CapabilityID == 17 )
        {
          v17 = v10[1] | 0x10;
          v10[1] = v17;
          v10[6] = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
          if ( *(_WORD *)&a1->MsiXCaps.MessageControl < 0 )
            v10[1] = v17 | 0x20;
        }
      }
      else
      {
        v10[1] = v13 | 2;
      }
      goto LABEL_24;
    }
  }
  else if ( !a1->Interrupt )
  {
    v10[1] |= 1u;
    goto LABEL_24;
  }
  v10[1] |= 2u;
LABEL_24:
  v10[22] = 120;
  v10[23] = 52;
  *(_OWORD *)(v10 + 30) = *(_OWORD *)&a1->PciDeviceCustomProperties.Header.Type;
  *(_OWORD *)(v10 + 34) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxPayloadSize;
  *(_OWORD *)(v10 + 38) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxLinkSpeed;
  v10[42] = a1->PciDeviceCustomProperties.MaxInterruptMessages;
  v10[19] = a1->PciDeviceCustomProperties.PciExpressVersion;
  v10[20] = a1->PciDeviceCustomProperties.InterruptType;
  v10[21] = a1->PciDeviceCustomProperties.MaxInterruptMessages;
  v10[59] = a1->PciDeviceSriovSupport;
  *((_BYTE *)v10 + 240) = a1->S0WakeupSupported;
  v18 = (a1->Flags & 0x10) != 0;
  v10[24] = 172;
  *((_BYTE *)v10 + 241) = v18;
  v10[25] = 20;
  *(_OWORD *)(v10 + 43) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  v10[47] = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  if ( ndisIsRssEnabledForMiniport(a1) )
  {
    v10[26] = 192;
    v10[27] = 44;
    CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
    *((_OWORD *)v10 + 12) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
    *((_OWORD *)v10 + 13) = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
    *((_QWORD *)v10 + 28) = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
    v10[58] = CombinedNdisRSSParameters->DefaultProcessorNumber;
    v11 += a1->CombinedNdisRSSParameters->HashSecretKeySize + a1->CombinedNdisRSSParameters->IndirectionTableSize;
    v10[2] = v11;
    if ( v8 < v11 )
    {
      v10[52] = 0;
      v10[54] = 0;
    }
    else
    {
      v10[54] = v9 - 192;
      memmove(
        (char *)v10 + v9,
        &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
        a1->CombinedNdisRSSParameters->HashSecretKeySize);
      v20 = a1->CombinedNdisRSSParameters->HashSecretKeySize + v9;
      v10[52] = v20 - 192;
      memmove(
        (char *)v10 + v20,
        &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
        a1->CombinedNdisRSSParameters->IndirectionTableSize);
      v9 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v20;
    }
  }
  else
  {
    v10[1] |= 0x40u;
  }
  Size = 0LL;
  RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
  PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                             NonPagedPoolNx,
                                                             Size,
                                                             0x2020444Eu,
                                                             LowPoolPriority);
  v22 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    RssProcessorInformation = NdisGetRssProcessorInformation(a1, PoolWithTagPriority, &Size);
    if ( RssProcessorInformation >= 0 )
    {
      v10[28] = 248;
      v10[29] = 40;
      *(_OWORD *)(v10 + 62) = *(_OWORD *)&v22->Header.Type;
      *(_OWORD *)(v10 + 66) = *(_OWORD *)&v22->PreferredNumaNode;
      *((_QWORD *)v10 + 35) = *(_QWORD *)&v22[1].Header.Type;
      v23 = v22->RssProcessorCount * v22->RssProcessorEntrySize + v11;
      v10[2] = v23;
      if ( v8 < v23 )
      {
        v10[67] = 0;
      }
      else
      {
        v10[67] = v9 - 248;
        memmove(
          (char *)v10 + v9,
          &v22->Header.Type + v22->RssProcessorArrayOffset,
          v22->RssProcessorCount * v22->RssProcessorEntrySize);
        v9 += v22->RssProcessorCount * v22->RssProcessorEntrySize;
      }
    }
    ExFreePoolWithTag(v22, 0x2020444Eu);
  }
  a2[7] = v9;
  return (unsigned int)RssProcessorInformation;
}
