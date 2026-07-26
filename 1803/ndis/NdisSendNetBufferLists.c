/*
 * XREFs of NdisSendNetBufferLists @ 0x1C0001060
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002234 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005A50 (ndisMSendNBLToMiniportInternal.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C0025720 (ndisFLoopbackNetBufferLists.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ?ndisNumNbsInNblChain@@YAKPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00543FC (-ndisNumNbsInNblChain@@YAKPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0056F30 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  unsigned int v4; // r10d
  __int64 v5; // rsi
  ULONG v6; // r13d
  KIRQL v7; // r9
  unsigned int CurrentCpu; // r12d
  NDIS_PORT_NUMBER v9; // edi
  NDIS_HANDLE v10; // r8
  unsigned int DatapathEventsMask; // r14d
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  int v14; // ecx
  _DWORD *v15; // rcx
  PNET_BUFFER_LIST v16; // r14
  PNET_BUFFER_LIST v17; // rbx
  bool v18; // r14
  unsigned int v19; // eax
  struct _NET_BUFFER_LIST *NextSendNetBufferListsContext; // rcx
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  struct _NDIS_FILTER_BLOCK *v22; // rsi
  unsigned int v23; // r8d
  _NET_BUFFER_LIST **v24; // rdi
  struct _NET_BUFFER_LIST *v25; // rax
  struct _NDIS_FILTER_BLOCK *v26; // r13
  __int64 v27; // rbx
  unsigned __int8 v28; // al
  _NET_BUFFER_LIST *v29; // rdx
  struct _NET_BUFFER_LIST *v30; // r13
  struct _VF_NDIS_DISPATCH_TABLE *v31; // rax
  __int64 ChildRefCount; // r9
  _NET_BUFFER_LIST *Scratch; // r14
  __int64 NdisReserved2; // r8
  _NET_BUFFER_LIST *v35; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v36; // rax
  __int64 v37; // r9
  _NET_BUFFER_LIST *v38; // rbx
  __int64 v39; // r8
  unsigned int v40; // r8d
  PNET_BUFFER_LIST i; // rcx
  $9B4850FCE6133531ACA1A1B2AD46EB50 *FirstNetBuffer; // rax
  int j; // edx
  char *v44; // rcx
  __int64 v45; // rdx
  unsigned __int8 v46; // cl
  struct _NET_BUFFER_LIST *v47; // r11
  unsigned __int64 v48; // rbx
  struct _NET_BUFFER_LIST *v49; // r8
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // r9
  unsigned __int64 Type; // rdx
  struct _NDIS_OPEN_BLOCK *v53; // r15
  PNET_BUFFER_LIST Alignment; // rsi
  struct _NET_BUFFER_LIST *v55; // r13
  struct NDIS_NBL_TRACKER_HANDLE__ *v56; // r14
  void *v57; // rdi
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // r9
  struct _NET_BUFFER_LIST *v66; // r11
  int v67; // ecx
  PNET_BUFFER_LIST k; // rax
  struct _NDIS_OPEN_BLOCK *v69; // rdx
  unsigned int v70; // r14d
  struct _NET_BUFFER_LIST *v71; // rcx
  unsigned int Number; // r12d
  unsigned int v73; // eax
  struct _NDIS_OPEN_BLOCK *v74; // r13
  _QWORD *p_Alignment; // r8
  struct NDIS_NBL_TRACKER_HANDLE__ *v76; // r10
  struct _NET_BUFFER_LIST *v77; // rdi
  unsigned int v78; // esi
  struct _NDIS_OPEN_BLOCK *v79; // rcx
  struct _NET_BUFFER_LIST *v80; // r14
  unsigned int v81; // ebx
  KIRQL v82; // al
  unsigned int v83; // eax
  unsigned int v84; // r10d
  void *VerifierContext; // rcx
  void *v86; // r10
  PNET_BUFFER_LIST v87; // rax
  int Context; // [rsp+20h] [rbp-E0h]
  bool v89; // [rsp+40h] [rbp-C0h]
  KIRQL v90; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v91; // [rsp+41h] [rbp-BFh] BYREF
  char v92[2]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v93; // [rsp+44h] [rbp-BCh]
  KIRQL v94; // [rsp+48h] [rbp-B8h]
  KIRQL v95; // [rsp+49h] [rbp-B7h]
  struct _NET_BUFFER_LIST *v96; // [rsp+50h] [rbp-B0h]
  unsigned int v97; // [rsp+58h] [rbp-A8h]
  struct _NET_BUFFER_LIST *v98; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v99; // [rsp+68h] [rbp-98h] BYREF
  struct _NET_BUFFER_LIST *v100; // [rsp+70h] [rbp-90h]
  struct NDIS_PCW_CONTEXT v101; // [rsp+78h] [rbp-88h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v102; // [rsp+90h] [rbp-70h]
  struct _NDIS_OPEN_BLOCK *v103; // [rsp+98h] [rbp-68h]
  struct NDIS_PCW_CONTEXT v104; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-48h]
  struct NDIS_PCW_CONTEXT v106; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v107[3]; // [rsp+D8h] [rbp-28h] BYREF
  char Parameter[8]; // [rsp+F0h] [rbp-10h] BYREF
  struct _NDIS_FILTER_BLOCK *v109; // [rsp+F8h] [rbp-8h]
  struct _NET_BUFFER_LIST *v110; // [rsp+100h] [rbp+0h]
  void (__fastcall *v111)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+108h] [rbp+8h]
  PNET_BUFFER_LIST v112; // [rsp+110h] [rbp+10h]
  NDIS_PORT_NUMBER v113; // [rsp+118h] [rbp+18h]
  __int64 v114; // [rsp+11Ch] [rbp+1Ch]
  ULONG v115; // [rsp+124h] [rbp+24h]

  v5 = *((_QWORD *)NdisBindingHandle + 2);
  v6 = SendFlags;
  v7 = 2;
  v105 = v5;
  CurrentCpu = -1;
  v95 = 2;
  v9 = PortNumber;
  v101.CurrentCpu = -1;
  v10 = NdisBindingHandle;
  DatapathEventsMask = *(_DWORD *)(v5 + 48);
  v101.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v101.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v97 = DatapathEventsMask;
  v101.DatapathEventsMask = DatapathEventsMask;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
  {
    WPP_SF_qq(70LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, NdisBindingHandle, NetBufferLists);
    v10 = NdisBindingHandle;
    v7 = 2;
  }
  v12 = 0;
  v13 = 1;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_4;
  v46 = (v6 & 1) != 0;
  v4 = ndisNblTrackerEpoch;
  v47 = 0LL;
  v48 = *(_QWORD *)(v5 + 2568);
  v102 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v10 + 85);
  v49 = 0LL;
  v91 = 0;
  LODWORD(v98) = ndisNblTrackerEpoch;
  v96 = 0LL;
  v100 = 0LL;
  v99 = 0LL;
  v93 = v46;
  v92[0] = v46;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferLists, v102, 0x8Fu, (void *)v48, v6 & 1);
    v46 = v93;
    v47 = 0LL;
    v49 = (struct _NET_BUFFER_LIST *)v91;
    v4 = (unsigned int)v98;
  }
  v50 = v48 & 0xFFFFFFFFFFFFFFFDuLL;
  v51 = v50;
  Type = v50 & 1;
  if ( (v50 & 1) != 0 )
    v103 = *(struct _NDIS_OPEN_BLOCK **)((v50 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
  else
    v103 = (struct _NDIS_OPEN_BLOCK *)v50;
  if ( (v50 & 1) != 0 )
    v50 |= 2LL * (v4 & 1);
  if ( NetBufferLists )
  {
    v53 = v103;
    Alignment = NetBufferLists;
    v55 = v99;
    v56 = v102;
    while ( 1 )
    {
      v57 = Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == v57 )
      {
        if ( !v57 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                              (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFDuLL,
                                              Type,
                                              v49,
                                              v51);
        if ( ((unsigned __int8)v57 & 4) != 0 )
          goto LABEL_139;
        SourceHandle = (struct _NDIS_OPEN_BLOCK *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          Type = SourceHandle->Header.Type;
          if ( (unsigned __int8)(Type - 17) <= 1u || (_BYTE)Type == 5 )
          {
            if ( SourceHandle != v53 || Alignment->ParentNetBufferList )
            {
              v47 = (struct _NET_BUFFER_LIST *)((char *)v47 + 1);
              v59 = v50;
              v96 = v47;
            }
            else
            {
              v55 = (struct _NET_BUFFER_LIST *)((char *)v55 + 1);
              v59 = 24LL;
              v47 = (struct _NET_BUFFER_LIST *)((char *)v47 + 1);
              v96 = v47;
            }
            goto LABEL_78;
          }
          if ( (unsigned __int8)byte_1C0099622 >= 3u )
          {
            WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)Type);
            goto LABEL_138;
          }
        }
        else if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v51);
LABEL_138:
          v47 = v96;
        }
LABEL_139:
        v59 = v50 | 4;
LABEL_78:
        Alignment->NetBufferListInfo[27] = (void *)v59;
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v99 = v55;
      if ( ((unsigned __int8)v57 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v57, (char *)v100 - (char *)v47, v92, &v91);
      v100 = v47;
      v49 = v47;
      if ( !Alignment )
      {
        v46 = v92[0];
        v12 = 0;
        v5 = v105;
        DatapathEventsMask = v97;
        v6 = SendFlags;
        v9 = PortNumber;
        LOBYTE(v49) = v91;
        break;
      }
    }
  }
  v60 = (char *)v47 - (char *)v99;
  if ( (v50 & 1) != 0 && v60 )
  {
    if ( !v46 && !(_BYTE)v49 )
    {
      v46 = KeGetCurrentIrql() == 2;
      v92[0] = v46;
    }
    v7 = 2;
    v61 = v50 & 0xFFFFFFFFFFFFFFF8uLL;
    v62 = 2 * ((v50 >> 1) & 1);
    if ( !v46 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 8 * v62 + 48), v60);
      CurrentCpu = v101.CurrentCpu;
      v13 = 1;
      DatapathEventsMask = v101.DatapathEventsMask;
      goto LABEL_4;
    }
    CurrentCpu = v101.CurrentCpu;
    DatapathEventsMask = v101.DatapathEventsMask;
    v63 = KeGetPcr()->Prcb.Number << 12;
    *(_QWORD *)(v63 + *(_QWORD *)(v61 + 8 * v62 + 40)) += v60;
  }
  else
  {
    v7 = 2;
  }
  v13 = 1;
LABEL_4:
  if ( (DatapathEventsMask & 0x200140) != 0 || (v101.DatapathCyclesMask & 0x40) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v7 = KfRaiseIrql(2u);
      v95 = v7;
    }
    if ( (DatapathEventsMask & 0x40) != 0 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      DatapathEventsMask = v101.DatapathEventsMask;
      v101.CurrentCpu = CurrentCpu;
      ++*(_QWORD *)((char *)&v101.PcwBlock->DatapathEventReferences[12]
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * CurrentCpu);
    }
    if ( !v7 && (DatapathEventsMask & 0x200000) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        DatapathEventsMask = v101.DatapathEventsMask;
        v101.CurrentCpu = CurrentCpu;
      }
      ++*(wchar_t **)((char *)&v101.PcwBlock->TotalInstanceName.Buffer
                    + ndisPcwOffsetToPerCpuData
                    + ndisPcwPerCpuDataStride * CurrentCpu);
    }
    if ( (DatapathEventsMask & 0x400100) != 0 )
    {
      v40 = 0;
      for ( i = NetBufferLists; i; v40 += j )
      {
        FirstNetBuffer = ($9B4850FCE6133531ACA1A1B2AD46EB50 *)i->FirstNetBuffer;
        for ( j = 0; FirstNetBuffer; ++j )
          FirstNetBuffer = ($9B4850FCE6133531ACA1A1B2AD46EB50 *)FirstNetBuffer->Link.Alignment;
        i = (PNET_BUFFER_LIST)i->Link.Alignment;
      }
      if ( (DatapathEventsMask & 0x100) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          DatapathEventsMask = v101.DatapathEventsMask;
          v101.CurrentCpu = CurrentCpu;
        }
        v44 = (char *)v101.PcwBlock + ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * CurrentCpu;
        v45 = v40;
        *((_QWORD *)v44 + 8) += v40;
      }
      else
      {
        v45 = v40;
      }
      if ( !v7 && (DatapathEventsMask & 0x400000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v101.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v101.PcwBlock->TotalInstanceName
                  + ndisPcwOffsetToPerCpuData
                  + ndisPcwPerCpuDataStride * CurrentCpu
                  + 16) += v45;
      }
    }
    if ( (v101.DatapathCyclesMask & 0x40) != 0 )
    {
      ndisPcwStartCycleCounter(&v101, 6u);
    }
    else if ( v7 != 2 )
    {
      KeLowerIrql(v7);
    }
  }
  v14 = *(_DWORD *)(v5 + 2676);
  if ( v14 )
  {
    v64 = v14 - 1;
    if ( !v64 )
    {
      v16 = NetBufferLists;
      LOBYTE(Context) = 0;
      ndisMSendNBLToMiniportInternal(v5, NetBufferLists, v9, v6, Context);
      goto LABEL_34;
    }
    if ( v64 == 1 )
    {
      v16 = NetBufferLists;
      ndisMSendNetBufferListsToPackets(v5, NetBufferLists, v9, v6);
      goto LABEL_34;
    }
    v65 = 0LL;
    v93 = 0;
    if ( (unsigned __int8)byte_1C009960A >= 4u )
    {
      WPP_SF_qq(84LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v5, NetBufferLists);
      v65 = 0LL;
    }
    v66 = NetBufferLists;
    v67 = *(_DWORD *)(v5 + 540);
    for ( k = NetBufferLists; k; k = (PNET_BUFFER_LIST)k->Link.Alignment )
      k->Status = v67;
    if ( (v6 & 1) != 0 )
    {
      v65 = 1LL;
      v93 = 1;
    }
    v69 = 0LL;
    v70 = *(_DWORD *)(v5 + 48);
    v71 = 0LL;
    v104.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
    Number = -1;
    v73 = *(_DWORD *)(v5 + 80);
    v74 = 0LL;
    v97 = v73;
    p_Alignment = 0LL;
    v104.DatapathCyclesMask = v73;
    v76 = 0LL;
    v103 = 0LL;
    v98 = 0LL;
    v96 = 0LL;
    v100 = 0LL;
    v102 = 0LL;
    v104.DatapathEventsMask = v70;
    v104.CurrentCpu = -1;
    v90 = 2;
    if ( (unsigned __int8)byte_1C009960A >= 4u )
    {
      WPP_SF_qq(68LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, v5, NetBufferLists);
      LOWORD(v73) = v97;
      v69 = 0LL;
      v65 = v93;
      p_Alignment = 0LL;
      v66 = NetBufferLists;
      v71 = 0LL;
      v76 = 0LL;
    }
    v77 = v66;
    if ( (v70 & 0x280) != 0 || (v73 & 0x200) != 0 )
    {
      if ( !(_DWORD)v65 )
      {
        v82 = KfRaiseIrql(2u);
        v65 = v93;
        v69 = 0LL;
        v66 = NetBufferLists;
        p_Alignment = 0LL;
        v90 = v82;
        v71 = 0LL;
        v76 = 0LL;
      }
      if ( (v70 & 0x200) != 0 )
      {
        v83 = ndisNumNbsInNblChain(v66);
        Number = KeGetPcr()->Prcb.Number;
        v71 = 0LL;
        LOBYTE(v70) = v104.DatapathEventsMask;
        v104.CurrentCpu = Number;
        *(_QWORD *)((char *)&v104.PcwBlock->DatapathEventReferences[18]
                  + ndisPcwPerCpuDataStride * Number
                  + ndisPcwOffsetToPerCpuData) += v83;
        v69 = 0LL;
        p_Alignment = 0LL;
      }
    }
    if ( !v66 )
    {
LABEL_111:
      if ( ndisNblTrackerMode )
      {
        if ( !(_DWORD)v65 )
          v13 = 0;
        ndisNblTrackerTransferOwnershipInternal(v71, 0LL, v74->NblTracker, NdisNblTrackerEvent_SendCompletedToOpen, v13);
      }
      if ( (v70 & 0x80u) != 0 )
      {
        if ( Number == -1 )
        {
          Number = KeGetPcr()->Prcb.Number;
          v104.CurrentCpu = Number;
        }
        ++*(_QWORD *)((char *)&v104.PcwBlock->DatapathEventReferences[14]
                    + ndisPcwPerCpuDataStride * Number
                    + ndisPcwOffsetToPerCpuData);
      }
      if ( (v104.DatapathCyclesMask & 0x200) != 0 )
        ndisPcwStartCycleCounter(&v104, 9u);
      v81 = v93;
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, __int64))v74->ProtSendNetBufferListsComplete)(
        v74->SendCompleteNetBufferListsContext,
        v98,
        v93,
        v65);
      if ( (v104.DatapathCyclesMask & 0x200) != 0 )
        ndisPcwEndCycleCounter(&v104, 9u, 0x16uLL);
      if ( v103 )
        ndisMSendCompleteNetBufferListsToOpen(v103, v100, v81, &v104);
      if ( v90 != 2 )
        KeLowerIrql(v90);
      v16 = NetBufferLists;
      if ( (unsigned __int8)byte_1C009960A >= 4u )
      {
        WPP_SF_qq(69LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, v5, NetBufferLists);
        if ( (unsigned __int8)byte_1C009960A >= 4u )
          WPP_SF_qq(85LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v5, NetBufferLists);
      }
      goto LABEL_34;
    }
    v78 = v93;
    while ( 1 )
    {
      v79 = (struct _NDIS_OPEN_BLOCK *)v77->SourceHandle;
      v80 = (struct _NET_BUFFER_LIST *)v77->Link.Alignment;
      v77->Link.Alignment = 0LL;
      if ( v79 == v74 )
        break;
      if ( v79 == v69 )
      {
        *(_QWORD *)v76 = v77;
        v76 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v77;
        v102 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v77;
        goto LABEL_157;
      }
      if ( v74 )
      {
        if ( v69 )
        {
          ndisMSendCompleteNetBufferListsToOpen(v79, v77, v78, &v104);
          v69 = v103;
          p_Alignment = &v96->Link.Alignment;
          v76 = v102;
        }
        else
        {
          v69 = v79;
          v103 = v79;
          v100 = v77;
          v76 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v77;
          v102 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v77;
        }
        goto LABEL_157;
      }
      v74 = v79;
      v96 = v77;
      v71 = v77;
      p_Alignment = &v77->Link.Alignment;
      v98 = v77;
LABEL_109:
      v77 = v80;
      if ( !v80 )
      {
        Number = v104.CurrentCpu;
        LOBYTE(v70) = v104.DatapathEventsMask;
        v5 = v105;
        v65 = v93;
        goto LABEL_111;
      }
    }
    *p_Alignment = v77;
    p_Alignment = &v77->Link.Alignment;
    v96 = v77;
LABEL_157:
    v71 = v98;
    goto LABEL_109;
  }
  v15 = *(_DWORD **)(v5 + 2576);
  v16 = NetBufferLists;
  v17 = NetBufferLists;
  v99 = NetBufferLists;
  if ( *(_BYTE *)v15 == 5
    && (v15[14] & 0x8000) != 0
    && !v15[86]
    && (*(_BYTE *)(v5 + 91) && (*(_WORD *)(v5 + 1820) > 1u || *(_BYTE *)(v5 + 1999))
     || (v6 & 2) != 0
     || (*(_DWORD *)(v5 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists(v15, NetBufferLists, (__int64)&v99);
    v17 = v99;
  }
  if ( v17 )
  {
    LOBYTE(v4) = 0;
    v94 = 2;
    v93 = v4;
    v18 = *(_QWORD *)(v5 + 2560) == v5;
    v106.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
    v106.DatapathEventsMask = *(_DWORD *)(v5 + 48);
    v19 = *(_DWORD *)(v5 + 80);
    v106.DatapathCyclesMask = v19;
    v89 = v18;
    v106.CurrentCpu = -1;
    if ( v18 && (v19 & 0x80u) != 0 )
    {
      v93 = v6 & 1;
      if ( (v6 & 1) == 0 )
        v94 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v106, 7u);
      LOBYTE(v84) = v84 ^ 1;
      v93 = v84;
    }
    NextSendNetBufferListsContext = *(struct _NET_BUFFER_LIST **)(v5 + 2560);
    NextSendNetBufferListsHandler = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v5 + 2656);
    v22 = *(struct _NDIS_FILTER_BLOCK **)(v5 + 2576);
    v96 = NextSendNetBufferListsContext;
    if ( v22->Header.Type == 17 )
    {
      NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v17, v9, v6);
    }
    else if ( !ndisIterativeDataPathDisabled && ((v6 & 1) != 0 || KeGetCurrentIrql() == 2) )
    {
      v23 = KeGetPcr()->Prcb.Number;
      v24 = (_NET_BUFFER_LIST **)v107;
      v107[2] = 0LL;
      v25 = v99;
      v97 = v23;
      v107[0] = v99;
      v107[1] = v99;
      v99->ChildRefCount = v6;
      v25->Scratch = 0LL;
      v25->Status = PortNumber;
      if ( v22->Header.Type == 5 )
      {
        while ( *v24 )
        {
          v26 = v22;
          v27 = (__int64)v22->IterativeDataPathTracker[v23];
          v105 = v27;
          v28 = *(_BYTE *)(v27 + 16);
          *(_BYTE *)(v27 + 16) = 1;
          v29 = *v24;
          v91 = v28;
          *v24 = 0LL;
          if ( v29 )
          {
            v30 = v96;
            do
            {
              v31 = ndisVerifierNdisDispatch;
              ChildRefCount = (unsigned int)v29->ChildRefCount;
              Scratch = (_NET_BUFFER_LIST *)v29->Scratch;
              NdisReserved2 = v29->NdisReserved2;
              v29->ChildRefCount = 0;
              if ( v31 && v22->Header.Type == 5 && (VerifierContext = v22->VerifierContext) != 0LL )
              {
                v31->NdisFilterSendNetBufferListsHandler(
                  v30,
                  v29,
                  NdisReserved2,
                  ChildRefCount,
                  VerifierContext,
                  NextSendNetBufferListsHandler);
              }
              else if ( (char *)NextSendNetBufferListsHandler == (char *)ndisMSendNBLToMiniport )
              {
                LOBYTE(Context) = 0;
                ndisMSendNBLToMiniportInternal(v30, v29, NdisReserved2, ChildRefCount, Context);
              }
              else
              {
                NextSendNetBufferListsHandler(v30, v29, NdisReserved2, ChildRefCount);
              }
              v29 = Scratch;
            }
            while ( Scratch );
            v27 = v105;
            v26 = v22;
            v28 = v91;
            NextSendNetBufferListsContext = v96;
            v23 = v97;
          }
          *(_BYTE *)(v27 + 16) = 0;
          if ( v28 )
          {
            *(_BYTE *)(v27 + 16) = 1;
LABEL_25:
            v18 = v89;
            goto LABEL_26;
          }
          v22 = (struct _NDIS_FILTER_BLOCK *)v22->NextSendNetBufferListsObject;
          v24 = (_NET_BUFFER_LIST **)v27;
          NextSendNetBufferListsContext = (struct _NET_BUFFER_LIST *)v26->NextSendNetBufferListsContext;
          NextSendNetBufferListsHandler = v26->NextSendNetBufferListsHandler;
          v96 = NextSendNetBufferListsContext;
          if ( v22->Header.Type != 5 )
            goto LABEL_25;
        }
        v18 = v89;
      }
      else
      {
LABEL_26:
        v35 = *v24;
        if ( *v24 )
        {
          *v24 = 0LL;
          do
          {
            v36 = ndisVerifierNdisDispatch;
            v37 = (unsigned int)v35->ChildRefCount;
            v38 = (_NET_BUFFER_LIST *)v35->Scratch;
            v39 = v35->NdisReserved2;
            v35->ChildRefCount = 0;
            if ( v36 && v22->Header.Type == 5 && (v86 = v22->VerifierContext) != 0LL )
            {
              v36->NdisFilterSendNetBufferListsHandler(
                NextSendNetBufferListsContext,
                v35,
                v39,
                v37,
                v86,
                NextSendNetBufferListsHandler);
            }
            else if ( (char *)NextSendNetBufferListsHandler == (char *)ndisMSendNBLToMiniport )
            {
              LOBYTE(Context) = 0;
              ndisMSendNBLToMiniportInternal(NextSendNetBufferListsContext, v35, v39, v37, Context);
            }
            else
            {
              NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v35, v39, v37);
            }
            NextSendNetBufferListsContext = v96;
            v35 = v38;
          }
          while ( v38 );
        }
      }
    }
    else
    {
      v110 = NextSendNetBufferListsContext;
      v109 = v22;
      v114 = 0LL;
      v111 = NextSendNetBufferListsHandler;
      v112 = v17;
      v113 = v9;
      v115 = v6;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
             Parameter,
             0x4CCCuLL,
             0,
             0LL) < 0 )
      {
        v87 = v17;
        do
        {
          v87->Status = -1073741670;
          v87 = (PNET_BUFFER_LIST)v87->Link.Alignment;
        }
        while ( v87 );
        do
        {
          v17 = (PNET_BUFFER_LIST)v17->Link.Alignment;
          ++v12;
        }
        while ( v17 );
        _InterlockedExchangeAdd(&v22->DroppedSendNbls, v12);
        ndisQueueStackExpansionFallbackNbls(v22, v99, 1u);
      }
    }
    if ( v18 )
    {
      if ( SLOBYTE(v106.DatapathCyclesMask) < 0 )
        ndisPcwEndCycleCounter(&v106, 7u, 0x14uLL);
      if ( (_BYTE)v93 && v94 != 2 )
        KeLowerIrql(v94);
    }
    v16 = NetBufferLists;
  }
LABEL_34:
  if ( (v101.DatapathCyclesMask & 0x40) != 0 )
  {
    ndisPcwEndCycleCounter(&v101, 6u, 0x13uLL);
    if ( v95 != 2 )
      KeLowerIrql(v95);
  }
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(71LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, NdisBindingHandle, v16);
}
