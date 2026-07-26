/*
 * XREFs of ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C007B370
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C234 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C007AF44 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1C007B034 (-ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C007B0C4 (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1C007B8B8 (-ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBE.c)
 */

__int64 __fastcall ndisInternalSetRSSv2IndirectionTable(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int16 a3,
        struct _PROCESSOR_NUMBER *a4,
        struct _PROCESSOR_NUMBER a5,
        unsigned __int16 a6,
        struct _PROCESSOR_NUMBER *a7,
        struct _PROCESSOR_NUMBER *a8)
{
  struct _PROCESSOR_NUMBER *v9; // r15
  _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rsi
  struct _PROCESSOR_NUMBER *v11; // r13
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rax
  struct _PROCESSOR_NUMBER v16; // edi
  struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *p_Param; // rbx
  char Reserved; // r14
  int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned __int16 v24; // cx
  struct _PROCESSOR_NUMBER v26; // ebx
  struct _NDIS_OID_REQUEST *v27; // rdi
  unsigned __int16 v28; // r15
  unsigned int v29; // r8d
  unsigned int v30; // r11d
  struct _PROCESSOR_NUMBER *v31; // r9
  _PROCESSOR_NUMBER v32; // r8d
  struct _PROCESSOR_NUMBER *v33; // r9
  unsigned __int8 v34; // r10
  unsigned int v35; // r11d
  unsigned int Header; // r9d
  unsigned int v37; // r8d
  __int64 NumberOfRssEntries; // r10
  __int64 v39; // rdx
  signed int v40; // eax
  unsigned __int16 v41; // r11
  int v42; // r14d
  unsigned __int16 v43; // r13
  _PROCESSOR_NUMBER v44; // r8d
  unsigned __int8 v45; // r10
  __int16 v46; // r11
  unsigned int v47; // r9d
  unsigned int v48; // r8d
  __int64 v49; // r10
  __int64 v50; // rdx
  unsigned int v51; // [rsp+20h] [rbp-81h]
  struct _PROCESSOR_NUMBER v52; // [rsp+40h] [rbp-61h]
  _PROCESSOR_NUMBER v53; // [rsp+48h] [rbp-59h]
  _PROCESSOR_NUMBER v54; // [rsp+48h] [rbp-59h]
  unsigned __int16 v55[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 v56; // [rsp+58h] [rbp-49h]
  int v57; // [rsp+5Ch] [rbp-45h] BYREF
  struct _PROCESSOR_NUMBER *v58; // [rsp+60h] [rbp-41h]
  struct _NDIS_OID_REQUEST *v59; // [rsp+68h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v60; // [rsp+70h] [rbp-31h]
  struct _PROCESSOR_NUMBER *v61; // [rsp+78h] [rbp-29h]
  struct _PROCESSOR_NUMBER *v62; // [rsp+80h] [rbp-21h]
  _QWORD v63[2]; // [rsp+88h] [rbp-19h] BYREF

  v9 = a7;
  RssV2Context = a1->RssV2Context;
  v11 = a4;
  v56 = a6;
  v62 = a4;
  v12 = 0;
  v57 = 0;
  v63[0] = 0LL;
  v63[1] = 0LL;
  v60 = a1;
  v59 = a2;
  v13 = a3;
  v58 = a7;
  v61 = a8;
  if ( a3 > 0x3Fu )
  {
    v14 = (unsigned __int16)(((unsigned __int16)(a3 - 64) >> 6) + 1);
    do
    {
      v15 = v12++;
      v63[v15] = -1LL;
      v13 -= 64;
      --v14;
    }
    while ( v14 );
  }
  if ( v13 )
    v63[v12] = (1LL << v13) - 1;
  RssV2Context->Command.Param.Header.Revision = 1;
  v16 = a5;
  p_Param = &RssV2Context->Command.Param;
  RssV2Context->Command.Param.Header.Size = 20;
  *(_QWORD *)&RssV2Context->Command.Param.RssEntryTableOffset = 20LL;
  Reserved = 0;
  RssV2Context->Command.Param.Header.Type = 0x80;
  RssV2Context->Command.Param.Flags = 0;
  RssV2Context->Command.Param.RssEntrySize = 24;
  v52 = a5;
  v52.Reserved = 0;
  if ( !ndisAreProcessorsEqual(a5, *a8) )
  {
    v22 = *(_DWORD *)(v20 + 236);
    v23 = *(_DWORD *)(v20 + 240);
    *(_DWORD *)v55 = v19;
    RssV2Context->Command.Entry[0].SwitchId = v22;
    HIBYTE(v55[1]) = v21;
    RssV2Context->Command.Entry[0].TargetProcessorNumber = *(_PROCESSOR_NUMBER *)v55;
    RssV2Context->Command.Entry[0].Flags = 2;
    RssV2Context->Command.Entry[0].IndirectionTableIndex = v21;
    RssV2Context->Command.Entry[0].VPortId = v23;
    RssV2Context->Command.Entry[0].EntryStatus = v21;
    RssV2Context->Command.Param.NumberOfRssEntries = 1;
  }
LABEL_8:
  v24 = v21;
  do
  {
    if ( v63[v24] != v21 )
    {
      v26 = v52;
      v27 = v59;
      v55[0] = -1;
      while ( ndisEntrySetScanForward(v55, (struct _NDIS_RSS_ENTRY_SET *)v63) )
      {
        v28 = v55[0];
        if ( Reserved == 1 )
        {
          Reserved = 0;
          v52 = v11[v55[0]];
          v52.Reserved = 0;
          v26 = v52;
          RssV2Context->Command.Param.NumberOfRssEntries = 0;
        }
        if ( ndisAreProcessorsEqual(v26, v11[v28]) )
        {
          v30 = v56;
          v31 = v58;
          v63[(unsigned __int64)v29 >> 6] &= ~(1LL << (v29 & 0x3F));
          if ( !ndisAreProcessorsEqual(v31[v28 % v30], v26) )
          {
            Header = (unsigned int)v27[1].Header;
            v53 = v32;
            v37 = *(_DWORD *)(&v27->Reserved2 + 1);
            v53.Reserved = v34;
            NumberOfRssEntries = RssV2Context->Command.Param.NumberOfRssEntries;
            v39 = NumberOfRssEntries;
            RssV2Context->Command.Entry[v39].EntryStatus = 0;
            RssV2Context->Command.Entry[NumberOfRssEntries].Flags = 0;
            RssV2Context->Command.Entry[v39].TargetProcessorNumber = v53;
            RssV2Context->Command.Entry[v39].VPortId = Header;
            v33 = v58;
            RssV2Context->Command.Entry[v39].IndirectionTableIndex = v28;
            RssV2Context->Command.Entry[v39].SwitchId = v37;
            RssV2Context->Command.Param.NumberOfRssEntries = NumberOfRssEntries + 1;
          }
          if ( v56 > a3 )
          {
            v40 = v35 / a3;
            v41 = 1;
            if ( v40 > 1 )
            {
              v42 = v40;
              do
              {
                v43 = v28 + v41 * a3;
                if ( !ndisAreProcessorsEqual(v33[v43], v26) )
                {
                  v47 = (unsigned int)v27[1].Header;
                  v54 = v44;
                  v48 = *(_DWORD *)(&v27->Reserved2 + 1);
                  v54.Reserved = v45;
                  v49 = RssV2Context->Command.Param.NumberOfRssEntries;
                  v50 = v49;
                  RssV2Context->Command.Entry[v50].EntryStatus = 0;
                  RssV2Context->Command.Entry[v49].Flags = 0;
                  RssV2Context->Command.Entry[v50].TargetProcessorNumber = v54;
                  RssV2Context->Command.Entry[v50].VPortId = v47;
                  v33 = v58;
                  RssV2Context->Command.Entry[v50].IndirectionTableIndex = v43;
                  RssV2Context->Command.Entry[v50].SwitchId = v48;
                  RssV2Context->Command.Param.NumberOfRssEntries = v49 + 1;
                }
                v41 = v46 + 1;
              }
              while ( v41 < v42 );
              Reserved = v52.Reserved;
              v11 = v62;
            }
          }
        }
      }
      ndisExecuteRSSv2DirectOid(v60, v27, RssV2Context, v26);
      v9 = v58;
      v16 = a5;
      p_Param = &RssV2Context->Command.Param;
      ndisMergeRSSv2DirectOidResults(&RssV2Context->Command.Param, a3, v11, a5, v51, v58, v61, &v57);
      v21 = 0LL;
      Reserved = 1;
      v52.Reserved = 1;
      goto LABEL_8;
    }
    ++v24;
  }
  while ( v24 < 2u );
  if ( !Reserved )
  {
    ndisExecuteRSSv2DirectOid(v60, v59, RssV2Context, v52);
    ndisMergeRSSv2DirectOidResults(p_Param, a3, v11, v16, v51, v9, v61, &v57);
  }
  return (unsigned int)v57;
}
