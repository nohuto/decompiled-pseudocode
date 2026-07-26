/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003550 (ndisSortNetBufferLists.c)
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00062C0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
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

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  char v5; // r13
  struct _NDIS_FILTER_BLOCK *v6; // r15
  struct _NET_BUFFER_LIST *v8; // rsi
  unsigned int v9; // ebx
  KSPIN_LOCK *v10; // rcx
  _QWORD *v11; // rbx
  KSPIN_LOCK *v12; // rdi
  unsigned __int64 CurrentThread; // rax
  struct _NET_BUFFER_LIST *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int *PoolWithTag; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // rbx
  unsigned int v22; // esi
  int v23; // r15d
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  __int64 v28; // r14
  unsigned int v29; // r13d
  int v30; // r12d
  unsigned int v31; // r14d
  unsigned int i; // ebx
  __int64 v33; // rax
  KSPIN_LOCK *v34; // r8
  unsigned int v35; // eax
  int v36; // r12d
  unsigned int v37; // r15d
  __int64 v38; // r13
  __int64 v39; // rbx
  __int64 v40; // rcx
  struct _NET_BUFFER_LIST *v41; // rdx
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v43; // rcx
  __int64 CurrentIrql; // rax
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // r14
  void (*Offload)(void); // r12
  void (__fastcall *IndicateOffloadEventHandler)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // r13
  struct _NET_BUFFER_LIST **v48; // r15
  bool v49; // zf
  void (__fastcall *v50)(void *, _NET_BUFFER_LIST *); // rdx
  __int64 v51; // rsi
  char v52; // al
  struct _NET_BUFFER_LIST *v53; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v56; // eax
  struct _NET_BUFFER_LIST *v57; // rbx
  KSPIN_LOCK *v58; // rcx
  signed __int32 v59[6]; // [rsp+8h] [rbp-B1h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+48h] [rbp-71h] BYREF
  char v61; // [rsp+4Ch] [rbp-6Dh]
  unsigned int v62; // [rsp+50h] [rbp-69h]
  unsigned int v63; // [rsp+54h] [rbp-65h]
  unsigned int v64; // [rsp+58h] [rbp-61h]
  int v65; // [rsp+60h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v66; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+80h] [rbp-39h]
  _QWORD v68[3]; // [rsp+88h] [rbp-31h] BYREF
  char Parameter[8]; // [rsp+A0h] [rbp-19h] BYREF
  void (__fastcall *v70)(void *, _NET_BUFFER_LIST *); // [rsp+A8h] [rbp-11h]
  void (__fastcall *v71)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+B0h] [rbp-9h]
  void (*v72)(void); // [rsp+B8h] [rbp-1h]
  struct _NET_BUFFER_LIST *v73; // [rsp+C0h] [rbp+7h]
  int v74; // [rsp+C8h] [rbp+Fh]
  int v75; // [rsp+CCh] [rbp+13h]
  int v76; // [rsp+D0h] [rbp+17h]
  unsigned int v77; // [rsp+D4h] [rbp+1Bh]
  char v79; // [rsp+118h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+138h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  v6 = a1;
  *(_WORD *)&LockState.OldIrql = 515;
  v8 = a2;
  v9 = NewIrql & 1;
  XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
  v62 = v9;
  v10 = *(KSPIN_LOCK **)(XmitLinkSpeedIndicateUp + 288);
  if ( (NewIrql & 1) != 0 )
  {
    v11 = (_QWORD *)(v10[4] + (KeGetPcr()->Prcb.Number << 12));
    LockState.OldIrql = 2;
    ++*v11;
    _InterlockedOr(v59, 0);
    v12 = v10 + 2;
    CurrentThread = v10[2];
    if ( CurrentThread )
    {
      if ( *v11 <= 1uLL )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        if ( v10[3] != CurrentThread )
        {
          *v11 = 0LL;
          KeAcquireSpinLockAtDpcLevel(v10 + 2);
          *v11 = 1LL;
          KeReleaseSpinLockFromDpcLevel(v12);
        }
      }
    }
    v9 = v62;
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)v10, &LockState, 0);
  }
  v14 = 0LL;
  v64 = 0;
  v61 = 0;
  if ( v9 || (CurrentThread = KeGetCurrentIrql(), (_BYTE)CurrentThread == 2) )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      LODWORD(CurrentThread) = KeGetPcr()->Prcb.Number;
      v15 = 2096 * CurrentThread;
      v64 = CurrentThread;
      v16 = *(unsigned int *)(2096 * CurrentThread + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
      if ( (unsigned int)v16 < 3 )
      {
        v61 = 1;
        PoolWithTag = (unsigned int *)(v15 + 696 * v16 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 8LL);
        *(_DWORD *)(v15 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) = v16 + 1;
LABEL_8:
        Alignment = v8;
        v19 = (_QWORD *)v6->XmitLinkSpeedIndicateUp;
        *((_BYTE *)PoolWithTag + 692) = 0;
        v65 = NewIrql & 2;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v14 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v20 = v19[41];
        if ( v20 && *(_BYTE *)(*(_QWORD *)(v20 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v20, v8, a3, a4, NewIrql);
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          PoolWithTag[20] = 0;
        }
        else
        {
          PoolWithTag[11] = a4;
          *((_QWORD *)PoolWithTag + 3) = v8;
          *((_QWORD *)PoolWithTag + 1) = v19;
          PoolWithTag[4] = NewIrql;
          *(_QWORD *)PoolWithTag = v6;
          *((_QWORD *)PoolWithTag + 4) = v14;
          PoolWithTag[10] = a3;
          ndisSortNetBufferLists((__int64 *)PoolWithTag);
          if ( *((_QWORD *)PoolWithTag + 8) || PoolWithTag[172] )
          {
            if ( !*v19 || a3 )
              *((_BYTE *)PoolWithTag + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
            if ( !v20 )
            {
              v21 = v19[1];
              if ( v21 )
              {
                v22 = PoolWithTag[172];
                v23 = PoolWithTag[4] | 2;
                do
                {
                  v24 = *(_QWORD *)(v21 + 424);
                  v25 = 0LL;
                  do
                  {
                    v26 = (unsigned int)v25;
                    v27 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v25 + 16];
                    v25 = (unsigned int)(v25 + 1);
                    if ( v27 )
                      ndisMIndicateNetBufferListsToOpen(v21, v27, PoolWithTag[10], PoolWithTag[10 * v26 + 20], v23);
                  }
                  while ( (unsigned int)v25 <= v22 );
                  v21 = v24;
                }
                while ( v24 );
                v8 = a2;
                v6 = a1;
              }
              v28 = v19[2];
              if ( v28 )
              {
                v29 = PoolWithTag[172];
                v30 = PoolWithTag[4];
                if ( v65 )
                {
                  v36 = v30 | 2;
                  v37 = PoolWithTag[172];
                  do
                  {
                    v38 = *(_QWORD *)(v28 + 424);
                    v39 = 0LL;
                    do
                    {
                      v40 = (unsigned int)v39;
                      v41 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v39 + 16];
                      v39 = (unsigned int)(v39 + 1);
                      if ( v41 )
                        ndisMIndicateNetBufferListsToOpen(v28, v41, PoolWithTag[10], PoolWithTag[10 * v40 + 20], v36);
                    }
                    while ( (unsigned int)v39 <= v37 );
                    v28 = v38;
                  }
                  while ( v38 );
                  v6 = a1;
                }
                else
                {
                  v31 = PoolWithTag[10];
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens(PoolWithTag);
                  for ( i = 1; i <= v29; ++i )
                  {
                    v33 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&PoolWithTag[10 * v33 + 14],
                      *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v33 + 16],
                      v31,
                      PoolWithTag[10 * v33 + 20],
                      v30);
                  }
                }
              }
            }
          }
        }
        v5 = NewIrql;
        v9 = v62;
        goto LABEL_31;
      }
    }
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  if ( PoolWithTag )
    goto LABEL_8;
  if ( (unsigned __int8)byte_1C009960B >= 2u )
    WPP_SF_(10LL, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids);
