/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0015310 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisAcquireRWLockRead @ 0x1C0017B40 (NdisAcquireRWLockRead.c)
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

void __fastcall ndisMDispatchReceiveNetBufferListsWithLock(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  char v5; // r13
  unsigned __int64 XmitLinkSpeedIndicateUp; // rax
  unsigned int v7; // esi
  struct _NET_BUFFER_LIST *v9; // rbx
  struct _NDIS_FILTER_BLOCK *v10; // r14
  __int64 v11; // r15
  _DWORD *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _NET_BUFFER_LIST *v14; // r15
  char *DeviceContext; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v21; // r13
  __int64 v22; // rsi
  __int64 PoolWithTag; // rax
  struct _NET_BUFFER_LIST *v24; // rdx
  int v25; // r8d
  __int64 v26; // rsi
  unsigned int v27; // ebx
  int v28; // r14d
  __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // r15
  int v33; // r12d
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  unsigned int i; // esi
  __int64 v37; // rax
  unsigned int v38; // esi
  __int64 v39; // rdx
  unsigned int v40; // r14d
  int v41; // r12d
  __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rcx
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v46; // rcx
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // rsi
  void *IndicateOffloadEventHandler; // r13
  void (*Offload)(void); // r12
  int v50; // ecx
  struct _NET_BUFFER_LIST **v51; // r15
  __int64 v52; // r14
  __int64 v53; // r14
  struct _NET_BUFFER_LIST *v54; // r9
  void *v55; // rdi
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v58; // r9
  unsigned int v59; // eax
  struct _NET_BUFFER_LIST *v60; // rbx
  KSPIN_LOCK *v61; // rcx
  signed __int32 v62[6]; // [rsp+8h] [rbp-C1h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-81h]
  struct _LOCK_STATE_EX LockState; // [rsp+4Ch] [rbp-7Dh] BYREF
  char v65; // [rsp+50h] [rbp-79h]
  unsigned int v66; // [rsp+54h] [rbp-75h]
  unsigned int v67; // [rsp+58h] [rbp-71h]
  void *v68; // [rsp+60h] [rbp-69h]
  char *v69; // [rsp+68h] [rbp-61h]
  unsigned __int64 v70; // [rsp+70h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v71; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v72[3]; // [rsp+90h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+A8h] [rbp-21h] BYREF
  void (__fastcall *v74)(void *, _NET_BUFFER_LIST *); // [rsp+B0h] [rbp-19h]
  void *v75; // [rsp+B8h] [rbp-11h]
  void (*v76)(void); // [rsp+C0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v77; // [rsp+C8h] [rbp-1h]
  int v78; // [rsp+D0h] [rbp+7h]
  int v79; // [rsp+D4h] [rbp+Bh]
  int v80; // [rsp+D8h] [rbp+Fh]
  unsigned int v81; // [rsp+DCh] [rbp+13h]
  char v83; // [rsp+128h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+148h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
  v7 = NewIrql & 1;
  v70 = XmitLinkSpeedIndicateUp;
  v63 = v7;
  v9 = a2;
  v10 = a1;
  *(_WORD *)&LockState.OldIrql = 515;
  if ( (NewIrql & 1) != 0 )
  {
    v11 = *(_QWORD *)(XmitLinkSpeedIndicateUp + 288);
    LODWORD(XmitLinkSpeedIndicateUp) = KeGetPcr()->Prcb.Number;
    LockState.Flags = 1;
    v12 = *(_DWORD **)(v11 + 8 * XmitLinkSpeedIndicateUp + 32);
    ++*v12;
    _InterlockedOr(v62, 0);
    if ( !KeTestSpinLock((PKSPIN_LOCK)(v11 + 8)) && *v12 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v11 + 16) != CurrentThread )
      {
        *v12 = 0;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 8));
        ++*v12;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 8));
      }
    }
    v7 = v63;
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(XmitLinkSpeedIndicateUp + 288), &LockState, 0);
  }
  v14 = 0LL;
  v67 = 0;
  v65 = 0;
  if ( v7 || (CurrentThread = (struct _KTHREAD *)KeGetCurrentIrql(), (_BYTE)CurrentThread == 2) )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    {
      LODWORD(CurrentThread) = KeGetPcr()->Prcb.Number;
      DeviceContext = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
      v16 = 2096LL * (_QWORD)CurrentThread;
      v67 = (unsigned int)CurrentThread;
      v17 = *((unsigned int *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 524 * (_QWORD)CurrentThread);
      if ( (unsigned int)v17 < 3 )
      {
        v65 = 1;
        v18 = v16 + 696 * v17;
        v19 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v18 + 8;
        *(_DWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v16) = v17 + 1;
        v69 = &DeviceContext[v18 + 8];
LABEL_8:
        Alignment = v9;
        v21 = (_QWORD *)v10->XmitLinkSpeedIndicateUp;
        v19[692] = 0;
        v66 = NewIrql & 2;
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
        v22 = v21[41];
        if ( v22 && *(_BYTE *)(*(_QWORD *)(v22 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v22, v9, a3, a4, NewIrql);
          *((_QWORD *)v19 + 8) = 0LL;
          *((_DWORD *)v19 + 20) = 0;
        }
        else
        {
          *((_DWORD *)v19 + 11) = a4;
          *((_QWORD *)v19 + 3) = v9;
          *((_QWORD *)v19 + 1) = v21;
          *((_DWORD *)v19 + 4) = NewIrql;
          *(_QWORD *)v19 = v10;
          *((_QWORD *)v19 + 4) = v14;
          *((_DWORD *)v19 + 10) = a3;
          PoolWithTag = ndisSortNetBufferLists((__int64 *)v19);
          if ( *((_QWORD *)v19 + 8) || *((_DWORD *)v19 + 172) )
          {
            if ( !*v21 || a3 )
              v19[692] = 1;
            else
              PoolWithTag = ndisIndicateXlatedPacketsToNdis5Protocols(v19);
            if ( !v22 )
            {
              v26 = v21[1];
              if ( v26 )
              {
                v27 = *((_DWORD *)v19 + 172);
                v28 = *((_DWORD *)v19 + 4) | 2;
                do
                {
                  v29 = *(_QWORD *)(v26 + 424);
                  v30 = 0LL;
                  do
                  {
                    PoolWithTag = 5 * v30;
                    v31 = (unsigned int)v30;
                    v24 = *(struct _NET_BUFFER_LIST **)&v19[40 * v30 + 64];
                    v30 = (unsigned int)(v30 + 1);
                    if ( v24 )
                      ndisMIndicateNetBufferListsToOpen(
                        v26,
                        v24,
                        *((_DWORD *)v19 + 10),
                        *(_DWORD *)&v19[40 * v31 + 80],
                        v28);
                  }
                  while ( (unsigned int)v30 <= v27 );
                  v26 = v29;
                }
                while ( v29 );
                v9 = a2;
                v10 = a1;
              }
              v32 = v21[2];
              if ( v32 )
              {
                v33 = *((_DWORD *)v19 + 4);
                if ( v66 )
                {
                  v40 = *((_DWORD *)v19 + 172);
                  v41 = v33 | 2;
                  do
                  {
                    v42 = *(_QWORD *)(v32 + 424);
                    v43 = 0LL;
                    do
                    {
                      PoolWithTag = 5 * v43;
                      v44 = (unsigned int)v43;
                      v24 = *(struct _NET_BUFFER_LIST **)&v19[40 * v43 + 64];
                      v43 = (unsigned int)(v43 + 1);
                      if ( v24 )
                        ndisMIndicateNetBufferListsToOpen(
                          v32,
                          v24,
                          *((_DWORD *)v19 + 10),
                          *(_DWORD *)&v19[40 * v44 + 80],
                          v41);
                    }
                    while ( (unsigned int)v43 <= v40 );
                    v32 = v42;
                  }
                  while ( v42 );
                  v10 = a1;
                }
                else
                {
                  PoolWithTag = *(_QWORD *)v19;
                  v34 = *((_DWORD *)v19 + 10);
                  v35 = *((_DWORD *)v19 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v19 + 2252LL) )
                    PoolWithTag = ndisIndicateToPmodeOpens(v19);
                  for ( i = 1; i <= v35; ++i )
                  {
                    v37 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&v19[40 * v37 + 56],
                      *(struct _NET_BUFFER_LIST **)&v19[40 * v37 + 64],
                      v34,
                      *(_DWORD *)&v19[40 * v37 + 80],
                      v33);
                  }
                }
              }
            }
          }
        }
        v7 = v63;
        v5 = NewIrql;
        goto LABEL_31;
      }
    }
  }
  PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v69 = (char *)PoolWithTag;
  v19 = (char *)PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_8;
  if ( (unsigned __int8)byte_1C009874B >= 2u )
    PoolWithTag = WPP_SF_(10LL, &WPP_78f76d0749fa341705457319fed97831_Traceguids);
