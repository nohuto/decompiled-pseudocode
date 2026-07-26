/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001480 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0001824 (ndisIndicateToPmodeOpens.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0002030 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002930 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0068A50 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisReturnNetBufferLists @ 0x1C00051B0 (NdisReturnNetBufferLists.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012B34 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisTraceRcv @ 0x1C0051294 (ndisTraceRcv.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        _QWORD *NdisBindingHandle,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // r9
  unsigned int CurrentCpu; // r12d
  unsigned int Flags; // r8d
  __int64 v8; // r14
  bool v9; // zf
  struct _NET_BUFFER_LIST *v10; // r13
  _QWORD *v11; // rsi
  char v12; // cl
  unsigned int v13; // ebx
  KIRQL v14; // r15
  int v15; // edi
  char v16; // bl
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r15
  unsigned __int64 v20; // rdi
  void *v21; // r13
  struct _NET_BUFFER_LIST *Alignment; // rsi
  __int64 v23; // r12
  void *v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // cl
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  unsigned int v31; // r14d
  __int64 v32; // rbx
  __int16 v33; // ax
  __int64 v34; // rax
  bool v35; // [rsp+30h] [rbp-50h] BYREF
  char v36; // [rsp+31h] [rbp-4Fh] BYREF
  char v37; // [rsp+32h] [rbp-4Eh]
  struct NDIS_PCW_CONTEXT v38; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-30h]
  int v40; // [rsp+54h] [rbp-2Ch]
  __int64 v41; // [rsp+58h] [rbp-28h]
  __int64 Clock; // [rsp+60h] [rbp-20h]

  v5 = NdisBindingHandle[2];
  CurrentCpu = -1;
  Flags = a2->Flags;
  v8 = 0LL;
  v9 = a2->SourceHandle == NdisBindingHandle;
  v10 = a2;
  v11 = NdisBindingHandle;
  v41 = v5;
  v12 = v9;
  v13 = *(_DWORD *)(v5 + 48);
  v38.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v9 = (a2->NblFlags & 0x8000) == 0;
  v14 = 2;
  v38.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  Clock = 0LL;
  v39 = v13;
  v38.DatapathEventsMask = v13;
  v40 = -1;
  v38.CurrentCpu = -1;
  if ( v9 || a2->NetBufferListInfo[5] != v11 )
  {
    if ( v12 != 1 )
      goto LABEL_6;
  }
  else
  {
    v12 = 1;
  }
  if ( (Flags & 0x200) == 0 )
  {
LABEL_11:
    if ( (a5 & 2) == 0 )
      NdisReturnNetBufferLists(v11, a2, a5 & 1);
    return;
  }
LABEL_6:
  if ( *(_BYTE *)(v5 + 1998) && !*((_DWORD *)v11 + 108) || (v11[54] & 0x10000) != 0 && !v12 && (Flags & 0x80u) != 0 )
    goto LABEL_11;
  if ( (_BYTE)dword_1C0093FD8 )
  {
    v37 = 1;
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v37 = 0;
  }
  v15 = a5;
  if ( ndisNblTrackerMode )
  {
    v16 = ndisNblTrackerEpoch;
    v17 = v11[85];
    v18 = a5 & 1;
    v36 = 0;
    v19 = 0LL;
    v35 = a5 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v10, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, (a5 & 2 | 0x108u) >> 1, (void *)v17, v18);
    v20 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
    {
      v21 = *(void **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v16)) & 2;
    }
    else
    {
      v21 = (void *)v20;
    }
    Alignment = a2;
    v23 = 0LL;
    do
    {
      v24 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v24 )
          break;
        if ( !v24 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(32LL, v18);
        if ( ((unsigned __int8)v24 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
        {
          Alignment->NetBufferListInfo[26] = (void *)(v20 | 4);
        }
        else if ( Alignment->SourceHandle != v21 || Alignment->ParentNetBufferList )
        {
          ++v8;
          Alignment->NetBufferListInfo[26] = (void *)v20;
        }
        else
        {
          ++v19;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v8;
        }
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      if ( ((unsigned __int8)v24 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v24, v23 - v8, &v35, &v36);
      v23 = v8;
    }
    while ( Alignment );
    CurrentCpu = v40;
    v25 = v8 - v19;
    if ( (v20 & 1) != 0 && v25 )
    {
      v26 = v35;
      if ( !v35 && !v36 )
      {
        v26 = KeGetCurrentIrql() == 2;
        v35 = v26;
      }
      v11 = NdisBindingHandle;
      v27 = v20;
      v10 = a2;
      v28 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
      v14 = 2;
      v29 = 2 * ((v27 >> 1) & 1);
      if ( v26 )
      {
        CurrentCpu = v38.CurrentCpu;
        LOWORD(v13) = v38.DatapathEventsMask;
        v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v30 += v25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), v25);
        CurrentCpu = v38.CurrentCpu;
        LOWORD(v13) = v38.DatapathEventsMask;
      }
    }
    else
    {
      v10 = a2;
      v14 = 2;
      v11 = NdisBindingHandle;
      LOWORD(v13) = v39;
    }
    v15 = a5;
  }
  if ( (v13 & 0x3014) != 0 || (v38.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v15 & 1) == 0 )
      v14 = KfRaiseIrql(2u);
    if ( (v13 & 4) != 0 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      LOWORD(v13) = v38.DatapathEventsMask;
      v38.CurrentCpu = CurrentCpu;
      ++*(_QWORD *)((char *)&v38.PcwBlock->DatapathEventReferences[4]
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( (v13 & 0x10) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        LOWORD(v13) = v38.DatapathEventsMask;
        v38.CurrentCpu = CurrentCpu;
      }
      v31 = a4;
      *(_QWORD *)((char *)&v38.PcwBlock->DatapathEventReferences[8]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData) += a4;
    }
    else
    {
      v31 = a4;
    }
    if ( (v15 & 2) != 0 )
    {
      if ( (v13 & 0x1000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          LOWORD(v13) = v38.DatapathEventsMask;
          v38.CurrentCpu = CurrentCpu;
        }
        ++*(_QWORD *)((char *)&v38.PcwBlock->TotalInstanceName
                    + CurrentCpu * ndisPcwPerCpuDataStride
                    + ndisPcwOffsetToPerCpuData
                    + 40);
      }
      if ( (v13 & 0x2000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v38.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v38.PcwBlock->TotalInstanceName
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 48) += v31;
      }
    }
    if ( (v38.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v38, 3u);
    }
    else if ( v14 != 2 )
    {
      KeLowerIrql(v14);
    }
  }
  else
  {
    v31 = a4;
  }
  ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))v11[68])(v11[69], v10, a3, v31, v15);
  if ( (v38.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v38, 3u, 0x10uLL);
    if ( v14 != 2 )
      KeLowerIrql(v14);
  }
  v32 = v41;
  if ( (v15 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      v10,
      (struct NDIS_NBL_TRACKER_HANDLE__ *)v11[85],
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v41 + 2544),
      NdisNblTrackerEvent_ProtocolReturnedResources,
      v15 & 1);
  if ( (_BYTE)dword_1C0093FD8 )
    WmiGetClock(0LL, 0LL);
  if ( v37 )
  {
    v33 = *((_WORD *)v11 + 126);
    if ( v33 == -8826 || v33 == 1544 || v33 == 8 )
    {
      v34 = WmiGetClock(0LL, 0LL);
      ndisTraceRcv(v32, v34 - Clock, v31);
    }
  }
}
