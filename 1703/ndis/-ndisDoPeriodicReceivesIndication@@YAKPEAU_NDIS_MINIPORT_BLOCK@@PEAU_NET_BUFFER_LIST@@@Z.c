/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0068148 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00691D0 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001824 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003250 (ndisSortNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00058A0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v2; // r15d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rbx
  int v6; // r12d
  struct _NET_BUFFER_LIST *v7; // rax
  int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  unsigned int Number; // r14d
  struct _NDIS_RCV_TRACKER_ARRAY *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  char *v17; // rsi
  _X_FILTER *EthDB; // r15
  struct _NET_BUFFER_LIST *v19; // rcx
  struct _NET_BUFFER_LIST *v20; // rdx
  _NDIS_OPEN_BLOCK *SingleActiveOpen; // r14
  _NDIS_OPEN_BLOCK *NoFTypeOpenList; // rbx
  unsigned int v23; // edi
  int v24; // r13d
  _NDIS_OPEN_BLOCK *FilterNextOpen; // r12
  __int64 v26; // r14
  struct _NET_BUFFER_LIST *v27; // rdx
  int v28; // r15d
  unsigned int v29; // r14d
  unsigned int j; // ebx
  __int64 v31; // rax
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rax
  struct _NET_BUFFER_LIST *v33; // rcx
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // r14
  void (*ReturnNetBufferListsHandler)(void); // r10
  void *ReturnNetBufferListsContext; // r11
  unsigned int v37; // ecx
  struct _NET_BUFFER_LIST **v38; // r12
  _NDIS_OBJECT_HEADER *v39; // r13
  __int64 v40; // r15
  char v41; // al
  struct _NET_BUFFER_LIST *v42; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v45; // r9
  unsigned int v46; // eax
  struct _NET_BUFFER_LIST *v47; // rbx
  int v48; // [rsp+40h] [rbp-79h]
  unsigned int v49; // [rsp+44h] [rbp-75h]
  unsigned int v50; // [rsp+48h] [rbp-71h]
  unsigned int v51; // [rsp+4Ch] [rbp-6Dh]
  void (*v52)(void); // [rsp+50h] [rbp-69h]
  void *v53; // [rsp+58h] [rbp-61h]
  char *PoolWithTag; // [rsp+60h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v55; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v56[3]; // [rsp+80h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+98h] [rbp-21h] BYREF
  _NDIS_OBJECT_HEADER *v58; // [rsp+A0h] [rbp-19h]
  void *v59; // [rsp+A8h] [rbp-11h]
  void (*v60)(void); // [rsp+B0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v61; // [rsp+B8h] [rbp-1h]
  int v62; // [rsp+C0h] [rbp+7h]
  int v63; // [rsp+C4h] [rbp+Bh]
  int v64; // [rsp+C8h] [rbp+Fh]
  int v65; // [rsp+CCh] [rbp+13h]
  struct _NET_BUFFER_LIST *v67; // [rsp+128h] [rbp+6Fh]
  unsigned int i; // [rsp+130h] [rbp+77h]
  char v69; // [rsp+130h] [rbp+77h]
  char v70; // [rsp+138h] [rbp+7Fh]

  v2 = 0;
  v49 = 0;
  v4 = a1;
  do
  {
    v5 = Alignment;
    if ( !Alignment )
      break;
    v6 = (int)Alignment->ProtocolReserved[0];
    v7 = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v8 = 1;
    v67 = Alignment;
    v48 = 1;
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
      v48 = v8;
      v67 = Alignment;
    }
    v4->PeriodicReceiveQueue.NumNblsDequeued -= v8;
    v7->Link.Alignment = 0LL;
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      CurrentThread = KeGetCurrentThread();
      for ( v4->LockDbg = 2494376; ; v4->LockDbg = 2494377 )
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
      v4->LockDbgX = 2494377;
      v10 = KeGetCurrentThread();
      v4->MiniportThread = 0LL;
      v4->LockDbg = 0;
      v4->LockThread = v10;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    if ( !v4->InitMode )
    {
      v51 = 0;
      v69 = 0;
      if ( ndisPerProcRcvTrackers )
      {
        Number = KeGetPcr()->Prcb.Number;
        v13 = ndisPerProcRcvTrackers;
        v14 = 2096LL * Number;
        v51 = Number;
        v15 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v14);
        if ( (unsigned int)v15 < 3 )
        {
          v69 = 1;
          v16 = v14 + 696 * v15;
          v17 = (char *)ndisPerProcRcvTrackers + v16 + 8;
          *(_DWORD *)((char *)ndisPerProcRcvTrackers + v14) = v15 + 1;
          PoolWithTag = (char *)v13 + v16 + 8;
LABEL_25:
          EthDB = v4->EthDB;
          v19 = v5;
          v17[692] = 0;
          do
          {
            v20 = v19;
            v19->Flags = v19->Flags & 0xFFFFFFF0 | 4;
            v19 = (struct _NET_BUFFER_LIST *)v19->Link.Alignment;
          }
          while ( v19 );
          SingleActiveOpen = EthDB->SingleActiveOpen;
          if ( SingleActiveOpen && SingleActiveOpen->ProtocolHandle->MajorNdisVersion >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, 1);
            *((_QWORD *)v17 + 8) = 0LL;
            *((_DWORD *)v17 + 20) = 0;
          }
          else
          {
            *((_QWORD *)v17 + 3) = v5;
            *((_QWORD *)v17 + 1) = EthDB;
            *((_DWORD *)v17 + 4) = 1;
            *(_QWORD *)v17 = v4;
            *((_QWORD *)v17 + 4) = v20;
            *((_DWORD *)v17 + 10) = v6;
            *((_DWORD *)v17 + 11) = v8;
            ndisSortNetBufferLists(v17);
            if ( *((_QWORD *)v17 + 8) || *((_DWORD *)v17 + 172) )
            {
              if ( !EthDB->OpenList || v6 )
                v17[692] = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols(v17);
              if ( !SingleActiveOpen )
              {
                NoFTypeOpenList = EthDB->NoFTypeOpenList;
                if ( NoFTypeOpenList )
                {
                  v23 = *((_DWORD *)v17 + 172);
                  v24 = *((_DWORD *)v17 + 4) | 2;
                  do
                  {
                    FilterNextOpen = NoFTypeOpenList->FilterNextOpen;
                    v26 = 0LL;
                    do
                    {
                      v27 = *(struct _NET_BUFFER_LIST **)&v17[40 * v26 + 64];
                      v26 = (unsigned int)(v26 + 1);
                      if ( v27 )
                        ndisMIndicateNetBufferListsToOpen(NoFTypeOpenList, v27, v24);
                    }
                    while ( (unsigned int)v26 <= v23 );
                    NoFTypeOpenList = FilterNextOpen;
                  }
                  while ( FilterNextOpen );
                  v4 = a1;
                }
                if ( EthDB->FTypeOpenList )
                {
                  v28 = *((_DWORD *)v17 + 4);
                  v29 = *((_DWORD *)v17 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v17 + 2252LL) )
                    ndisIndicateToPmodeOpens(v17);
                  for ( j = 1; j <= v29; ++j )
                  {
                    v31 = j;
                    ndisMIndicateNetBufferListsToOpen(
                      *(NDIS_HANDLE *)&v17[40 * v31 + 56],
                      *(struct _NET_BUFFER_LIST **)&v17[40 * v31 + 64],
                      v28);
                  }
                }
              }
            }
          }
          if ( v17[692] )
          {
            v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v17 + 8);
            goto LABEL_48;
          }
          goto LABEL_64;
        }
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      v17 = PoolWithTag;
      if ( PoolWithTag )
        goto LABEL_25;
      if ( (unsigned __int8)byte_1C009260B >= 2u )
        WPP_SF_(10LL, &WPP_b73f8523fdf5311d444d9d2d2cf99027_Traceguids);
