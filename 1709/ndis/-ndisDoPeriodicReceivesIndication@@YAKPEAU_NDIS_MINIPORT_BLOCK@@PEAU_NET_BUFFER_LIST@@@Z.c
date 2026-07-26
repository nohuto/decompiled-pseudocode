/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00691D8 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006A950 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0015310 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
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

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v2; // r15d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rbx
  unsigned int v6; // r12d
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  unsigned int Number; // r14d
  char *DeviceContext; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  char *v16; // rsi
  _X_FILTER *EthDB; // r15
  struct _NET_BUFFER_LIST *v18; // rcx
  struct _NET_BUFFER_LIST *v19; // rdx
  __int64 SingleActiveOpen; // r14
  __int64 NoFTypeOpenList; // rbx
  unsigned int v22; // edi
  int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rcx
  struct _NET_BUFFER_LIST *v27; // rdx
  int v28; // r15d
  unsigned int v29; // r12d
  unsigned int v30; // r14d
  unsigned int j; // ebx
  __int64 v32; // rax
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rax
  struct _NET_BUFFER_LIST *v34; // rcx
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // r14
  void (*ReturnNetBufferListsHandler)(void); // rax
  void *ReturnNetBufferListsContext; // r13
  struct _NET_BUFFER_LIST **v38; // r12
  _NDIS_OBJECT_HEADER *v39; // r13
  __int64 v40; // r15
  char v41; // al
  struct _NET_BUFFER_LIST *v42; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  void (*v45)(void); // rcx
  struct _NET_BUFFER_LIST *v46; // r9
  unsigned int v47; // eax
  struct _NET_BUFFER_LIST *v48; // rbx
  int v50; // [rsp+40h] [rbp-79h]
  unsigned int v51; // [rsp+44h] [rbp-75h]
  unsigned int v52; // [rsp+48h] [rbp-71h]
  unsigned int v53; // [rsp+4Ch] [rbp-6Dh]
  void (*v54)(void); // [rsp+50h] [rbp-69h]
  void *v55; // [rsp+58h] [rbp-61h]
  char *PoolWithTag; // [rsp+60h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v57; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v58[3]; // [rsp+80h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+98h] [rbp-21h] BYREF
  _NDIS_OBJECT_HEADER *v60; // [rsp+A0h] [rbp-19h]
  void *v61; // [rsp+A8h] [rbp-11h]
  void (*v62)(void); // [rsp+B0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v63; // [rsp+B8h] [rbp-1h]
  int v64; // [rsp+C0h] [rbp+7h]
  int v65; // [rsp+C4h] [rbp+Bh]
  int v66; // [rsp+C8h] [rbp+Fh]
  int v67; // [rsp+CCh] [rbp+13h]
  struct _NET_BUFFER_LIST *v69; // [rsp+128h] [rbp+6Fh]
  unsigned int i; // [rsp+130h] [rbp+77h]
  char v71; // [rsp+130h] [rbp+77h]
  char v72; // [rsp+138h] [rbp+7Fh]

  v2 = 0;
  v51 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (unsigned int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v69 = Alignment;
    v50 = 1;
    if ( Alignment )
    {
      do
      {
        if ( v6 != LODWORD(Alignment->ProtocolReserved[0]) )
          break;
        v7 = Alignment;
        ++v8;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      v50 = v8;
      v69 = Alignment;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      CurrentThread = KeGetCurrentThread();
      for ( v4->LockDbg = 2494385; ; v4->LockDbg = 2494386 )
      {
        v4->MiniportThread = CurrentThread;
        if ( !v4->LockAcquired )
          break;
        v4->MiniportThread = 0LL;
        v4->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&v4->Lock);
        for ( i = 0; i < 0x32; ++i )
          ;
        KeAcquireSpinLockAtDpcLevel(&v4->Lock);
        CurrentThread = KeGetCurrentThread();
      }
      v4->LockAcquired = 1;
      v4->LockDbgX = 2494386;
      v10 = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      v4->LockDbg = 0;
      v4->LockThread = v10;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    if ( !v4->InitMode )
    {
      v53 = 0;
      v71 = 0;
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      {
        Number = KeGetPcr()->Prcb.Number;
        DeviceContext = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
        v13 = 2096LL * Number;
        v53 = Number;
        v14 = *(unsigned int *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v13);
        if ( (unsigned int)v14 < 3 )
        {
          v71 = 1;
          v15 = v13 + 696 * v14;
          v16 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v15 + 8;
          *(_DWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v13) = v14 + 1;
          PoolWithTag = &DeviceContext[v15 + 8];
LABEL_21:
          EthDB = v4->EthDB;
          v18 = v5;
          v16[692] = 0;
          do
          {
            v19 = v18;
            v18->Flags = v18->Flags & 0xFFFFFFF0 | 4;
            v18 = (struct _NET_BUFFER_LIST *)v18->Link.Alignment;
          }
          while ( v18 );
          SingleActiveOpen = (__int64)EthDB->SingleActiveOpen;
          if ( SingleActiveOpen && *(_BYTE *)(*(_QWORD *)(SingleActiveOpen + 24) + 56LL) >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, v6, v8, 1);
            *((_QWORD *)v16 + 8) = 0LL;
            *((_DWORD *)v16 + 20) = 0;
          }
          else
          {
            *((_QWORD *)v16 + 3) = v5;
            *((_QWORD *)v16 + 1) = EthDB;
            *((_DWORD *)v16 + 4) = 1;
            *(_QWORD *)v16 = v4;
            *((_QWORD *)v16 + 4) = v19;
            *((_DWORD *)v16 + 10) = v6;
            *((_DWORD *)v16 + 11) = v8;
            ndisSortNetBufferLists((__int64 *)v16);
            if ( *((_QWORD *)v16 + 8) || *((_DWORD *)v16 + 172) )
            {
              if ( !EthDB->OpenList || v6 )
                v16[692] = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)v16);
              if ( !SingleActiveOpen )
              {
                NoFTypeOpenList = (__int64)EthDB->NoFTypeOpenList;
                if ( NoFTypeOpenList )
                {
                  v22 = *((_DWORD *)v16 + 172);
                  v23 = *((_DWORD *)v16 + 4) | 2;
                  do
                  {
                    v24 = *(_QWORD *)(NoFTypeOpenList + 424);
                    v25 = 0LL;
                    do
                    {
                      v26 = (unsigned int)v25;
                      v27 = *(struct _NET_BUFFER_LIST **)&v16[40 * v25 + 64];
                      v25 = (unsigned int)(v25 + 1);
                      if ( v27 )
                        ndisMIndicateNetBufferListsToOpen(
                          NoFTypeOpenList,
                          v27,
                          *((_DWORD *)v16 + 10),
                          *(_DWORD *)&v16[40 * v26 + 80],
                          v23);
                    }
                    while ( (unsigned int)v25 <= v22 );
                    NoFTypeOpenList = v24;
                  }
                  while ( v24 );
                  v4 = a1;
                }
                if ( EthDB->FTypeOpenList )
                {
                  v28 = *((_DWORD *)v16 + 4);
                  v29 = *((_DWORD *)v16 + 10);
                  v30 = *((_DWORD *)v16 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v16 + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)v16);
                  for ( j = 1; j <= v30; ++j )
                  {
                    v32 = j;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&v16[40 * v32 + 56],
                      *(struct _NET_BUFFER_LIST **)&v16[40 * v32 + 64],
                      v29,
                      *(_DWORD *)&v16[40 * v32 + 80],
                      v28);
                  }
                }
              }
            }
          }
          if ( v16[692] )
          {
            v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v16 + 8);
            goto LABEL_51;
          }
          goto LABEL_85;
        }
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      v16 = PoolWithTag;
      if ( PoolWithTag )
        goto LABEL_21;
      if ( (unsigned __int8)byte_1C009874B >= 2u )
        WPP_SF_(0xAu, &WPP_78f76d0749fa341705457319fed97831_Traceguids);
