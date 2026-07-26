/*
 * XREFs of ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C00
 * Callers:
 *     ndisMFakeSendNetBufferLists @ 0x1C0022E10 (ndisMFakeSendNetBufferLists.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003840 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012B34 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  __int64 v4; // rdx
  struct _NDIS_OPEN_BLOCK *v5; // r13
  struct _NDIS_OPEN_BLOCK *v6; // r12
  _QWORD *p_Alignment; // r14
  _QWORD *v8; // r15
  struct _NET_BUFFER_LIST *v9; // rbx
  unsigned int v10; // eax
  $2BD28CA71EA32E8609769484057EA25E *FirstNetBuffer; // rcx
  unsigned int v12; // r12d
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rdi
  char v15; // r12
  unsigned __int64 NblTracker; // rdi
  char v17; // r14
  char v18; // bl
  __int64 v19; // r15
  __int64 v20; // r13
  unsigned __int64 v21; // rdi
  struct _NET_BUFFER_LIST *v22; // r14
  __int64 v23; // r12
  void *v24; // rbx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char v30; // [rsp+30h] [rbp-39h] BYREF
  KIRQL v31; // [rsp+31h] [rbp-38h]
  unsigned int v32; // [rsp+34h] [rbp-35h]
  struct NDIS_PCW_CONTEXT v33; // [rsp+38h] [rbp-31h] BYREF
  struct _NET_BUFFER_LIST *v34; // [rsp+50h] [rbp-19h]
  struct _NDIS_OPEN_BLOCK *v35; // [rsp+58h] [rbp-11h]
  void *v36; // [rsp+60h] [rbp-9h]
  struct _NDIS_OPEN_BLOCK *v37; // [rsp+68h] [rbp-1h]
  struct _NET_BUFFER_LIST *v38; // [rsp+70h] [rbp+7h]
  char v42; // [rsp+E8h] [rbp+7Fh] BYREF

  v33.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v4 = a1;
  v33.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v5 = 0LL;
  v6 = 0LL;
  v33.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  p_Alignment = 0LL;
  v37 = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  v32 = 0;
  v33.CurrentCpu = -1;
  v31 = 2;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(68LL, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2);
  v9 = a2;
  if ( (v33.DatapathEventsMask & 0x280) != 0 || (v33.DatapathCyclesMask & 0x200) != 0 )
  {
    v10 = a3;
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
    v31 = KfRaiseIrql(2u);
  }
  v10 = a3;
LABEL_8:
  if ( a2 )
  {
    do
    {
      if ( (v33.DatapathEventsMask & 0x200) != 0 )
      {
        FirstNetBuffer = ($2BD28CA71EA32E8609769484057EA25E *)v9->FirstNetBuffer;
        v12 = 0;
        v32 = 0;
        if ( FirstNetBuffer )
        {
          do
          {
            FirstNetBuffer = ($2BD28CA71EA32E8609769484057EA25E *)FirstNetBuffer->Link.Alignment;
            ++v12;
          }
          while ( FirstNetBuffer );
          v32 = v12;
        }
        v6 = v35;
      }
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v9->SourceHandle;
      Alignment = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
      v9->Link.Alignment = 0LL;
      if ( SourceHandle == v5 )
      {
        *p_Alignment = v9;
        p_Alignment = &v9->Link.Alignment;
      }
      else if ( SourceHandle == v6 )
      {
        *v8 = v9;
        v8 = &v9->Link.Alignment;
      }
      else if ( v5 )
      {
        if ( v6 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v9, v10, &v33);
        }
        else
        {
          v6 = SourceHandle;
          v35 = SourceHandle;
          v38 = v9;
          v8 = &v9->Link.Alignment;
        }
      }
      else
      {
        v5 = SourceHandle;
        v34 = v9;
        p_Alignment = &v9->Link.Alignment;
      }
      v10 = a3;
      v9 = Alignment;
    }
    while ( Alignment );
    v37 = v5;
  }
  if ( ndisNblTrackerMode )
  {
    v15 = 0;
    NblTracker = (unsigned __int64)v5->NblTracker;
    v17 = ndisNblTrackerEpoch;
    v18 = a3 & 1;
    v30 = 0;
    v42 = a3 & 1;
    v19 = 0LL;
    v20 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v34, 0LL, 0x95u, (void *)NblTracker, a3 & 1);
    v21 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
    {
      v36 = *(void **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v21 ^= ((unsigned __int8)v21 ^ (unsigned __int8)(2 * v17)) & 2;
    }
    else
    {
      v36 = (void *)v21;
    }
    v22 = v34;
    if ( v34 )
    {
      v23 = 0LL;
      do
      {
        v24 = v22->NetBufferListInfo[26];
        do
        {
          if ( v22->NetBufferListInfo[26] != v24 )
            break;
          if ( !v24 && !v22->SourceHandle )
            v22->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, v4);
          if ( ((unsigned __int8)v24 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(v22) )
          {
            v22->NetBufferListInfo[26] = (void *)(v21 | 4);
          }
          else if ( v22->SourceHandle != v36 || v22->ParentNetBufferList )
          {
            ++v19;
            v22->NetBufferListInfo[26] = (void *)v21;
          }
          else
          {
            ++v20;
            v22->NetBufferListInfo[26] = (void *)24;
            ++v19;
          }
          v22 = (struct _NET_BUFFER_LIST *)v22->Link.Alignment;
        }
        while ( v22 );
        if ( ((unsigned __int8)v24 & 1) != 0 )
          ndisNblTrackerUpdateOwnershipCount(v24, v23 - v19, &v42, &v30);
        v23 = v19;
      }
      while ( v22 );
      v18 = v42;
      v15 = v30;
    }
    v25 = v19 - v20;
    if ( (v21 & 1) != 0 && v25 )
    {
      if ( !v18 && !v15 )
      {
        v18 = KeGetCurrentIrql() == 2;
        v42 = v18;
      }
      v26 = v21;
      v27 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
      v28 = 2 * ((v26 >> 1) & 1);
      if ( v18 )
      {
        v29 = (_QWORD *)(*(_QWORD *)(v27 + 8 * v28 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v29 += v25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8 * v28 + 48), v25);
      }
    }
  }
  if ( SLOBYTE(v33.DatapathEventsMask) < 0 )
  {
    if ( v33.CurrentCpu == -1 )
      v33.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v33.PcwBlock->DatapathEventReferences[14]
                + v33.CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v33.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(&v33, 9u);
  v37->ProtSendNetBufferListsComplete(v37->SendCompleteNetBufferListsContext, v34, a3);
  if ( (v33.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(&v33, 9u, 0x16uLL);
  if ( v35 )
    ndisMSendCompleteNetBufferListsToOpen(v35, v38, a3, &v33);
  if ( (v33.DatapathEventsMask & 0x200) != 0 )
  {
    if ( v33.CurrentCpu == -1 )
      v33.CurrentCpu = KeGetPcr()->Prcb.Number;
    *(_QWORD *)((char *)&v33.PcwBlock->DatapathEventReferences[18]
              + v33.CurrentCpu * ndisPcwPerCpuDataStride
              + ndisPcwOffsetToPerCpuData) += v32;
  }
  if ( v31 != 2 )
    KeLowerIrql(v31);
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(69LL, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2);
}
