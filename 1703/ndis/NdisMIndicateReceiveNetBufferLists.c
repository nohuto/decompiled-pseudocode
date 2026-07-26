/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C0002030
 * Callers:
 *     <none>
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001824 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003250 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00035C0 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00058A0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     Template_qqqqqqqq @ 0x1C0068068 (Template_qqqqqqqq.c)
 */

void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  KIRQL v5; // bl
  NDIS_PORT_NUMBER v6; // r10d
  char v7; // r12
  PNET_BUFFER_LIST v8; // r11
  NDIS_HANDLE v9; // r15
  __int64 CurrentIrql; // rax
  __int64 v11; // rbx
  struct _NDIS_FILTER_BLOCK *v12; // rsi
  struct _NDIS_FILTER_BLOCK *v13; // r13
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // rdi
  PNET_BUFFER_LIST v15; // r14
  unsigned int v16; // esi
  __int64 v17; // r8
  __int64 v18; // rdx
  char *PoolWithTag; // rdi
  _QWORD *XmitLinkSpeedIndicateUp; // r13
  PNET_BUFFER_LIST v21; // rcx
  _QWORD *v22; // rsi
  _QWORD *v23; // r15
  unsigned int v24; // r14d
  int v25; // ebx
  _QWORD *v26; // r12
  __int64 v27; // rsi
  struct _NET_BUFFER_LIST *v28; // rdx
  _QWORD *v29; // rsi
  int v30; // r15d
  unsigned int v31; // r14d
  unsigned int k; // esi
  __int64 v33; // rcx
  PNET_BUFFER_LIST v34; // rsi
  __int64 v35; // rbx
  unsigned int v36; // r12d
  unsigned int v37; // esi
  unsigned int *v38; // r14
  __int64 v39; // rdi
  int v40; // r15d
  _DWORD *v41; // r13
  ULONG v42; // ecx
  unsigned int v43; // edx
  unsigned int v44; // r9d
  char v45; // r10
  unsigned int v46; // ecx
  struct NDIS_NBL_TRACKER_HANDLE__ **v47; // rdi
  enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT v48; // r9d
  struct _NET_BUFFER_LIST **v49; // r14
  unsigned __int64 Alignment; // rcx
  struct _NDIS_FILTER_BLOCK *v51; // r12
  __int64 v52; // r13
  char v53; // al
  struct _NET_BUFFER_LIST *v54; // r9
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v57; // eax
  struct _NET_BUFFER_LIST *v58; // r9
  struct _NET_BUFFER_LIST *v59; // r14
  unsigned int v60; // ecx
  unsigned int v61; // edx
  unsigned int v62; // eax
  ULONG v63; // eax
  unsigned int v64; // r12d
  int v65; // r13d
  _QWORD *v66; // r15
  unsigned int v67; // r14d
  __int64 v68; // rcx
  struct _NET_BUFFER_LIST *v69; // rdx
  unsigned int v70; // r14d
  PNET_BUFFER_LIST v71; // rcx
  void (__fastcall *IndicateOffloadEventHandler)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // rcx
  void (*Offload)(void); // r12
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // r13
  unsigned int v75; // r9d
  struct _NET_BUFFER_LIST **v76; // rdx
  void (__fastcall *v77)(void *, _NET_BUFFER_LIST *); // r8
  __int64 v78; // r14
  char v79; // al
  struct _NET_BUFFER_LIST *v80; // r9
  struct _NET_BUFFER_LIST *v81; // rsi
  struct _NET_BUFFER_LIST *v82; // r9
  struct _NET_BUFFER_LIST *v83; // rsi
  KIRQL v84; // r11
  PNET_BUFFER_LIST i; // rax
  unsigned int v86; // ecx
  PNET_BUFFER_LIST j; // rax
  __int64 v88; // rax
  unsigned int Number; // ecx
  int v90; // r9d
  unsigned int v91; // [rsp+38h] [rbp-D0h]
  unsigned int v92; // [rsp+38h] [rbp-D0h]
  char v93; // [rsp+58h] [rbp-B0h]
  char v94; // [rsp+69h] [rbp-9Fh]
  char v95; // [rsp+6Ah] [rbp-9Eh]
  char v96; // [rsp+6Ah] [rbp-9Eh]
  char v97; // [rsp+6Bh] [rbp-9Dh]
  ULONG v98; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v100; // [rsp+70h] [rbp-98h]
  struct _NDIS_FILTER_BLOCK *NextIndicateReceiveNetBufferListsContext; // [rsp+78h] [rbp-90h]
  struct _NDIS_FILTER_BLOCK *v102; // [rsp+78h] [rbp-90h]
  unsigned int v103; // [rsp+80h] [rbp-88h]
  ULONG v105; // [rsp+90h] [rbp-78h]
  unsigned int v106; // [rsp+90h] [rbp-78h]
  void (__fastcall *v108)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+A0h] [rbp-68h]
  struct _NET_BUFFER_LIST *Scratch; // [rsp+A8h] [rbp-60h]
  __int64 v110; // [rsp+B0h] [rbp-58h]
  struct NDIS_PCW_CONTEXT v111; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v112[3]; // [rsp+D0h] [rbp-38h] BYREF
  PNET_BUFFER_LIST v113; // [rsp+E8h] [rbp-20h] BYREF
  PNET_BUFFER_LIST v114; // [rsp+F0h] [rbp-18h]
  __int64 v115; // [rsp+F8h] [rbp-10h]
  struct NDIS_PCW_CONTEXT v116; // [rsp+100h] [rbp-8h] BYREF
  char Parameter[8]; // [rsp+118h] [rbp+10h] BYREF
  void (__fastcall *v118)(void *, _NET_BUFFER_LIST *); // [rsp+120h] [rbp+18h]
  void (__fastcall *v119)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+128h] [rbp+20h]
  void (*v120)(void); // [rsp+130h] [rbp+28h]
  PNET_BUFFER_LIST v121; // [rsp+138h] [rbp+30h]
  int v122; // [rsp+140h] [rbp+38h]
  __int64 v123; // [rsp+144h] [rbp+3Ch]
  BOOL v124; // [rsp+14Ch] [rbp+44h]
  char v125[8]; // [rsp+150h] [rbp+48h] BYREF
  struct _NDIS_FILTER_BLOCK *v126; // [rsp+158h] [rbp+50h]
  struct _NDIS_FILTER_BLOCK *v127; // [rsp+160h] [rbp+58h]
  void (*v128)(void); // [rsp+168h] [rbp+60h]
  PNET_BUFFER_LIST v129; // [rsp+170h] [rbp+68h]
  NDIS_PORT_NUMBER v130; // [rsp+178h] [rbp+70h]
  int v131; // [rsp+17Ch] [rbp+74h]
  ULONG v132; // [rsp+180h] [rbp+78h]
  ULONG v133; // [rsp+184h] [rbp+7Ch]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+188h] [rbp+80h] BYREF

  v5 = 2;
  v6 = PortNumber;
  v7 = ReceiveFlags;
  v116.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v8 = NetBufferList;
  v116.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
  v9 = MiniportAdapterHandle;
  v98 = NumberOfNetBufferLists;
  v94 = 2;
  v116.DatapathCyclesMask = *((_DWORD *)MiniportAdapterHandle + 20);
  v116.CurrentCpu = -1;
  if ( (v116.DatapathCyclesMask & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
    {
      v5 = KfRaiseIrql(2u);
      v94 = v5;
    }
    ndisPcwStartCycleCounter(&v116, 2u);
    NumberOfNetBufferLists = v98;
  }
  if ( *((_BYTE *)v9 + 2672) )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(v8, NumberOfNetBufferLists);
    if ( ndisNblTrackerMode )
    {
      v48 = NdisNblTrackerEvent_MiniportIndicatedResources;
      if ( (ReceiveFlags & 2) == 0 )
        v48 = NdisNblTrackerEvent_MiniportIndicated;
      ndisNblTrackerTransferOwnershipInternal(
        v8,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v9 + 513),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v9 + 314),
        v48,
        (ReceiveFlags & 1) != 0);
      v6 = PortNumber;
      v8 = NetBufferList;
      NumberOfNetBufferLists = v98;
    }
    HIDWORD(CurrentIrql) = -2176;
    v11 = MEMORY[0xFFFFF78000000320];
    v12 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v9 + 315);
    v13 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v9 + 313);
    NextIndicateReceiveNetBufferListsHandler = (void (*)(void))*((_QWORD *)v9 + 329);
    v110 = MEMORY[0xFFFFF78000000320];
    NextIndicateReceiveNetBufferListsContext = v13;
    if ( v12->Header.Type != 17 )
    {
      if ( (ReceiveFlags & 2) == 0
        && ndisIterativeDataPathDisabled == (ReceiveFlags & 2)
        && ((ReceiveFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
      {
        LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
        v49 = &v113;
        v100 = CurrentIrql;
        v114 = 0LL;
        v115 = 0LL;
        v113 = v8;
        Alignment = v8->Link.Alignment;
        v114 = v8;
        v8->Scratch = 0LL;
        v8->ChildRefCount = ReceiveFlags;
        v8->Status = v6;
        if ( Alignment )
        {
          *(_QWORD *)(Alignment + 112) = NumberOfNetBufferLists;
          CurrentIrql = (unsigned int)CurrentIrql;
        }
        if ( v12->Header.Type == 5 )
        {
          while ( *v49 )
          {
            v51 = v12;
            v52 = (__int64)v12->IterativeDataPathTracker[CurrentIrql];
            v53 = *(_BYTE *)(v52 + 64);
            *(_BYTE *)(v52 + 64) = 1;
            v54 = *v49;
            v95 = v53;
            *v49 = 0LL;
            if ( v54 )
            {
              do
              {
                ChildRefCount = v54->ChildRefCount;
                NdisReserved2 = v54->NdisReserved2;
                Scratch = (struct _NET_BUFFER_LIST *)v54->Scratch;
                if ( v54->Link.Alignment )
                  v57 = *(_DWORD *)(v54->Link.Alignment + 112);
                else
                  v57 = 1;
                v54->ChildRefCount = 0;
                ndisCallReceiveHandler(
                  v12,
                  NextIndicateReceiveNetBufferListsHandler,
                  NextIndicateReceiveNetBufferListsContext,
                  v54,
                  NdisReserved2,
                  v57,
                  ChildRefCount);
                v54 = Scratch;
              }
              while ( Scratch );
              v11 = v110;
              v9 = MiniportAdapterHandle;
              v53 = v95;
            }
            *(_BYTE *)(v52 + 64) = 0;
            if ( v53 )
            {
              *(_BYTE *)(v52 + 64) = 1;
LABEL_85:
              v13 = NextIndicateReceiveNetBufferListsContext;
              v7 = ReceiveFlags;
              goto LABEL_86;
            }
            v49 = (struct _NET_BUFFER_LIST **)(v52 + 48);
            v12 = (struct _NDIS_FILTER_BLOCK *)v12->NextIndicateReceiveNetBufferListsObject;
            NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v51->NextIndicateReceiveNetBufferListsHandler;
            NextIndicateReceiveNetBufferListsContext = (struct _NDIS_FILTER_BLOCK *)v51->NextIndicateReceiveNetBufferListsContext;
            CurrentIrql = v100;
            if ( v12->Header.Type != 5 )
              goto LABEL_85;
          }
          v7 = ReceiveFlags;
        }
        else
        {
LABEL_86:
          v58 = *v49;
          if ( *v49 )
          {
            *v49 = 0LL;
            do
            {
              v59 = (struct _NET_BUFFER_LIST *)v58->Scratch;
              v60 = v58->ChildRefCount;
              v61 = v58->NdisReserved2;
              if ( v58->Link.Alignment )
                v62 = *(_DWORD *)(v58->Link.Alignment + 112);
              else
                v62 = 1;
              v58->ChildRefCount = 0;
              ndisCallReceiveHandler(v12, NextIndicateReceiveNetBufferListsHandler, v13, v58, v61, v62, v60);
              v58 = v59;
            }
            while ( v59 );
          }
        }
      }
      else
      {
        v132 = NumberOfNetBufferLists;
        v126 = v12;
        v127 = v13;
        v131 = 2;
        v128 = NextIndicateReceiveNetBufferListsHandler;
        v129 = v8;
        v130 = v6;
        v133 = ReceiveFlags;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, v125, 0x4CCCuLL, 0, 0LL) < 0 )
        {
          for ( i = NetBufferList; i; i = (PNET_BUFFER_LIST)i->Link.Alignment )
            i->Status = -1073741670;
          v86 = 0;
          for ( j = NetBufferList; j; ++v86 )
            j = (PNET_BUFFER_LIST)j->Link.Alignment;
          _InterlockedExchangeAdd(&v12->DroppedReceiveNbls, v86);
          if ( (ReceiveFlags & 2) == 0 )
            ndisQueueStackExpansionFallbackNbls(v12, NetBufferList, 0);
        }
      }
LABEL_45:
      v35 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v11) / 10000;
      v36 = v7 & 1;
      if ( !v36 && KeGetCurrentIrql() != 2 )
        goto LABEL_57;
      v37 = 512;
      v38 = (unsigned int *)(*((_QWORD *)v9 + 414) + (KeGetPcr()->Prcb.Number << 12));
      v39 = *v38;
      v40 = ndisPeriodicReceivesNblCounts[v39];
      v41 = &ndisPeriodicReceivesNblCounts[v39];
      if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      {
        LOBYTE(v44) = 0;
      }
      else
      {
        if ( WatchdogInformation.DpcTimeLimit )
        {
          v42 = WatchdogInformation.DpcTimeCount << 10;
          if ( WatchdogInformation.DpcTimeLimit == 1280 )
            v43 = v42 / 0x500;
          else
            v43 = v42 / WatchdogInformation.DpcTimeLimit;
          v37 = v40 * (1024 - v43) / v98;
        }
        if ( WatchdogInformation.DpcWatchdogLimit )
        {
          v63 = (WatchdogInformation.DpcWatchdogCount << 10) / WatchdogInformation.DpcWatchdogLimit;
          if ( v63 > 0x200 )
            v63 = 1024;
          v45 = v98;
          v44 = v40 * (1024 - v63) / v98;
          goto LABEL_54;
        }
        LOBYTE(v44) = 0;
      }
      v45 = v98;
LABEL_54:
      v46 = v39 + 1;
      if ( (unsigned int)(v39 + 1) < 0xB && v37 < 0x200 )
      {
LABEL_64:
        v47 = (struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle;
        if ( v46 != 11 )
        {
          *v38 = v46;
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000000LL) != 0 )
          {
            v93 = v44;
            v88 = v46;
            Number = KeGetPcr()->Prcb.Number;
            v90 = (*((_QWORD *)MiniportAdapterHandle + 506) >> 24) & 0xFFFFFF;
            Template_qqqqqqqq(
              Number,
              v90,
              (_DWORD)MiniportAdapterHandle + 4032,
              v90,
              Number,
              v45,
              v35,
              *v41,
              ndisPeriodicReceivesNblCounts[v88],
              v37,
              v93);
          }
        }
        goto LABEL_58;
      }
      if ( (_DWORD)v39 && v37 > 0x300 )
      {
        v46 = v39 - 1;
        goto LABEL_64;
      }
