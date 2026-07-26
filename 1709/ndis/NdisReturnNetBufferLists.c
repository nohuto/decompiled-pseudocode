/*
 * XREFs of NdisReturnNetBufferLists @ 0x1C0016B80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisReturnPeriodicReceives @ 0x1C0024BF8 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisReturnNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  KIRQL v3; // r11
  __int64 v4; // rsi
  unsigned int Number; // edi
  unsigned int DatapathEventsMask; // ebx
  _NDIS_PCW_DATA_BLOCK *PcwBlock; // r14
  PNET_BUFFER_LIST v9; // r15
  unsigned int v10; // r8d
  _SLIST_HEADER *Alignment; // rax
  PNET_BUFFER_LIST v12; // rax
  _QWORD *v13; // rdi
  void (*v14)(void); // r14
  void *v15; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v16; // rdx
  unsigned __int64 v17; // rbx
  char v18; // di
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // r13
  unsigned __int64 v22; // rbx
  unsigned __int8 *v23; // r8
  _SLIST_HEADER *v24; // r14
  unsigned __int64 Region; // rdi
  unsigned __int8 *v26; // rcx
  unsigned __int8 v27; // dl
  int v28; // r8d
  unsigned __int64 v29; // r13
  char v30; // r10
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rdx
  bool v39; // zf
  _QWORD *v40; // rcx
  unsigned int v41; // ecx
  struct _NET_BUFFER_LIST **v42; // rsi
  _QWORD *v43; // r13
  __int64 v44; // r15
  char v45; // al
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v48; // r9
  struct _NET_BUFFER_LIST *v49; // rbx
  __int64 v50; // rax
  KIRQL v51; // r11
  unsigned int ChildRefCount; // [rsp+38h] [rbp-D0h]
  unsigned int v53; // [rsp+38h] [rbp-D0h]
  BOOL v54; // [rsp+48h] [rbp-C0h]
  unsigned int v55; // [rsp+48h] [rbp-C0h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v56; // [rsp+50h] [rbp-B8h]
  struct NDIS_PCW_CONTEXT v57; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v58; // [rsp+70h] [rbp-98h]
  __int64 v59; // [rsp+78h] [rbp-90h]
  struct NDIS_PCW_CONTEXT v60; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v61[3]; // [rsp+98h] [rbp-70h] BYREF
  char Parameter[8]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD *v63; // [rsp+B8h] [rbp-50h]
  void *v64; // [rsp+C0h] [rbp-48h]
  void (*v65)(void); // [rsp+C8h] [rbp-40h]
  PNET_BUFFER_LIST v66; // [rsp+D0h] [rbp-38h]
  int v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+DCh] [rbp-2Ch]
  ULONG v69; // [rsp+E4h] [rbp-24h]
  char v70; // [rsp+140h] [rbp+38h]
  char v71; // [rsp+140h] [rbp+38h]
  ULONG v72; // [rsp+148h] [rbp+40h]
  KIRQL v73; // [rsp+150h] [rbp+48h]

  v72 = ReturnFlags;
  v3 = 2;
  v4 = *((_QWORD *)NdisBindingHandle + 2);
  Number = -1;
  DatapathEventsMask = *(_DWORD *)(v4 + 48);
  PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v9 = NetBufferLists;
  v57.DatapathCyclesMask = *(_DWORD *)(v4 + 80);
  v57.PcwBlock = PcwBlock;
  v57.DatapathEventsMask = DatapathEventsMask;
  v57.CurrentCpu = -1;
  if ( (DatapathEventsMask & 0x180028) != 0 || (v57.DatapathCyclesMask & 0x10) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v3 = KfRaiseIrql(2u);
    if ( (DatapathEventsMask & 8) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      PcwBlock = v57.PcwBlock;
      DatapathEventsMask = v57.DatapathEventsMask;
      v57.CurrentCpu = Number;
      ++*(_QWORD *)((char *)&v57.PcwBlock->DatapathEventReferences[6]
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( !v3 && (DatapathEventsMask & 0x80000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v57.DatapathEventsMask;
        PcwBlock = v57.PcwBlock;
        v57.CurrentCpu = Number;
      }
      NetBufferLists = (PNET_BUFFER_LIST)ndisPcwOffsetToPerCpuData;
      ++*(_QWORD *)((char *)&PcwBlock->TotalInstanceName
                  + Number * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 24);
    }
    if ( (DatapathEventsMask & 0x100020) != 0 )
    {
      v10 = 0;
      Alignment = (_SLIST_HEADER *)v9;
      if ( v9 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v10;
        }
        while ( Alignment );
      }
      if ( (DatapathEventsMask & 0x20) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v57.DatapathEventsMask;
          PcwBlock = v57.PcwBlock;
          v57.CurrentCpu = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)((char *)PcwBlock
                                          + Number * ndisPcwPerCpuDataStride
                                          + ndisPcwOffsetToPerCpuData);
        *((_QWORD *)&NetBufferLists->NdisPoolHandle + 1) += v10;
      }
      if ( !v3 && (DatapathEventsMask & 0x100000) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          PcwBlock = v57.PcwBlock;
          v57.CurrentCpu = Number;
        }
        NetBufferLists = (PNET_BUFFER_LIST)((char *)PcwBlock
                                          + Number * ndisPcwPerCpuDataStride
                                          + ndisPcwOffsetToPerCpuData);
        NetBufferLists->NetBufferListInfo[10] = (char *)NetBufferLists->NetBufferListInfo[10] + v10;
      }
    }
    if ( (v57.DatapathCyclesMask & 0x10) != 0 )
    {
      ndisPcwStartCycleCounter(&v57, 4u);
    }
    else if ( v3 != 2 )
    {
      KeLowerIrql(v3);
    }
    ReturnFlags = v72;
  }
  v60.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v60.DatapathEventsMask = *(_DWORD *)(v4 + 48);
  v60.DatapathCyclesMask = *(_DWORD *)(v4 + 80);
  v12 = v9;
  v73 = 2;
  for ( v60.CurrentCpu = -1; v12; v12 = (PNET_BUFFER_LIST)v12->Link.Alignment )
    v12->Flags = v12->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v9, NetBufferLists, ReturnFlags);
  if ( *(_DWORD *)(v4 + 3240) )
  {
    v50 = ndisReturnPeriodicReceives(v4, v9);
    ReturnFlags = v72;
    v9 = (PNET_BUFFER_LIST)v50;
  }
  if ( !v9 )
    goto LABEL_31;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_27;
  v16 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisBindingHandle + 85);
  v17 = *(_QWORD *)(v4 + 2544);
  v18 = ndisNblTrackerEpoch;
  v56 = v16;
  v19 = 0LL;
  v59 = 0LL;
  v20 = 0LL;
  v54 = (ReturnFlags & 1) != 0;
  v21 = 0LL;
  v70 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(v9, v16, 0x87u, (void *)v17, ReturnFlags & 1);
    v16 = v56;
    v19 = 0LL;
  }
  v22 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v22 & 1) != 0 )
  {
    v23 = *(unsigned __int8 **)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v22 |= 2LL * (v18 & 1);
  }
  else
  {
    v23 = (unsigned __int8 *)v22;
  }
  v58 = v23;
  v24 = (_SLIST_HEADER *)v9;
  while ( 2 )
  {
    Region = v24[22].Region;
    while ( v24[22].Region == Region )
    {
      if ( !Region && !v24[7].Region )
        v24[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFDuLL, v16, v23);
      if ( (Region & 4) != 0 )
        goto LABEL_100;
      v26 = (unsigned __int8 *)v24[7].Region;
      if ( v26 )
      {
        v27 = *v26;
        if ( (unsigned __int8)(*v26 - 17) <= 1u || v27 == 5 )
        {
          if ( v26 != v23 || v24[1].Region )
          {
            v16 = v56;
            ++v20;
            v24[22].Region = v22;
          }
          else
          {
            v16 = v56;
            v59 = ++v19;
            ++v20;
            v24[22].Region = 24LL;
          }
          goto LABEL_46;
        }
        if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v24, v27);
LABEL_98:
          v23 = v58;
          v19 = v59;
        }
        v16 = v56;
        goto LABEL_100;
      }
      if ( (unsigned __int8)byte_1C0098762 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v24);
        goto LABEL_98;
      }
LABEL_100:
      v24[22].Region = v22 | 4;
LABEL_46:
      v24 = (_SLIST_HEADER *)v24->Alignment;
      if ( !v24 )
        break;
    }
    v28 = v54;
    v29 = v21 - v20;
    v30 = v70;
    if ( (Region & 1) != 0 && v29 )
    {
      if ( !v54 && !v70 )
      {
        v30 = 1;
        v70 = 1;
        if ( KeGetCurrentIrql() == 2 )
          v28 = 1;
        else
          LOBYTE(v28) = 0;
        v54 = v28;
      }
      v31 = Region;
      v32 = Region & 0xFFFFFFFFFFFFFFF8uLL;
      v33 = 2 * ((v31 >> 1) & 1);
      if ( (_BYTE)v28 )
      {
        v34 = (_QWORD *)(*(_QWORD *)(v32 + 8 * v33 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v34 += v29;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8 * v33 + 48), v29);
      }
    }
    v16 = v56;
    v21 = v20;
    if ( v24 )
    {
      v23 = v58;
      continue;
    }
    break;
  }
  v35 = v20 - v19;
  if ( (v22 & 1) != 0 && v35 )
  {
    if ( !(_BYTE)v28 && !v30 )
      LOBYTE(v28) = KeGetCurrentIrql() == 2;
    v36 = v22;
    v37 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
    v38 = 2 * ((v36 >> 1) & 1);
    v39 = (_BYTE)v28 == 0;
    ReturnFlags = v72;
    if ( v39 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 8 * v38 + 48), v35);
    }
    else
    {
      v40 = (_QWORD *)(*(_QWORD *)(v37 + 8 * v38 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v40 += v35;
    }
  }
  else
  {
    ReturnFlags = v72;
  }
LABEL_27:
  if ( (v60.DatapathCyclesMask & 0x20) != 0 )
  {
    if ( (ReturnFlags & 1) == 0 )
      v73 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v60, 5u);
    ReturnFlags = v72;
  }
  v13 = *(_QWORD **)(v4 + 2552);
  v14 = *(void (**)(void))(v4 + 2648);
  v15 = *(void **)(v4 + 2536);
  if ( *(_BYTE *)v13 == 17 )
  {
LABEL_29:
    (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST))(v4 + 2648))(*(_QWORD *)(v4 + 2536), v9);
  }
  else if ( !ndisIterativeDataPathDisabled && ((ReturnFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    v41 = KeGetPcr()->Prcb.Number;
    v42 = (struct _NET_BUFFER_LIST **)v61;
    v55 = v41;
    v61[2] = 0LL;
    v61[0] = v9;
    v61[1] = v9;
    v9->Scratch = 0LL;
    v9->ChildRefCount = ReturnFlags;
    if ( *(_BYTE *)v13 == 5 )
    {
      while ( *v42 )
      {
        v43 = v13;
        v44 = v13[54] + 96LL * v41;
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
            ndisCallReceiveCompleteHandler(v13, v14, v15, v46, 0, 0, ChildRefCount);
            v46 = Scratch;
          }
          while ( Scratch );
          v45 = v71;
        }
        *(_BYTE *)(v44 + 88) = 0;
        if ( v45 )
        {
          *(_BYTE *)(v44 + 88) = 1;
          goto LABEL_67;
        }
        v13 = (_QWORD *)v13[70];
        v42 = (struct _NET_BUFFER_LIST **)(v44 + 72);
        v14 = (void (*)(void))v43[67];
        v15 = (void *)v43[68];
        v41 = v55;
        if ( *(_BYTE *)v13 != 5 )
          goto LABEL_67;
      }
    }
    else
    {
LABEL_67:
      v48 = *v42;
      if ( *v42 )
      {
        *v42 = 0LL;
        do
        {
          v49 = (struct _NET_BUFFER_LIST *)v48->Scratch;
          v53 = v48->ChildRefCount;
          v48->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(v13, v14, v15, v48, 0, 0, v53);
          v48 = v49;
        }
        while ( v49 );
      }
    }
  }
  else
  {
    if ( *(_BYTE *)v4 != 5 )
      goto LABEL_29;
    v69 = ReturnFlags;
    v63 = v13;
    v64 = v15;
    v68 = 3LL;
    v65 = v14;
    v66 = v9;
    v67 = 0;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v9, 0);
  }
  if ( (v60.DatapathCyclesMask & 0x20) != 0 )
  {
    ndisPcwEndCycleCounter(&v60, 5u, 0x12uLL);
    if ( v73 != 2 )
      KeLowerIrql(v73);
  }
LABEL_31:
  if ( (v57.DatapathCyclesMask & 0x10) != 0 )
  {
    ndisPcwEndCycleCounter(&v57, 4u, 0x11uLL);
    if ( v51 != 2 )
      KeLowerIrql(v51);
  }
}
