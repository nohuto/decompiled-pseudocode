/*
 * XREFs of ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0069B48 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006B250 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003550 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00062C0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
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

__int64 __fastcall ndisDoPeriodicReceivesIndication(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *Alignment)
{
  unsigned int v2; // r15d
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NET_BUFFER_LIST *v5; // rsi
  unsigned int v6; // r12d
  struct _NET_BUFFER_LIST *v7; // rax
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  unsigned int Number; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int *PoolWithTag; // r14
  _X_FILTER *EthDB; // r15
  struct _NET_BUFFER_LIST *v16; // rcx
  struct _NET_BUFFER_LIST *v17; // rdx
  __int64 SingleActiveOpen; // rbx
  __int64 NoFTypeOpenList; // rbx
  unsigned int v20; // edi
  int v21; // r13d
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  int v26; // r15d
  unsigned int v27; // r12d
  unsigned int v28; // esi
  unsigned int i; // ebx
  __int64 v30; // rax
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rax
  struct _NET_BUFFER_LIST *v32; // rcx
  unsigned __int64 v33; // rax
  _NDIS_OBJECT_HEADER *ReturnNetBufferListsObject; // r15
  void *ReturnNetBufferListsContext; // rcx
  void (*ReturnNetBufferListsHandler)(void); // r13
  struct _NET_BUFFER_LIST **v37; // r12
  bool v38; // zf
  _NDIS_OBJECT_HEADER *v39; // rdx
  __int64 v40; // rsi
  char v41; // al
  struct _NET_BUFFER_LIST *v42; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v45; // eax
  struct _NET_BUFFER_LIST *v46; // rbx
  int v48; // [rsp+40h] [rbp-79h]
  unsigned int v49; // [rsp+44h] [rbp-75h]
  unsigned int v50; // [rsp+48h] [rbp-71h]
  void *v51; // [rsp+50h] [rbp-69h]
  unsigned int v52; // [rsp+58h] [rbp-61h]
  struct NDIS_PCW_CONTEXT v53; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v54[3]; // [rsp+80h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+98h] [rbp-21h] BYREF
  _NDIS_OBJECT_HEADER *v56; // [rsp+A0h] [rbp-19h]
  void *v57; // [rsp+A8h] [rbp-11h]
  void (*v58)(void); // [rsp+B0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v59; // [rsp+B8h] [rbp-1h]
  int v60; // [rsp+C0h] [rbp+7h]
  int v61; // [rsp+C4h] [rbp+Bh]
  int v62; // [rsp+C8h] [rbp+Fh]
  int v63; // [rsp+CCh] [rbp+13h]
  struct _NET_BUFFER_LIST *v65; // [rsp+128h] [rbp+6Fh]
  unsigned int v66; // [rsp+130h] [rbp+77h]
  char v67; // [rsp+130h] [rbp+77h]
  char v68; // [rsp+138h] [rbp+7Fh]

  v2 = 0;
  v49 = 0;
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
    v65 = Alignment;
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
      v65 = Alignment;
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
        v66 = 0;
        do
          ++v66;
        while ( v66 < 0x32 );
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
      v50 = 0;
      v67 = 0;
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        Number = KeGetPcr()->Prcb.Number;
        v12 = 2096LL * Number;
        v50 = Number;
        v13 = *(unsigned int *)(v12 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
        if ( (unsigned int)v13 < 3 )
        {
          v67 = 1;
          PoolWithTag = (unsigned int *)(v12 + 696 * v13 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 8LL);
          *(_DWORD *)(v12 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) = v13 + 1;
LABEL_20:
          EthDB = v4->EthDB;
          v16 = v5;
          *((_BYTE *)PoolWithTag + 692) = 0;
          do
          {
            v17 = v16;
            v16->Flags = v16->Flags & 0xFFFFFFF0 | 4;
            v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
          }
          while ( v16 );
          SingleActiveOpen = (__int64)EthDB->SingleActiveOpen;
          if ( SingleActiveOpen && *(_BYTE *)(*(_QWORD *)(SingleActiveOpen + 24) + 56LL) >= 6u )
          {
            ndisMIndicateNetBufferListsToOpen(SingleActiveOpen, v5, v6, v8, 1);
            *((_QWORD *)PoolWithTag + 8) = 0LL;
            PoolWithTag[20] = 0;
          }
          else
          {
            *((_QWORD *)PoolWithTag + 3) = v5;
            *((_QWORD *)PoolWithTag + 1) = EthDB;
            PoolWithTag[4] = 1;
            *(_QWORD *)PoolWithTag = v4;
            *((_QWORD *)PoolWithTag + 4) = v17;
            PoolWithTag[10] = v6;
            PoolWithTag[11] = v8;
            ndisSortNetBufferLists((__int64 *)PoolWithTag);
            if ( *((_QWORD *)PoolWithTag + 8) || PoolWithTag[172] )
            {
              if ( !EthDB->OpenList || v6 )
                *((_BYTE *)PoolWithTag + 692) = 1;
              else
                ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
              if ( !SingleActiveOpen )
              {
                NoFTypeOpenList = (__int64)EthDB->NoFTypeOpenList;
                if ( NoFTypeOpenList )
                {
                  v20 = PoolWithTag[172];
                  v21 = PoolWithTag[4] | 2;
                  do
                  {
                    v22 = *(_QWORD *)(NoFTypeOpenList + 424);
                    v23 = 0LL;
                    do
                    {
                      v24 = (unsigned int)v23;
                      v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v23 + 16];
                      v23 = (unsigned int)(v23 + 1);
                      if ( v25 )
                        ndisMIndicateNetBufferListsToOpen(
                          NoFTypeOpenList,
                          v25,
                          PoolWithTag[10],
                          PoolWithTag[10 * v24 + 20],
                          v21);
                    }
                    while ( (unsigned int)v23 <= v20 );
                    NoFTypeOpenList = v22;
                  }
                  while ( v22 );
                  v4 = a1;
                }
                if ( EthDB->FTypeOpenList )
                {
                  v26 = PoolWithTag[4];
                  v27 = PoolWithTag[10];
                  v28 = PoolWithTag[172];
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)PoolWithTag);
                  for ( i = 1; i <= v28; ++i )
                  {
                    v30 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&PoolWithTag[10 * v30 + 14],
                      *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v30 + 16],
                      v27,
                      PoolWithTag[10 * v30 + 20],
                      v26);
                  }
                }
              }
            }
          }
          if ( *((_BYTE *)PoolWithTag + 692) )
          {
            v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
            goto LABEL_50;
          }
          goto LABEL_83;
        }
      }
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
      if ( PoolWithTag )
        goto LABEL_20;
      if ( (unsigned __int8)byte_1C009960B >= 2u )
        WPP_SF_(0xAu, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids);
LABEL_50:
      if ( !v5 )
        goto LABEL_83;
      PcwDataBlock = v4->PcwDataBlock;
      v32 = v5;
      v53.CurrentCpu = -1;
      v53.PcwBlock = PcwDataBlock;
      v53.DatapathEventsMask = v4->PcwDatapathEventMask;
      v53.DatapathCyclesMask = v4->PcwDatapathCycleMask;
      do
      {
        v32->Flags = v32->Flags & 0xFFFFFFF4 | 8;
        v32 = (struct _NET_BUFFER_LIST *)v32->Link.Alignment;
      }
      while ( v32 );
      v33 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        v33 = ndisMarkNetBufferListCorrelationIdsAsUsed(v5);
      if ( v4->PeriodicReceiveQueue.NblsAllocated )
      {
        v33 = (unsigned __int64)ndisReturnPeriodicReceives((__int64)v4, v5);
        v5 = (struct _NET_BUFFER_LIST *)v33;
      }
      if ( !v5 )
      {
LABEL_83:
        if ( v67 )
        {
          --*(_DWORD *)(2096LL * v50 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
        }
        else if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        Alignment = v65;
        v8 = v48;
        v2 = v49;
        goto LABEL_88;
      }
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v5,
          0LL,
          (unsigned __int64)v4->Next.ReturnNetBufferListsTracker,
          135LL,
          1u);
      if ( (v53.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwStartCycleCounter(&v53, 5);
      ReturnNetBufferListsObject = v4->Next.ReturnNetBufferListsObject;
      ReturnNetBufferListsContext = v4->Next.ReturnNetBufferListsContext;
      ReturnNetBufferListsHandler = (void (*)(void))v4->Next.ReturnNetBufferListsHandler;
      v51 = ReturnNetBufferListsContext;
      if ( ReturnNetBufferListsObject->Type == 17 )
        goto LABEL_78;
      if ( !ndisIterativeDataPathDisabled )
      {
        LODWORD(v33) = KeGetPcr()->Prcb.Number;
        v37 = (struct _NET_BUFFER_LIST **)v54;
        v5->ChildRefCount = 1;
        v5->Scratch = 0LL;
        v38 = ReturnNetBufferListsObject->Type == 5;
        v52 = v33;
        v54[2] = 0LL;
        v54[0] = v5;
        v54[1] = v5;
        if ( v38 )
        {
          while ( *v37 )
          {
            v39 = ReturnNetBufferListsObject;
            v40 = *(_QWORD *)&ReturnNetBufferListsObject[108].Type + 96 * v33;
            v41 = *(_BYTE *)(v40 + 88);
            *(_BYTE *)(v40 + 88) = 1;
            v42 = *v37;
            *v37 = 0LL;
            v68 = v41;
            if ( v42 )
            {
              do
              {
                ChildRefCount = v42->ChildRefCount;
                Scratch = (struct _NET_BUFFER_LIST *)v42->Scratch;
                v42->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  ReturnNetBufferListsObject,
                  ReturnNetBufferListsHandler,
                  v51,
                  v42,
                  0,
                  0,
                  ChildRefCount);
                v42 = Scratch;
              }
              while ( Scratch );
              v4 = a1;
              v39 = ReturnNetBufferListsObject;
              v41 = v68;
            }
            *(_BYTE *)(v40 + 88) = 0;
            if ( v41 )
            {
              ReturnNetBufferListsContext = v51;
              *(_BYTE *)(v40 + 88) = 1;
              v5 = *v37;
              goto LABEL_73;
            }
            ReturnNetBufferListsObject = *(_NDIS_OBJECT_HEADER **)&ReturnNetBufferListsObject[140].Type;
            v37 = (struct _NET_BUFFER_LIST **)(v40 + 72);
            ReturnNetBufferListsContext = *(void **)&v39[136].Type;
            ReturnNetBufferListsHandler = *(void (**)(void))&v39[134].Type;
            v33 = v52;
            v51 = ReturnNetBufferListsContext;
            if ( ReturnNetBufferListsObject->Type != 5 )
            {
              v5 = *(struct _NET_BUFFER_LIST **)(v40 + 72);
              goto LABEL_73;
            }
          }
        }
        else
        {
LABEL_73:
          if ( v5 )
          {
            *v37 = 0LL;
            do
            {
              v45 = v5->ChildRefCount;
              v46 = (struct _NET_BUFFER_LIST *)v5->Scratch;
              v5->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(
                ReturnNetBufferListsObject,
                ReturnNetBufferListsHandler,
                ReturnNetBufferListsContext,
                v5,
                0,
                0,
                v45);
              ReturnNetBufferListsContext = v51;
              v5 = v46;
            }
            while ( v46 );
          }
        }
        goto LABEL_81;
      }
      if ( v4->Header.Type == 5 )
      {
        v62 = 0;
        v60 = 0;
        v57 = ReturnNetBufferListsContext;
        v56 = ReturnNetBufferListsObject;
        v61 = 3;
        v58 = ReturnNetBufferListsHandler;
        v59 = v5;
        v63 = 1;
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
LABEL_78:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, __int64))ReturnNetBufferListsHandler)(
          ReturnNetBufferListsContext,
          v5,
          1LL);
      }
LABEL_81:
      if ( (v53.DatapathCyclesMask & 0x20) != 0 )
        ndisPcwEndCycleCounter(&v53, 5, 18LL);
      goto LABEL_83;
    }
    ndisMDispatchReceiveNetBufferListsWithLock((struct _NDIS_FILTER_BLOCK *)v4, v5, v6, v8, 1);
LABEL_88:
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
    v49 = v2;
  }
  while ( Alignment );
  return v2;
}