LABEL_48:
      if ( !v5 )
        goto LABEL_64;
      PcwDataBlock = v4->PcwDataBlock;
      v33 = v5;
      v55.CurrentCpu = -1;
      v55.PcwBlock = PcwDataBlock;
      v55.DatapathEventsMask = v4->PcwDatapathEventMask;
      v55.DatapathCyclesMask = v4->PcwDatapathCycleMask;
      do
      {
        v33->Flags = v33->Flags & 0xFFFFFFF4 | 8;
        v33 = (struct _NET_BUFFER_LIST *)v33->Link.Alignment;
      }
      while ( v33 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
      if ( v4->PeriodicReceiveQueue.NblsAllocated )
        v5 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v4, v5);
      if ( !v5 )
      {
LABEL_64:
        if ( v69 )
        {
          --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v51);
        }
        else if ( v17 )
        {
          ExFreePoolWithTag(v17, 0);
        }
        Alignment = v67;
        v8 = v48;
        v2 = v49;
        goto LABEL_17;
      }
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v5,
          0LL,
          v4->Next.ReturnNetBufferListsTracker,
          NdisNblTrackerEvent_ProtocolReturned,
          1u);
      if ( (v55.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwStartCycleCounter(&v55, 5u);
      ReturnNetBufferListsObject = v4->Next.ReturnNetBufferListsObject;
      ReturnNetBufferListsHandler = (void (*)(void))v4->Next.ReturnNetBufferListsHandler;
      ReturnNetBufferListsContext = v4->Next.ReturnNetBufferListsContext;
      v52 = ReturnNetBufferListsHandler;
      v53 = ReturnNetBufferListsContext;
      if ( ReturnNetBufferListsObject->Type == 17 )
      {
LABEL_61:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
          ReturnNetBufferListsContext,
          v5,
          1LL);
      }
      else if ( ndisIterativeDataPathDisabled )
      {
        if ( v4->Header.Type != 5 )
          goto LABEL_61;
        v64 = 0;
        v62 = 0;
        v58 = ReturnNetBufferListsObject;
        v59 = ReturnNetBufferListsContext;
        v63 = 3;
        v60 = ReturnNetBufferListsHandler;
        v61 = v5;
        v65 = 1;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v5, 0);
      }
      else
      {
        v37 = KeGetPcr()->Prcb.Number;
        v38 = (struct _NET_BUFFER_LIST **)v56;
        v50 = v37;
        v56[2] = 0LL;
        v56[0] = v5;
        v5->Scratch = 0LL;
        v56[1] = v5;
        v5->ChildRefCount = 1;
        while ( ReturnNetBufferListsObject->Type == 5 )
        {
          if ( !*v38 )
            goto LABEL_62;
          v39 = ReturnNetBufferListsObject;
          v40 = *(_QWORD *)&ReturnNetBufferListsObject[108].Type + 96LL * v37;
          v41 = *(_BYTE *)(v40 + 88);
          *(_BYTE *)(v40 + 88) = 1;
          v42 = *v38;
          *v38 = 0LL;
          v70 = v41;
          if ( v42 )
          {
            do
            {
              ChildRefCount = v42->ChildRefCount;
              Scratch = (struct _NET_BUFFER_LIST *)v42->Scratch;
              v42->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(ReturnNetBufferListsObject, v52, v53, v42, 0, 0, ChildRefCount);
              v42 = Scratch;
            }
            while ( Scratch );
            v4 = a1;
            v17 = PoolWithTag;
            v41 = v70;
            ReturnNetBufferListsHandler = v52;
            ReturnNetBufferListsContext = v53;
          }
          *(_BYTE *)(v40 + 88) = 0;
          if ( v41 )
          {
            *(_BYTE *)(v40 + 88) = 1;
            break;
          }
          ReturnNetBufferListsHandler = *(void (**)(void))&ReturnNetBufferListsObject[134].Type;
          v38 = (struct _NET_BUFFER_LIST **)(v40 + 72);
          ReturnNetBufferListsContext = *(void **)&ReturnNetBufferListsObject[136].Type;
          ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[140].Type;
          v52 = *(void (**)(void))&v39[134].Type;
          v53 = ReturnNetBufferListsContext;
          v37 = v50;
        }
        v45 = *v38;
        if ( *v38 )
        {
          *v38 = 0LL;
          do
          {
            v46 = v45->ChildRefCount;
            v47 = (struct _NET_BUFFER_LIST *)v45->Scratch;
            v45->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(
              ReturnNetBufferListsObject,
              ReturnNetBufferListsHandler,
              ReturnNetBufferListsContext,
              v45,
              0,
              0,
              v46);
            ReturnNetBufferListsHandler = v52;
            v45 = v47;
            ReturnNetBufferListsContext = v53;
          }
          while ( v47 );
        }
      }
LABEL_62:
      if ( (v55.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwEndCycleCounter(&v55, 5u, 0x12uLL);
      goto LABEL_64;
    }
    ndisMDispatchReceiveNetBufferListsWithLock((struct _NDIS_FILTER_BLOCK *)v4, v5, 1u);
LABEL_17:
    if ( v4->MajorNdisVersion < 6u && (v4->Flags & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      v4->LockDbgX = 0;
      v4->LockThread = 0LL;
      v4->MiniportThread = 0LL;
      v4->LockDbg = 0;
      v4->LockAcquired = 0;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
    }
    v4->PeriodicReceiveQueue.TrackingIndicated += v8;
    v2 += v8;
    v49 = v2;
  }
  while ( Alignment );
  return v2;
}
