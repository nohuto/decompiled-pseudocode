/*
 * XREFs of NdisMIndicateReceiveNetBufferLists @ 0x1C0014510
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0015670 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     McTemplateK0qqqqqqqq @ 0x1C00690F8 (McTemplateK0qqqqqqqq.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisMIndicateReceiveNetBufferLists(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  PNET_BUFFER_LIST v5; // r10
  char v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 CurrentIrql; // rax
  __int64 v11; // rbx
  struct _NDIS_FILTER_BLOCK *v12; // rdi
  void (*v13)(void); // r12
  void *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // ecx
  unsigned int v18; // r15d
  unsigned int *v19; // r12
  __int64 v20; // rdi
  int v21; // r13d
  ULONG v22; // ecx
  unsigned int v23; // edx
  ULONG v24; // r10d
  unsigned int v25; // eax
  NDIS_PORT_NUMBER v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  struct _NET_BUFFER_LIST *v29; // r15
  int v30; // r14d
  unsigned __int64 v31; // rbx
  char v32; // di
  unsigned int v33; // r10d
  _DWORD *v34; // r12
  _BOOL8 v35; // r8
  __int64 v36; // r9
  struct NDIS_NBL_TRACKER_HANDLE__ *v37; // r11
  unsigned __int64 v38; // rbx
  unsigned __int8 *v39; // r13
  struct _NET_BUFFER_LIST *v40; // r15
  void *v41; // rdi
  unsigned __int8 *SourceHandle; // rcx
  _QWORD *v43; // r15
  unsigned __int64 Alignment; // rcx
  __int64 v45; // rax
  char v46; // cl
  __int64 v47; // r14
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned int v50; // eax
  __int64 v51; // r15
  unsigned int v52; // ecx
  unsigned int v53; // r8d
  unsigned int v54; // eax
  LARGE_INTEGER *v55; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  struct _NET_BUFFER_LIST *v57; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int v59; // eax
  _SLIST_HEADER *v60; // rcx
  __int64 v61; // rax
  unsigned int Number; // ecx
  int v63; // r9d
  KIRQL v64; // r11
  char v65; // [rsp+58h] [rbp-B0h]
  _BYTE v66[3]; // [rsp+69h] [rbp-9Fh] BYREF
  unsigned int v67; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v68[4]; // [rsp+70h] [rbp-98h] BYREF
  ULONG v69; // [rsp+74h] [rbp-94h]
  struct _NET_BUFFER_LIST *v70; // [rsp+78h] [rbp-90h]
  __int64 v71; // [rsp+80h] [rbp-88h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v72; // [rsp+88h] [rbp-80h]
  char *v73; // [rsp+90h] [rbp-78h]
  struct NDIS_PCW_CONTEXT v74; // [rsp+98h] [rbp-70h] BYREF
  PNET_BUFFER_LIST v75; // [rsp+B0h] [rbp-58h] BYREF
  PNET_BUFFER_LIST v76; // [rsp+B8h] [rbp-50h]
  __int64 v77; // [rsp+C0h] [rbp-48h]
  char Parameter[8]; // [rsp+C8h] [rbp-40h] BYREF
  struct _NDIS_FILTER_BLOCK *v79; // [rsp+D0h] [rbp-38h]
  void *v80; // [rsp+D8h] [rbp-30h]
  void (*v81)(void); // [rsp+E0h] [rbp-28h]
  PNET_BUFFER_LIST v82; // [rsp+E8h] [rbp-20h]
  NDIS_PORT_NUMBER v83; // [rsp+F0h] [rbp-18h]
  int v84; // [rsp+F4h] [rbp-14h]
  ULONG v85; // [rsp+F8h] [rbp-10h]
  ULONG v86; // [rsp+FCh] [rbp-Ch]
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+100h] [rbp-8h] BYREF

  v5 = NetBufferList;
  v74.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 5);
  v7 = ReceiveFlags;
  v74.DatapathEventsMask = *((_DWORD *)MiniportAdapterHandle + 12);
  v8 = *((_DWORD *)MiniportAdapterHandle + 20);
  v69 = NumberOfNetBufferLists;
  v67 = PortNumber;
  v70 = NetBufferList;
  v74.DatapathCyclesMask = v8;
  v74.CurrentCpu = -1;
  if ( (v8 & 4) != 0 )
  {
    if ( (ReceiveFlags & 1) == 0 )
      KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v74, 2u);
    *(_QWORD *)&PortNumber = v67;
    *(_QWORD *)&NumberOfNetBufferLists = v69;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 672) & 1) != 0 )
  {
    v55 = (LARGE_INTEGER *)v5;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v5 = v70;
    if ( v70 )
    {
      do
      {
        v55[44] = PerformanceCounter;
        v55 = (LARGE_INTEGER *)v55->QuadPart;
      }
      while ( v55 );
    }
    *(_QWORD *)&NumberOfNetBufferLists = v69;
    *(_QWORD *)&PortNumber = v67;
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 2672) )
  {
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      ndisGenerateNetBufferListCorrelationIds(v5, NumberOfNetBufferLists);
      *(_QWORD *)&PortNumber = v67;
    }
    v9 = 0LL;
    if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    {
LABEL_7:
      HIDWORD(CurrentIrql) = -2176;
      v11 = MEMORY[0xFFFFF78000000320];
      v12 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 315);
      v13 = (void (*)(void))*((_QWORD *)MiniportAdapterHandle + 329);
      v14 = (void *)*((_QWORD *)MiniportAdapterHandle + 313);
      if ( v12->Header.Type == 17 )
      {
        ((void (__fastcall *)(void *, PNET_BUFFER_LIST))v13)(v14, v5);
      }
      else if ( (ReceiveFlags & 2) == 0
             && ndisIterativeDataPathDisabled == (ReceiveFlags & 2)
             && ((ReceiveFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
      {
        LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
        v43 = &v75;
        v67 = CurrentIrql;
        v76 = 0LL;
        v77 = 0LL;
        v75 = v5;
        Alignment = v5->Link.Alignment;
        v76 = v5;
        v5->Scratch = 0LL;
        v5->ChildRefCount = ReceiveFlags;
        v5->Status = PortNumber;
        if ( Alignment )
        {
          *(_QWORD *)(Alignment + 112) = NumberOfNetBufferLists;
          CurrentIrql = v67;
        }
        if ( v12->Header.Type == 5 )
        {
          while ( *v43 )
          {
            *(_QWORD *)&PortNumber = v12;
            v45 = (__int64)&(*v12->IterativeDataPathTracker)[4 * CurrentIrql + 2];
            v73 = (char *)v45;
            v46 = *(_BYTE *)(v45 + 16);
            *(_BYTE *)(v45 + 16) = 1;
            *(_QWORD *)&NumberOfNetBufferLists = *v43;
            v66[0] = v46;
            *v43 = 0LL;
            if ( *(_QWORD *)&NumberOfNetBufferLists )
            {
              do
              {
                v47 = *(_QWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 112LL);
                v48 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL);
                v49 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 140LL);
                if ( **(_QWORD **)&NumberOfNetBufferLists )
                  v50 = *(_DWORD *)(**(_QWORD **)&NumberOfNetBufferLists + 112LL);
                else
                  v50 = 1;
                *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL) = 0;
                ndisCallReceiveHandler(
                  v12,
                  v13,
                  v14,
                  *(struct _NET_BUFFER_LIST **)&NumberOfNetBufferLists,
                  v49,
                  v50,
                  v48);
                *(_QWORD *)&NumberOfNetBufferLists = v47;
              }
              while ( v47 );
              v7 = ReceiveFlags;
              v45 = (__int64)v73;
              *(_QWORD *)&PortNumber = v12;
              v46 = v66[0];
            }
            *(_BYTE *)(v45 + 16) = 0;
            if ( v46 )
            {
              *(_BYTE *)(v45 + 16) = 1;
              goto LABEL_68;
            }
            v12 = (struct _NDIS_FILTER_BLOCK *)v12->NextIndicateReceiveNetBufferListsObject;
            v43 = (_QWORD *)v45;
            v13 = *(void (**)(void))(*(_QWORD *)&PortNumber + 504LL);
            v14 = *(void **)(*(_QWORD *)&PortNumber + 512LL);
            CurrentIrql = v67;
            if ( v12->Header.Type != 5 )
              goto LABEL_68;
          }
        }
        else
        {
LABEL_68:
          *(_QWORD *)&NumberOfNetBufferLists = *v43;
          if ( *v43 )
          {
            *v43 = 0LL;
            do
            {
              v51 = *(_QWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 112LL);
              v52 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL);
              v53 = *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 140LL);
              if ( **(_QWORD **)&NumberOfNetBufferLists )
                v54 = *(_DWORD *)(**(_QWORD **)&NumberOfNetBufferLists + 112LL);
              else
                v54 = 1;
              *(_DWORD *)(*(_QWORD *)&NumberOfNetBufferLists + 132LL) = 0;
              ndisCallReceiveHandler(v12, v13, v14, *(struct _NET_BUFFER_LIST **)&NumberOfNetBufferLists, v53, v54, v52);
              *(_QWORD *)&NumberOfNetBufferLists = v51;
            }
            while ( v51 );
          }
        }
      }
      else
      {
        v85 = NumberOfNetBufferLists;
        v83 = PortNumber;
        v79 = v12;
        v80 = v14;
        v84 = 2;
        v81 = v13;
        v82 = v5;
        v86 = ReceiveFlags;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
        {
          v57 = v70;
          for ( i = v70; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
            i->Status = -1073741670;
          v59 = 0;
          v60 = (_SLIST_HEADER *)v57;
          if ( v57 )
          {
            do
            {
              v60 = (_SLIST_HEADER *)v60->Alignment;
              ++v59;
            }
            while ( v60 );
          }
          _InterlockedExchangeAdd(&v12->DroppedReceiveNbls, v59);
          if ( (ReceiveFlags & 2) == 0 )
            ndisQueueStackExpansionFallbackNbls(v12, v57, 0);
        }
      }
      v15 = (unsigned __int128)(ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v11) * (__int128)0x346DC5D63886594BLL) >> 64;
      v16 = ndisTimeIncrement * (MEMORY[0xFFFFF78000000320] - v11) / 10000;
      v17 = v7 & 1;
      v67 = v17;
      if ( (v7 & 1) == 0 && KeGetCurrentIrql() != 2 )
        goto LABEL_26;
      v18 = 512;
      v19 = (unsigned int *)(*((_QWORD *)MiniportAdapterHandle + 414) + (KeGetPcr()->Prcb.Number << 12));
      LODWORD(v71) = 512;
      v20 = *v19;
      v21 = ndisPeriodicReceivesNblCounts[v20];
      v73 = (char *)&ndisPeriodicReceivesNblCounts[v20];
      if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      {
        LOBYTE(v24) = v69;
        *(_QWORD *)&NumberOfNetBufferLists = 512LL;
      }
      else
      {
        *(_QWORD *)&PortNumber = WatchdogInformation.DpcTimeLimit;
        if ( WatchdogInformation.DpcTimeLimit )
        {
          v22 = WatchdogInformation.DpcTimeCount << 10;
          if ( WatchdogInformation.DpcTimeLimit == 1280 )
            v23 = v22 / 0x500;
          else
            v23 = v22 / WatchdogInformation.DpcTimeLimit;
          v24 = v69;
          HIDWORD(v15) = 0;
          v25 = v21 * (1024 - v23);
          LODWORD(v15) = v25 % v69;
          v18 = v25 / v69;
        }
        else
        {
          v24 = v69;
        }
        if ( WatchdogInformation.DpcWatchdogLimit )
        {
          *(_QWORD *)&PortNumber = WatchdogInformation.DpcWatchdogCount << 10;
          if ( WatchdogInformation.DpcWatchdogLimit == 7680 )
            v26 = PortNumber / 0x1E00;
          else
            v26 = PortNumber / WatchdogInformation.DpcWatchdogLimit;
          if ( v26 > 0x200 )
            v26 = 1024;
          HIDWORD(v15) = 0;
          v27 = v21 * (1024 - v26);
          if ( v27 )
          {
            LODWORD(v15) = v27 % v24;
            *(_QWORD *)&NumberOfNetBufferLists = v27 / v24;
          }
          else
          {
            LODWORD(v15) = 0 % v24;
            *(_QWORD *)&NumberOfNetBufferLists = 0 / v24;
          }
        }
        else
        {
          *(_QWORD *)&NumberOfNetBufferLists = (unsigned int)v71;
        }
      }
      v28 = v20 + 1;
      if ( (unsigned int)(v20 + 1) >= 0xB || v18 >= 0x200 )
      {
        if ( !(_DWORD)v20 || v18 <= 0x300 )
        {
LABEL_25:
          v17 = v67;
LABEL_26:
          v29 = v70;
          v30 = v7 & 2;
          if ( v30 && ndisNblTrackerMode )
            ndisNblTrackerTransferOwnershipInternal(
              v70,
              *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
              *((_QWORD *)MiniportAdapterHandle + 513),
              0x8Eu,
              v17);
          if ( Microsoft_Windows_Networking_CorrelationEnabled && v30 )
            ndisMarkNetBufferListCorrelationIdsAsUsed(
              v29,
              v15,
              *(_QWORD *)&PortNumber,
              *(_QWORD *)&NumberOfNetBufferLists);
          goto LABEL_28;
        }
        v28 = v20 - 1;
      }
      if ( v28 != 11 )
      {
        *v19 = v28;
        if ( (dword_1C0099FC4 & 0x200) != 0 )
        {
          v65 = NumberOfNetBufferLists;
          v61 = v28;
          Number = KeGetPcr()->Prcb.Number;
          v63 = (*((_QWORD *)MiniportAdapterHandle + 506) >> 24) & 0xFFFFFF;
          McTemplateK0qqqqqqqq(
            Number,
            v63,
            (_DWORD)MiniportAdapterHandle + 4032,
            v63,
            Number,
            v24,
            v16,
            *(_DWORD *)v73,
            ndisPeriodicReceivesNblCounts[v61],
            v18,
            v65);
        }
      }
      goto LABEL_25;
    }
    v31 = *((_QWORD *)MiniportAdapterHandle + 314);
    v32 = ndisNblTrackerEpoch;
    v33 = 129;
    v73 = 0LL;
    if ( (ReceiveFlags & 2) == 0 )
      v33 = 128;
    v71 = 0LL;
    v68[0] = 0;
    v34 = 0LL;
    v35 = (ReceiveFlags & 1) != 0;
    v36 = 0LL;
    v37 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)MiniportAdapterHandle + 513);
    v72 = v37;
    v66[0] = (ReceiveFlags & 1) != 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v70, v37, v33, (void *)v31, v35);
      v37 = v72;
      v9 = 0LL;
      v36 = 0LL;
    }
    v38 = v31 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v38 & 1) != 0 )
    {
      v39 = *(unsigned __int8 **)((v38 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v38 |= 2LL * (v32 & 1);
    }
    else
    {
      v39 = (unsigned __int8 *)v38;
    }
    v5 = v70;
    v40 = v70;
    if ( !v70 )
    {
LABEL_51:
      if ( (v38 & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(v38, (char *)v34 - v36, v66, v68);
        v5 = v70;
      }
      *(_QWORD *)&NumberOfNetBufferLists = v69;
      *(_QWORD *)&PortNumber = v67;
      goto LABEL_7;
    }
LABEL_38:
    v41 = v40->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( v40->NetBufferListInfo[27] != v41 )
      {
LABEL_47:
        if ( ((unsigned __int8)v41 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v41, v73 - (char *)v34, v66, v68);
          v37 = v72;
          v36 = v71;
        }
        v73 = (char *)v34;
        if ( !v40 )
        {
          v5 = v70;
          goto LABEL_51;
        }
        goto LABEL_38;
      }
      if ( !v41 && !v40->SourceHandle )
        v40->SourceHandle = (void *)ndisSourceHandleFromOwner((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFFDuLL, v9, v35);
      if ( ((unsigned __int8)v41 & 4) != 0 )
        goto LABEL_98;
      SourceHandle = (unsigned __int8 *)v40->SourceHandle;
      if ( SourceHandle )
      {
        v9 = *SourceHandle;
        if ( (unsigned __int8)(v9 - 17) <= 1u || (_BYTE)v9 == 5 )
        {
          if ( SourceHandle != v39 || v40->ParentNetBufferList )
          {
            v34 = (_DWORD *)((char *)v34 + 1);
            v40->NetBufferListInfo[27] = (void *)v38;
          }
          else
          {
            ++v36;
            v40->NetBufferListInfo[27] = (void *)24;
            v71 = v36;
            v34 = (_DWORD *)((char *)v34 + 1);
          }
          goto LABEL_46;
        }
        if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v40, (unsigned __int8)v9);
          goto LABEL_97;
        }
      }
      else if ( (unsigned __int8)byte_1C0098762 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v40);
LABEL_97:
        v36 = v71;
        v37 = v72;
      }
LABEL_98:
      v40->NetBufferListInfo[27] = (void *)(v38 | 4);
LABEL_46:
      v40 = (struct _NET_BUFFER_LIST *)v40->Link.Alignment;
      if ( !v40 )
        goto LABEL_47;
    }
  }
  if ( (ReceiveFlags & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, PNET_BUFFER_LIST, _QWORD))MiniportAdapterHandle + 308))(
      *((_QWORD *)MiniportAdapterHandle + 294),
      v5,
      ReceiveFlags & 1);
LABEL_28:
  if ( (v74.DatapathCyclesMask & 4) != 0 )
  {
    ndisPcwEndCycleCounter(&v74, 2u, 0xFuLL);
    if ( v64 != 2 )
      KeLowerIrql(v64);
  }
}