LABEL_31:
  if ( (v5 & 2) != 0 )
    goto LABEL_36;
  if ( v19 )
  {
    if ( v19[692] )
    {
      v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
      goto LABEL_35;
    }
LABEL_36:
    v38 = v63;
    goto LABEL_37;
  }
LABEL_35:
  if ( !v9 )
    goto LABEL_36;
  Myptr = (_NDIS_PCW_DATA_BLOCK *)v10->FilterInstanceName._Myptr;
  v46 = v9;
  v71.CurrentCpu = -1;
  v71.PcwBlock = Myptr;
  v71.DatapathEventsMask = (unsigned int)v10->FilterFriendlyName;
  v71.DatapathCyclesMask = *(_DWORD *)&v10->Ref.ReferenceCount;
  NewIrqla = 2;
  do
  {
    v46->Flags = v46->Flags & 0xFFFFFFF4 | 8;
    v46 = (struct _NET_BUFFER_LIST *)v46->Link.Alignment;
  }
  while ( v46 );
  PoolWithTag = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    PoolWithTag = ndisMarkNetBufferListCorrelationIdsAsUsed(v9, v24, v25);
  if ( LODWORD(v10[3].NextSendNetBufferListsCompleteContext) )
  {
    PoolWithTag = ndisReturnPeriodicReceives(v10, v9);
    v9 = (struct _NET_BUFFER_LIST *)PoolWithTag;
  }
  if ( !v9 )
    goto LABEL_36;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(v9, 0LL, (unsigned __int64)v10[2].TcpOffloadSendCompleteHandler, 0x87u, v7);
  if ( (v71.DatapathCyclesMask & 0x20) != 0 )
  {
    if ( !v7 )
      NewIrqla = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v71, 5u);
  }
  TcpOffloadReceiveCompleteHandler = v10[2].TcpOffloadReceiveCompleteHandler;
  IndicateOffloadEventHandler = v10[2].IndicateOffloadEventHandler;
  Offload = (void (*)(void))v10[2].Offload;
  v68 = IndicateOffloadEventHandler;
  if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
  {
    v38 = v63;
    PoolWithTag = ((__int64 (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))Offload)(
                    IndicateOffloadEventHandler,
                    v9,
                    v63);
  }
  else
  {
    v50 = v63;
    if ( !ndisIterativeDataPathDisabled && (v63 || (PoolWithTag = KeGetCurrentIrql(), (_BYTE)PoolWithTag == 2)) )
    {
      LODWORD(PoolWithTag) = KeGetPcr()->Prcb.Number;
      v51 = (struct _NET_BUFFER_LIST **)v72;
      v66 = PoolWithTag;
      v72[2] = 0LL;
      v72[0] = v9;
      v9->Scratch = 0LL;
      v72[1] = v9;
      v9->ChildRefCount = v50;
      while ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
      {
        if ( !*v51 )
          goto LABEL_101;
        v52 = 3 * PoolWithTag;
        PoolWithTag = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54);
        v53 = PoolWithTag + 32 * v52;
        LOBYTE(PoolWithTag) = *(_BYTE *)(v53 + 88);
        *(_BYTE *)(v53 + 88) = 1;
        v54 = *v51;
        *v51 = 0LL;
        v83 = PoolWithTag;
        if ( v54 )
        {
          v55 = v68;
          do
          {
            ChildRefCount = v54->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v54->Scratch;
            v54->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(TcpOffloadReceiveCompleteHandler, Offload, v55, v54, 0, 0, ChildRefCount);
            v54 = Scratch;
          }
          while ( Scratch );
          v19 = v69;
          LOBYTE(PoolWithTag) = v83;
        }
        *(_BYTE *)(v53 + 88) = 0;
        if ( (_BYTE)PoolWithTag )
        {
          IndicateOffloadEventHandler = v68;
          *(_BYTE *)(v53 + 88) = 1;
          break;
        }
        Offload = (void (*)(void))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 67);
        v51 = (struct _NET_BUFFER_LIST **)(v53 + 72);
        IndicateOffloadEventHandler = (void *)*((_QWORD *)TcpOffloadReceiveCompleteHandler + 68);
        TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                            + 70);
        v68 = IndicateOffloadEventHandler;
        PoolWithTag = v66;
      }
      v58 = *v51;
      if ( *v51 )
      {
        *v51 = 0LL;
        do
        {
          v59 = v58->ChildRefCount;
          v60 = (struct _NET_BUFFER_LIST *)v58->Scratch;
          v58->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(
            TcpOffloadReceiveCompleteHandler,
            Offload,
            IndicateOffloadEventHandler,
            v58,
            0,
            0,
            v59);
          v58 = v60;
        }
        while ( v60 );
      }
    }
    else if ( v10->Header.Type == 5 )
    {
      v80 = 0;
      v78 = 0;
      v81 = v63;
      v74 = TcpOffloadReceiveCompleteHandler;
      v75 = IndicateOffloadEventHandler;
      v79 = 3;
      v76 = Offload;
      v77 = v9;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
             Parameter,
             0x4CCCuLL,
             0,
             0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls(v10, v9, 0);
    }
    else
    {
      PoolWithTag = ((__int64 (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))Offload)(
                      IndicateOffloadEventHandler,
                      v9,
                      v63);
    }
LABEL_101:
    v38 = v63;
  }
  if ( (v71.DatapathCyclesMask & 0x20) != 0 )
  {
    ndisPcwEndCycleCounter(&v71, 5u, 0x12uLL);
    if ( NewIrqla != 2 )
      KeLowerIrql(NewIrqla);
  }
LABEL_37:
  if ( v65 )
  {
    HIDWORD(PoolWithTag) = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    --*((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 524 * v67);
  }
  else if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
  }
  if ( v38 )
  {
    v39 = *(_QWORD *)(v70 + 288);
    if ( LockState.LockState == 3 )
    {
      LODWORD(PoolWithTag) = KeGetPcr()->Prcb.Number;
      --**(_DWORD **)(v39 + 8 * PoolWithTag + 32);
      if ( (LockState.Flags & 1) == 0 && LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      *(_QWORD *)(v39 + 16) = 0LL;
      v61 = (KSPIN_LOCK *)(v39 + 8);
      if ( (LockState.Flags & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v61);
      else
        KeReleaseSpinLock(v61, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v70 + 288), &LockState);
  }
}