LABEL_51:
      if ( !v5 )
        goto LABEL_85;
      PcwDataBlock = v4->PcwDataBlock;
      v34 = v5;
      v57.CurrentCpu = -1;
      v57.PcwBlock = PcwDataBlock;
      v57.DatapathEventsMask = v4->PcwDatapathEventMask;
      v57.DatapathCyclesMask = v4->PcwDatapathCycleMask;
      do
      {
        v34->Flags = v34->Flags & 0xFFFFFFF4 | 8;
        v34 = (struct _NET_BUFFER_LIST *)v34->Link.Alignment;
      }
      while ( v34 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
      if ( v4->PeriodicReceiveQueue.NblsAllocated )
        v5 = ndisReturnPeriodicReceives((__int64)v4, v5);
      if ( !v5 )
      {
LABEL_85:
        if ( v71 )
        {
          --*((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 524 * v53);
        }
        else if ( v16 )
        {
          ExFreePoolWithTag(v16, 0);
        }
        Alignment = v69;
        v8 = v50;
        v2 = v51;
        goto LABEL_90;
      }
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v5,
          0LL,
          (unsigned __int64)v4->Next.ReturnNetBufferListsTracker,
          0x87u,
          1u);
      if ( (v57.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwStartCycleCounter(&v57, 5);
      ReturnNetBufferListsObject = v4->Next.ReturnNetBufferListsObject;
      ReturnNetBufferListsHandler = (void (*)(void))v4->Next.ReturnNetBufferListsHandler;
      ReturnNetBufferListsContext = v4->Next.ReturnNetBufferListsContext;
      v54 = ReturnNetBufferListsHandler;
      v55 = ReturnNetBufferListsContext;
      if ( ReturnNetBufferListsObject->Type == 17 )
        goto LABEL_80;
      if ( !ndisIterativeDataPathDisabled )
      {
        LODWORD(ReturnNetBufferListsHandler) = KeGetPcr()->Prcb.Number;
        v38 = (struct _NET_BUFFER_LIST **)v58;
        v52 = (unsigned int)ReturnNetBufferListsHandler;
        v58[2] = 0LL;
        v58[0] = v5;
        v5->Scratch = 0LL;
        v58[1] = v5;
        v5->ChildRefCount = 1;
        if ( ReturnNetBufferListsObject->Type == 5 )
        {
          while ( *v38 )
          {
            v39 = ReturnNetBufferListsObject;
            v40 = *(_QWORD *)&ReturnNetBufferListsObject[108].Type + 96LL * (_QWORD)ReturnNetBufferListsHandler;
            v41 = *(_BYTE *)(v40 + 88);
            *(_BYTE *)(v40 + 88) = 1;
            v42 = *v38;
            *v38 = 0LL;
            v72 = v41;
            if ( v42 )
            {
              do
              {
                ChildRefCount = v42->ChildRefCount;
                Scratch = (struct _NET_BUFFER_LIST *)v42->Scratch;
                v42->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(ReturnNetBufferListsObject, v54, v55, v42, 0, 0, ChildRefCount);
                v42 = Scratch;
              }
              while ( Scratch );
              v4 = a1;
              v16 = PoolWithTag;
              v41 = v72;
            }
            *(_BYTE *)(v40 + 88) = 0;
            if ( v41 )
            {
              ReturnNetBufferListsContext = v55;
              *(_BYTE *)(v40 + 88) = 1;
              goto LABEL_74;
            }
            v45 = *(void (**)(void))&ReturnNetBufferListsObject[134].Type;
            v38 = (struct _NET_BUFFER_LIST **)(v40 + 72);
            ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[140].Type;
            ReturnNetBufferListsContext = *(void **)&v39[136].Type;
            ReturnNetBufferListsHandler = (void (*)(void))v52;
            v54 = v45;
            v55 = ReturnNetBufferListsContext;
            if ( ReturnNetBufferListsObject->Type != 5 )
              goto LABEL_75;
          }
        }
        else
        {
LABEL_74:
          v45 = v54;
LABEL_75:
          v46 = *v38;
          if ( *v38 )
          {
            *v38 = 0LL;
            do
            {
              v47 = v46->ChildRefCount;
              v48 = (struct _NET_BUFFER_LIST *)v46->Scratch;
              v46->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(
                ReturnNetBufferListsObject,
                v45,
                ReturnNetBufferListsContext,
                v46,
                0,
                0,
                v47);
              v45 = v54;
              v46 = v48;
            }
            while ( v48 );
          }
        }
        goto LABEL_83;
      }
      if ( v4->Header.Type == 5 )
      {
        v66 = 0;
        v64 = 0;
        v60 = ReturnNetBufferListsObject;
        v61 = ReturnNetBufferListsContext;
        v65 = 3;
        v62 = ReturnNetBufferListsHandler;
        v63 = v5;
        v67 = 1;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v5, 0);
      }
      else
      {
LABEL_80:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
          ReturnNetBufferListsContext,
          v5,
          1LL);
      }
LABEL_83:
      if ( (v57.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwEndCycleCounter(&v57, 5, 18LL);
      goto LABEL_85;
    }
    ndisMDispatchReceiveNetBufferListsWithLock((struct _NDIS_FILTER_BLOCK *)v4, v5, v6, v8, 1);
LABEL_90:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->LockAcquired = 0;
      *(_QWORD *)&v4->LockDbg = 0LL;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += v8;
    v2 += v8;
    v51 = v2;
  }
  while ( Alignment );
  return v2;
}
