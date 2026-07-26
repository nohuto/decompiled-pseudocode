/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C0068A50
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C0028080 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001824 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003250 (ndisSortNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00058A0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  int v6; // r11d
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NDIS_FILTER_BLOCK *v8; // r13
  unsigned int v9; // r12d
  _SLIST_HEADER *v10; // rcx
  unsigned int v11; // ebx
  struct _NET_BUFFER_LIST *v12; // r10
  struct _NET_BUFFER_LIST *v13; // r15
  unsigned int Number; // esi
  struct _NDIS_RCV_TRACKER_ARRAY *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rdi
  struct _NET_BUFFER_LIST *v20; // rcx
  _QWORD *XmitLinkSpeedIndicateUp; // r14
  _QWORD *v22; // rsi
  _QWORD *v23; // rbx
  unsigned int v24; // r13d
  int v25; // r12d
  _QWORD *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rcx
  struct _NET_BUFFER_LIST *v29; // rdx
  _QWORD *v30; // rsi
  int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // esi
  unsigned int i; // ebx
  __int64 v35; // rax
  unsigned int v36; // r12d
  int v37; // r15d
  _QWORD *v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rcx
  struct _NET_BUFFER_LIST *v41; // rdx
  struct _NET_BUFFER_LIST *v42; // rbx
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v44; // rcx
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // r14
  void (*Offload)(void); // r10
  void (__fastcall *IndicateOffloadEventHandler)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // r11
  unsigned int v48; // ecx
  struct _NET_BUFFER_LIST **v49; // r15
  void (__fastcall *v50)(void *, _NET_BUFFER_LIST *); // r13
  __int64 v51; // rsi
  char v52; // r12
  struct _NET_BUFFER_LIST *v53; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v56; // r9
  unsigned int v57; // eax
  struct _NET_BUFFER_LIST *v58; // rbx
  _SLIST_HEADER *v59; // rax
  char v60; // [rsp+48h] [rbp-A9h]
  unsigned int v61; // [rsp+54h] [rbp-9Dh]
  unsigned int v62; // [rsp+58h] [rbp-99h]
  _SLIST_HEADER *v63; // [rsp+60h] [rbp-91h]
  void (*v64)(void); // [rsp+68h] [rbp-89h]
  void (__fastcall *v65)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+70h] [rbp-81h]
  struct _NET_BUFFER_LIST *v66; // [rsp+78h] [rbp-79h]
  char *PoolWithTag; // [rsp+80h] [rbp-71h]
  struct NDIS_PCW_CONTEXT v68; // [rsp+88h] [rbp-69h] BYREF
  _QWORD v69[3]; // [rsp+A8h] [rbp-49h] BYREF
  char Parameter[8]; // [rsp+C0h] [rbp-31h] BYREF
  void (__fastcall *v71)(void *, _NET_BUFFER_LIST *); // [rsp+C8h] [rbp-29h]
  void (__fastcall *v72)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+D0h] [rbp-21h]
  void (*v73)(void); // [rsp+D8h] [rbp-19h]
  struct _NET_BUFFER_LIST *v74; // [rsp+E0h] [rbp-11h]
  int v75; // [rsp+E8h] [rbp-9h]
  int v76; // [rsp+ECh] [rbp-5h]
  int v77; // [rsp+F0h] [rbp-1h]
  unsigned int v78; // [rsp+F4h] [rbp+3h]
  struct _NET_BUFFER_LIST *v80; // [rsp+150h] [rbp+5Fh]
  KIRQL NewIrql; // [rsp+160h] [rbp+6Fh]

  if ( a2 )
  {
    v80 = a2;
    v6 = a5;
    Alignment = a2;
    v8 = a1;
    v9 = a5 & 1;
    v10 = 0LL;
    v63 = 0LL;
    do
    {
      v11 = 0;
      v66 = Alignment;
      v12 = Alignment;
      if ( a6 )
      {
        do
        {
          if ( !Alignment )
            break;
          ++v11;
          v10 = (_SLIST_HEADER *)Alignment;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( v11 < a6 );
        v63 = v10;
        v80 = Alignment;
      }
      v10->Alignment = 0LL;
      v13 = 0LL;
      v62 = 0;
      v60 = 0;
      if ( (v9 || KeGetCurrentIrql() == 2)
        && ndisPerProcRcvTrackers
        && (Number = KeGetPcr()->Prcb.Number,
            v15 = ndisPerProcRcvTrackers,
            v16 = 2096LL * Number,
            v62 = Number,
            v17 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v16),
            (unsigned int)v17 < 3) )
      {
        v60 = 1;
        v18 = v16 + 696 * v17;
        v19 = (char *)ndisPerProcRcvTrackers + v18 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
        PoolWithTag = (char *)v15 + v18 + 8;
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        v19 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C009260B >= 2u )
            WPP_SF_(0xAu, &WPP_b73f8523fdf5311d444d9d2d2cf99027_Traceguids);
          goto LABEL_50;
        }
        v12 = v66;
        v6 = a5;
      }
      v20 = v12;
      XmitLinkSpeedIndicateUp = (_QWORD *)v8->XmitLinkSpeedIndicateUp;
      v19[692] = 0;
      if ( (a5 & 2) == 0 )
      {
        do
        {
          v13 = v20;
          v20->Flags = v20->Flags & 0xFFFFFFF0 | 4;
          v20 = (struct _NET_BUFFER_LIST *)v20->Link.Alignment;
        }
        while ( v20 );
      }
      v22 = (_QWORD *)XmitLinkSpeedIndicateUp[41];
      if ( v22 && *(_BYTE *)(v22[3] + 56LL) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v22, v12, a3, v11, v6);
        *((_QWORD *)v19 + 8) = 0LL;
        *((_DWORD *)v19 + 20) = 0;
        goto LABEL_50;
      }
      *((_QWORD *)v19 + 4) = v13;
      *((_DWORD *)v19 + 10) = a3;
      *((_QWORD *)v19 + 3) = v12;
      *((_QWORD *)v19 + 1) = XmitLinkSpeedIndicateUp;
      *((_DWORD *)v19 + 4) = v6;
      *(_QWORD *)v19 = v8;
      *((_DWORD *)v19 + 11) = v11;
      ndisSortNetBufferLists((__int64 *)v19);
      if ( !*((_QWORD *)v19 + 8) && !*((_DWORD *)v19 + 172) )
        goto LABEL_50;
      if ( !*XmitLinkSpeedIndicateUp || a3 )
        v19[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v19);
      if ( v22 )
        goto LABEL_50;
      v23 = (_QWORD *)XmitLinkSpeedIndicateUp[1];
      if ( v23 )
      {
        v24 = *((_DWORD *)v19 + 172);
        v25 = *((_DWORD *)v19 + 4) | 2;
        do
        {
          v26 = (_QWORD *)v23[53];
          v27 = 0LL;
          do
          {
            v28 = (unsigned int)v27;
            v29 = *(struct _NET_BUFFER_LIST **)&v19[40 * v27 + 64];
            v27 = (unsigned int)(v27 + 1);
            if ( v29 )
              ndisMIndicateNetBufferListsToOpen(v23, v29, *((_DWORD *)v19 + 10), *(_DWORD *)&v19[40 * v28 + 80], v25);
          }
          while ( (unsigned int)v27 <= v24 );
          v23 = v26;
        }
        while ( v26 );
        v8 = a1;
        v9 = a5 & 1;
      }
      v30 = (_QWORD *)XmitLinkSpeedIndicateUp[2];
      if ( !v30 )
        goto LABEL_49;
      if ( (a5 & 2) != 0 )
      {
        v36 = *((_DWORD *)v19 + 172);
        v37 = *((_DWORD *)v19 + 4) | 2;
        do
        {
          v38 = (_QWORD *)v30[53];
          v39 = 0LL;
          do
          {
            v40 = (unsigned int)v39;
            v41 = *(struct _NET_BUFFER_LIST **)&v19[40 * v39 + 64];
            v39 = (unsigned int)(v39 + 1);
            if ( v41 )
              ndisMIndicateNetBufferListsToOpen(v30, v41, *((_DWORD *)v19 + 10), *(_DWORD *)&v19[40 * v40 + 80], v37);
          }
          while ( (unsigned int)v39 <= v36 );
          v30 = v38;
        }
        while ( v38 );
LABEL_49:
        v9 = a5 & 1;
LABEL_50:
        if ( (a5 & 2) != 0 )
          goto LABEL_95;
        goto LABEL_51;
      }
      v31 = *((_DWORD *)v19 + 4);
      v32 = *((_DWORD *)v19 + 10);
      v33 = *((_DWORD *)v19 + 172);
      if ( *(_DWORD *)(*(_QWORD *)v19 + 2252LL) )
        ndisIndicateToPmodeOpens((__int64)v19);
      for ( i = 1; i <= v33; ++i )
      {
        v35 = i;
        ndisMIndicateNetBufferListsToOpen(
          *(_QWORD **)&v19[40 * v35 + 56],
          *(struct _NET_BUFFER_LIST **)&v19[40 * v35 + 64],
          v32,
          *(_DWORD *)&v19[40 * v35 + 80],
          v31);
      }
