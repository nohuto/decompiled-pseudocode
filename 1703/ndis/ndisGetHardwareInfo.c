/*
 * XREFs of ndisGetHardwareInfo @ 0x1C00DCDAC
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C001E800 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisGetHardwareInfo(char *NdisHandle, _QWORD *a2, _DWORD *a3)
{
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  NDIS_STATUS RssProcessorInformation; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  _DWORD *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  unsigned int i; // r9d
  __int64 v16; // rcx
  int v17; // ecx
  bool v18; // al
  __int64 v19; // rax
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
  *((_BYTE *)v10 + 12) = NdisHandle[32];
  *((_BYTE *)v10 + 13) = NdisHandle[33];
  *((_WORD *)v10 + 7) = *(_WORD *)(*((_QWORD *)NdisHandle + 473) + 482LL);
  *((_WORD *)v10 + 8) = *(_WORD *)(*((_QWORD *)NdisHandle + 473) + 480LL);
  v12 = *((_QWORD *)NdisHandle + 98);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 192) )
    {
      v11 = 8 * *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL) + 1320;
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
  if ( v12 )
  {
    *((_OWORD *)v10 + 2) = *(_OWORD *)(NdisHandle + 3640);
    *((_QWORD *)v10 + 6) = *((_QWORD *)NdisHandle + 457);
    *((_QWORD *)v10 + 7) = *((_QWORD *)NdisHandle + 458);
    v10[16] = *((_DWORD *)NdisHandle + 918);
    if ( *(_BYTE *)(v12 + 192) )
    {
      v13 = v10[1] | 4;
      v10[1] = v13;
      if ( *(_BYTE *)(v12 + 193) )
      {
        v10[7] = *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL);
        v10[1] = v13 | 8;
        if ( v6 )
        {
          v14 = *(_QWORD *)(v12 + 120);
          for ( i = 0; i < *(_DWORD *)(v14 + 4); v14 = *(_QWORD *)(v12 + 120) )
          {
            v16 = i++;
            *(_QWORD *)&v6[2 * v16] = *(_QWORD *)(v14 + 48 * v16 + 16);
          }
        }
        if ( NdisHandle[3664] == 17 )
        {
          v17 = v10[1] | 0x10;
          v10[1] = v17;
          v10[6] = (*((_WORD *)NdisHandle + 1833) & 0x7FF) + 1;
          if ( *((__int16 *)NdisHandle + 1833) < 0 )
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
  else if ( !*((_QWORD *)NdisHandle + 14) )
  {
    v10[1] |= 1u;
    goto LABEL_24;
  }
  v10[1] |= 2u;
LABEL_24:
  v10[22] = 120;
  v10[23] = 52;
  *(_OWORD *)(v10 + 30) = *(_OWORD *)(NdisHandle + 3352);
  *(_OWORD *)(v10 + 34) = *(_OWORD *)(NdisHandle + 3368);
  *(_OWORD *)(v10 + 38) = *(_OWORD *)(NdisHandle + 3384);
  v10[42] = *((_DWORD *)NdisHandle + 850);
  v10[19] = *((_DWORD *)NdisHandle + 848);
  v10[20] = *((_DWORD *)NdisHandle + 849);
  v10[21] = *((_DWORD *)NdisHandle + 850);
  v10[59] = *((_DWORD *)NdisHandle + 922);
  *((_BYTE *)v10 + 240) = NdisHandle[1288];
  v18 = (NdisHandle[120] & 0x10) != 0;
  v10[24] = 172;
  *((_BYTE *)v10 + 241) = v18;
  v10[25] = 20;
  *(_OWORD *)(v10 + 43) = *(_OWORD *)(NdisHandle + 2696);
  v10[47] = *((_DWORD *)NdisHandle + 678);
  if ( *((_QWORD *)NdisHandle + 69) )
  {
    v10[26] = 192;
    v10[27] = 44;
    v19 = *((_QWORD *)NdisHandle + 69);
    *((_OWORD *)v10 + 12) = *(_OWORD *)v19;
    *((_OWORD *)v10 + 13) = *(_OWORD *)(v19 + 16);
    *((_QWORD *)v10 + 28) = *(_QWORD *)(v19 + 32);
    v10[58] = *(_DWORD *)(v19 + 40);
    v11 += *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL)
         + *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL);
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
        (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 24LL)),
        *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL));
      v20 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + v9;
      v10[52] = v20 - 192;
      memmove(
        (char *)v10 + v20,
        (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 16LL)),
        *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL));
      v9 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL) + v20;
    }
  }
  else
  {
    v10[1] |= 0x40u;
  }
  Size = 0LL;
  RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, 0LL, &Size);
  PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                             NonPagedPoolNx,
                                                             Size,
                                                             0x2020444Eu,
                                                             LowPoolPriority);
  v22 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, PoolWithTagPriority, &Size);
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
