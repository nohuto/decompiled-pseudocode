/*
 * XREFs of NdisSendNetBufferLists @ 0x1C00038F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004160 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0004D20 (ndisMSendNBLToMiniportInternal.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012B34 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisMFakeSendNetBufferLists @ 0x1C0022E10 (ndisMFakeSendNetBufferLists.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0057440 (ndisMSendNetBufferListsToPackets.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005A5A4 (ndisFLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v4; // rdi
  unsigned int CurrentCpu; // ebx
  struct _NET_BUFFER_LIST *v6; // r12
  ULONG v7; // r14d
  NDIS_PORT_NUMBER v8; // r15d
  _QWORD *v9; // rdx
  unsigned int DatapathEventsMask; // esi
  unsigned int v11; // r13d
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // r10
  char v13; // r15
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  char v16; // si
  char v17; // cl
  __int64 v18; // r14
  unsigned int v19; // ecx
  char v20; // bl
  unsigned __int64 v21; // rdi
  PNET_BUFFER_LIST Alignment; // rsi
  void *v23; // rbx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  KIRQL v27; // r9
  char *v28; // rax
  _SLIST_HEADER *v29; // rdx
  unsigned int v30; // r8d
  _QWORD *Region; // rax
  int i; // ecx
  char *v33; // rcx
  int v34; // edx
  int v35; // edx
  _DWORD *v36; // rcx
  struct _NET_BUFFER_LIST *v37; // rbx
  bool v38; // zf
  bool v39; // si
  unsigned int v40; // eax
  void (*NextSendNetBufferListsHandler)(void); // r15
  void *NextSendNetBufferListsContext; // r12
  struct _NDIS_FILTER_BLOCK *v43; // rdi
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST **v45; // r14
  struct _NET_BUFFER_LIST *v46; // rax
  struct _NDIS_FILTER_BLOCK *v47; // r13
  __int64 v48; // rsi
  char v49; // al
  struct _NET_BUFFER_LIST *v50; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v52; // r9
  struct _NET_BUFFER_LIST *v53; // rbx
  struct _NET_BUFFER_LIST *v54; // rax
  int Context; // [rsp+20h] [rbp-E0h]
  unsigned int Contexta; // [rsp+20h] [rbp-E0h]
  unsigned int Contextb; // [rsp+20h] [rbp-E0h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+30h] [rbp-D0h]
  char v60; // [rsp+40h] [rbp-C0h] BYREF
  char v61; // [rsp+41h] [rbp-BFh] BYREF
  bool v62; // [rsp+42h] [rbp-BEh]
  char v63; // [rsp+43h] [rbp-BDh]
  KIRQL v64; // [rsp+44h] [rbp-BCh]
  KIRQL v65; // [rsp+45h] [rbp-BBh]
  struct _NET_BUFFER_LIST *v66; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-B0h]
  struct NDIS_PCW_CONTEXT v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v71; // [rsp+80h] [rbp-80h]
  void *v72; // [rsp+88h] [rbp-78h]
  struct NDIS_PCW_CONTEXT v73; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v74[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE Parameter[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct _NDIS_FILTER_BLOCK *v76; // [rsp+C8h] [rbp-38h]
  void *v77; // [rsp+D0h] [rbp-30h]
  void (*v78)(void); // [rsp+D8h] [rbp-28h]
  struct _NET_BUFFER_LIST *v79; // [rsp+E0h] [rbp-20h]
  NDIS_PORT_NUMBER v80; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+ECh] [rbp-14h]
  ULONG v82; // [rsp+F4h] [rbp-Ch]

  v4 = *((_QWORD *)NdisBindingHandle + 2);
  CurrentCpu = -1;
  v6 = NetBufferLists;
  v69 = v4;
  v7 = SendFlags;
  v65 = 2;
  v8 = PortNumber;
  LODWORD(v66) = -1;
  v9 = NdisBindingHandle;
  DatapathEventsMask = *(_DWORD *)(v4 + 48);
  v68.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v68.DatapathCyclesMask = *(_DWORD *)(v4 + 80);
  v67 = DatapathEventsMask;
  v68.DatapathEventsMask = DatapathEventsMask;
  v68.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
  {
    WPP_SF_qq(70LL, &WPP_baff752c64773449955de141535fd9df_Traceguids, NdisBindingHandle, v6);
    v9 = NdisBindingHandle;
  }
  v11 = 0;
  if ( ndisNblTrackerMode )
  {
    v12 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v9[85];
    v13 = 0;
    v14 = *(_QWORD *)(v4 + 2568);
    v15 = 0LL;
    v16 = ndisNblTrackerEpoch;
    v17 = v7;
    v18 = 0LL;
    v19 = v17 & 1;
    v71 = v12;
    v70 = 0LL;
    v20 = v19 & 1;
    v60 = 0;
    v61 = v19 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferLists, v12, 0x8Fu, (void *)v14, v19);
      v12 = v71;
    }
    v21 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
    {
      v72 = *(void **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v21 ^= ((unsigned __int8)v21 ^ (unsigned __int8)(2 * v16)) & 2;
    }
    else
    {
      v72 = (void *)v21;
    }
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      do
      {
        v23 = Alignment->NetBufferListInfo[26];
        do
        {
          if ( Alignment->NetBufferListInfo[26] != v23 )
            break;
          if ( !v23 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v9);
          if ( ((unsigned __int8)v23 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
          {
            Alignment->NetBufferListInfo[26] = (void *)(v21 | 4);
          }
          else if ( Alignment->SourceHandle != v72 || Alignment->ParentNetBufferList )
          {
            ++v18;
            Alignment->NetBufferListInfo[26] = (void *)v21;
          }
          else
          {
            ++v15;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v18;
          }
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          v12 = v71;
        }
        while ( Alignment );
        if ( ((unsigned __int8)v23 & 1) != 0 )
          ndisNblTrackerUpdateOwnershipCount(v23, v70 - v18, &v61, &v60);
        v12 = v71;
        v70 = v18;
      }
      while ( Alignment );
      v20 = v61;
      v13 = v60;
    }
    v24 = v18 - v15;
    if ( (v21 & 1) != 0 && v24 )
    {
      if ( !v20 && !v13 )
      {
        v20 = KeGetCurrentIrql() == 2;
        v61 = v20;
      }
      v8 = PortNumber;
      v6 = NetBufferLists;
      v25 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v21 >> 1) & 1);
      v4 = v69;
      if ( v20 )
      {
        CurrentCpu = v68.CurrentCpu;
        DatapathEventsMask = v68.DatapathEventsMask;
        v26 = KeGetPcr()->Prcb.Number << 12;
        *(_QWORD *)(v26 + *(_QWORD *)(v25 + 40)) += v24;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 48), v24);
        CurrentCpu = v68.CurrentCpu;
        DatapathEventsMask = v68.DatapathEventsMask;
      }
    }
    else
    {
      v6 = NetBufferLists;
      v8 = PortNumber;
      DatapathEventsMask = v67;
      v4 = v69;
      CurrentCpu = (unsigned int)v66;
    }
    v7 = SendFlags;
  }
  if ( (DatapathEventsMask & 0x200140) != 0 || (v68.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      v27 = 2;
    }
    else
    {
      v27 = KfRaiseIrql(2u);
      v65 = v27;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      DatapathEventsMask = v68.DatapathEventsMask;
      v68.CurrentCpu = CurrentCpu;
      v28 = (char *)v68.PcwBlock + ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * CurrentCpu;
      ++*((_QWORD *)v28 + 6);
    }
    if ( !v27 && (DatapathEventsMask & 0x200000) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v68.DatapathEventsMask;
        v68.CurrentCpu = CurrentCpu;
      }
      ++*(wchar_t **)((char *)&v68.PcwBlock->TotalInstanceName.Buffer
                    + ndisPcwOffsetToPerCpuData
                    + ndisPcwPerCpuDataStride * CurrentCpu);
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v29 = (_SLIST_HEADER *)v6;
      v30 = 0;
      if ( v6 )
      {
        do
        {
          Region = (_QWORD *)v29->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          v29 = (_SLIST_HEADER *)v29->Alignment;
          v30 += i;
        }
        while ( v29 );
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v68.DatapathEventsMask;
          v68.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v68.PcwBlock->DatapathEventReferences[16]
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * CurrentCpu) += v30;
      }
      if ( !v27 && (DatapathEventsMask & 0x400000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v68.CurrentCpu = CurrentCpu;
        }
        v33 = (char *)v68.PcwBlock + ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * CurrentCpu;
        *((_QWORD *)v33 + 26) += v30;
      }
    }
    if ( (v68.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v68, 6u);
    }
    else if ( v27 != 2 )
    {
      KeLowerIrql(v27);
    }
  }
  v34 = *(_DWORD *)(v4 + 2676);
  if ( v34 )
  {
    v35 = v34 - 1;
    if ( v35 )
    {
      if ( v35 == 1 )
        ndisMSendNetBufferListsToPackets(v4, v6, v8, v7);
      else
        ndisMFakeSendNetBufferLists(v4, v6, v8, v7);
    }
    else
    {
      LOBYTE(Context) = 0;
      ndisMSendNBLToMiniportInternal(v4, v6, v8, v7, Context);
    }
  }
  else
  {
    v36 = *(_DWORD **)(v4 + 2576);
    v37 = v6;
    v66 = v6;
    if ( *(_BYTE *)v36 == 5
      && (v36[14] & 0x8000) != 0
      && !v36[86]
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v7 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists(v36, v6, (__int64)&v66);
      v37 = v66;
    }
    if ( v37 )
    {
      v38 = *(_QWORD *)(v4 + 2560) == v4;
      v73.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
      v39 = v38;
      v73.DatapathEventsMask = *(_DWORD *)(v4 + 48);
      v40 = *(_DWORD *)(v4 + 80);
      v73.DatapathCyclesMask = v40;
      v64 = 2;
      v63 = 0;
      v62 = v38;
      v73.CurrentCpu = -1;
      if ( v38 && (v40 & 0x80u) != 0 )
      {
        if ( (v7 & 1) == 0 )
        {
          v64 = KfRaiseIrql(2u);
          v63 = 1;
        }
        ndisPcwStartCycleCounter(&v73, 7u);
      }
      NextSendNetBufferListsHandler = *(void (**)(void))(v4 + 2656);
      NextSendNetBufferListsContext = *(void **)(v4 + 2560);
      v43 = *(struct _NDIS_FILTER_BLOCK **)(v4 + 2576);
      if ( v43->Header.Type == 17 )
      {
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))NextSendNetBufferListsHandler)(
          NextSendNetBufferListsContext,
          v37,
          PortNumber,
          v7);
      }
      else if ( !ndisIterativeDataPathDisabled && ((v7 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v45 = (struct _NET_BUFFER_LIST **)v74;
        v74[2] = 0LL;
        v67 = Number;
        v46 = v66;
        v74[0] = v66;
        v74[1] = v66;
        v66->Scratch = 0LL;
        v46->ChildRefCount = SendFlags;
        v46->Status = PortNumber;
        if ( v43->Header.Type == 5 )
        {
          while ( *v45 )
          {
            v47 = v43;
            v48 = (__int64)v43->IterativeDataPathTracker[Number];
            v49 = *(_BYTE *)(v48 + 16);
            *(_BYTE *)(v48 + 16) = 1;
            v50 = *v45;
            v60 = v49;
            *v45 = 0LL;
            if ( v50 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v50->Scratch;
                ChildRefCount = v50->ChildRefCount;
                Contexta = v50->NdisReserved2;
                v50->ChildRefCount = 0;
                ndisCallSendHandler(
                  v43,
                  NextSendNetBufferListsHandler,
                  NextSendNetBufferListsContext,
                  v50,
                  Contexta,
                  0,
                  ChildRefCount);
                v50 = Scratch;
              }
              while ( Scratch );
              v49 = v60;
              v47 = v43;
              Number = v67;
            }
            *(_BYTE *)(v48 + 16) = 0;
            if ( v49 )
            {
              *(_BYTE *)(v48 + 16) = 1;
LABEL_102:
              v39 = v62;
              goto LABEL_103;
            }
            v43 = (struct _NDIS_FILTER_BLOCK *)v43->NextSendNetBufferListsObject;
            v45 = (struct _NET_BUFFER_LIST **)v48;
            NextSendNetBufferListsHandler = (void (*)(void))v47->NextSendNetBufferListsHandler;
            NextSendNetBufferListsContext = v47->NextSendNetBufferListsContext;
            if ( v43->Header.Type != 5 )
              goto LABEL_102;
          }
          v39 = v62;
        }
        else
        {
LABEL_103:
          v52 = *v45;
          if ( *v45 )
          {
            *v45 = 0LL;
            do
            {
              v53 = (struct _NET_BUFFER_LIST *)v52->Scratch;
              v59 = v52->ChildRefCount;
              Contextb = v52->NdisReserved2;
              v52->ChildRefCount = 0;
              ndisCallSendHandler(
                v43,
                NextSendNetBufferListsHandler,
                NextSendNetBufferListsContext,
                v52,
                Contextb,
                0,
                v59);
              v52 = v53;
            }
            while ( v53 );
          }
        }
      }
      else
      {
        v80 = PortNumber;
        v76 = v43;
        v77 = NextSendNetBufferListsContext;
        v81 = 0LL;
        v78 = NextSendNetBufferListsHandler;
        v79 = v37;
        v82 = v7;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        {
          v54 = v37;
          do
          {
            v54->Status = -1073741670;
            v54 = (struct _NET_BUFFER_LIST *)v54->Link.Alignment;
          }
          while ( v54 );
          do
          {
            v37 = (struct _NET_BUFFER_LIST *)v37->Link.Alignment;
            ++v11;
          }
          while ( v37 );
          _InterlockedExchangeAdd(&v43->DroppedSendNbls, v11);
          ndisQueueStackExpansionFallbackNbls(v43, v66, 1u);
        }
      }
      if ( v39 )
      {
        if ( SLOBYTE(v73.DatapathCyclesMask) < 0 )
          ndisPcwEndCycleCounter(&v73, 7u, 0x14uLL);
        if ( v63 && v64 != 2 )
          KeLowerIrql(v64);
      }
      v6 = NetBufferLists;
    }
  }
  if ( (v68.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v68, 6u, 0x13uLL);
    if ( v65 != 2 )
      KeLowerIrql(v65);
  }
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(71LL, &WPP_baff752c64773449955de141535fd9df_Traceguids, NdisBindingHandle, v6);
}