LABEL_57:
      v47 = (struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle;
LABEL_58:
      if ( (ReceiveFlags & 2) != 0 && ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          NetBufferList,
          v47[314],
          v47[513],
          NdisNblTrackerEvent_ReturnedToMiniportResources,
          v36);
      if ( Microsoft_Windows_Networking_CorrelationEnabled && (ReceiveFlags & 2) != 0 )
        ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferList);
      v5 = v94;
      goto LABEL_61;
    }
    if ( (char *)NextIndicateReceiveNetBufferListsHandler != (char *)&ndisMTopReceiveNetBufferLists )
    {
      ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD))NextIndicateReceiveNetBufferListsHandler)(
        v13,
        v8,
        v6);
      goto LABEL_45;
    }
    if ( (v8->NblFlags & 0x8000) != 0 )
    {
      (*(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD))&v13[2].DroppedUncloneableStatusIndications)(
        v13,
        v8,
        v6);
      goto LABEL_45;
    }
    if ( !BYTE1(v13[2].IfIndex) )
    {
      (*(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD))&v13[2].DroppedSendNbls)(
        v13,
        v8,
        v6);
      goto LABEL_45;
    }
    v103 = 0;
    v97 = 0;
    v105 = ReceiveFlags & 1;
    v15 = 0LL;
    if ( ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2)
      && ndisPerProcRcvTrackers
      && (v16 = KeGetPcr()->Prcb.Number,
          v17 = 2096LL * v16,
          v103 = v16,
          v18 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v17),
          (unsigned int)v18 < 3) )
    {
      v97 = 1;
      PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v18 + v17 + 8;
      *(_DWORD *)((char *)ndisPerProcRcvTrackers + v17) = v18 + 1;
    }
    else
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      if ( !PoolWithTag )
      {
        if ( (unsigned __int8)byte_1C009260B >= 2u )
          WPP_SF_(10LL, &WPP_b73f8523fdf5311d444d9d2d2cf99027_Traceguids);
LABEL_38:
        if ( (v7 & 2) == 0 )
        {
          if ( !PoolWithTag )
          {
            v34 = NetBufferList;
LABEL_42:
            if ( !v34 )
              goto LABEL_43;
            v70 = v105 != 0;
            v111.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v13->FilterInstanceName._Myptr;
            v71 = v34;
            v111.DatapathEventsMask = (unsigned int)v13->FilterFriendlyName;
            v111.DatapathCyclesMask = *(_DWORD *)&v13->Ref.ReferenceCount;
            v111.CurrentCpu = -1;
            do
            {
              v71->Flags = v71->Flags & 0xFFFFFFF4 | 8;
              v71 = (PNET_BUFFER_LIST)v71->Link.Alignment;
            }
            while ( v71 );
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
              ndisMarkNetBufferListCorrelationIdsAsUsed(v34);
            if ( LODWORD(v13[3].NextSendNetBufferListsCompleteContext) )
              v34 = (PNET_BUFFER_LIST)ndisReturnPeriodicReceives(v13, v34);
            if ( !v34 )
              goto LABEL_43;
            if ( ndisNblTrackerMode )
              ndisNblTrackerTransferOwnershipInternal(
                v34,
                0LL,
                (struct NDIS_NBL_TRACKER_HANDLE__ *)v13[2].TcpOffloadSendCompleteHandler,
                NdisNblTrackerEvent_ProtocolReturned,
                v70);
            if ( (v111.DatapathCyclesMask & 0x20) != 0 )
            {
              if ( (ReceiveFlags & 1) == 0 )
                KfRaiseIrql(2u);
              ndisPcwStartCycleCounter(&v111, 5u);
            }
            IndicateOffloadEventHandler = v13[2].IndicateOffloadEventHandler;
            Offload = (void (*)(void))v13[2].Offload;
            TcpOffloadReceiveCompleteHandler = v13[2].TcpOffloadReceiveCompleteHandler;
            v108 = IndicateOffloadEventHandler;
            if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
              goto LABEL_117;
            if ( !ndisIterativeDataPathDisabled && ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
            {
              v75 = KeGetPcr()->Prcb.Number;
              v76 = (struct _NET_BUFFER_LIST **)v112;
              v102 = (struct _NDIS_FILTER_BLOCK *)v112;
              v112[2] = 0LL;
              v106 = v75;
              v112[0] = v34;
              v112[1] = v34;
              v34->Scratch = 0LL;
              v34->ChildRefCount = v70;
              if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
              {
                while ( *v76 )
                {
                  v77 = TcpOffloadReceiveCompleteHandler;
                  v78 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96LL * v75;
                  v79 = *(_BYTE *)(v78 + 88);
                  *(_BYTE *)(v78 + 88) = 1;
                  v80 = *v76;
                  v96 = v79;
                  *v76 = 0LL;
                  if ( v80 )
                  {
                    do
                    {
                      v81 = (struct _NET_BUFFER_LIST *)v80->Scratch;
                      v91 = v80->ChildRefCount;
                      v80->ChildRefCount = 0;
                      ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, Offload, v108, v80, 0, 0, v91);
                      v80 = v81;
                    }
                    while ( v81 );
                    v11 = v110;
                    v77 = TcpOffloadReceiveCompleteHandler;
                    v9 = MiniportAdapterHandle;
                    v76 = (struct _NET_BUFFER_LIST **)v102;
                    v79 = v96;
                  }
                  *(_BYTE *)(v78 + 88) = 0;
                  if ( v79 )
                  {
                    IndicateOffloadEventHandler = v108;
                    *(_BYTE *)(v78 + 88) = 1;
                    goto LABEL_151;
                  }
                  TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 70);
                  v76 = (struct _NET_BUFFER_LIST **)(v78 + 72);
                  IndicateOffloadEventHandler = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)v77 + 68);
                  Offload = (void (*)(void))*((_QWORD *)v77 + 67);
                  v75 = v106;
                  v108 = IndicateOffloadEventHandler;
                  v102 = (struct _NDIS_FILTER_BLOCK *)(v78 + 72);
                  if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler != 5 )
                    goto LABEL_151;
                }
              }
              else
              {
LABEL_151:
                v82 = *v76;
                if ( *v76 )
                {
                  *v76 = 0LL;
                  do
                  {
                    v83 = (struct _NET_BUFFER_LIST *)v82->Scratch;
                    v92 = v82->ChildRefCount;
                    v82->ChildRefCount = 0;
                    ndisCallReceiveCompleteHandler(
                      TcpOffloadReceiveCompleteHandler,
                      Offload,
                      IndicateOffloadEventHandler,
                      v82,
                      0,
                      0,
                      v92);
                    IndicateOffloadEventHandler = v108;
                    v82 = v83;
                  }
                  while ( v83 );
                }
              }
              goto LABEL_118;
            }
            if ( NextIndicateReceiveNetBufferListsContext->Header.Type != 5 )
            {
LABEL_117:
              ((void (__fastcall *)(_QWORD, PNET_BUFFER_LIST, bool))Offload)(
                IndicateOffloadEventHandler,
                v34,
                v105 != 0);
            }
            else
            {
              v119 = IndicateOffloadEventHandler;
              v118 = TcpOffloadReceiveCompleteHandler;
              v123 = 3LL;
              v120 = Offload;
              v121 = v34;
              v122 = 0;
              v124 = v105 != 0;
              if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
                ndisQueueStackExpansionFallbackNbls(NextIndicateReceiveNetBufferListsContext, v34, 0);
            }
