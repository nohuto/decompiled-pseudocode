/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003550 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00038C0 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00062C0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0025614 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00258A4 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0025964 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0025B00 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DE20 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     McTemplateK0qqqqqqqq @ 0x1C0069A68 (McTemplateK0qqqqqqqq.c)
 */

void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  NDIS_PORT_NUMBER v5; // r10d
  unsigned int v6; // ebx
  char v7; // r13
  NDIS_HANDLE v8; // r15
  unsigned int v9; // eax
  __int64 CurrentIrql; // rax
  __int64 v11; // rbx
  struct _NDIS_FILTER_BLOCK *v12; // rsi
  struct _NDIS_FILTER_BLOCK *v13; // r12
  void (*NextIndicateReceiveNetBufferListsHandler)(void); // rdi
  bool v15; // zf
  struct _NET_BUFFER_LIST *v16; // r14
  unsigned int v17; // esi
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int *PoolWithTag; // rdi
  struct _NET_BUFFER_LIST *v21; // rdx
  _QWORD *XmitLinkSpeedIndicateUp; // r12
  struct _NET_BUFFER_LIST *v23; // rcx
  __int64 v24; // rsi
  void *v25; // r13
  unsigned int v26; // r14d
  int v27; // r15d
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned int v32; // r14d
  unsigned int v33; // r13d
  unsigned int v34; // r12d
  unsigned int j; // esi
  __int64 v36; // rdx
  struct _NET_BUFFER_LIST *v37; // r14
  __int64 v38; // rbx
  unsigned int v39; // r13d
  unsigned int v40; // esi
  unsigned int *v41; // r14
  __int64 v42; // rdi
  int v43; // r12d
  ULONG v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // r10d
  unsigned int v47; // r9d
  unsigned int v48; // ecx
  int v49; // ebx
  ULONG v50; // r8d
  unsigned int v51; // eax
  unsigned int v52; // r9d
  struct _NDIS_FILTER_BLOCK *v53; // rdx
  char v54; // si
  unsigned int v55; // r8d
  __int64 v56; // r14
  __int64 v57; // r9
  unsigned __int64 v58; // rbx
  char v59; // r12
  bool v60; // di
  unsigned __int64 v61; // rbx
  void (*v62)(void); // r8
  struct _NET_BUFFER_LIST *v63; // rsi
  __int64 v64; // r12
  void *v65; // rdi
  void (*SourceHandle)(void); // rcx
  unsigned __int8 v67; // dl
  __int64 v68; // rax
  unsigned __int64 v69; // r14
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rbx
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  struct _NET_BUFFER_LIST **v74; // r12
  unsigned __int64 Alignment; // rcx
  struct _NET_BUFFER_LIST *v76; // r9
  struct _NDIS_FILTER_BLOCK *v77; // rdx
  __int64 v78; // r14
  char v79; // al
  struct _NET_BUFFER_LIST *v80; // r9
  struct _NDIS_FILTER_BLOCK *v81; // rbx
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v84; // eax
  struct _NDIS_FILTER_BLOCK *NextIndicateReceiveNetBufferListsContext; // r8
  struct _NET_BUFFER_LIST *v86; // r14
  unsigned int v87; // ecx
  unsigned int v88; // edx
  unsigned int v89; // eax
  int v90; // r13d
  __int64 v91; // r12
  __int64 v92; // rcx
  __int64 v93; // rdx
  unsigned int v94; // esi
  struct _NET_BUFFER_LIST *v95; // rcx
  __int64 v96; // rax
  void (*Offload)(void); // r10
  void *IndicateOffloadEventHandler; // rcx
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // r12
  void (__fastcall *v100)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD); // rax
  LARGE_INTEGER *v101; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _NDIS_FILTER_BLOCK *v103; // rdx
  void (__fastcall *v104)(void *, _NET_BUFFER_LIST *); // r8
  __int64 v105; // r14
  char v106; // al
  struct _NET_BUFFER_LIST *v107; // r9
  void (*v108)(void); // r15
  void *v109; // r13
  struct _NET_BUFFER_LIST *v110; // rsi
  struct _NET_BUFFER_LIST *v111; // rsi
  KIRQL v112; // r11
  struct _NET_BUFFER_LIST *v113; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int v115; // ecx
  _SLIST_HEADER *v116; // rax
  __int64 v117; // rax
  unsigned int Number; // ecx
  int v119; // r9d
  KIRQL v120; // r11
  unsigned int v121; // [rsp+38h] [rbp-D0h]
  unsigned int v122; // [rsp+38h] [rbp-D0h]
  char v123; // [rsp+58h] [rbp-B0h]
  char v124; // [rsp+6Ah] [rbp-9Eh] BYREF
  char v125; // [rsp+6Bh] [rbp-9Dh]
  bool v126[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v127; // [rsp+70h] [rbp-98h]
  struct _NDIS_FILTER_BLOCK *v128; // [rsp+78h] [rbp-90h]
  unsigned int v129; // [rsp+80h] [rbp-88h]
  struct _NET_BUFFER_LIST *v130; // [rsp+88h] [rbp-80h]
  void *v131; // [rsp+90h] [rbp-78h]
  void (*v132)(void); // [rsp+98h] [rbp-70h]
  __int64 v133; // [rsp+A0h] [rbp-68h]
  __int64 v134; // [rsp+A8h] [rbp-60h]
  ULONG v135; // [rsp+B0h] [rbp-58h]
  NDIS_HANDLE v136; // [rsp+B8h] [rbp-50h]
  struct _NET_BUFFER_LIST *Scratch; // [rsp+C0h] [rbp-48h]
  struct NDIS_PCW_CONTEXT v138; // [rsp+C8h] [rbp-40h] BYREF
  struct NDIS_PCW_CONTEXT v139; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v140[3]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v141[3]; // [rsp+110h] [rbp+8h] BYREF
  char Parameter[8]; // [rsp+128h] [rbp+20h] BYREF
  void (__fastcall *v143)(void *, _NET_BUFFER_LIST *); // [rsp+130h] [rbp+28h]
  void *v144; // [rsp+138h] [rbp+30h]
  void (*v145)(void); // [rsp+140h] [rbp+38h]
  struct _NET_BUFFER_LIST *v146; // [rsp+148h] [rbp+40h]
  int v147; // [rsp+150h] [rbp+48h]
  __int64 v148; // [rsp+154h] [rbp+4Ch]
  unsigned int v149; // [rsp+15Ch] [rbp+54h]
  char v150[8]; // [rsp+160h] [rbp+58h] BYREF
  struct _NDIS_FILTER_BLOCK *v151; // [rsp+168h] [rbp+60h]
  struct _NDIS_FILTER_BLOCK *v152; // [rsp+170h] [rbp+68h]
  void (*v153)(void); // [rsp+178h] [rbp+70h]
  PNET_BUFFER_LIST v154; // [rsp+180h] [rbp+78h]
  NDIS_PORT_NUMBER v155; // [rsp+188h] [rbp+80h]
  int v156; // [rsp+18Ch] [rbp+84h]
  ULONG v157; // [rsp+190h] [rbp+88h]
  ULONG v158; // [rsp+194h] [rbp+8Ch]
  LARGE_INTEGER v159; // [rsp+198h] [rbp+90h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+1A0h] [rbp+98h] BYREF

  v5 = PortNumber;
  v6 = *((_DWORD *)MiniportAdapterHandle + 20);
  v7 = ReceiveFlags;
  v8 = MiniportAdapterHandle;
  v139.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v9 = *((_DWORD *)MiniportAdapterHandle + 12);
  v139.DatapathCyclesMask = v6;
  LODWORD(v127) = NumberOfNetBufferLists;
  LODWORD(v131) = PortNumber;
  v130 = NetBufferList;
  v136 = MiniportAdapterHandle;
  v139.DatapathEventsMask = v9;
  v139.CurrentCpu = -1;
  v135 = ReceiveFlags;
  if ( (v6 & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
      KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v139, 2u);
    NetBufferList = v130;
    NumberOfNetBufferLists = v127;
  }
  if ( (*((_DWORD *)v8 + 672) & 1) != 0 )
  {
    v101 = (LARGE_INTEGER *)NetBufferList;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    NetBufferList = v130;
    v159 = PerformanceCounter;
    if ( v130 )
    {
      do
      {
        v101[44] = PerformanceCounter;
        v101 = (LARGE_INTEGER *)v101->QuadPart;
      }
      while ( v101 );
    }
    NumberOfNetBufferLists = v127;
    v5 = (unsigned int)v131;
  }
  if ( *((_BYTE *)v8 + 2672) )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      ndisGenerateNetBufferListCorrelationIds(v130, NumberOfNetBufferLists);
      NetBufferList = v130;
    }
    if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    {
LABEL_7:
      HIDWORD(CurrentIrql) = -2176;
      v11 = MEMORY[0xFFFFF78000000320];
      v12 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 315);
      v13 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 313);
      NextIndicateReceiveNetBufferListsHandler = (void (*)(void))*((_QWORD *)v8 + 329);
      v134 = MEMORY[0xFFFFF78000000320];
      v15 = v12->Header.Type == 17;
      v128 = v13;
      if ( !v15 )
      {
        if ( (ReceiveFlags & 2) == 0
          && ndisIterativeDataPathDisabled == (ReceiveFlags & 2)
          && ((ReceiveFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v74 = (struct _NET_BUFFER_LIST **)v141;
          v129 = CurrentIrql;
          v141[2] = 0LL;
          Alignment = NetBufferList->Link.Alignment;
          v141[0] = NetBufferList;
          v141[1] = NetBufferList;
          NetBufferList->Scratch = 0LL;
          NetBufferList->ChildRefCount = ReceiveFlags;
          NetBufferList->Status = v5;
          if ( Alignment )
          {
            *(_QWORD *)(Alignment + 112) = NumberOfNetBufferLists;
            CurrentIrql = v129;
          }
          v76 = NetBufferList;
          if ( v12->Header.Type == 5 )
          {
            while ( *v74 )
            {
              v77 = v12;
              v78 = (__int64)v12->IterativeDataPathTracker[CurrentIrql];
              v79 = *(_BYTE *)(v78 + 64);
              *(_BYTE *)(v78 + 64) = 1;
              v80 = *v74;
              v125 = v79;
              *v74 = 0LL;
              if ( v80 )
              {
                v81 = v128;
                do
                {
                  ChildRefCount = v80->ChildRefCount;
                  NdisReserved2 = v80->NdisReserved2;
                  Scratch = (struct _NET_BUFFER_LIST *)v80->Scratch;
                  if ( v80->Link.Alignment )
                    v84 = *(_DWORD *)(v80->Link.Alignment + 112);
                  else
                    v84 = 1;
                  v80->ChildRefCount = 0;
                  ndisCallReceiveHandler(
                    v12,
                    NextIndicateReceiveNetBufferListsHandler,
                    v81,
                    v80,
                    NdisReserved2,
                    v84,
                    ChildRefCount);
                  v80 = Scratch;
                }
                while ( Scratch );
                v11 = v134;
                v77 = v12;
                v8 = v136;
                v79 = v125;
              }
              *(_BYTE *)(v78 + 64) = 0;
              if ( v79 )
              {
                *(_BYTE *)(v78 + 64) = 1;
                v76 = *v74;
                goto LABEL_222;
              }
              v12 = (struct _NDIS_FILTER_BLOCK *)v12->NextIndicateReceiveNetBufferListsObject;
              v74 = (struct _NET_BUFFER_LIST **)(v78 + 48);
              NextIndicateReceiveNetBufferListsContext = (struct _NDIS_FILTER_BLOCK *)v77->NextIndicateReceiveNetBufferListsContext;
              NextIndicateReceiveNetBufferListsHandler = (void (*)(void))v77->NextIndicateReceiveNetBufferListsHandler;
              CurrentIrql = v129;
              v15 = v12->Header.Type == 5;
              v128 = NextIndicateReceiveNetBufferListsContext;
              if ( !v15 )
              {
                v76 = *(struct _NET_BUFFER_LIST **)(v78 + 48);
                goto LABEL_115;
              }
            }
          }
          else
          {
LABEL_222:
            NextIndicateReceiveNetBufferListsContext = v128;
LABEL_115:
            if ( v76 )
            {
              *v74 = 0LL;
              do
              {
                v86 = (struct _NET_BUFFER_LIST *)v76->Scratch;
                v87 = v76->ChildRefCount;
                v88 = v76->NdisReserved2;
                if ( v76->Link.Alignment )
                  v89 = *(_DWORD *)(v76->Link.Alignment + 112);
                else
                  v89 = 1;
                v76->ChildRefCount = 0;
                ndisCallReceiveHandler(
                  v12,
                  NextIndicateReceiveNetBufferListsHandler,
                  NextIndicateReceiveNetBufferListsContext,
                  v76,
                  v88,
                  v89,
                  v87);
                NextIndicateReceiveNetBufferListsContext = v128;
                v76 = v86;
              }
              while ( v86 );
            }
          }
        }
        else
        {
          v154 = NetBufferList;
          v157 = NumberOfNetBufferLists;
          v151 = v12;
          v152 = v13;
          v156 = 2;
          v153 = NextIndicateReceiveNetBufferListsHandler;
          v155 = v5;
          v158 = ReceiveFlags;
          if ( KeExpandKernelStackAndCalloutEx(
                 (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                 v150,
                 0x4CCCuLL,
                 0,
                 0LL) < 0 )
          {
            v113 = v130;
            for ( i = v130; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
              i->Status = -1073741670;
            v115 = 0;
            v116 = (_SLIST_HEADER *)v113;
            if ( v113 )
            {
              do
              {
                v116 = (_SLIST_HEADER *)v116->Alignment;
                ++v115;
              }
              while ( v116 );
            }
            _InterlockedExchangeAdd(&v12->DroppedReceiveNbls, v115);
            if ( (ReceiveFlags & 2) == 0 )
              ndisQueueStackExpansionFallbackNbls(v12, v113, 0);
          }
        }
LABEL_46:
        v38 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v11) / 10000;
        v39 = v7 & 1;
        if ( v39 || KeGetCurrentIrql() == 2 )
        {
          v40 = 512;
          v41 = (unsigned int *)(*((_QWORD *)v8 + 414) + (KeGetPcr()->Prcb.Number << 12));
          v129 = 512;
          v42 = *v41;
          v43 = ndisPeriodicReceivesNblCounts[v42];
          Scratch = (struct _NET_BUFFER_LIST *)&ndisPeriodicReceivesNblCounts[v42];
          if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
          {
            LOBYTE(v47) = 0;
          }
          else
          {
            if ( WatchdogInformation.DpcTimeLimit )
            {
              v44 = WatchdogInformation.DpcTimeCount << 10;
              if ( WatchdogInformation.DpcTimeLimit == 1280 )
                v45 = v44 / 0x500;
              else
                v45 = v44 / WatchdogInformation.DpcTimeLimit;
              v46 = v127;
              v40 = v43 * (1024 - v45) / (unsigned int)v127;
            }
            else
            {
              v46 = v127;
            }
            if ( WatchdogInformation.DpcWatchdogLimit )
            {
              v50 = WatchdogInformation.DpcWatchdogCount << 10;
              if ( WatchdogInformation.DpcWatchdogLimit == 7680 )
                v51 = v50 / 0x1E00;
              else
                v51 = v50 / WatchdogInformation.DpcWatchdogLimit;
              if ( v51 > 0x200 )
                v51 = 1024;
              v52 = v43 * (1024 - v51);
              if ( v52 )
                v47 = v52 / v46;
              else
                v47 = 0 / v46;
            }
            else
            {
              LOBYTE(v47) = v129;
            }
          }
          v48 = v42 + 1;
          if ( (unsigned int)(v42 + 1) < 0xB && v40 < 0x200 )
            goto LABEL_68;
          if ( (_DWORD)v42 && v40 > 0x300 )
          {
            v48 = v42 - 1;
LABEL_68:
            if ( v48 != 11 )
            {
              *v41 = v48;
              if ( (dword_1C009AF04 & 0x200) != 0 )
              {
                v123 = v47;
                v117 = v48;
                Number = KeGetPcr()->Prcb.Number;
                v119 = (*((_QWORD *)v8 + 506) >> 24) & 0xFFFFFF;
                McTemplateK0qqqqqqqq(
                  Number,
                  v119,
                  (_DWORD)v8 + 4032,
                  v119,
                  Number,
                  v127,
                  v38,
                  (char)Scratch->Next,
                  ndisPeriodicReceivesNblCounts[v117],
                  v40,
                  v123);
              }
            }
          }
        }
        v49 = v135 & 2;
        if ( (v135 & 2) != 0 && ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v130,
            *((struct NDIS_NBL_TRACKER_HANDLE__ **)v8 + 314),
            *((_QWORD *)v8 + 513),
            142LL,
            v39);
        if ( Microsoft_Windows_Networking_CorrelationEnabled && v49 )
          ndisMarkNetBufferListCorrelationIdsAsUsed(v130);
        goto LABEL_59;
      }
      if ( (char *)NextIndicateReceiveNetBufferListsHandler != (char *)&ndisMTopReceiveNetBufferLists )
      {
        ((void (__fastcall *)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD))NextIndicateReceiveNetBufferListsHandler)(
          v13,
          NetBufferList,
          v5);
        goto LABEL_46;
      }
      if ( (NetBufferList->NblFlags & 0x8000) != 0 )
      {
        v100 = *(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD))&v13[2].DroppedUncloneableStatusIndications;
      }
      else
      {
        if ( BYTE1(v13[2].IfIndex) )
        {
          v129 = 0;
          v125 = 0;
          LODWORD(v133) = ReceiveFlags & 1;
          v16 = 0LL;
          if ( ((ReceiveFlags & 1) != 0 || KeGetCurrentIrql() == 2)
            && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
            && (v17 = KeGetPcr()->Prcb.Number,
                v18 = 2096LL * v17,
                v129 = v17,
                v19 = *(unsigned int *)(v18 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters),
                (unsigned int)v19 < 3) )
          {
            v125 = 1;
            PoolWithTag = (unsigned int *)(v18 + 696 * v19 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                                                           + 8LL);
            *(_DWORD *)(v18 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) = v19 + 1;
          }
          else
          {
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
            if ( !PoolWithTag )
            {
              if ( (unsigned __int8)byte_1C009960B >= 2u )
                WPP_SF_(10LL, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids);
LABEL_39:
              if ( (v7 & 2) == 0 )
              {
                if ( !PoolWithTag )
                {
                  v37 = v130;
LABEL_43:
                  if ( !v37 )
                    goto LABEL_44;
                  v94 = v133 != 0;
                  v138.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)v13->FilterInstanceName._Myptr;
                  v95 = v37;
                  v138.DatapathEventsMask = (unsigned int)v13->FilterFriendlyName;
                  v138.DatapathCyclesMask = *(_DWORD *)&v13->Ref.ReferenceCount;
                  v138.CurrentCpu = -1;
                  do
                  {
                    v95->Flags = v95->Flags & 0xFFFFFFF4 | 8;
                    v95 = (struct _NET_BUFFER_LIST *)v95->Link.Alignment;
                  }
                  while ( v95 );
                  v96 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
                  if ( Microsoft_Windows_Networking_CorrelationEnabled )
                    v96 = ndisMarkNetBufferListCorrelationIdsAsUsed(v37);
                  if ( LODWORD(v13[3].NextSendNetBufferListsCompleteContext) )
                  {
                    v96 = ndisReturnPeriodicReceives(v13, v37);
                    v37 = (struct _NET_BUFFER_LIST *)v96;
                  }
                  if ( !v37 )
                    goto LABEL_44;
                  if ( ndisNblTrackerMode )
                    ndisNblTrackerTransferOwnershipInternal(
                      v37,
                      0LL,
                      (unsigned __int64)v13[2].TcpOffloadSendCompleteHandler,
                      135LL,
                      v94);
                  if ( (v138.DatapathCyclesMask & 0x20) != 0 )
                  {
                    if ( !v94 )
                      KfRaiseIrql(2u);
                    ndisPcwStartCycleCounter(&v138, 5u);
                  }
                  Offload = (void (*)(void))v13[2].Offload;
                  IndicateOffloadEventHandler = v13[2].IndicateOffloadEventHandler;
                  TcpOffloadReceiveCompleteHandler = v13[2].TcpOffloadReceiveCompleteHandler;
                  v132 = Offload;
                  v131 = IndicateOffloadEventHandler;
                  if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
                    goto LABEL_141;
                  if ( !ndisIterativeDataPathDisabled )
                  {
                    if ( v94 || (v96 = KeGetCurrentIrql(), (_BYTE)v96 == 2) )
                    {
                      LODWORD(v96) = KeGetPcr()->Prcb.Number;
                      v140[2] = 0LL;
                      v103 = (struct _NDIS_FILTER_BLOCK *)v140;
                      v37->Scratch = 0LL;
                      v37->ChildRefCount = v94;
                      v15 = *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5;
                      v128 = (struct _NDIS_FILTER_BLOCK *)v140;
                      LODWORD(v133) = v96;
                      v140[0] = v37;
                      v140[1] = v37;
                      if ( v15 )
                      {
                        while ( *(_QWORD *)&v103->Header.Type )
                        {
                          v104 = TcpOffloadReceiveCompleteHandler;
                          v105 = 96 * v96 + *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 72LL;
                          v134 = v105;
                          v106 = *(_BYTE *)(v105 + 16);
                          *(_BYTE *)(v105 + 16) = 1;
                          v107 = *(struct _NET_BUFFER_LIST **)&v103->Header.Type;
                          v124 = v106;
                          *(_QWORD *)&v103->Header.Type = 0LL;
                          if ( v107 )
                          {
                            v108 = v132;
                            v109 = v131;
                            do
                            {
                              v110 = (struct _NET_BUFFER_LIST *)v107->Scratch;
                              v121 = v107->ChildRefCount;
                              v107->ChildRefCount = 0;
                              ndisCallReceiveCompleteHandler(
                                TcpOffloadReceiveCompleteHandler,
                                v108,
                                v109,
                                v107,
                                0,
                                0,
                                v121);
                              v107 = v110;
                            }
                            while ( v110 );
                            v8 = v136;
                            v104 = TcpOffloadReceiveCompleteHandler;
                            v7 = v135;
                            Offload = v132;
                            v105 = v134;
                            v103 = v128;
                            v106 = v124;
                          }
                          *(_BYTE *)(v105 + 16) = 0;
                          if ( v106 )
                          {
                            IndicateOffloadEventHandler = v131;
                            *(_BYTE *)(v105 + 16) = 1;
                            v37 = *(struct _NET_BUFFER_LIST **)&v103->Header.Type;
                            goto LABEL_201;
                          }
                          TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 70);
                          v103 = (struct _NDIS_FILTER_BLOCK *)v105;
                          Offload = (void (*)(void))*((_QWORD *)v104 + 67);
                          IndicateOffloadEventHandler = (void *)*((_QWORD *)v104 + 68);
                          v96 = (unsigned int)v133;
                          v15 = *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5;
                          v132 = Offload;
                          v131 = IndicateOffloadEventHandler;
                          v128 = (struct _NDIS_FILTER_BLOCK *)v105;
                          if ( !v15 )
                          {
                            v37 = *(struct _NET_BUFFER_LIST **)v105;
                            goto LABEL_201;
                          }
                        }
                      }
                      else
                      {
LABEL_201:
                        if ( v37 )
                        {
                          *(_QWORD *)&v103->Header.Type = 0LL;
                          do
                          {
                            v111 = (struct _NET_BUFFER_LIST *)v37->Scratch;
                            v122 = v37->ChildRefCount;
                            v37->ChildRefCount = 0;
                            ndisCallReceiveCompleteHandler(
                              TcpOffloadReceiveCompleteHandler,
                              Offload,
                              IndicateOffloadEventHandler,
                              v37,
                              0,
                              0,
                              v122);
                            Offload = v132;
                            v37 = v111;
                            IndicateOffloadEventHandler = v131;
                          }
                          while ( v111 );
                          v8 = v136;
                        }
                      }
                      goto LABEL_142;
                    }
                  }
                  if ( v128->Header.Type != 5 )
                  {
LABEL_141:
                    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))Offload)(
                      IndicateOffloadEventHandler,
                      v37,
                      v94);
                  }
                  else
                  {
                    v144 = IndicateOffloadEventHandler;
                    v143 = TcpOffloadReceiveCompleteHandler;
                    v148 = 3LL;
                    v145 = Offload;
                    v146 = v37;
                    v147 = 0;
                    v149 = v94;
                    if ( KeExpandKernelStackAndCalloutEx(
                           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                           Parameter,
                           0x4CCCuLL,
                           0,
                           0LL) < 0 )
                      ndisQueueStackExpansionFallbackNbls(v128, v37, 0);
                  }
LABEL_142:
                  if ( (v138.DatapathCyclesMask & 0x20) != 0 )
                  {
                    ndisPcwEndCycleCounter(&v138, 5u, 0x12uLL);
                    if ( v112 != 2 )
                      KeLowerIrql(v112);
                  }
                  goto LABEL_44;
                }
                if ( *((_BYTE *)PoolWithTag + 692) )
                {
                  v37 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
                  goto LABEL_43;
                }
              }
