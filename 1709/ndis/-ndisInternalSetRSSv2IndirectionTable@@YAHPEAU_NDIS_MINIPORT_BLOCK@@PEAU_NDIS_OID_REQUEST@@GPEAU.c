/*
 * XREFs of ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C007A520
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B338 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C007A0B4 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1C007A1E0 (-ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C007A270 (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1C007AAD8 (-ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBE.c)
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
  _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rsi
  struct _PROCESSOR_NUMBER *v10; // r15
  struct _NDIS_OID_REQUEST *v11; // r12
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rax
  struct _PROCESSOR_NUMBER v16; // edi
  struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *p_Param; // rbx
  char Reserved; // r14
  int v19; // r8d
  unsigned int v20; // r10d
  __int64 v21; // r11
  unsigned int v22; // eax
  unsigned int Header; // ecx
  unsigned __int16 v24; // cx
  struct _PROCESSOR_NUMBER v26; // ebx
  unsigned __int16 v27; // di
  unsigned __int16 v28; // r15
  struct _PROCESSOR_NUMBER v29; // ecx
  unsigned int v30; // r8d
  struct _PROCESSOR_NUMBER *v31; // r9
  _PROCESSOR_NUMBER v32; // r8d
  struct _PROCESSOR_NUMBER *v33; // r9
  int v34; // r10d
  unsigned int v35; // r11d
  __int64 NumberOfRssEntries; // r10
  unsigned int v37; // r9d
  unsigned int v38; // r8d
  __int64 v39; // rdx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned __int16 v42; // r11
  signed int v43; // eax
  struct _NDIS_OID_REQUEST *v44; // r14
  int v45; // edi
  unsigned __int16 v46; // r12
  _PROCESSOR_NUMBER v47; // r8d
  __int16 v48; // r10
  __int16 v49; // r11
  __int64 v50; // r10
  unsigned int v51; // r8d
  __int64 v52; // rdx
  unsigned int v53; // eax
  unsigned int v54; // [rsp+20h] [rbp-81h]
  struct _PROCESSOR_NUMBER v55; // [rsp+40h] [rbp-61h]
  _PROCESSOR_NUMBER v56; // [rsp+48h] [rbp-59h]
  _PROCESSOR_NUMBER v57; // [rsp+48h] [rbp-59h]
  unsigned __int16 v58[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 v59; // [rsp+58h] [rbp-49h]
  int v60; // [rsp+5Ch] [rbp-45h] BYREF
  struct _PROCESSOR_NUMBER *v61; // [rsp+60h] [rbp-41h]
  struct _PROCESSOR_NUMBER *v62; // [rsp+68h] [rbp-39h]
  struct _NDIS_OID_REQUEST *v63; // [rsp+70h] [rbp-31h]
  struct _NDIS_MINIPORT_BLOCK *v64; // [rsp+78h] [rbp-29h]
  struct _PROCESSOR_NUMBER *v65; // [rsp+80h] [rbp-21h]
  _QWORD v66[2]; // [rsp+88h] [rbp-19h] BYREF

  RssV2Context = a1->RssV2Context;
  v59 = a6;
  v10 = a4;
  v11 = a2;
  v61 = a7;
  v62 = a4;
  v12 = 0;
  v66[0] = 0LL;
  v66[1] = 0LL;
  v64 = a1;
  v13 = a3;
  v63 = a2;
  v65 = a8;
  v60 = 0;
  if ( a3 > 0x3Fu )
  {
    v14 = (unsigned __int16)(((unsigned __int16)(a3 - 64) >> 6) + 1);
    do
    {
      v15 = v12++;
      v66[v15] = -1LL;
      v13 -= 64;
      --v14;
    }
    while ( v14 );
  }
  if ( v13 )
    v66[v12] = (1LL << v13) - 1;
  v16 = a5;
  p_Param = &RssV2Context->Command.Param;
  RssV2Context->Command.Param.Header.Type = 0x80;
  RssV2Context->Command.Param.Header.Size = 20;
  *(_QWORD *)&RssV2Context->Command.Param.RssEntryTableOffset = 20LL;
  Reserved = 0;
  RssV2Context->Command.Param.Header.Revision = 1;
  RssV2Context->Command.Param.Flags = 0;
  RssV2Context->Command.Param.RssEntrySize = 24;
  v55 = a5;
  v55.Reserved = 0;
  if ( !ndisAreProcessorsEqual(a5, *a8) )
  {
    v22 = *(_DWORD *)(&v11->Reserved2 + 1);
    Header = (unsigned int)v11[1].Header;
    *(_DWORD *)v58 = v19;
    RssV2Context->Command.Entry[0].SwitchId = v22;
    HIBYTE(v58[1]) = v21;
    RssV2Context->Command.Entry[0].TargetProcessorNumber = *(_PROCESSOR_NUMBER *)v58;
    RssV2Context->Command.Entry[0].Flags = 2;
    RssV2Context->Command.Entry[0].IndirectionTableIndex = v21;
    RssV2Context->Command.Entry[0].VPortId = Header;
    RssV2Context->Command.Entry[0].EntryStatus = v21;
    RssV2Context->Command.Param.NumberOfRssEntries = v20;
  }
LABEL_8:
  v24 = v21;
  do
  {
    if ( v66[v24] != v21 )
    {
      v26 = v55;
      v58[0] = -1;
LABEL_15:
      v27 = v59;
      while ( ndisEntrySetScanForward(v58, (struct _NDIS_RSS_ENTRY_SET *)v66) )
      {
        v28 = v58[0];
        if ( Reserved == 1 )
        {
          Reserved = 0;
          v29 = v62[v58[0]];
          RssV2Context->Command.Param.NumberOfRssEntries = 0;
          v55 = v29;
          v55.Reserved = 0;
          v26 = v55;
        }
        if ( ndisAreProcessorsEqual(v26, v62[v28]) )
        {
          v31 = v61;
          v66[(unsigned __int64)v30 >> 6] &= ~(1LL << (v30 & 0x3F));
          if ( !ndisAreProcessorsEqual(v31[v28 % (unsigned int)v27], v26) )
          {
            NumberOfRssEntries = RssV2Context->Command.Param.NumberOfRssEntries;
            v37 = (unsigned int)v11[1].Header;
            v56 = v32;
            v38 = *(_DWORD *)(&v11->Reserved2 + 1);
            v39 = NumberOfRssEntries;
            v56.Reserved = 0;
            RssV2Context->Command.Entry[NumberOfRssEntries].Flags = 0;
            RssV2Context->Command.Entry[v39].EntryStatus = 0;
            RssV2Context->Command.Entry[v39].TargetProcessorNumber = v56;
            v40 = NumberOfRssEntries + 1;
            RssV2Context->Command.Entry[v39].VPortId = v37;
            v34 = 1;
            v33 = v61;
            RssV2Context->Command.Entry[v39].IndirectionTableIndex = v28;
            RssV2Context->Command.Entry[v39].SwitchId = v38;
            RssV2Context->Command.Param.NumberOfRssEntries = v40;
          }
          if ( v27 > a3 )
          {
            v41 = v35;
            v42 = v34;
            v43 = v41 / a3;
            if ( v43 > v34 )
            {
              v44 = v63;
              v45 = v43;
              do
              {
                v46 = v28 + v42 * a3;
                if ( !ndisAreProcessorsEqual(v33[v46], v26) )
                {
                  v50 = RssV2Context->Command.Param.NumberOfRssEntries;
                  v57 = v47;
                  v51 = *(_DWORD *)(&v44->Reserved2 + 1);
                  v52 = v50;
                  v57.Reserved = 0;
                  RssV2Context->Command.Entry[v52].VPortId = (unsigned int)v44[1].Header;
                  RssV2Context->Command.Entry[v50].Flags = 0;
                  RssV2Context->Command.Entry[v52].EntryStatus = 0;
                  v33 = v61;
                  RssV2Context->Command.Entry[v52].TargetProcessorNumber = v57;
                  v53 = v50 + 1;
                  RssV2Context->Command.Entry[v52].IndirectionTableIndex = v46;
                  v48 = 1;
                  RssV2Context->Command.Entry[v52].SwitchId = v51;
                  RssV2Context->Command.Param.NumberOfRssEntries = v53;
                }
                v42 = v48 + v49;
              }
              while ( v42 < v45 );
              Reserved = v55.Reserved;
              v11 = v63;
              goto LABEL_15;
            }
          }
        }
      }
      ndisExecuteRSSv2DirectOid(v64, v11, RssV2Context, v26);
      v10 = v62;
      v16 = a5;
      p_Param = &RssV2Context->Command.Param;
      ndisMergeRSSv2DirectOidResults(&RssV2Context->Command.Param, a3, v62, a5, v54, v61, v65, &v60);
      LOWORD(v20) = 1;
      v21 = 0LL;
      Reserved = 1;
      v55.Reserved = 1;
      goto LABEL_8;
    }
    v24 += v20;
  }
  while ( v24 < 2u );
  if ( !Reserved )
  {
    ndisExecuteRSSv2DirectOid(v64, v11, RssV2Context, v55);
    ndisMergeRSSv2DirectOidResults(p_Param, a3, v10, v16, v54, v61, v65, &v60);
  }
  return (unsigned int)v60;
}
