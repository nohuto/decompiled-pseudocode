/*
 * XREFs of ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C80
 * Callers:
 *     ndisMFakeSendNetBufferLists @ 0x1C00600C0 (ndisMFakeSendNetBufferLists.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002234 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  _NDIS_PCW_DATA_BLOCK *v3; // rax
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  unsigned int v5; // edi
  struct _NDIS_OPEN_BLOCK *v6; // r12
  unsigned int v7; // r14d
  _QWORD *p_Alignment; // r9
  _QWORD *v9; // r11
  struct _NET_BUFFER_LIST *v10; // r13
  unsigned int Number; // r15d
  unsigned int v12; // r10d
  struct _NET_BUFFER_LIST *v13; // r8
  struct _NET_BUFFER_LIST *v14; // rbx
  KIRQL v15; // r14
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *v17; // rdi
  unsigned int v18; // r11d
  _SLIST_HEADER *Alignment; // rcx
  _QWORD *Region; // rax
  int i; // edx
  char v22; // r8
  __int64 v23; // rdx
  unsigned __int64 NblTracker; // rbx
  struct _NET_BUFFER_LIST *v25; // r11
  struct _NET_BUFFER_LIST *v26; // r9
  bool v27; // di
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int8 *v30; // r8
  _SLIST_HEADER *v31; // r12
  unsigned __int64 v32; // rdi
  unsigned __int8 *v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  KIRQL v40; // al
  bool v41[8]; // [rsp+30h] [rbp-39h] BYREF
  struct _NET_BUFFER_LIST *v42; // [rsp+38h] [rbp-31h]
  struct _NET_BUFFER_LIST *v43; // [rsp+40h] [rbp-29h]
  unsigned __int64 v44; // [rsp+48h] [rbp-21h]
  struct NDIS_PCW_CONTEXT v45; // [rsp+50h] [rbp-19h] BYREF
  struct _NET_BUFFER_LIST *v46; // [rsp+68h] [rbp-1h]
  struct _NDIS_OPEN_BLOCK *v47; // [rsp+70h] [rbp+7h]
  struct _NET_BUFFER_LIST *v48; // [rsp+78h] [rbp+Fh]
  unsigned __int8 v52; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 80);
  p_Alignment = 0LL;
  v9 = 0LL;
  v47 = 0LL;
  v10 = 0LL;
  v43 = 0LL;
  Number = -1;
  v48 = 0LL;
  v12 = a3;
  v45.CurrentCpu = -1;
  v13 = a2;
  v42 = 0LL;
  v45.PcwBlock = v3;
  v45.DatapathEventsMask = v5;
  v45.DatapathCyclesMask = v7;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
  {
    WPP_SF_qq(68LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
    v13 = a2;
    p_Alignment = 0LL;
    v12 = a3;
    v9 = 0LL;
  }
  v14 = v13;
  if ( (v5 & 0x280) != 0 || (v7 & 0x200) != 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      v15 = 2;
    }
    else
    {
      v40 = KfRaiseIrql(2u);
      v13 = a2;
      p_Alignment = 0LL;
      v12 = a3;
      v9 = 0LL;
      v15 = v40;
    }
    if ( (v45.DatapathEventsMask & 0x200) != 0 )
    {
      v18 = 0;
      Alignment = (_SLIST_HEADER *)v13;
      if ( v13 )
      {
        do
        {
          Region = (_QWORD *)Alignment->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          v18 += i;
        }
        while ( Alignment );
      }
      Number = KeGetPcr()->Prcb.Number;
      v45.CurrentCpu = Number;
      *(_QWORD *)((char *)&v45.PcwBlock->DatapathEventReferences[18]
                + Number * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData) += v18;
      v9 = 0LL;
    }
  }
  else
  {
    v15 = 2;
  }
  if ( v13 )
  {
    do
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v14->SourceHandle;
      v17 = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
      v14->Link.Alignment = 0LL;
      if ( SourceHandle == v4 )
      {
        *p_Alignment = v14;
        p_Alignment = &v14->Link.Alignment;
        v43 = v14;
      }
      else if ( SourceHandle == v6 )
      {
        *v9 = v14;
        v9 = &v14->Link.Alignment;
        v42 = v14;
      }
      else if ( v4 )
      {
        if ( v6 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v14, v12, &v45);
          p_Alignment = &v43->Link.Alignment;
          v12 = a3;
          v9 = &v42->Link.Alignment;
        }
        else
        {
          v6 = SourceHandle;
          v48 = v14;
          v9 = &v14->Link.Alignment;
          v42 = v14;
        }
      }
      else
      {
        v4 = SourceHandle;
        v43 = v14;
        v10 = v14;
        p_Alignment = &v14->Link.Alignment;
      }
      v14 = v17;
    }
    while ( v17 );
    Number = v45.CurrentCpu;
    v47 = v6;
  }
  if ( ndisNblTrackerMode )
  {
    v22 = ndisNblTrackerEpoch;
    v23 = 0LL;
    NblTracker = (unsigned __int64)v4->NblTracker;
    LODWORD(v44) = ndisNblTrackerEpoch;
    v25 = 0LL;
    v26 = 0LL;
    v42 = 0LL;
    v46 = 0LL;
    v27 = (v12 & 1) != 0;
    v43 = 0LL;
    v41[0] = v27;
    v52 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v10, 0LL, 0x95u, (void *)NblTracker, (v12 & 1) != 0);
      v12 = a3;
      v25 = 0LL;
      v23 = v52;
      v26 = 0LL;
      v22 = v44;
    }
    v28 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v28 & 1) != 0 )
    {
      v44 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v29 = 2LL * (v22 & 1);
      v30 = (unsigned __int8 *)v44;
      v28 |= v29;
    }
    else
    {
      v30 = (unsigned __int8 *)v28;
      v44 = v28;
    }
    if ( !v10 )
    {
LABEL_57:
      v35 = (char *)v25 - (char *)v26;
      if ( (v28 & 1) != 0 && v35 )
      {
        if ( !v27 && !(_BYTE)v23 )
        {
          v27 = KeGetCurrentIrql() == 2;
          v41[0] = v27;
        }
        v36 = v28;
        v37 = v28 & 0xFFFFFFFFFFFFFFF8uLL;
        v38 = 2 * ((v36 >> 1) & 1);
        if ( v27 )
        {
          v39 = (_QWORD *)(*(_QWORD *)(v37 + 8 * v38 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v39 += v35;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 8 * v38 + 48), v35);
        }
        Number = v45.CurrentCpu;
      }
      goto LABEL_14;
    }
    v31 = (_SLIST_HEADER *)v10;
LABEL_43:
    v32 = v31[22].Region;
    while ( 1 )
    {
      if ( v31[22].Region != v32 )
      {
LABEL_53:
        if ( (v32 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v32, (char *)v46 - (char *)v25, v41, &v52);
          v30 = (unsigned __int8 *)v44;
          v26 = v43;
        }
        v46 = v25;
        if ( !v31 )
        {
          v27 = v41[0];
          v6 = v47;
          v12 = a3;
          LOBYTE(v23) = v52;
          goto LABEL_57;
        }
        goto LABEL_43;
      }
      if ( !v32 && !v31[7].Region )
        v31[7].Region = ndisSourceHandleFromOwner(0LL, v23, v30, v26);
      if ( (v32 & 4) != 0 )
        goto LABEL_79;
      v33 = (unsigned __int8 *)v31[7].Region;
      if ( v33 )
      {
        v23 = *v33;
        if ( (unsigned __int8)(v23 - 17) <= 1u || (_BYTE)v23 == 5 )
        {
          if ( v33 != v30 || v31[1].Region )
          {
            v25 = (struct _NET_BUFFER_LIST *)((char *)v25 + 1);
            v34 = v28;
            v42 = v25;
          }
          else
          {
            v26 = (struct _NET_BUFFER_LIST *)((char *)v26 + 1);
            v34 = 24LL;
            v25 = (struct _NET_BUFFER_LIST *)((char *)v25 + 1);
            v43 = v26;
            v42 = v25;
          }
          goto LABEL_52;
        }
        if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v31, (unsigned __int8)v23);
          goto LABEL_78;
        }
      }
      else if ( (unsigned __int8)byte_1C0099622 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v31, v26);
LABEL_78:
        v25 = v42;
        v26 = v43;
        v30 = (unsigned __int8 *)v44;
      }
LABEL_79:
      v34 = v28 | 4;
LABEL_52:
      v31[22].Region = v34;
      v31 = (_SLIST_HEADER *)v31->Alignment;
      if ( !v31 )
        goto LABEL_53;
    }
  }
LABEL_14:
  if ( SLOBYTE(v45.DatapathEventsMask) < 0 )
  {
    if ( Number == -1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v45.CurrentCpu = Number;
    }
    ++*(_QWORD *)((char *)&v45.PcwBlock->DatapathEventReferences[14]
                + Number * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v45.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(&v45, 9u);
  v4->ProtSendNetBufferListsComplete(v4->SendCompleteNetBufferListsContext, v10, v12);
  if ( (v45.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(&v45, 9u, 0x16uLL);
  if ( v6 )
    ndisMSendCompleteNetBufferListsToOpen(v6, v48, a3, &v45);
  if ( v15 != 2 )
    KeLowerIrql(v15);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(69LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
}
