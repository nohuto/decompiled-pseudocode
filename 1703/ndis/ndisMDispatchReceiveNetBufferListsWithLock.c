/*
 * XREFs of ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001824 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003250 (ndisSortNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00058A0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisAcquireRWLockRead @ 0x1C000E720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000E7D0 (NdisReleaseRWLock.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 XmitLinkSpeedIndicateUp; // rcx
  __int64 v8; // rax
  struct _NET_BUFFER_LIST *v10; // rbx
  __int64 v11; // r14
  _DWORD *v12; // rdi
  struct _NET_BUFFER_LIST *v13; // r14
  unsigned int Number; // esi
  struct _NDIS_RCV_TRACKER_ARRAY *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v21; // r13
  _QWORD *v22; // rsi
  __int64 PoolWithTag; // rax
  _QWORD *v24; // rsi
  unsigned int v25; // ebx
  int v26; // r15d
  _QWORD *v27; // r12
  __int64 v28; // r14
  __int64 v29; // rcx
  struct _NET_BUFFER_LIST *v30; // rdx
  _QWORD *v31; // r14
  int v32; // r12d
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  unsigned int i; // esi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r15d
  int v39; // r13d
  _QWORD *v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rcx
  struct _NET_BUFFER_LIST *v43; // rdx
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v45; // rcx
  unsigned int v46; // r14d
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // rsi
  void (*Offload)(void); // r10
  void *IndicateOffloadEventHandler; // r11
  bool v50; // zf
  unsigned int v51; // ecx
  struct _NET_BUFFER_LIST **v52; // r15
  void (__fastcall *v53)(void *, _NET_BUFFER_LIST *); // r13
  __int64 v54; // r14
  char v55; // r12
  struct _NET_BUFFER_LIST *v56; // r9
  void (*v57)(void); // rdi
  void *v58; // r13
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v60; // r9
  unsigned int v61; // eax
  struct _NET_BUFFER_LIST *v62; // rbx
  KSPIN_LOCK *v63; // rcx
  signed __int32 v64[6]; // [rsp+8h] [rbp-D1h] BYREF
  PVOID Context; // [rsp+28h] [rbp-B1h]
  unsigned int v66; // [rsp+30h] [rbp-A9h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-A1h]
  struct _LOCK_STATE_EX LockState; // [rsp+48h] [rbp-91h] BYREF
  char v69; // [rsp+4Ch] [rbp-8Dh]
  unsigned int v70[2]; // [rsp+50h] [rbp-89h]
  void (*v71)(void); // [rsp+58h] [rbp-81h]
  unsigned int v72; // [rsp+60h] [rbp-79h]
  void *v73; // [rsp+68h] [rbp-71h]
  char *v74; // [rsp+70h] [rbp-69h]
  unsigned __int64 v75; // [rsp+78h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v76; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v77[3]; // [rsp+A0h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+B8h] [rbp-21h] BYREF
  void (__fastcall *v79)(void *, _NET_BUFFER_LIST *); // [rsp+C0h] [rbp-19h]
  void *v80; // [rsp+C8h] [rbp-11h]
  void (*v81)(void); // [rsp+D0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v82; // [rsp+D8h] [rbp-1h]
  int v83; // [rsp+E0h] [rbp+7h]
  int v84; // [rsp+E4h] [rbp+Bh]
  int v85; // [rsp+E8h] [rbp+Fh]
  unsigned int v86; // [rsp+ECh] [rbp+13h]
  unsigned int v88; // [rsp+138h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+158h] [rbp+7Fh]

  v5 = NewIrql;
  LockState.Flags = 0;
  v6 = a1;
  XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
  v8 = NewIrql & 1;
  *(_WORD *)&LockState.OldIrql = 515;
  v70[0] = NewIrql & 1;
  v10 = a2;
  v75 = XmitLinkSpeedIndicateUp;
  if ( (NewIrql & 1) != 0 )
  {
    v11 = *(_QWORD *)(XmitLinkSpeedIndicateUp + 288);
    LODWORD(v8) = KeGetPcr()->Prcb.Number;
    LockState.Flags = 1;
    v12 = *(_DWORD **)(v11 + 8 * v8 + 32);
    ++*v12;
    _InterlockedOr(v64, 0);
    if ( !KeTestSpinLock((PKSPIN_LOCK)(v11 + 8)) && *v12 == 1 && *(struct _KTHREAD **)(v11 + 16) != KeGetCurrentThread() )
    {
      *v12 = 0;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 8));
      ++*v12;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 8));
    }
    LockState.LockState = 3;
  }
  else
  {
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(XmitLinkSpeedIndicateUp + 288), &LockState, 0);
  }
  v13 = 0LL;
  v72 = 0;
  v69 = 0;
  if ( v70[0] || KeGetCurrentIrql() == 2 )
  {
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v15 = ndisPerProcRcvTrackers;
      v16 = 2096LL * Number;
      v72 = Number;
      v17 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v16);
      if ( (unsigned int)v17 < 3 )
      {
        v69 = 1;
        v18 = v16 + 696 * v17;
        v19 = (char *)ndisPerProcRcvTrackers + v18 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v16) = v17 + 1;
        v74 = (char *)v15 + v18 + 8;
LABEL_8:
        Alignment = v10;
        v21 = (_QWORD *)v6->XmitLinkSpeedIndicateUp;
        v19[692] = 0;
        LODWORD(v71) = NewIrql & 2;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v13 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v22 = (_QWORD *)v21[41];
        if ( v22 && *(_BYTE *)(v22[3] + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v22, v10, a3, a4, NewIrql);
          *((_QWORD *)v19 + 8) = 0LL;
          *((_DWORD *)v19 + 20) = 0;
        }
        else
        {
          *((_DWORD *)v19 + 11) = a4;
          *((_QWORD *)v19 + 3) = v10;
          *((_QWORD *)v19 + 1) = v21;
          *((_DWORD *)v19 + 4) = NewIrql;
          *(_QWORD *)v19 = v6;
          *((_QWORD *)v19 + 4) = v13;
          *((_DWORD *)v19 + 10) = a3;
          ndisSortNetBufferLists((__int64 *)v19);
          HIDWORD(PoolWithTag) = 0;
          if ( *((_QWORD *)v19 + 8) || *((_DWORD *)v19 + 172) )
          {
            if ( !*v21 || a3 )
              v19[692] = 1;
            else
              PoolWithTag = ndisIndicateXlatedPacketsToNdis5Protocols(v19);
            if ( !v22 )
            {
              v24 = (_QWORD *)v21[1];
              if ( v24 )
              {
                v25 = *((_DWORD *)v19 + 172);
                v26 = *((_DWORD *)v19 + 4) | 2;
                do
                {
                  v27 = (_QWORD *)v24[53];
                  v28 = 0LL;
                  do
                  {
                    PoolWithTag = 5 * v28;
                    v29 = (unsigned int)v28;
                    v30 = *(struct _NET_BUFFER_LIST **)&v19[40 * v28 + 64];
                    v28 = (unsigned int)(v28 + 1);
                    if ( v30 )
                      ndisMIndicateNetBufferListsToOpen(
                        v24,
                        v30,
                        *((_DWORD *)v19 + 10),
                        *(_DWORD *)&v19[40 * v29 + 80],
                        v26);
                  }
                  while ( (unsigned int)v28 <= v25 );
                  v24 = v27;
                }
                while ( v27 );
                v10 = a2;
                v6 = a1;
              }
              v31 = (_QWORD *)v21[2];
              if ( v31 )
              {
                if ( (_DWORD)v71 )
                {
                  v38 = *((_DWORD *)v19 + 172);
                  v39 = *((_DWORD *)v19 + 4) | 2;
                  do
                  {
                    v40 = (_QWORD *)v31[53];
                    v41 = 0LL;
                    do
                    {
                      PoolWithTag = 5 * v41;
                      v42 = (unsigned int)v41;
                      v43 = *(struct _NET_BUFFER_LIST **)&v19[40 * v41 + 64];
                      v41 = (unsigned int)(v41 + 1);
                      if ( v43 )
                        ndisMIndicateNetBufferListsToOpen(
                          v31,
                          v43,
                          *((_DWORD *)v19 + 10),
                          *(_DWORD *)&v19[40 * v42 + 80],
                          v39);
                    }
                    while ( (unsigned int)v41 <= v38 );
                    v31 = v40;
                  }
                  while ( v40 );
                  v6 = a1;
                }
                else
                {
                  PoolWithTag = *(_QWORD *)v19;
                  v32 = *((_DWORD *)v19 + 4);
                  v33 = *((_DWORD *)v19 + 10);
                  v34 = *((_DWORD *)v19 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v19 + 2252LL) )
                    PoolWithTag = ndisIndicateToPmodeOpens((__int64)v19);
                  for ( i = 1; i <= v34; ++i )
                  {
                    v36 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD **)&v19[40 * v36 + 56],
                      *(struct _NET_BUFFER_LIST **)&v19[40 * v36 + 64],
                      v33,
                      *(_DWORD *)&v19[40 * v36 + 80],
                      v32);
                  }
                }
              }
            }
          }
        }
        v5 = NewIrql;
        goto LABEL_31;
      }
    }
  }
  PoolWithTag = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  v74 = (char *)PoolWithTag;
  v19 = (char *)PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_8;
  if ( (unsigned __int8)byte_1C009260B >= 2u )
    PoolWithTag = WPP_SF_(10LL, &WPP_b73f8523fdf5311d444d9d2d2cf99027_Traceguids);
LABEL_31:
  if ( (v5 & 2) != 0 )
    goto LABEL_36;
  if ( v19 )
  {
    if ( !v19[692] )
      goto LABEL_36;
    v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v19 + 8);
  }
  if ( v10 )
  {
    Myptr = (_NDIS_PCW_DATA_BLOCK *)v6->FilterInstanceName._Myptr;
    v45 = v10;
    v76.CurrentCpu = -1;
    v76.PcwBlock = Myptr;
    v76.DatapathEventsMask = (unsigned int)v6->FilterFriendlyName;
    v76.DatapathCyclesMask = *(_DWORD *)&v6->Ref.ReferenceCount;
    NewIrqla = 2;
    do
    {
      v45->Flags = v45->Flags & 0xFFFFFFF4 | 8;
      v45 = (struct _NET_BUFFER_LIST *)v45->Link.Alignment;
    }
    while ( v45 );
    PoolWithTag = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      PoolWithTag = ndisMarkNetBufferListCorrelationIdsAsUsed(v10);
    if ( LODWORD(v6[3].NextSendNetBufferListsCompleteContext) )
    {
      PoolWithTag = ndisReturnPeriodicReceives(v6, v10);
      v10 = (struct _NET_BUFFER_LIST *)PoolWithTag;
    }
    if ( v10 )
    {
      v46 = v70[0];
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v10,
          0LL,
          (unsigned __int64)v6[2].TcpOffloadSendCompleteHandler,
          0x87u,
          v70[0]);
      if ( (v76.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v46 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v76, 5);
      }
      TcpOffloadReceiveCompleteHandler = v6[2].TcpOffloadReceiveCompleteHandler;
      Offload = (void (*)(void))v6[2].Offload;
      IndicateOffloadEventHandler = v6[2].IndicateOffloadEventHandler;
      v71 = Offload;
      v50 = *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17;
      v73 = IndicateOffloadEventHandler;
      if ( v50 )
        goto LABEL_60;
      if ( !ndisIterativeDataPathDisabled && (v46 || KeGetCurrentIrql() == 2) )
      {
        v51 = KeGetPcr()->Prcb.Number;
        v52 = (struct _NET_BUFFER_LIST **)v77;
        HIDWORD(PoolWithTag) = 0;
        v88 = v51;
        v77[2] = 0LL;
        v77[0] = v10;
        v10->Scratch = 0LL;
        v77[1] = v10;
        v10->ChildRefCount = v46;
        while ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
        {
          if ( !*v52 )
            goto LABEL_61;
          v53 = TcpOffloadReceiveCompleteHandler;
          PoolWithTag = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54);
          v54 = PoolWithTag + 96LL * v51;
          v55 = *(_BYTE *)(v54 + 88);
          *(_BYTE *)(v54 + 88) = 1;
          v56 = *v52;
          *v52 = 0LL;
          if ( v56 )
          {
            v57 = v71;
            v58 = v73;
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v56->Scratch;
              ChildRefCount = v56->ChildRefCount;
              v66 = 0;
              LODWORD(Context) = 0;
              v56->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(
                TcpOffloadReceiveCompleteHandler,
                v57,
                v58,
                v56,
                (unsigned int)Context,
                v66,
                ChildRefCount);
              v56 = Scratch;
            }
            while ( Scratch );
            v19 = v74;
            v53 = TcpOffloadReceiveCompleteHandler;
            Offload = v71;
            IndicateOffloadEventHandler = v73;
          }
          *(_BYTE *)(v54 + 88) = 0;
          if ( v55 )
          {
            *(_BYTE *)(v54 + 88) = 1;
            break;
          }
          Offload = (void (*)(void))*((_QWORD *)v53 + 67);
          v52 = (struct _NET_BUFFER_LIST **)(v54 + 72);
          IndicateOffloadEventHandler = (void *)*((_QWORD *)v53 + 68);
          TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                              + 70);
          v71 = Offload;
          v73 = IndicateOffloadEventHandler;
          v51 = v88;
        }
        v60 = *v52;
        if ( *v52 )
        {
          *v52 = 0LL;
          do
          {
            v61 = v60->ChildRefCount;
            v62 = (struct _NET_BUFFER_LIST *)v60->Scratch;
            v60->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              TcpOffloadReceiveCompleteHandler,
              Offload,
              IndicateOffloadEventHandler,
              v60,
              0,
              0,
              v61);
            Offload = v71;
            v60 = v62;
            IndicateOffloadEventHandler = v73;
          }
          while ( v62 );
        }
        goto LABEL_61;
      }
      if ( v6->Header.Type != 5 )
      {
LABEL_60:
        PoolWithTag = ((__int64 (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))Offload)(
                        IndicateOffloadEventHandler,
                        v10,
                        v46);
      }
      else
      {
        v85 = 0;
        v83 = 0;
        v79 = TcpOffloadReceiveCompleteHandler;
        v80 = IndicateOffloadEventHandler;
        v84 = 3;
        v81 = Offload;
        v82 = v10;
        v86 = v46;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls(v6, v10, 0);
      }
LABEL_61:
      if ( (v76.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v76, 5, 18LL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_36:
  if ( v69 )
  {
    HIDWORD(PoolWithTag) = HIDWORD(ndisPerProcRcvTrackers);
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v72);
  }
  else if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
  }
  if ( v70[0] )
  {
    v37 = *(_QWORD *)(v75 + 288);
    if ( LockState.LockState == 3 )
    {
      LODWORD(PoolWithTag) = KeGetPcr()->Prcb.Number;
      --**(_DWORD **)(v37 + 8 * PoolWithTag + 32);
      if ( (LockState.Flags & 1) == 0 && LockState.OldIrql != 2 )
        KeLowerIrql(LockState.OldIrql);
    }
    else if ( LockState.LockState == 4 )
    {
      *(_QWORD *)(v37 + 16) = 0LL;
      v63 = (KSPIN_LOCK *)(v37 + 8);
      if ( (LockState.Flags & 1) != 0 )
        KeReleaseSpinLockFromDpcLevel(v63);
      else
        KeReleaseSpinLock(v63, LockState.OldIrql);
    }
  }
  else
  {
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v75 + 288), &LockState);
  }
}
