/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C006A170
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C006A120 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0015310 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x1C0024688 (-ndisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0024998 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0024A58 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0024BF8 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // r13
  unsigned int v9; // r12d
  _SLIST_HEADER *v10; // rcx
  unsigned int v11; // ebx
  struct _NET_BUFFER_LIST *v12; // r10
  struct _NET_BUFFER_LIST *v13; // r15
  unsigned int Number; // esi
  char *DeviceContext; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rdi
  struct _NET_BUFFER_LIST *v20; // rcx
  _QWORD *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // r13d
  int v25; // r12d
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rcx
  struct _NET_BUFFER_LIST *v29; // rdx
  __int64 v30; // rsi
  int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // esi
  unsigned int i; // ebx
  __int64 v35; // rax
  unsigned int v36; // r12d
  int v37; // r15d
  __int64 v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rcx
  struct _NET_BUFFER_LIST *v41; // rdx
  struct _NET_BUFFER_LIST *v42; // rbx
  _NDIS_PCW_DATA_BLOCK *v43; // rax
  struct _NET_BUFFER_LIST *v44; // rcx
  __int64 CurrentIrql; // rax
  void (*v46)(void); // r12
  void *v47; // r13
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // rsi
  __int64 v49; // r8
  struct _NET_BUFFER_LIST **v50; // r15
  __int64 v51; // r14
  char v52; // al
  struct _NET_BUFFER_LIST *v53; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v56; // r9
  unsigned int v57; // eax
  struct _NET_BUFFER_LIST *v58; // rbx
  _SLIST_HEADER *v59; // rax
  char v60; // [rsp+48h] [rbp-99h]
  char v61; // [rsp+49h] [rbp-98h]
  unsigned int v62; // [rsp+54h] [rbp-8Dh]
  unsigned int v63; // [rsp+58h] [rbp-89h]
  _SLIST_HEADER *v64; // [rsp+60h] [rbp-81h]
  void *v65; // [rsp+68h] [rbp-79h]
  struct _NET_BUFFER_LIST *v66; // [rsp+70h] [rbp-71h]
  char *PoolWithTag; // [rsp+78h] [rbp-69h]
  struct NDIS_PCW_CONTEXT v68; // [rsp+80h] [rbp-61h] BYREF
  _QWORD v69[3]; // [rsp+98h] [rbp-49h] BYREF
  char Parameter[8]; // [rsp+B0h] [rbp-31h] BYREF
  void (__fastcall *v71)(void *, _NET_BUFFER_LIST *); // [rsp+B8h] [rbp-29h]
  void *v72; // [rsp+C0h] [rbp-21h]
  void (*v73)(void); // [rsp+C8h] [rbp-19h]
  struct _NET_BUFFER_LIST *v74; // [rsp+D0h] [rbp-11h]
  int v75; // [rsp+D8h] [rbp-9h]
  int v76; // [rsp+DCh] [rbp-5h]
  int v77; // [rsp+E0h] [rbp-1h]
  int v78; // [rsp+E4h] [rbp+3h]
  struct _NET_BUFFER_LIST *v80; // [rsp+140h] [rbp+5Fh]
  KIRQL NewIrql; // [rsp+150h] [rbp+6Fh]

  if ( a2 )
  {
    v80 = a2;
    v6 = a5;
    Alignment = a2;
    v8 = (__int64)a1;
    v9 = a5 & 1;
    v10 = 0LL;
    v64 = 0LL;
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
        v64 = v10;
        v80 = Alignment;
      }
      v10->Alignment = 0LL;
      v13 = 0LL;
      v63 = 0;
      v60 = 0;
      if ( (v9 || KeGetCurrentIrql() == 2)
        && WPP_MAIN_CB.Queue.Wcb.DeviceContext
        && (Number = KeGetPcr()->Prcb.Number,
            DeviceContext = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
            v16 = 2096LL * Number,
            v63 = Number,
            v17 = *(unsigned int *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v16),
            (unsigned int)v17 < 3) )
      {
        v60 = 1;
        v18 = v16 + 696 * v17;
        v19 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v18 + 8;
        *(_DWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v16) = v17 + 1;
        PoolWithTag = &DeviceContext[v18 + 8];
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        v19 = PoolWithTag;
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C009874B >= 2u )
            WPP_SF_(0xAu, &WPP_78f76d0749fa341705457319fed97831_Traceguids);
          goto LABEL_50;
        }
        v12 = v66;
        v6 = a5;
      }
      v20 = v12;
      v21 = *(_QWORD **)(v8 + 400);
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
      v22 = v21[41];
      if ( v22 && *(_BYTE *)(*(_QWORD *)(v22 + 24) + 56LL) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v22, v12, a3, v11, v6);
        *((_QWORD *)v19 + 8) = 0LL;
        *((_DWORD *)v19 + 20) = 0;
        goto LABEL_50;
      }
      *((_QWORD *)v19 + 4) = v13;
      *((_DWORD *)v19 + 10) = a3;
      *((_QWORD *)v19 + 3) = v12;
      *((_QWORD *)v19 + 1) = v21;
      *((_DWORD *)v19 + 4) = v6;
      *(_QWORD *)v19 = v8;
      *((_DWORD *)v19 + 11) = v11;
      ndisSortNetBufferLists((__int64 *)v19);
      if ( !*((_QWORD *)v19 + 8) && !*((_DWORD *)v19 + 172) )
        goto LABEL_50;
      if ( !*v21 || a3 )
        v19[692] = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v19);
      if ( v22 )
        goto LABEL_50;
      v23 = v21[1];
      if ( v23 )
      {
        v24 = *((_DWORD *)v19 + 172);
        v25 = *((_DWORD *)v19 + 4) | 2;
        do
        {
          v26 = *(_QWORD *)(v23 + 424);
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
        v8 = (__int64)a1;
        v9 = a5 & 1;
      }
      v30 = v21[2];
      if ( !v30 )
        goto LABEL_49;
      if ( (a5 & 2) != 0 )
      {
        v36 = *((_DWORD *)v19 + 172);
        v37 = *((_DWORD *)v19 + 4) | 2;
        do
        {
          v38 = *(_QWORD *)(v30 + 424);
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
          goto LABEL_96;
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
          *(_QWORD *)&v19[40 * v35 + 56],
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
          goto LABEL_96;
        v43 = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
        v44 = v42;
        v68.CurrentCpu = -1;
        v68.PcwBlock = v43;
        v68.DatapathEventsMask = *(_DWORD *)(v8 + 48);
        v68.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
        NewIrql = 2;
        do
        {
          v44->Flags = v44->Flags & 0xFFFFFFF4 | 8;
          v44 = (struct _NET_BUFFER_LIST *)v44->Link.Alignment;
        }
        while ( v44 );
        CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v42);
        if ( *(_DWORD *)(v8 + 3240) )
        {
          CurrentIrql = (__int64)ndisReturnPeriodicReceives(v8, v42);
          v42 = (struct _NET_BUFFER_LIST *)CurrentIrql;
        }
        if ( !v42 )
          goto LABEL_96;
        if ( ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(v42, 0LL, *(_QWORD *)(v8 + 2544), 0x87u, v9);
        if ( (v68.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( !v9 )
            NewIrql = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v68, 5);
        }
        v46 = *(void (**)(void))(v8 + 2648);
        v47 = *(void **)(v8 + 2536);
        v65 = v47;
        TcpOffloadReceiveCompleteHandler = a1[2].TcpOffloadReceiveCompleteHandler;
        if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
        {
          v49 = a5 & 1;
          goto LABEL_90;
        }
        if ( !ndisIterativeDataPathDisabled
          && ((a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v50 = (struct _NET_BUFFER_LIST **)v69;
          v62 = CurrentIrql;
          v69[2] = 0LL;
          v69[0] = v42;
          v42->Scratch = 0LL;
          v69[1] = v42;
          v42->ChildRefCount = a5 & 1;
          while ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
          {
            if ( !*v50 )
              goto LABEL_93;
            v51 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96 * CurrentIrql;
            v52 = *(_BYTE *)(v51 + 88);
            *(_BYTE *)(v51 + 88) = 1;
            v53 = *v50;
            *v50 = 0LL;
            v61 = v52;
            if ( v53 )
            {
              do
              {
                ChildRefCount = v53->ChildRefCount;
                Scratch = (struct _NET_BUFFER_LIST *)v53->Scratch;
                v53->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, v46, v65, v53, 0, 0, ChildRefCount);
                v53 = Scratch;
              }
              while ( Scratch );
              v19 = PoolWithTag;
              v52 = v61;
            }
            *(_BYTE *)(v51 + 88) = 0;
            if ( v52 )
            {
              v47 = v65;
              *(_BYTE *)(v51 + 88) = 1;
              break;
            }
            v46 = (void (*)(void))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 67);
            v50 = (struct _NET_BUFFER_LIST **)(v51 + 72);
            v47 = (void *)*((_QWORD *)TcpOffloadReceiveCompleteHandler + 68);
            TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                                + 70);
            v65 = v47;
            CurrentIrql = v62;
          }
          v56 = *v50;
          if ( *v50 )
          {
            *v50 = 0LL;
            do
            {
              v57 = v56->ChildRefCount;
              v58 = (struct _NET_BUFFER_LIST *)v56->Scratch;
              v56->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, v46, v47, v56, 0, 0, v57);
              v56 = v58;
            }
            while ( v58 );
          }
        }
        else if ( a1->Header.Type == 5 )
        {
          v77 = 0;
          v75 = 0;
          v78 = a5 & 1;
          v71 = TcpOffloadReceiveCompleteHandler;
          v72 = v47;
          v76 = 3;
          v73 = v46;
          v74 = v42;
          if ( KeExpandKernelStackAndCalloutEx(
                 (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                 Parameter,
                 0x4CCCuLL,
                 0,
                 0LL) < 0 )
            ndisQueueStackExpansionFallbackNbls(a1, v42, 0);
        }
        else
        {
          v49 = a5 & 1;
LABEL_90:
          ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))v46)(v47, v42, v49);
        }
LABEL_93:
        if ( (v68.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v68, 5, 18LL);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
        }
        goto LABEL_96;
      }
      if ( v19[692] )
      {
        v42 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
        goto LABEL_55;
      }
LABEL_96:
      if ( v60 )
      {
        --*((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 524 * v63);
      }
      else if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
      }
      v10 = v64;
      if ( (a5 & 2) != 0 )
      {
        if ( v64->Alignment )
        {
          v59 = (_SLIST_HEADER *)v66;
          do
          {
            v10 = v59;
            v64 = v59;
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
      v8 = (__int64)a1;
      v9 = a5 & 1;
      v6 = a5;
    }
    while ( Alignment );
  }
}
