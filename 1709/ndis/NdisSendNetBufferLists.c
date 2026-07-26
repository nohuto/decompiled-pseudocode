/*
 * XREFs of NdisSendNetBufferLists @ 0x1C0012F00
 * Callers:
 *     <none>
 * Callees:
 *     ndisMFakeSendNetBufferLists @ 0x1C0013670 (ndisMFakeSendNetBufferLists.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0016490 (ndisMSendNBLToMiniportInternal.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C002478C (ndisFLoopbackNetBufferLists.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0056590 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v4; // rsi
  ULONG v5; // r13d
  KIRQL v6; // r9
  unsigned int CurrentCpu; // r12d
  NDIS_PORT_NUMBER v8; // edi
  struct _NET_BUFFER_LIST *v9; // rbx
  unsigned int DatapathEventsMask; // r14d
  NDIS_HANDLE v11; // r8
  unsigned int v12; // r15d
  int v13; // ecx
  _DWORD *v14; // rcx
  bool v15; // r14
  unsigned int v16; // eax
  char *NextSendNetBufferListsContext; // r10
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  struct _NDIS_FILTER_BLOCK *v19; // rsi
  unsigned int Number; // r8d
  _NET_BUFFER_LIST **v21; // rdi
  struct _NET_BUFFER_LIST *v22; // rax
  struct _NDIS_FILTER_BLOCK *v23; // r13
  __int64 v24; // rbx
  char v25; // al
  _NET_BUFFER_LIST *v26; // rdx
  char *v27; // r13
  struct _VF_NDIS_DISPATCH_TABLE *v28; // rax
  __int64 ChildRefCount; // r9
  _NET_BUFFER_LIST *Scratch; // r14
  __int64 NdisReserved2; // r8
  _NET_BUFFER_LIST *v32; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v33; // rax
  __int64 v34; // r9
  _NET_BUFFER_LIST *v35; // rbx
  __int64 v36; // r8
  _SLIST_HEADER *v37; // rcx
  unsigned int v38; // r8d
  _QWORD *Region; // rax
  int i; // edx
  struct NDIS_NBL_TRACKER_HANDLE__ *v41; // r10
  BOOL v42; // ecx
  char v43; // r11
  char v44; // r9
  unsigned __int64 v45; // rbx
  char *v46; // r8
  unsigned __int64 v47; // rbx
  unsigned __int64 Next_low; // rdx
  struct _NET_BUFFER_LIST *v49; // r15
  PNET_BUFFER_LIST Alignment; // rsi
  __int64 v51; // r13
  struct NDIS_NBL_TRACKER_HANDLE__ *v52; // r14
  void *v53; // rdi
  struct _NET_BUFFER_LIST *SourceHandle; // rcx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rax
  char *v59; // rcx
  int v60; // ecx
  void *VerifierContext; // rcx
  void *v62; // rcx
  struct _NET_BUFFER_LIST *v63; // rax
  int Context; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+40h] [rbp-C0h] BYREF
  bool v66; // [rsp+41h] [rbp-BFh] BYREF
  bool v67; // [rsp+42h] [rbp-BEh]
  char v68; // [rsp+43h] [rbp-BDh]
  KIRQL v69; // [rsp+44h] [rbp-BCh]
  KIRQL v70; // [rsp+45h] [rbp-BBh]
  struct _NET_BUFFER_LIST *v71; // [rsp+48h] [rbp-B8h] BYREF
  char *v72; // [rsp+50h] [rbp-B0h]
  unsigned int v73; // [rsp+58h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v74; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  char *v79; // [rsp+98h] [rbp-68h]
  struct NDIS_PCW_CONTEXT v80; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v81[3]; // [rsp+B8h] [rbp-48h] BYREF
  char Parameter[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _NDIS_FILTER_BLOCK *v83; // [rsp+D8h] [rbp-28h]
  char *v84; // [rsp+E0h] [rbp-20h]
  void (__fastcall *v85)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+E8h] [rbp-18h]
  struct _NET_BUFFER_LIST *v86; // [rsp+F0h] [rbp-10h]
  NDIS_PORT_NUMBER v87; // [rsp+F8h] [rbp-8h]
  __int64 v88; // [rsp+FCh] [rbp-4h]
  ULONG v89; // [rsp+104h] [rbp+4h]

  v4 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = SendFlags;
  v6 = 2;
  v78 = v4;
  CurrentCpu = -1;
  v70 = 2;
  v8 = PortNumber;
  v74.CurrentCpu = -1;
  v9 = NetBufferLists;
  DatapathEventsMask = *(_DWORD *)(v4 + 48);
  v11 = NdisBindingHandle;
  v74.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v74.DatapathCyclesMask = *(_DWORD *)(v4 + 80);
  v73 = DatapathEventsMask;
  v74.DatapathEventsMask = DatapathEventsMask;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
  {
    WPP_SF_qq(70LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, NdisBindingHandle, NetBufferLists);
    v11 = NdisBindingHandle;
    v6 = 2;
  }
  v12 = 0;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_4;
  v41 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v11 + 85);
  v42 = (v5 & 1) != 0;
  v43 = ndisNblTrackerEpoch;
  v44 = 0;
  v45 = *(_QWORD *)(v4 + 2568);
  v46 = 0LL;
  v77 = v41;
  LODWORD(v71) = ndisNblTrackerEpoch;
  v72 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v75 = v42;
  v66 = (v5 & 1) != 0;
  v65 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferLists, v41, 0x8Fu, (void *)v45, v5 & 1);
    LOBYTE(v42) = v75;
    v46 = 0LL;
    v44 = v65;
    v43 = (char)v71;
  }
  v47 = v45 & 0xFFFFFFFFFFFFFFFDuLL;
  Next_low = v47 & 1;
  if ( (v47 & 1) != 0 )
    v71 = *(struct _NET_BUFFER_LIST **)((v47 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v71 = (struct _NET_BUFFER_LIST *)v47;
  if ( (v47 & 1) != 0 )
    v47 |= 2LL * (v43 & 1);
  if ( NetBufferLists )
  {
    v49 = v71;
    Alignment = NetBufferLists;
    v51 = v76;
    v52 = v77;
    while ( 1 )
    {
      v53 = Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == v53 )
      {
        if ( !v53 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                              (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFFDuLL,
                                              Next_low,
                                              v46);
        if ( ((unsigned __int8)v53 & 4) != 0 )
          goto LABEL_107;
        SourceHandle = (struct _NET_BUFFER_LIST *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          Next_low = LOBYTE(SourceHandle->Next);
          if ( (unsigned __int8)(Next_low - 17) <= 1u || (_BYTE)Next_low == 5 )
          {
            if ( SourceHandle != v49 || Alignment->ParentNetBufferList )
            {
              ++v46;
              Alignment->NetBufferListInfo[27] = (void *)v47;
              v72 = v46;
            }
            else
            {
              ++v51;
              Alignment->NetBufferListInfo[27] = (void *)24;
              v72 = ++v46;
            }
            goto LABEL_76;
          }
          if ( (unsigned __int8)byte_1C0098762 >= 3u )
          {
            WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)Next_low);
            goto LABEL_106;
          }
        }
        else if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
LABEL_106:
          v46 = v72;
        }
LABEL_107:
        Alignment->NetBufferListInfo[27] = (void *)(v47 | 4);
LABEL_76:
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v76 = v51;
      if ( ((unsigned __int8)v53 & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(v53, v79 - v46, &v66, &v65);
        v46 = v72;
      }
      v79 = v46;
      if ( !Alignment )
      {
        LOBYTE(v42) = v66;
        v12 = 0;
        v4 = v78;
        DatapathEventsMask = v73;
        v5 = SendFlags;
        v8 = PortNumber;
        v44 = v65;
        break;
      }
    }
  }
  v55 = (unsigned __int64)&v46[-v76];
  if ( (v47 & 1) != 0 && v55 )
  {
    if ( !v42 && !v44 )
    {
      LOBYTE(v42) = KeGetCurrentIrql() == 2;
      v66 = v42;
    }
    v6 = 2;
    v56 = v47 & 0xFFFFFFFFFFFFFFF8uLL;
    v57 = 2 * ((v47 >> 1) & 1);
    if ( !v42 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 8 * v57 + 48), v55);
      CurrentCpu = v74.CurrentCpu;
      DatapathEventsMask = v74.DatapathEventsMask;
      v9 = NetBufferLists;
      goto LABEL_4;
    }
    CurrentCpu = v74.CurrentCpu;
    DatapathEventsMask = v74.DatapathEventsMask;
    v58 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v58 + *(_QWORD *)(v56 + 8 * v57 + 40)) += v55;
  }
  else
  {
    v6 = 2;
  }
  v9 = NetBufferLists;
LABEL_4:
  if ( (DatapathEventsMask & 0x200140) != 0 || (v74.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v6 = KfRaiseIrql(2u);
      v70 = v6;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      DatapathEventsMask = v74.DatapathEventsMask;
      v74.CurrentCpu = CurrentCpu;
      ++*(_QWORD *)((char *)&v74.PcwBlock->DatapathEventReferences[12]
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * CurrentCpu);
    }
    if ( !v6 && (DatapathEventsMask & 0x200000) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v74.DatapathEventsMask;
        v74.CurrentCpu = CurrentCpu;
      }
      ++*(wchar_t **)((char *)&v74.PcwBlock->TotalInstanceName.Buffer
                    + ndisPcwOffsetToPerCpuData
                    + ndisPcwPerCpuDataStride * CurrentCpu);
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v37 = (_SLIST_HEADER *)v9;
      v38 = 0;
      if ( v9 )
      {
        do
        {
          Region = (_QWORD *)v37->Region;
          for ( i = 0; Region; ++i )
            Region = (_QWORD *)*Region;
          v37 = (_SLIST_HEADER *)v37->Alignment;
          v38 += i;
        }
        while ( v37 );
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v74.DatapathEventsMask;
          v74.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v74.PcwBlock->DatapathEventReferences[16]
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * CurrentCpu) += v38;
      }
      if ( !v6 && (DatapathEventsMask & 0x400000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v74.CurrentCpu = CurrentCpu;
        }
        v59 = (char *)v74.PcwBlock + ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * CurrentCpu;
        *((_QWORD *)v59 + 26) += v38;
      }
    }
    if ( (v74.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v74, 6u);
    }
    else if ( v6 != 2 )
    {
      KeLowerIrql(v6);
    }
  }
  v13 = *(_DWORD *)(v4 + 2676);
  if ( v13 )
  {
    v60 = v13 - 1;
    if ( v60 )
    {
      if ( v60 == 1 )
        ndisMSendNetBufferListsToPackets(v4, v9, v8, v5);
      else
        ndisMFakeSendNetBufferLists(v4, v9, v8, v5);
    }
    else
    {
      LOBYTE(Context) = 0;
      ndisMSendNBLToMiniportInternal(v4, v9, v8, v5, Context);
    }
  }
  else
  {
    v14 = *(_DWORD **)(v4 + 2576);
    v71 = v9;
    if ( *(_BYTE *)v14 == 5
      && (v14[14] & 0x8000) != 0
      && !v14[86]
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v5 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists(v14, NetBufferLists, (__int64)&v71);
      v9 = v71;
    }
    if ( v9 )
    {
      v69 = 2;
      v68 = 0;
      v15 = *(_QWORD *)(v4 + 2560) == v4;
      v80.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
      v80.DatapathEventsMask = *(_DWORD *)(v4 + 48);
      v16 = *(_DWORD *)(v4 + 80);
      v80.DatapathCyclesMask = v16;
      v67 = v15;
      v80.CurrentCpu = -1;
      if ( v15 && (v16 & 0x80u) != 0 )
      {
        if ( (v5 & 1) == 0 )
        {
          v69 = KfRaiseIrql(2u);
          v68 = 1;
        }
        ndisPcwStartCycleCounter(&v80, 7u);
      }
      NextSendNetBufferListsContext = *(char **)(v4 + 2560);
      NextSendNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 2656);
      v19 = *(struct _NDIS_FILTER_BLOCK **)(v4 + 2576);
      v72 = NextSendNetBufferListsContext;
      if ( v19->Header.Type == 17 )
      {
        NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v9, v8, v5);
      }
      else if ( !ndisIterativeDataPathDisabled && ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v21 = (_NET_BUFFER_LIST **)v81;
        v81[2] = 0LL;
        v73 = Number;
        v22 = v71;
        v81[0] = v71;
        v81[1] = v71;
        v71->Scratch = 0LL;
        v22->ChildRefCount = v5;
        v22->Status = PortNumber;
        if ( v19->Header.Type == 5 )
        {
          while ( *v21 )
          {
            v23 = v19;
            v24 = (__int64)v19->IterativeDataPathTracker[Number];
            v78 = v24;
            v25 = *(_BYTE *)(v24 + 16);
            *(_BYTE *)(v24 + 16) = 1;
            v26 = *v21;
            v65 = v25;
            *v21 = 0LL;
            if ( v26 )
            {
              v27 = v72;
              do
              {
                v28 = ndisVerifierNdisDispatch;
                ChildRefCount = (unsigned int)v26->ChildRefCount;
                Scratch = (_NET_BUFFER_LIST *)v26->Scratch;
                NdisReserved2 = v26->NdisReserved2;
                v26->ChildRefCount = 0;
                if ( v28 && v19->Header.Type == 5 && (VerifierContext = v19->VerifierContext) != 0LL )
                {
                  v28->NdisFilterSendNetBufferListsHandler(
                    v27,
                    v26,
                    NdisReserved2,
                    ChildRefCount,
                    VerifierContext,
                    NextSendNetBufferListsHandler);
                }
                else if ( (char *)NextSendNetBufferListsHandler == (char *)ndisMSendNBLToMiniport )
                {
                  LOBYTE(Context) = 0;
                  ndisMSendNBLToMiniportInternal(v27, v26, NdisReserved2, ChildRefCount, Context);
                }
                else
                {
                  NextSendNetBufferListsHandler(v27, v26, NdisReserved2, ChildRefCount);
                }
                v26 = Scratch;
              }
              while ( Scratch );
              v24 = v78;
              v23 = v19;
              v25 = v65;
              NextSendNetBufferListsContext = v72;
              Number = v73;
            }
            *(_BYTE *)(v24 + 16) = 0;
            if ( v25 )
            {
              *(_BYTE *)(v24 + 16) = 1;
LABEL_26:
              v15 = v67;
              goto LABEL_27;
            }
            v19 = (struct _NDIS_FILTER_BLOCK *)v19->NextSendNetBufferListsObject;
            v21 = (_NET_BUFFER_LIST **)v24;
            NextSendNetBufferListsContext = (char *)v23->NextSendNetBufferListsContext;
            NextSendNetBufferListsHandler = v23->NextSendNetBufferListsHandler;
            v72 = NextSendNetBufferListsContext;
            if ( v19->Header.Type != 5 )
              goto LABEL_26;
          }
          v15 = v67;
        }
        else
        {
LABEL_27:
          v32 = *v21;
          if ( *v21 )
          {
            *v21 = 0LL;
            do
            {
              v33 = ndisVerifierNdisDispatch;
              v34 = (unsigned int)v32->ChildRefCount;
              v35 = (_NET_BUFFER_LIST *)v32->Scratch;
              v36 = v32->NdisReserved2;
              v32->ChildRefCount = 0;
              if ( v33 && v19->Header.Type == 5 && (v62 = v19->VerifierContext) != 0LL )
              {
                v33->NdisFilterSendNetBufferListsHandler(
                  NextSendNetBufferListsContext,
                  v32,
                  v36,
                  v34,
                  v62,
                  NextSendNetBufferListsHandler);
              }
              else if ( (char *)NextSendNetBufferListsHandler == (char *)ndisMSendNBLToMiniport )
              {
                LOBYTE(Context) = 0;
                ndisMSendNBLToMiniportInternal(NextSendNetBufferListsContext, v32, v36, v34, Context);
              }
              else
              {
                NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v32, v36, v34);
              }
              NextSendNetBufferListsContext = v72;
              v32 = v35;
            }
            while ( v35 );
          }
        }
      }
      else
      {
        v83 = v19;
        v84 = NextSendNetBufferListsContext;
        v88 = 0LL;
        v85 = NextSendNetBufferListsHandler;
        v86 = v9;
        v87 = v8;
        v89 = v5;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
        {
          v63 = v9;
          do
          {
            v63->Status = -1073741670;
            v63 = (struct _NET_BUFFER_LIST *)v63->Link.Alignment;
          }
          while ( v63 );
          do
          {
            v9 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
            ++v12;
          }
          while ( v9 );
          _InterlockedExchangeAdd(&v19->DroppedSendNbls, v12);
          ndisQueueStackExpansionFallbackNbls(v19, v71, 1u);
        }
      }
      if ( v15 )
      {
        if ( SLOBYTE(v80.DatapathCyclesMask) < 0 )
          ndisPcwEndCycleCounter(&v80, 7u, 0x14uLL);
        if ( v68 && v69 != 2 )
          KeLowerIrql(v69);
      }
    }
    v9 = NetBufferLists;
  }
  if ( (v74.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v74, 6u, 0x13uLL);
    if ( v70 != 2 )
      KeLowerIrql(v70);
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(71LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, NdisBindingHandle, v9);
}
