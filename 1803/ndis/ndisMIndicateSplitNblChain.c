/*
 * XREFs of ndisMIndicateSplitNblChain @ 0x1C006AAB0
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C006AA60 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003550 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00062C0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0025614 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00258A4 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0025964 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0025B00 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisMIndicateSplitNblChain(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  struct _NET_BUFFER_LIST *result; // rax
  unsigned int v7; // r11d
  _SLIST_HEADER *v8; // rdx
  __int64 v9; // r13
  int v10; // r10d
  int v11; // ecx
  unsigned int v12; // ebx
  struct _NET_BUFFER_LIST *v13; // r12
  struct _NET_BUFFER_LIST *v14; // r15
  unsigned int Number; // esi
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned int *PoolWithTag; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned int v23; // r13d
  int v24; // r12d
  __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct _NET_BUFFER_LIST *v28; // rdx
  __int64 v29; // rsi
  unsigned int v30; // r12d
  int v31; // r14d
  unsigned int v32; // esi
  unsigned int i; // ebx
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rcx
  struct _NET_BUFFER_LIST *v39; // rdx
  struct _NET_BUFFER_LIST *v40; // rsi
  _NDIS_PCW_DATA_BLOCK *v41; // rax
  struct _NET_BUFFER_LIST *v42; // rcx
  unsigned __int64 CurrentIrql; // rax
  void (*v44)(void); // r12
  void *v45; // r13
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // r14
  struct _NET_BUFFER_LIST **v47; // r15
  bool v48; // zf
  void (__fastcall *v49)(void *, _NET_BUFFER_LIST *); // rdx
  __int64 v50; // rsi
  char v51; // al
  struct _NET_BUFFER_LIST *v52; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v55; // eax
  struct _NET_BUFFER_LIST *v56; // rbx
  _SLIST_HEADER *v57; // rcx
  char v58; // [rsp+48h] [rbp-99h]
  char v59; // [rsp+49h] [rbp-98h]
  unsigned int v60; // [rsp+50h] [rbp-91h]
  unsigned int v61; // [rsp+54h] [rbp-8Dh]
  _SLIST_HEADER *v62; // [rsp+58h] [rbp-89h]
  unsigned int v63; // [rsp+60h] [rbp-81h]
  struct _NET_BUFFER_LIST *v64; // [rsp+68h] [rbp-79h]
  struct NDIS_PCW_CONTEXT v65; // [rsp+70h] [rbp-71h] BYREF
  _QWORD v66[3]; // [rsp+90h] [rbp-51h] BYREF
  char Parameter[8]; // [rsp+A8h] [rbp-39h] BYREF
  void (__fastcall *v68)(void *, _NET_BUFFER_LIST *); // [rsp+B0h] [rbp-31h]
  void *v69; // [rsp+B8h] [rbp-29h]
  void (*v70)(void); // [rsp+C0h] [rbp-21h]
  struct _NET_BUFFER_LIST *v71; // [rsp+C8h] [rbp-19h]
  int v72; // [rsp+D0h] [rbp-11h]
  int v73; // [rsp+D4h] [rbp-Dh]
  int v74; // [rsp+D8h] [rbp-9h]
  int v75; // [rsp+DCh] [rbp-5h]
  struct _NET_BUFFER_LIST *v77; // [rsp+140h] [rbp+5Fh]
  KIRQL NewIrql; // [rsp+150h] [rbp+6Fh]

  v77 = a2;
  result = a2;
  v7 = a3;
  v8 = 0LL;
  v9 = (__int64)a1;
  v62 = 0LL;
  if ( result )
  {
    v10 = a5;
    v11 = a5 & 1;
    v60 = v11;
    do
    {
      v12 = 0;
      v64 = result;
      v13 = result;
      if ( a6 )
      {
        do
        {
          if ( !result )
            break;
          ++v12;
          v8 = (_SLIST_HEADER *)result;
          result = (struct _NET_BUFFER_LIST *)result->Link.Alignment;
        }
        while ( v12 < a6 );
        v62 = v8;
        v77 = result;
      }
      v8->Alignment = 0LL;
      v14 = 0LL;
      v61 = 0;
      v58 = 0;
      if ( (v11 || KeGetCurrentIrql() == 2)
        && *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Number = KeGetPcr()->Prcb.Number,
            v16 = 2096LL * Number,
            v61 = Number,
            v17 = *(unsigned int *)(v16 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters),
            (unsigned int)v17 < 3) )
      {
        v58 = 1;
        PoolWithTag = (unsigned int *)(v16 + 696 * v17 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 8LL);
        *(_DWORD *)(v16 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) = v17 + 1;
      }
      else
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
        if ( !PoolWithTag )
        {
          if ( (unsigned __int8)byte_1C009960B >= 2u )
            WPP_SF_(0xAu, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids);
LABEL_49:
          if ( (a5 & 2) != 0 )
            goto LABEL_92;
          goto LABEL_50;
        }
        v10 = a5;
        v7 = a3;
      }
      Alignment = v13;
      v20 = *(_QWORD **)(v9 + 400);
      *((_BYTE *)PoolWithTag + 692) = 0;
      if ( (a5 & 2) == 0 )
      {
        do
        {
          v14 = Alignment;
          Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
      }
      v21 = v20[41];
      if ( v21 && *(_BYTE *)(*(_QWORD *)(v21 + 24) + 56LL) >= 6u )
      {
        ndisMIndicateNetBufferListsToOpen(v21, v13, v7, v12, v10);
        *((_QWORD *)PoolWithTag + 8) = 0LL;
        PoolWithTag[20] = 0;
        goto LABEL_49;
      }
      *((_QWORD *)PoolWithTag + 3) = v13;
      *((_QWORD *)PoolWithTag + 1) = v20;
      PoolWithTag[4] = v10;
      *(_QWORD *)PoolWithTag = v9;
      *((_QWORD *)PoolWithTag + 4) = v14;
      PoolWithTag[10] = v7;
      PoolWithTag[11] = v12;
      ndisSortNetBufferLists((__int64 *)PoolWithTag);
      if ( !*((_QWORD *)PoolWithTag + 8) && !PoolWithTag[172] )
        goto LABEL_49;
      if ( !*v20 || a3 )
        *((_BYTE *)PoolWithTag + 692) = 1;
      else
        ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
      if ( v21 )
        goto LABEL_49;
      v22 = v20[1];
      if ( v22 )
      {
        v23 = PoolWithTag[172];
        v24 = PoolWithTag[4] | 2;
        do
        {
          v25 = *(_QWORD *)(v22 + 424);
          v26 = 0LL;
          do
          {
            v27 = (unsigned int)v26;
            v28 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v26 + 16];
            v26 = (unsigned int)(v26 + 1);
            if ( v28 )
              ndisMIndicateNetBufferListsToOpen(v22, v28, PoolWithTag[10], PoolWithTag[10 * v27 + 20], v24);
          }
          while ( (unsigned int)v26 <= v23 );
          v22 = v25;
        }
        while ( v25 );
        v9 = (__int64)a1;
      }
      v29 = v20[2];
      if ( !v29 )
        goto LABEL_49;
      v30 = PoolWithTag[172];
      v31 = PoolWithTag[4];
      if ( (a5 & 2) != 0 )
      {
        v35 = v31 | 2;
        do
        {
          v36 = *(_QWORD *)(v29 + 424);
          v37 = 0LL;
          do
          {
            v38 = (unsigned int)v37;
            v39 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v37 + 16];
            v37 = (unsigned int)(v37 + 1);
            if ( v39 )
              ndisMIndicateNetBufferListsToOpen(v29, v39, PoolWithTag[10], PoolWithTag[10 * v38 + 20], v35);
          }
          while ( (unsigned int)v37 <= v30 );
          v29 = v36;
        }
        while ( v36 );
        goto LABEL_49;
      }
      v32 = PoolWithTag[10];
      if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
        ndisIndicateToPmodeOpens((__int64)PoolWithTag);
      for ( i = 1; i <= v30; ++i )
      {
        v34 = i;
        ndisMIndicateNetBufferListsToOpen(
          *(_QWORD *)&PoolWithTag[10 * v34 + 14],
          *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v34 + 16],
          v32,
          PoolWithTag[10 * v34 + 20],
          v31);
      }
LABEL_50:
      if ( !PoolWithTag )
      {
        v40 = v64;
LABEL_54:
        if ( !v40 )
          goto LABEL_92;
        v41 = *(_NDIS_PCW_DATA_BLOCK **)(v9 + 40);
        v42 = v40;
        v65.CurrentCpu = -1;
        v65.PcwBlock = v41;
        v65.DatapathEventsMask = *(_DWORD *)(v9 + 48);
        v65.DatapathCyclesMask = *(_DWORD *)(v9 + 80);
        NewIrql = 2;
        do
        {
          v42->Flags = v42->Flags & 0xFFFFFFF4 | 8;
          v42 = (struct _NET_BUFFER_LIST *)v42->Link.Alignment;
        }
        while ( v42 );
        CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
          CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v40);
        if ( *(_DWORD *)(v9 + 3240) )
        {
          CurrentIrql = (unsigned __int64)ndisReturnPeriodicReceives(v9, v40);
          v40 = (struct _NET_BUFFER_LIST *)CurrentIrql;
        }
        if ( !v40 )
          goto LABEL_92;
        if ( ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(v40, 0LL, *(_QWORD *)(v9 + 2544), 135LL, v60);
        if ( (v65.DatapathCyclesMask & 0x20) != 0 )
        {
          if ( (a5 & 1) == 0 )
            NewIrql = KfRaiseIrql(2u);
          ndisPcwStartCycleCounter(&v65, 5);
        }
        v44 = *(void (**)(void))(v9 + 2648);
        v45 = *(void **)(v9 + 2536);
        TcpOffloadReceiveCompleteHandler = a1[2].TcpOffloadReceiveCompleteHandler;
        if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
          goto LABEL_86;
        if ( !ndisIterativeDataPathDisabled )
        {
          if ( (a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
          {
            LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
            v47 = (struct _NET_BUFFER_LIST **)v66;
            v63 = CurrentIrql;
            v40->Scratch = 0LL;
            v66[2] = 0LL;
            v40->ChildRefCount = v60;
            v48 = *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5;
            v66[0] = v40;
            v66[1] = v40;
            if ( v48 )
            {
              while ( *v47 )
              {
                v49 = TcpOffloadReceiveCompleteHandler;
                v50 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96 * CurrentIrql;
                v51 = *(_BYTE *)(v50 + 88);
                *(_BYTE *)(v50 + 88) = 1;
                v52 = *v47;
                *v47 = 0LL;
                v59 = v51;
                if ( v52 )
                {
                  do
                  {
                    ChildRefCount = v52->ChildRefCount;
                    Scratch = (struct _NET_BUFFER_LIST *)v52->Scratch;
                    v52->ChildRefCount = 0;
                    ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, v44, v45, v52, 0, 0, ChildRefCount);
                    v52 = Scratch;
                  }
                  while ( Scratch );
                  v51 = v59;
                  v49 = TcpOffloadReceiveCompleteHandler;
                }
                *(_BYTE *)(v50 + 88) = 0;
                if ( v51 )
                {
                  *(_BYTE *)(v50 + 88) = 1;
                  v40 = *v47;
                  goto LABEL_81;
                }
                TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 70);
                v47 = (struct _NET_BUFFER_LIST **)(v50 + 72);
                v44 = (void (*)(void))*((_QWORD *)v49 + 67);
                v45 = (void *)*((_QWORD *)v49 + 68);
                CurrentIrql = v63;
                if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler != 5 )
                {
                  v40 = *(struct _NET_BUFFER_LIST **)(v50 + 72);
                  goto LABEL_81;
                }
              }
            }
            else
            {
LABEL_81:
              if ( v40 )
              {
                *v47 = 0LL;
                do
                {
                  v55 = v40->ChildRefCount;
                  v56 = (struct _NET_BUFFER_LIST *)v40->Scratch;
                  v40->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, v44, v45, v40, 0, 0, v55);
                  v40 = v56;
                }
                while ( v56 );
              }
            }
            goto LABEL_89;
          }
        }
        if ( a1->Header.Type == 5 )
        {
          v74 = 0;
          v72 = 0;
          v68 = TcpOffloadReceiveCompleteHandler;
          v69 = v45;
          v73 = 3;
          v70 = v44;
          v71 = v40;
          v75 = a5 & 1;
          if ( KeExpandKernelStackAndCalloutEx(
                 (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                 Parameter,
                 0x4CCCuLL,
                 0,
                 0LL) < 0 )
            ndisQueueStackExpansionFallbackNbls(a1, v40, 0);
        }
        else
        {
LABEL_86:
          ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))v44)(v45, v40, a5 & 1);
        }
LABEL_89:
        if ( (v65.DatapathCyclesMask & 0x20) != 0 )
        {
          ndisPcwEndCycleCounter(&v65, 5, 18LL);
          if ( NewIrql != 2 )
            KeLowerIrql(NewIrql);
        }
        goto LABEL_92;
      }
      if ( *((_BYTE *)PoolWithTag + 692) )
      {
        v40 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
        goto LABEL_54;
      }
LABEL_92:
      if ( v58 )
      {
        --*(_DWORD *)(2096LL * v61 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
      }
      else if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      v8 = v62;
      if ( (a5 & 2) != 0 )
      {
        if ( v62->Alignment )
        {
          v8 = (_SLIST_HEADER *)v64;
          v62 = (_SLIST_HEADER *)v64;
          v57 = (_SLIST_HEADER *)v64->Link.Alignment;
          if ( v64->Link.Alignment )
          {
            do
            {
              v8 = v57;
              v62 = v57;
              v57 = (_SLIST_HEADER *)v57->Alignment;
            }
            while ( v57 );
          }
        }
        result = v77;
        v8->Alignment = (unsigned __int64)v77;
      }
      else
      {
        result = v77;
      }
      v9 = (__int64)a1;
      v11 = a5 & 1;
      v10 = a5;
      v7 = a3;
    }
    while ( result );
  }
  return result;
}