LABEL_118:
            if ( (v111.DatapathCyclesMask & 0x20) != 0 )
            {
              ndisPcwEndCycleCounter(&v111, 5u, 0x12uLL);
              if ( v84 != 2 )
                KeLowerIrql(v84);
            }
            v7 = ReceiveFlags;
            goto LABEL_43;
          }
          if ( PoolWithTag[692] )
          {
            v34 = (PNET_BUFFER_LIST)*((_QWORD *)PoolWithTag + 8);
            goto LABEL_42;
          }
        }
LABEL_43:
        if ( v97 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v103);
        }
        else if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        goto LABEL_45;
      }
      v6 = PortNumber;
      v8 = NetBufferList;
    }
    XmitLinkSpeedIndicateUp = (_QWORD *)v13->XmitLinkSpeedIndicateUp;
    PoolWithTag[692] = 0;
    v21 = v8;
    if ( (ReceiveFlags & 2) == 0 )
    {
      do
      {
        v15 = v21;
        v21->Flags = v21->Flags & 0xFFFFFFF0 | 4;
        v21 = (PNET_BUFFER_LIST)v21->Link.Alignment;
      }
      while ( v21 );
    }
    v22 = (_QWORD *)XmitLinkSpeedIndicateUp[41];
    if ( v22 && *(_BYTE *)(v22[3] + 56LL) >= 6u )
    {
      ndisMIndicateNetBufferListsToOpen(v22, v8, ReceiveFlags);
      *((_QWORD *)PoolWithTag + 8) = 0LL;
      *((_DWORD *)PoolWithTag + 20) = 0;
    }
    else
    {
      *(_QWORD *)PoolWithTag = NextIndicateReceiveNetBufferListsContext;
      *((_DWORD *)PoolWithTag + 11) = v98;
      *((_QWORD *)PoolWithTag + 3) = v8;
      *((_QWORD *)PoolWithTag + 1) = XmitLinkSpeedIndicateUp;
      *((_DWORD *)PoolWithTag + 4) = ReceiveFlags;
      *((_QWORD *)PoolWithTag + 4) = v15;
      *((_DWORD *)PoolWithTag + 10) = v6;
      ndisSortNetBufferLists(PoolWithTag);
      if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
      {
        if ( !*XmitLinkSpeedIndicateUp || PortNumber )
          PoolWithTag[692] = 1;
        else
          ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
        if ( !v22 )
        {
          v23 = (_QWORD *)XmitLinkSpeedIndicateUp[1];
          if ( v23 )
          {
            v24 = *((_DWORD *)PoolWithTag + 172);
            v25 = *((_DWORD *)PoolWithTag + 4) | 2;
            do
            {
              v26 = (_QWORD *)v23[53];
              v27 = 0LL;
              do
              {
                v28 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v27 + 64];
                v27 = (unsigned int)(v27 + 1);
                if ( v28 )
                  ndisMIndicateNetBufferListsToOpen(v23, v28, v25);
              }
              while ( (unsigned int)v27 <= v24 );
              v23 = v26;
            }
            while ( v26 );
            v11 = v110;
          }
          v29 = (_QWORD *)XmitLinkSpeedIndicateUp[2];
          if ( v29 )
          {
            if ( (ReceiveFlags & 2) != 0 )
            {
              v64 = *((_DWORD *)PoolWithTag + 172);
              v65 = *((_DWORD *)PoolWithTag + 4) | 2;
              do
              {
                v66 = (_QWORD *)v29[53];
                v67 = 0;
                do
                {
                  v68 = v67++;
                  v69 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v68 + 64];
                  if ( v69 )
                    ndisMIndicateNetBufferListsToOpen(v29, v69, v65);
                }
                while ( v67 <= v64 );
                v29 = v66;
              }
              while ( v66 );
              v11 = v110;
            }
            else
            {
              v30 = *((_DWORD *)PoolWithTag + 4);
              v31 = *((_DWORD *)PoolWithTag + 172);
              if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                ndisIndicateToPmodeOpens((__int64)PoolWithTag);
              for ( k = 1; k <= v31; ++k )
              {
                v33 = k;
                ndisMIndicateNetBufferListsToOpen(
                  *(NDIS_HANDLE *)&PoolWithTag[40 * v33 + 56],
                  *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v33 + 64],
                  v30);
              }
            }
          }
          v9 = MiniportAdapterHandle;
          v7 = ReceiveFlags;
        }
      }
    }
    v13 = NextIndicateReceiveNetBufferListsContext;
    goto LABEL_38;
  }
  if ( (ReceiveFlags & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))v9 + 308))(*((_QWORD *)v9 + 294), v8, ReceiveFlags & 1);
LABEL_61:
  if ( (v116.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v116, 2u, 0xFuLL);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
}