LABEL_44:
              if ( v125 )
              {
                --*(_DWORD *)(2096LL * v129 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
              }
              else if ( PoolWithTag )
              {
                ExFreePoolWithTag(PoolWithTag, 0);
              }
              goto LABEL_46;
            }
            v5 = (unsigned int)v131;
          }
          v21 = v130;
          XmitLinkSpeedIndicateUp = (_QWORD *)v13->XmitLinkSpeedIndicateUp;
          LODWORD(v132) = ReceiveFlags & 2;
          v23 = v130;
          *((_BYTE *)PoolWithTag + 692) = 0;
          if ( (ReceiveFlags & 2) == 0 )
          {
            do
            {
              v16 = v23;
              v23->Flags = v23->Flags & 0xFFFFFFF0 | 4;
              v23 = (struct _NET_BUFFER_LIST *)v23->Link.Alignment;
            }
            while ( v23 );
          }
          v24 = XmitLinkSpeedIndicateUp[41];
          if ( v24 && *(_BYTE *)(*(_QWORD *)(v24 + 24) + 56LL) >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(XmitLinkSpeedIndicateUp[41], v21, v5, (unsigned int)v127, ReceiveFlags);
            *((_QWORD *)PoolWithTag + 8) = 0LL;
            PoolWithTag[20] = 0;
          }
          else
          {
            *(_QWORD *)PoolWithTag = v128;
            PoolWithTag[11] = v127;
            *((_QWORD *)PoolWithTag + 3) = v21;
            *((_QWORD *)PoolWithTag + 1) = XmitLinkSpeedIndicateUp;
            PoolWithTag[4] = ReceiveFlags;
            *((_QWORD *)PoolWithTag + 4) = v16;
            PoolWithTag[10] = v5;
            ndisSortNetBufferLists(PoolWithTag);
            if ( *((_QWORD *)PoolWithTag + 8) || PoolWithTag[172] )
            {
              if ( !*XmitLinkSpeedIndicateUp || (_DWORD)v131 )
                *((_BYTE *)PoolWithTag + 692) = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
              if ( !v24 )
              {
                v25 = (void *)XmitLinkSpeedIndicateUp[1];
                if ( v25 )
                {
                  v26 = PoolWithTag[172];
                  v27 = PoolWithTag[4] | 2;
                  do
                  {
                    v28 = 0LL;
                    v131 = (void *)*((_QWORD *)v25 + 53);
                    do
                    {
                      v29 = (unsigned int)v28;
                      v30 = *(_QWORD *)&PoolWithTag[10 * v28 + 16];
                      v28 = (unsigned int)(v28 + 1);
                      if ( v30 )
                        ndisMIndicateNetBufferListsToOpen(v25, v30, PoolWithTag[10], PoolWithTag[10 * v29 + 20], v27);
                    }
                    while ( (unsigned int)v28 <= v26 );
                    v25 = v131;
                  }
                  while ( v131 );
                  v8 = v136;
                }
                v31 = XmitLinkSpeedIndicateUp[2];
                if ( v31 )
                {
                  v32 = PoolWithTag[172];
                  v33 = PoolWithTag[4];
                  if ( (_DWORD)v132 )
                  {
                    v90 = v33 | 2;
                    do
                    {
                      v91 = 0LL;
                      v134 = *(_QWORD *)(v31 + 424);
                      do
                      {
                        v92 = (unsigned int)v91;
                        v93 = *(_QWORD *)&PoolWithTag[10 * v91 + 16];
                        v91 = (unsigned int)(v91 + 1);
                        if ( v93 )
                          ndisMIndicateNetBufferListsToOpen(v31, v93, PoolWithTag[10], PoolWithTag[10 * v92 + 20], v90);
                      }
                      while ( (unsigned int)v91 <= v32 );
                      v31 = v134;
                    }
                    while ( v134 );
                    v8 = v136;
                  }
                  else
                  {
                    v34 = PoolWithTag[10];
                    if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                      ndisIndicateToPmodeOpens(PoolWithTag);
                    for ( j = 1; j <= v32; ++j )
                    {
                      v36 = j;
                      ndisMIndicateNetBufferListsToOpen(
                        *(_QWORD *)&PoolWithTag[10 * v36 + 14],
                        *(_QWORD *)&PoolWithTag[10 * v36 + 16],
                        v34,
                        PoolWithTag[10 * v36 + 20],
                        v33);
                    }
                  }
                }
                v7 = v135;
              }
            }
          }
          v13 = v128;
          goto LABEL_39;
        }
        v100 = *(void (__fastcall **)(struct _NDIS_FILTER_BLOCK *, PNET_BUFFER_LIST, _QWORD))&v13[2].DroppedSendNbls;
      }
      v100(v13, NetBufferList, v5);
      goto LABEL_46;
    }
    v53 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)v8 + 513);
    v54 = ndisNblTrackerEpoch;
    v55 = 129;
    v128 = v53;
    if ( (ReceiveFlags & 2) == 0 )
      v55 = 128;
    v133 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = *((_QWORD *)v8 + 314);
    v59 = 0;
    v60 = (ReceiveFlags & 1) != 0;
    v124 = 0;
    v126[0] = v60;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(
        v130,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)v53,
        v55,
        (void *)v58,
        (ReceiveFlags & 1) != 0);
      v53 = v128;
      v57 = 0LL;
      v5 = (unsigned int)v131;
    }
    v61 = v58 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v61 & 1) != 0 )
    {
      v62 = *(void (**)(void))((v61 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v61 |= 2LL * (v54 & 1);
    }
    else
    {
      v62 = (void (*)(void))v61;
    }
    v132 = v62;
    v63 = v130;
    if ( !v130 )
    {
LABEL_93:
      v69 = v56 - v57;
      if ( (v61 & 1) != 0 && v69 )
      {
        if ( !v60 && !v59 )
        {
          v60 = KeGetCurrentIrql() == 2;
          v126[0] = v60;
        }
        NumberOfNetBufferLists = v127;
        v70 = v61 >> 1;
        v71 = v61 & 0xFFFFFFFFFFFFFFF8uLL;
        v72 = 2 * (v70 & 1);
        if ( v60 )
        {
          v73 = (_QWORD *)(*(_QWORD *)(v71 + 8 * v72 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v73 += v69;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 8 * v72 + 48), v69);
        }
      }
      else
      {
        NumberOfNetBufferLists = v127;
      }
      NetBufferList = v130;
      goto LABEL_7;
    }
    v64 = 0LL;
LABEL_80:
    v65 = v63->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( v63->NetBufferListInfo[27] != v65 )
      {
LABEL_89:
        if ( ((unsigned __int8)v65 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v65, v64 - v56, v126, &v124);
          v62 = v132;
          v53 = v128;
          v57 = v133;
        }
        v64 = v56;
        if ( !v63 )
        {
          v60 = v126[0];
          v59 = v124;
          v5 = (unsigned int)v131;
          goto LABEL_93;
        }
        goto LABEL_80;
      }
      if ( !v65 && !v63->SourceHandle )
        v63->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                      (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFFDuLL,
                                      v53,
                                      v62,
                                      v57);
      if ( ((unsigned __int8)v65 & 4) != 0 )
        goto LABEL_164;
      SourceHandle = (void (*)(void))v63->SourceHandle;
      if ( SourceHandle )
        break;
      if ( (unsigned __int8)byte_1C0099622 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v63, v57);
        goto LABEL_162;
      }
LABEL_164:
      v68 = v61 | 4;
LABEL_88:
      v63->NetBufferListInfo[27] = (void *)v68;
      v63 = (struct _NET_BUFFER_LIST *)v63->Link.Alignment;
      if ( !v63 )
        goto LABEL_89;
    }
    v67 = *(_BYTE *)SourceHandle;
    if ( (unsigned __int8)(*(_BYTE *)SourceHandle - 17) <= 1u || v67 == 5 )
    {
      if ( SourceHandle != v62 || v63->ParentNetBufferList )
      {
        v53 = v128;
        ++v56;
        v68 = v61;
      }
      else
      {
        v53 = v128;
        v133 = ++v57;
        ++v56;
        v68 = 24LL;
      }
      goto LABEL_88;
    }
    if ( (unsigned __int8)byte_1C0099622 >= 3u )
    {
      WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v63, v67);
LABEL_162:
      v62 = v132;
      v57 = v133;
    }
    v53 = v128;
    goto LABEL_164;
  }
  if ( (ReceiveFlags & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))v8 + 308))(
      *((_QWORD *)v8 + 294),
      NetBufferList,
      ReceiveFlags & 1);
LABEL_59:
  if ( (v139.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v139, 2u, 0xFuLL);
    if ( v120 != 2 )
      KeLowerIrql(v120);
  }
}
