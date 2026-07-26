/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C0005DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00062C0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0025614 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisReturnPeriodicReceives @ 0x1C0025B00 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  __int64 v3; // rsi
  unsigned int Number; // edi
  KIRQL v6; // r11
  unsigned int DatapathEventsMask; // ebx
  _NDIS_PCW_DATA_BLOCK *PcwBlock; // r15
  unsigned int v11; // r8d
  PNET_BUFFER_LIST i; // rax
  __int64 v13; // r9
  PNET_BUFFER_LIST Alignment; // rcx
  __int64 CurrentIrql; // rax
  _QWORD *v16; // rdi
  void (*v17)(void); // r15
  void *v18; // r13
  struct NDIS_NBL_TRACKER_HANDLE__ *v19; // r11
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  char v23; // di
  __int64 v24; // r15
  unsigned __int64 v25; // rbx
  unsigned __int8 *v26; // r8
  PNET_BUFFER_LIST v27; // r13
  unsigned __int64 v28; // rdi
  unsigned __int8 *SourceHandle; // rcx
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r8
  char v32; // r10
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // rdx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  PNET_BUFFER_LIST *v41; // rsi
  bool v42; // zf
  _QWORD *v43; // r12
  __int64 v44; // r14
  char v45; // al
  PNET_BUFFER_LIST v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // rbx
  KIRQL v49; // r11
  unsigned int ChildRefCount; // [rsp+30h] [rbp-99h]
  int v51; // [rsp+30h] [rbp-99h]
  ULONG v52; // [rsp+40h] [rbp-89h]
  unsigned int v53; // [rsp+40h] [rbp-89h]
  struct NDIS_PCW_CONTEXT v54; // [rsp+48h] [rbp-81h] BYREF
  __int64 v55; // [rsp+60h] [rbp-69h]
  unsigned __int8 *v56; // [rsp+68h] [rbp-61h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v57; // [rsp+70h] [rbp-59h]
  __int64 v58; // [rsp+78h] [rbp-51h]
  struct NDIS_PCW_CONTEXT v59; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v60[3]; // [rsp+98h] [rbp-31h] BYREF
  char Parameter[8]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-11h]
  void *v63; // [rsp+C0h] [rbp-9h]
  void (*v64)(void); // [rsp+C8h] [rbp-1h]
  PNET_BUFFER_LIST v65; // [rsp+D0h] [rbp+7h]
  int v66; // [rsp+D8h] [rbp+Fh]
  __int64 v67; // [rsp+DCh] [rbp+13h]
  ULONG v68; // [rsp+E4h] [rbp+1Bh]
  char v69; // [rsp+138h] [rbp+6Fh]
  char v70; // [rsp+138h] [rbp+6Fh]
  KIRQL v71; // [rsp+148h] [rbp+7Fh]

  v3 = *((_QWORD *)NdisBindingHandle + 2);
  Number = -1;
  v54.CurrentCpu = -1;
  v6 = 2;
  DatapathEventsMask = *(_DWORD *)(v3 + 48);
  PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v54.DatapathCyclesMask = *(_DWORD *)(v3 + 80);
  v54.PcwBlock = PcwBlock;
  v54.DatapathEventsMask = DatapathEventsMask;
  if ( (DatapathEventsMask & 0x180028) != 0 || (v54.DatapathCyclesMask & 0x10) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v6 = KfRaiseIrql(2u);
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
    if ( !v6 && (DatapathEventsMask & 0x80000) != 0 )
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
      v11 = 0;
      for ( i = NetBufferLists; i; ++v11 )
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      if ( (DatapathEventsMask & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v54.DatapathEventsMask;
          PcwBlock = v54.PcwBlock;
          v54.CurrentCpu = Number;
        }
        v13 = v11;
        *(_QWORD *)((char *)&PcwBlock->DatapathEventReferences[10]
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData) += v11;
      }
      else
      {
        v13 = v11;
      }
      if ( !v6 && (DatapathEventsMask & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          PcwBlock = v54.PcwBlock;
          v54.CurrentCpu = Number;
        }
        *(_QWORD *)((char *)&PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 32) += v13;
      }
    }
    if ( (v54.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v54, 4u);
    }
    else if ( v6 != 2 )
    {
      KeLowerIrql(v6);
    }
  }
  Alignment = NetBufferLists;
  v59.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v3 + 40);
  v59.DatapathEventsMask = *(_DWORD *)(v3 + 48);
  v59.DatapathCyclesMask = *(_DWORD *)(v3 + 80);
  v71 = 2;
  for ( v59.CurrentCpu = -1; Alignment; Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment )
    Alignment->Flags = Alignment->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  if ( *(_DWORD *)(v3 + 3240) )
    NetBufferLists = (PNET_BUFFER_LIST)ndisReturnPeriodicReceives(v3, NetBufferLists);
  if ( !NetBufferLists )
    goto LABEL_30;
  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_26;
  v19 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 85);
  v20 = 0LL;
  v21 = *(_QWORD *)(v3 + 2544);
  v22 = 0LL;
  v23 = ndisNblTrackerEpoch;
  v57 = v19;
  v58 = 0LL;
  v24 = 0LL;
  v52 = ReturnFlags & 1;
  v55 = 0LL;
  v69 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferLists, v19, 0x87u, (void *)v21, ReturnFlags & 1);
    v19 = v57;
    v22 = 0LL;
  }
  v25 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v25 & 1) != 0 )
  {
    v26 = *(unsigned __int8 **)((v25 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    CurrentIrql = 2LL * (v23 & 1);
    v25 |= CurrentIrql;
  }
  else
  {
    v26 = (unsigned __int8 *)v25;
  }
  v56 = v26;
  v27 = NetBufferLists;
  do
  {
    v28 = (unsigned __int64)v27->NetBufferListInfo[27];
    while ( v27->NetBufferListInfo[27] == (void *)v28 )
    {
      if ( !v28 && !v27->SourceHandle )
        v27->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                      (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFDuLL,
                                      v20,
                                      v26,
                                      v22);
      if ( (v28 & 4) != 0 )
        goto LABEL_94;
      SourceHandle = (unsigned __int8 *)v27->SourceHandle;
      if ( SourceHandle )
      {
        v20 = *SourceHandle;
        if ( (unsigned __int8)(v20 - 17) <= 1u || (_BYTE)v20 == 5 )
        {
          if ( SourceHandle != v26 || v27->ParentNetBufferList )
          {
            ++v24;
            CurrentIrql = v25;
          }
          else
          {
            ++v22;
            CurrentIrql = 24LL;
            v55 = v22;
            ++v24;
          }
          goto LABEL_45;
        }
        if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v27, (unsigned __int8)v20);
          goto LABEL_93;
        }
      }
      else if ( (unsigned __int8)byte_1C0099622 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v27, v22);
LABEL_93:
        v26 = v56;
        v22 = v55;
        v19 = v57;
      }
LABEL_94:
      CurrentIrql = v25 | 4;
LABEL_45:
      v27->NetBufferListInfo[27] = (void *)CurrentIrql;
      v27 = (PNET_BUFFER_LIST)v27->Link.Alignment;
      if ( !v27 )
        break;
    }
    LODWORD(v30) = v52;
    v31 = v58 - v24;
    v32 = v69;
    if ( (v28 & 1) != 0 && v31 )
    {
      if ( !(_BYTE)v52 && !v69 )
      {
        v32 = 1;
        v69 = 1;
        CurrentIrql = KeGetCurrentIrql();
        if ( (_BYTE)CurrentIrql == 2 )
          LODWORD(v30) = 1;
        else
          LOBYTE(v30) = 0;
        v52 = (unsigned int)v30;
      }
      v33 = v28;
      v34 = v28 & 0xFFFFFFFFFFFFFFF8uLL;
      v35 = 2 * ((v33 >> 1) & 1);
      if ( (_BYTE)v30 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v30 = (_QWORD *)(*(_QWORD *)(v34 + 8 * v35 + 40) + (unsigned int)CurrentIrql);
        *v30 += v31;
        LOBYTE(v30) = v52;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 8 * v35 + 48), v31);
      }
    }
    v26 = v56;
    v20 = v24;
    v58 = v24;
  }
  while ( v27 );
  v36 = v24 - v22;
  if ( (v25 & 1) != 0 && v36 )
  {
    if ( !(_BYTE)v30 && !v32 )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v30) = (_BYTE)CurrentIrql == 2;
    }
    v37 = v25;
    v38 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
    v39 = 2 * ((v37 >> 1) & 1);
    if ( (_BYTE)v30 )
    {
      CurrentIrql = KeGetPcr()->Prcb.Number << 12;
      v40 = (_QWORD *)(*(_QWORD *)(v38 + 8 * v39 + 40) + (unsigned int)CurrentIrql);
      *v40 += v36;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 8 * v39 + 48), v36);
    }
  }
