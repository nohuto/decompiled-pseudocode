/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C00051B0
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00058A0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // r12
  unsigned int Number; // ebx
  KIRQL v5; // r9
  char v6; // r15
  PNET_BUFFER_LIST v7; // r13
  unsigned int DatapathEventsMask; // edi
  _NDIS_PCW_DATA_BLOCK *PcwBlock; // rsi
  unsigned int v11; // eax
  unsigned int v12; // r8d
  _SLIST_HEADER *Alignment; // rax
  char *v14; // rdx
  char *v15; // rdx
  PNET_BUFFER_LIST v16; // rcx
  __int64 CurrentIrql; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  char v20; // bl
  char v21; // dl
  __int64 v22; // r15
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  void *v25; // r13
  struct _NET_BUFFER_LIST *v26; // rsi
  unsigned __int64 v27; // rbx
  __int64 v28; // r12
  bool v29; // r8
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  _QWORD *v33; // rcx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  _QWORD *v39; // rdi
  void (*v40)(void); // r14
  void *v41; // r15
  struct _NET_BUFFER_LIST **v42; // r12
  _QWORD *v43; // r13
  __int64 v44; // rsi
  char v45; // al
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // r9
  struct _NET_BUFFER_LIST *v49; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-99h]
  unsigned int v51; // [rsp+30h] [rbp-99h]
  KIRQL v52; // [rsp+40h] [rbp-89h]
  KIRQL v53; // [rsp+41h] [rbp-88h]
  struct NDIS_PCW_CONTEXT v54; // [rsp+48h] [rbp-81h] BYREF
  __int64 v55; // [rsp+60h] [rbp-69h]
  __int64 v56; // [rsp+68h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v57; // [rsp+70h] [rbp-59h] BYREF
  __int64 v58; // [rsp+88h] [rbp-41h]
  _QWORD v59[3]; // [rsp+90h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-19h]
  void *v62; // [rsp+B8h] [rbp-11h]
  void (*v63)(void); // [rsp+C0h] [rbp-9h]
  PNET_BUFFER_LIST v64; // [rsp+C8h] [rbp-1h]
  int v65; // [rsp+D0h] [rbp+7h]
  __int64 v66; // [rsp+D4h] [rbp+Bh]
  ULONG v67; // [rsp+DCh] [rbp+13h]
  bool v68; // [rsp+130h] [rbp+67h]
  unsigned int v69; // [rsp+130h] [rbp+67h]
  struct _NET_BUFFER_LIST *v70; // [rsp+138h] [rbp+6Fh]
  char v71; // [rsp+138h] [rbp+6Fh]
  char v73; // [rsp+148h] [rbp+7Fh]

  v70 = NetBufferLists;
  v3 = *((_QWORD *)NdisBindingHandle + 2);
  Number = -1;
  v5 = 2;
  v55 = v3;
  v6 = ReturnFlags;
  v53 = 2;
  v7 = NetBufferLists;
  v54.CurrentCpu = -1;
  DatapathEventsMask = *(_DWORD *)(v3 + 48);
  PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v11 = *(_DWORD *)(v3 + 80);
  v54.PcwBlock = PcwBlock;
  v54.DatapathEventsMask = DatapathEventsMask;
  v54.DatapathCyclesMask = v11;
  if ( (DatapathEventsMask & 0x180028) != 0 || (v11 & 0x10) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v53 = v5;
    }
    if ( (DatapathEventsMask & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      PcwBlock = v54.PcwBlock;
      DatapathEventsMask = v54.DatapathEventsMask;
      v54.CurrentCpu = Number;
      ++*(_QWORD *)((char *)&v54.PcwBlock->DatapathEventReferences[6]
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( !v5 && (DatapathEventsMask & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v54.DatapathEventsMask;
        PcwBlock = v54.PcwBlock;
        v54.CurrentCpu = Number;
      }
      ++*(_QWORD *)((char *)&PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 24);
    }
    if ( (DatapathEventsMask & 0x100020) != 0 )
    {
      v12 = 0;
      Alignment = (_SLIST_HEADER *)v7;
      if ( v7 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v12;
        }
        while ( Alignment );
      }
      if ( (DatapathEventsMask & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v54.DatapathEventsMask;
          PcwBlock = v54.PcwBlock;
          v54.CurrentCpu = Number;
        }
        v14 = (char *)PcwBlock + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData;
        *((_QWORD *)v14 + 5) += v12;
      }
      if ( !v5 && (DatapathEventsMask & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          PcwBlock = v54.PcwBlock;
          v54.CurrentCpu = Number;
        }
        v15 = (char *)PcwBlock + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData;
        *((_QWORD *)v15 + 28) += v12;
      }
    }
    if ( (v54.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v54, 4u);
    }
    else if ( v5 != 2 )
    {
      KeLowerIrql(v5);
    }
  }
  v16 = v7;
  v57.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v57.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v57.DatapathCyclesMask = *(_DWORD *)(v3 + 80);
  v52 = 2;
  for ( v57.CurrentCpu = -1; v16; v16 = (PNET_BUFFER_LIST)v16->Link.Alignment )
    v16->Flags = v16->Flags & 0xFFFFFFF4 | 8;
  CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  if ( *(_DWORD *)(v3 + 3240) )
  {
    CurrentIrql = ndisReturnPeriodicReceives(v3, v7);
    v7 = (PNET_BUFFER_LIST)CurrentIrql;
    v70 = (struct _NET_BUFFER_LIST *)CurrentIrql;
  }
  if ( v7 )
  {
    if ( ndisNblTrackerMode )
    {
      CurrentIrql = *((_QWORD *)NdisBindingHandle + 85);
      v18 = 0LL;
      v19 = *(_QWORD *)(v3 + 2544);
      v20 = ndisNblTrackerEpoch;
      v21 = v6;
      v22 = 0LL;
      v23 = v21 & 1;
      v58 = CurrentIrql;
      v56 = 0LL;
      v73 = 0;
      v68 = v23 & 1;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(v7, (struct NDIS_NBL_TRACKER_HANDLE__ *)CurrentIrql, 0x87u, (void *)v19, v23);
      v24 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v24 & 1) != 0 )
      {
        v25 = *(void **)((v24 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        CurrentIrql = ((unsigned __int8)v24 ^ (unsigned __int8)(2 * v20)) & 2;
        v24 ^= CurrentIrql;
      }
      else
      {
        v25 = (void *)v24;
      }
      v26 = v70;
      do
      {
        v27 = (unsigned __int64)v26->NetBufferListInfo[26];
        v28 = v58;
        do
        {
          if ( v26->NetBufferListInfo[26] != (void *)v27 )
            break;
          if ( !v27 && !v26->SourceHandle )
            v26->SourceHandle = (void *)ndisSourceHandleFromOwner(v28 & 0xFFFFFFFFFFFFFFFDuLL, v23);
          if ( (v27 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(v26) )
          {
            HIDWORD(CurrentIrql) = HIDWORD(v24);
            v26->NetBufferListInfo[26] = (void *)(v24 | 4);
          }
          else if ( v26->SourceHandle != v25 || v26->ParentNetBufferList )
          {
            ++v18;
            v26->NetBufferListInfo[26] = (void *)v24;
          }
          else
          {
            ++v22;
            v26->NetBufferListInfo[26] = (void *)24;
            ++v18;
          }
          v26 = (struct _NET_BUFFER_LIST *)v26->Link.Alignment;
        }
        while ( v26 );
        v29 = v68;
        v30 = v56 - v18;
        if ( (v27 & 1) != 0 && v30 )
        {
          if ( !v68 && !v73 )
          {
            v73 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v29 = (_BYTE)CurrentIrql == 2;
            v68 = (_BYTE)CurrentIrql == 2;
          }
          v31 = v27;
          v32 = v27 & 0xFFFFFFFFFFFFFFF8uLL;
          v23 = 2 * ((v31 >> 1) & 1);
          if ( v29 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v33 = (_QWORD *)(*(_QWORD *)(v32 + 8 * v23 + 40) + (unsigned int)CurrentIrql);
            *v33 += v30;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8 * v23 + 48), v30);
          }
        }
        v56 = v18;
      }
      while ( v26 );
      v34 = v18 - v22;
      if ( (v24 & 1) != 0 && v34 )
      {
        if ( !v29 && !v73 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v29 = (_BYTE)CurrentIrql == 2;
        }
        v7 = v70;
        v35 = v24;
        v3 = v55;
        v36 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
        v37 = 2 * ((v35 >> 1) & 1);
        if ( v29 )
        {
          CurrentIrql = KeGetPcr()->Prcb.Number << 12;
          v38 = (_QWORD *)(*(_QWORD *)(v36 + 8 * v37 + 40) + (unsigned int)CurrentIrql);
          *v38 += v34;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 8 * v37 + 48), v34);
        }
      }
      else
      {
        v3 = v55;
        v7 = v70;
      }
    }
    if ( (v57.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (ReturnFlags & 1) == 0 )
        v52 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v57, 5u);
    }
    v39 = *(_QWORD **)(v3 + 2552);
    v40 = *(void (**)(void))(v3 + 2648);
    v41 = *(void **)(v3 + 2536);
    if ( *(_BYTE *)v39 == 17 )
      goto LABEL_95;
    if ( !ndisIterativeDataPathDisabled )
    {
      if ( (ReturnFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
      {
        LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
        v42 = (struct _NET_BUFFER_LIST **)v59;
        v69 = CurrentIrql;
        v59[2] = 0LL;
        v59[0] = v7;
        v59[1] = v7;
        v7->Scratch = 0LL;
        v7->ChildRefCount = ReturnFlags;
        if ( *(_BYTE *)v39 == 5 )
        {
          while ( *v42 )
          {
            v43 = v39;
            v44 = v39[54] + 96 * CurrentIrql;
            v45 = *(_BYTE *)(v44 + 88);
            *(_BYTE *)(v44 + 88) = 1;
            v46 = *v42;
            v71 = v45;
            *v42 = 0LL;
            if ( v46 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v46->Scratch;
                ChildRefCount = v46->ChildRefCount;
                v46->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v39, v40, v41, v46, 0, 0, ChildRefCount);
                v46 = Scratch;
              }
              while ( Scratch );
              v45 = v71;
            }
            *(_BYTE *)(v44 + 88) = 0;
            if ( v45 )
            {
              *(_BYTE *)(v44 + 88) = 1;
              goto LABEL_90;
            }
            v39 = (_QWORD *)v39[70];
            v42 = (struct _NET_BUFFER_LIST **)(v44 + 72);
            v40 = (void (*)(void))v43[67];
            v41 = (void *)v43[68];
            CurrentIrql = v69;
            if ( *(_BYTE *)v39 != 5 )
              goto LABEL_90;
          }
        }
        else
        {
LABEL_90:
          v48 = *v42;
          if ( *v42 )
          {
            *v42 = 0LL;
            do
            {
              v49 = (struct _NET_BUFFER_LIST *)v48->Scratch;
              v51 = v48->ChildRefCount;
              v48->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(v39, v40, v41, v48, 0, 0, v51);
              v48 = v49;
            }
            while ( v49 );
          }
        }
        goto LABEL_98;
      }
    }
    if ( *(_BYTE *)v3 == 5 )
    {
      v61 = *(_QWORD *)(v3 + 2552);
      v65 = 0;
      v62 = v41;
      v66 = 3LL;
      v63 = v40;
      v64 = v7;
      v67 = ReturnFlags;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v3, v7, 0);
    }
    else
    {
LABEL_95:
      (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))(v3 + 2648))(*(_QWORD *)(v3 + 2536), v7, ReturnFlags);
    }
LABEL_98:
    if ( (v57.DatapathCyclesMask & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter(&v57, 5u, 0x12uLL);
      if ( v52 != 2 )
        KeLowerIrql(v52);
    }
  }
  if ( (v54.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v54, 4u, 0x11uLL);
    if ( v53 != 2 )
      KeLowerIrql(v53);
  }
}