LABEL_51:
      if ( !v19 )
      {
        v42 = v66;
LABEL_55:
        if ( !v42 )
          goto LABEL_95;
        Myptr = (_NDIS_PCW_DATA_BLOCK *)v8->FilterInstanceName._Myptr;
        v44 = v42;
        v68.CurrentCpu = -1;
        v68.PcwBlock = Myptr;
        v68.DatapathEventsMask = (unsigned int)v8->FilterFriendlyName;
        v68.DatapathCyclesMask = *(_DWORD *)&v8->Ref.ReferenceCount;
        NewIrql = 2;
        do
        {
          v44->Flags = v44->Flags & 0xFFFFFFF4 | 8;
          v44 = (struct _NET_BUFFER_LIST *)v44->Link.Alignment;
        }
        while ( v44 );
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          ndisMarkNetBufferListCorrelationIdsAsUsed(v42);
        if ( LODWORD(v8[3].NextSendNetBufferListsCompleteContext) )
          v42 = ndisReturnPeriodicReceives((__int64)v8, v42);
        if ( !v42 )
          goto LABEL_95;
        if ( ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(
            v42,
            0LL,
            (unsigned __int64)v8[2].TcpOffloadSendCompleteHandler,
            0x87u,
            v9);
        if ( (v68.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( !v9 )
            NewIrql = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v68, 5);
        }
        TcpOffloadReceiveCompleteHandler = v8[2].TcpOffloadReceiveCompleteHandler;
        Offload = (void (*)(void))v8[2].Offload;
        IndicateOffloadEventHandler = v8[2].IndicateOffloadEventHandler;
        v64 = Offload;
        v65 = IndicateOffloadEventHandler;
        if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
          goto LABEL_89;
        if ( !ndisIterativeDataPathDisabled && (v9 || KeGetCurrentIrql() == 2) )
        {
          v48 = KeGetPcr()->Prcb.Number;
          v49 = (struct _NET_BUFFER_LIST **)v69;
          v61 = v48;
          v69[2] = 0LL;
          v69[0] = v42;
          v42->Scratch = 0LL;
          v69[1] = v42;
          v42->ChildRefCount = v9;
          if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
          {
            while ( *v49 )
            {
              v50 = TcpOffloadReceiveCompleteHandler;
              v51 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96LL * v48;
              v52 = *(_BYTE *)(v51 + 88);
              *(_BYTE *)(v51 + 88) = 1;
              v53 = *v49;
              *v49 = 0LL;
              if ( v53 )
              {
                do
                {
                  ChildRefCount = v53->ChildRefCount;
                  Scratch = (struct _NET_BUFFER_LIST *)v53->Scratch;
                  v53->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, v64, v65, v53, 0, 0, ChildRefCount);
                  v53 = Scratch;
                }
                while ( Scratch );
                v19 = PoolWithTag;
                v50 = TcpOffloadReceiveCompleteHandler;
                Offload = v64;
                IndicateOffloadEventHandler = v65;
              }
              *(_BYTE *)(v51 + 88) = 0;
              if ( v52 )
              {
                *(_BYTE *)(v51 + 88) = 1;
LABEL_82:
                v9 = a5 & 1;
                v8 = a1;
                goto LABEL_83;
              }
              TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                                  + 70);
              v49 = (struct _NET_BUFFER_LIST **)(v51 + 72);
              Offload = (void (*)(void))*((_QWORD *)v50 + 67);
              IndicateOffloadEventHandler = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)v50 + 68);
              v48 = v61;
              v64 = Offload;
              v65 = IndicateOffloadEventHandler;
              if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler != 5 )
                goto LABEL_82;
            }
            v8 = a1;
            v9 = a5 & 1;
          }
          else
          {
LABEL_83:
            v56 = *v49;
            if ( *v49 )
            {
              *v49 = 0LL;
              do
              {
                v57 = v56->ChildRefCount;
                v58 = (struct _NET_BUFFER_LIST *)v56->Scratch;
                v56->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  TcpOffloadReceiveCompleteHandler,
                  Offload,
                  IndicateOffloadEventHandler,
                  v56,
                  0,
                  0,
                  v57);
                Offload = v64;
                v56 = v58;
                IndicateOffloadEventHandler = v65;
              }
              while ( v58 );
            }
          }
          goto LABEL_92;
        }
        if ( v8->Header.Type == 5 )
        {
          v77 = 0;
          v75 = 0;
          v71 = TcpOffloadReceiveCompleteHandler;
          v72 = IndicateOffloadEventHandler;
          v76 = 3;
          v73 = Offload;
          v74 = v42;
          v78 = v9;
          if ( KeExpandKernelStackAndCalloutEx(
                 (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                 Parameter,
                 0x4CCCuLL,
                 0,
                 0LL) < 0 )
            ndisQueueStackExpansionFallbackNbls(v8, v42, 0);
        }
        else
        {
LABEL_89:
          ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))Offload)(
            IndicateOffloadEventHandler,
            v42,
            v9);
        }
LABEL_92:
        if ( (v68.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v68, 5, 18LL);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
        }
        goto LABEL_95;
      }
      if ( v19[692] )
      {
        v42 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
        goto LABEL_55;
      }
LABEL_95:
      if ( v60 )
      {
        --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v62);
      }
      else if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
      }
      v10 = v63;
      if ( (a5 & 2) != 0 )
      {
        if ( v63->Alignment )
        {
          v59 = (_SLIST_HEADER *)v66;
          do
          {
            v10 = v59;
            v63 = v59;
            v59 = (_SLIST_HEADER *)v59->Alignment;
          }
          while ( v59 );
        }
        Alignment = v80;
        v10->Alignment = (unsigned __int64)v80;
      }
      else
      {
        Alignment = v80;
      }
      v6 = a5;
    }
    while ( Alignment );
  }
}
