/*
 * XREFs of ?ndisUpdateRssV1ParametersFromV2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS_V2@@2@Z @ 0x1C007BD14
 * Callers:
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007ABE4 (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     ?ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z @ 0x1C007A118 (-ndisCreateRssV1Parameters@@YAXPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@KK@Z.c)
 */

void __fastcall ndisUpdateRssV1ParametersFromV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_VPORT_BLOCK *a2,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS_V2 *a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS *a5)
{
  int v8; // r8d
  unsigned __int16 v9; // dx
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // bp
  __int64 v14; // rdx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v15; // rcx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v16; // rax
  __int128 v17; // xmm1
  unsigned __int16 HashSecretKeySize; // ax
  unsigned int NumberOfProcessorMasks; // ecx
  UCHAR *v20; // rdx
  UCHAR *v21; // rdi
  unsigned int v22; // r9d
  char *v23; // r8
  signed int v24; // edx

  v8 = *((_DWORD *)a4 + 1);
  if ( (v8 & 1) != 0 )
  {
    v9 = ~(_BYTE)v8 & 2 | 8;
    if ( (v8 & 4) != 0 )
      v9 = ~(_BYTE)v8 & 2;
    if ( (v8 & 0x10) == 0 )
      v9 |= 4u;
  }
  else
  {
    v9 = 16;
  }
  a3->Flags = v9;
  if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    a2->VPortParams.NumQueuePairs = *((_DWORD *)a4 + 5);
  v10 = *((_DWORD *)a4 + 1);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) != 0 )
      a3->HashInformation = *((_DWORD *)a4 + 2);
    if ( (*((_DWORD *)a4 + 1) & 4) != 0 )
    {
      v11 = *((_DWORD *)a4 + 3);
      if ( v11 )
        memmove(&a3->Header.Type + a3->HashSecretKeyOffset, (char *)a4 + *((unsigned int *)a4 + 4), v11);
    }
  }
  if ( (*((_DWORD *)a4 + 1) & 0x10) != 0 )
  {
    v12 = *((_WORD *)a4 + 12);
    v13 = a3->IndirectionTableSize >> 2;
    if ( v12 != v13 )
    {
      v14 = 7LL;
      v15 = a5;
      v16 = a3;
      do
      {
        *(_OWORD *)&v15->Header.Type = *(_OWORD *)&v16->Header.Type;
        *(_OWORD *)&v15->IndirectionTableOffset = *(_OWORD *)&v16->IndirectionTableOffset;
        *(_OWORD *)&v15->NumberOfProcessorMasks = *(_OWORD *)&v16->NumberOfProcessorMasks;
        *(_OWORD *)&v15[1].Flags = *(_OWORD *)&v16[1].Flags;
        *(_OWORD *)&v15[1].HashSecretKeySize = *(_OWORD *)&v16[1].HashSecretKeySize;
        *(_OWORD *)&v15[1].ProcessorMasksEntrySize = *(_OWORD *)&v16[1].ProcessorMasksEntrySize;
        *(_OWORD *)&v15[2].HashInformation = *(_OWORD *)&v16[2].HashInformation;
        v15 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v15 + 128);
        v17 = *(_OWORD *)&v16[2].HashSecretKeyOffset;
        v16 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)((char *)v16 + 128);
        *(_OWORD *)&v15[-1].ProcessorMasksOffset = v17;
        --v14;
      }
      while ( v14 );
      *(_OWORD *)&v15->Header.Type = *(_OWORD *)&v16->Header.Type;
      v15->IndirectionTableOffset = v16->IndirectionTableOffset;
      ndisCreateRssV1Parameters(a3, *((_DWORD *)a4 + 6), a5->NumberOfProcessorMasks);
      a3->Flags = a5->Flags;
      a3->BaseCpuNumber = a5->BaseCpuNumber;
      a3->HashInformation = a5->HashInformation;
      a3->DefaultProcessorNumber = a5->DefaultProcessorNumber;
      HashSecretKeySize = a5->HashSecretKeySize;
      if ( HashSecretKeySize )
        memmove(
          &a3->Header.Type + a3->HashSecretKeyOffset,
          &a5->Header.Type + a5->HashSecretKeyOffset,
          HashSecretKeySize);
      NumberOfProcessorMasks = a5->NumberOfProcessorMasks;
      if ( NumberOfProcessorMasks )
        memmove(
          &a3->Header.Type + a3->ProcessorMasksOffset,
          &a5->Header.Type + a5->ProcessorMasksOffset,
          NumberOfProcessorMasks * a5->ProcessorMasksEntrySize);
      if ( v12 )
      {
        v20 = &a5->Header.Type + a5->IndirectionTableOffset;
        v21 = &a3->Header.Type + a3->IndirectionTableOffset;
        if ( v21 <= v20 )
        {
          memmove(v21, v20, 4LL * v12);
        }
        else
        {
          memmove(v21, v20, 4LL * v13);
          if ( v13 < v12 )
          {
            v22 = v13;
            v23 = (char *)&v21[4 * v13];
            do
            {
              v24 = v13++ % v22;
              *(_DWORD *)v23 = *(_DWORD *)&v21[4 * v24];
              v23 += 4;
            }
            while ( v13 < v12 );
          }
        }
      }
    }
  }
}