LABEL_26:
  if ( (v59.DatapathCyclesMask & 0x20) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v71 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v59, 5u);
  }
  v16 = *(_QWORD **)(v3 + 2552);
  v17 = *(void (**)(void))(v3 + 2648);
  v18 = *(void **)(v3 + 2536);
  if ( *(_BYTE *)v16 == 17 )
  {
LABEL_28:
    (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))(v3 + 2648))(
      *(_QWORD *)(v3 + 2536),
      NetBufferLists,
      ReturnFlags);
  }
  else if ( !ndisIterativeDataPathDisabled
         && ((ReturnFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v41 = (PNET_BUFFER_LIST *)v60;
    NetBufferLists->ChildRefCount = ReturnFlags;
    NetBufferLists->Scratch = 0LL;
    v42 = *(_BYTE *)v16 == 5;
    v53 = CurrentIrql;
    v60[2] = 0LL;
    v60[0] = NetBufferLists;
    v60[1] = NetBufferLists;
    if ( v42 )
    {
      while ( *v41 )
      {
        v43 = v16;
        v44 = v16[54] + 96 * CurrentIrql;
        v45 = *(_BYTE *)(v44 + 88);
        *(_BYTE *)(v44 + 88) = 1;
        v46 = *v41;
        v70 = v45;
        *v41 = 0LL;
        if ( v46 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v46->Scratch;
            ChildRefCount = v46->ChildRefCount;
            v46->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(v16, v17, v18, v46, 0, 0, ChildRefCount);
            v46 = Scratch;
          }
          while ( Scratch );
          v45 = v70;
        }
        *(_BYTE *)(v44 + 88) = 0;
        if ( v45 )
        {
          *(_BYTE *)(v44 + 88) = 1;
          NetBufferLists = *v41;
          goto LABEL_67;
        }
        v16 = (_QWORD *)v16[70];
        v41 = (PNET_BUFFER_LIST *)(v44 + 72);
        v17 = (void (*)(void))v43[67];
        v18 = (void *)v43[68];
        CurrentIrql = v53;
        if ( *(_BYTE *)v16 != 5 )
        {
          NetBufferLists = *(PNET_BUFFER_LIST *)(v44 + 72);
          goto LABEL_67;
        }
      }
    }
    else
    {
LABEL_67:
      if ( NetBufferLists )
      {
        *v41 = 0LL;
        do
        {
          v48 = (struct _NET_BUFFER_LIST *)NetBufferLists->Scratch;
          v51 = NetBufferLists->ChildRefCount;
          NetBufferLists->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(v16, v17, v18, NetBufferLists, 0, 0, v51);
          NetBufferLists = v48;
        }
        while ( v48 );
      }
    }
  }
  else
  {
    if ( *(_BYTE *)v3 != 5 )
      goto LABEL_28;
    v62 = *(_QWORD *)(v3 + 2552);
    v63 = v18;
    v67 = 3LL;
    v64 = v17;
    v65 = NetBufferLists;
    v66 = 0;
    v68 = ReturnFlags;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v3, NetBufferLists, 0);
  }
  if ( (v59.DatapathCyclesMask & 0x20) != 0 )
  {
    ndisPcwEndCycleCounter(&v59, 5u, 0x12uLL);
    if ( v71 != 2 )
      KeLowerIrql(v71);
  }
LABEL_30:
  if ( (v54.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v54, 4u, 0x11uLL);
    if ( v49 != 2 )
      KeLowerIrql(v49);
  }
}