LABEL_31:
  if ( (v5 & 2) != 0 )
    goto LABEL_36;
  if ( PoolWithTag )
  {
    if ( !*((_BYTE *)PoolWithTag + 692) )
      goto LABEL_36;
    v8 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
  }
  if ( v8 )
  {
    Myptr = (_NDIS_PCW_DATA_BLOCK *)v6->FilterInstanceName._Myptr;
    v43 = v8;
    v66.CurrentCpu = -1;
    v66.PcwBlock = Myptr;
    v66.DatapathEventsMask = (unsigned int)v6->FilterFriendlyName;
    v66.DatapathCyclesMask = *(_DWORD *)&v6->Ref.ReferenceCount;
    NewIrqla = 2;
    do
    {
      v43->Flags = v43->Flags & 0xFFFFFFF4 | 8;
      v43 = (struct _NET_BUFFER_LIST *)v43->Link.Alignment;
    }
    while ( v43 );
    CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v8);
    if ( LODWORD(v6[3].NextSendNetBufferListsCompleteContext) )
    {
      CurrentIrql = ndisReturnPeriodicReceives(v6, v8);
      v8 = (struct _NET_BUFFER_LIST *)CurrentIrql;
    }
    if ( v8 )
    {
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v8,
          0LL,
          (unsigned __int64)v6[2].TcpOffloadSendCompleteHandler,
          135LL,
          v9);
      if ( (v66.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v9 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v66, 5u);
      }
      TcpOffloadReceiveCompleteHandler = v6[2].TcpOffloadReceiveCompleteHandler;
      Offload = (void (*)(void))v6[2].Offload;
      IndicateOffloadEventHandler = v6[2].IndicateOffloadEventHandler;
      if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
        goto LABEL_60;
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( v9 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v48 = (struct _NET_BUFFER_LIST **)v68;
          v8->ChildRefCount = v9;
          v8->Scratch = 0LL;
          v49 = *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5;
          v63 = CurrentIrql;
          v68[2] = 0LL;
          v68[0] = v8;
          v68[1] = v8;
          if ( v49 )
          {
            while ( *v48 )
            {
              v50 = TcpOffloadReceiveCompleteHandler;
              v51 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96 * CurrentIrql;
              v52 = *(_BYTE *)(v51 + 88);
              *(_BYTE *)(v51 + 88) = 1;
              v53 = *v48;
              *v48 = 0LL;
              v79 = v52;
              if ( v53 )
              {
                do
                {
                  ChildRefCount = v53->ChildRefCount;
                  Scratch = (struct _NET_BUFFER_LIST *)v53->Scratch;
                  v53->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(
                    TcpOffloadReceiveCompleteHandler,
                    Offload,
                    IndicateOffloadEventHandler,
                    v53,
                    0,
                    0,
                    ChildRefCount);
                  v53 = Scratch;
                }
                while ( Scratch );
                v52 = v79;
                v50 = TcpOffloadReceiveCompleteHandler;
              }
              *(_BYTE *)(v51 + 88) = 0;
              if ( v52 )
              {
                *(_BYTE *)(v51 + 88) = 1;
                v8 = *v48;
                goto LABEL_90;
              }
              TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                                  + 70);
              v48 = (struct _NET_BUFFER_LIST **)(v51 + 72);
              Offload = (void (*)(void))*((_QWORD *)v50 + 67);
              IndicateOffloadEventHandler = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)v50 + 68);
              CurrentIrql = v63;
              if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler != 5 )
              {
                v8 = *(struct _NET_BUFFER_LIST **)(v51 + 72);
                goto LABEL_90;
              }
            }
          }
          else
          {
LABEL_90:
            if ( v8 )
            {
              *v48 = 0LL;
              do
              {
                v56 = v8->ChildRefCount;
                v57 = (struct _NET_BUFFER_LIST *)v8->Scratch;
                v8->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  TcpOffloadReceiveCompleteHandler,
                  Offload,
                  IndicateOffloadEventHandler,
                  v8,
                  0,
                  0,
                  v56);
                v8 = v57;
              }
              while ( v57 );
            }
          }
          goto LABEL_61;
        }
      }
      if ( v6->Header.Type != 5 )
      {
LABEL_60:
        ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))v6[2].Offload)(
          v6[2].IndicateOffloadEventHandler,
          v8,
          v9);
      }
      else
      {
        v76 = 0;
        v74 = 0;
        v70 = TcpOffloadReceiveCompleteHandler;
        v71 = IndicateOffloadEventHandler;
        v75 = 3;
        v72 = Offload;
        v73 = v8;
        v77 = v9;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls(v6, v8, 0);
      }
LABEL_61:
      if ( (v66.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v66, 5u, 0x12uLL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_36:
  if ( v61 )
  {
    --*(_DWORD *)(2096LL * v64 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  v34 = *(KSPIN_LOCK **)(XmitLinkSpeedIndicateUp + 288);
  if ( v62 )
  {
    if ( LockState.LockState == 3 )
    {
      v35 = KeGetPcr()->Prcb.Number << 12;
      --*(_QWORD *)(v34[4] + v35);
      if ( LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      v34[3] = 0LL;
      v58 = v34 + 2;
      if ( LockState.OldIrql == 2 )
        KeReleaseSpinLockFromDpcLevel(v58);
      else
        KeReleaseSpinLock(v58, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v34, &LockState);
  }
}
