/*
 * XREFs of ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007B0DC
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 * Callees:
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C006C0FC (ndisIovFindVPortByVPortIdInternal.c)
 *     WPP_SF_dddDL @ 0x1C007BF40 (WPP_SF_dddDL.c)
 *     WPP_SF_dddd @ 0x1C007BFA8 (WPP_SF_dddd_ea_1C007BFA8.c)
 */

void __fastcall ndisRssV2UpdateIndirectionTable(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _DWORD *InformationBuffer; // rax
  __int64 *v4; // r15
  int v5; // ecx
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rbx
  __int64 *v7; // r12
  unsigned __int16 v8; // r14
  char *v9; // rdi
  unsigned int v10; // r11d
  unsigned int v11; // r10d
  __int64 *VPortByVPortIdInternal; // rax
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-10h]
  _PROCESSOR_NUMBER v18; // [rsp+98h] [rbp+48h]
  int v19; // [rsp+A0h] [rbp+50h]
  unsigned int v20; // [rsp+A8h] [rbp+58h]

  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v4 = 0LL;
  v5 = -1;
  CombinedNdisRSSParameters = 0LL;
  v19 = -1;
  v7 = 0LL;
  v8 = 0;
  v9 = (char *)InformationBuffer + (unsigned int)InformationBuffer[3];
  v20 = InformationBuffer[4];
  if ( v20 )
  {
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)&v9[24 * v8 + 4];
      if ( v11 != v5 )
      {
        if ( v11 )
        {
          v19 = *(_DWORD *)&v9[24 * v8 + 4];
          VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal((__int64)a1, v11);
          v4 = VPortByVPortIdInternal;
          if ( VPortByVPortIdInternal )
            CombinedNdisRSSParameters = (_NDIS_RECEIVE_SCALE_PARAMETERS *)VPortByVPortIdInternal[112];
          else
            CombinedNdisRSSParameters = 0LL;
        }
        else
        {
          if ( !v7 )
            v7 = ndisIovFindVPortByVPortIdInternal((__int64)a1, 0);
          CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        }
      }
      if ( CombinedNdisRSSParameters )
      {
        v13 = *(_DWORD *)&v9[24 * v8 + 20];
        v14 = *(unsigned int *)&v9[24 * v8 + 8];
        v15 = *(unsigned __int16 *)&v9[24 * v8 + 12];
        v18 = *(_PROCESSOR_NUMBER *)&v9[24 * v8 + 14];
        v18.Reserved = 0;
        if ( v13 )
        {
          if ( (unsigned __int8)byte_1C0098752 >= 2u )
            WPP_SF_dddDL(14LL, v14, v11, v10, (unsigned __int16)v15, v14, v13);
        }
        else if ( (v14 & 2) != 0 )
        {
          CombinedNdisRSSParameters->DefaultProcessorNumber = v18;
        }
        else if ( (v14 & 1) != 0 )
        {
          *((_QWORD *)&v17 + 1) = v18.Group;
          *(_QWORD *)&v17 = 1LL << v18.Number;
          if ( v11 )
            *(_OWORD *)(v4 + 83) = v17;
          else
            *(_OWORD *)(v7 + 83) = v17;
        }
        else if ( (unsigned __int16)v15 >= (unsigned int)(CombinedNdisRSSParameters->IndirectionTableSize >> 2) )
        {
          if ( (unsigned __int8)byte_1C0098752 >= 2u )
          {
            LODWORD(v16) = (unsigned __int16)v15;
            WPP_SF_dddd(v15, (unsigned __int16)v15, v11, v10, v16, CombinedNdisRSSParameters->IndirectionTableSize >> 2);
          }
          *(_DWORD *)&v9[24 * v8 + 20] = -1073741811;
        }
        else
        {
          *(_PROCESSOR_NUMBER *)((char *)&CombinedNdisRSSParameters->Header
                               + 4 * (unsigned __int16)v15
                               + CombinedNdisRSSParameters->IndirectionTableOffset) = v18;
        }
      }
      else
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          a1->pAdapterInstanceName,
          "OID_GEN_RSS_SET_INDIRECTION_TABLE_ENTRIES issued for non-existing vPort");
        if ( !*(_DWORD *)&v9[24 * v8 + 20] )
          *(_DWORD *)&v9[24 * v8 + 20] = -1073741436;
      }
      v5 = v19;
      v10 = ++v8;
    }
    while ( v8 < v20 );
  }
}
