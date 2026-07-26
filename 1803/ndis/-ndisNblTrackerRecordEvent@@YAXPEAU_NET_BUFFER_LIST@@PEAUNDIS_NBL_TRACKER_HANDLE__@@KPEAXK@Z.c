/*
 * XREFs of ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C80 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisAllocateNetBufferList @ 0x1C0003920 (NdisAllocateNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0004860 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004D20 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0005410 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C00056B0 (NdisFreeNetBufferList.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005A50 (ndisMSendNBLToMiniportInternal.c)
 *     NdisReturnNetBufferLists @ 0x1C0005DA0 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0006D10 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C00071C0 (NdisFSendNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0008000 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0008700 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0010990 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0011140 (NdisFreeFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C004D0B0 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004E054 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E1FC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004E4B0 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004E550 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004E5E8 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004E678 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E77C (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004EB14 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0067840 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C00679D0 (NdisNblTrackerRecordEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0067064 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00671F0 (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisCaptureStackTrace @ 0x1C006E368 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C006E54C (ndisReleaseStackTrace.c)
 */

void __fastcall ndisNblTrackerRecordEvent(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int v13; // r8d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdi
  struct _NET_BUFFER_LIST *v16; // r10
  char IsPossibleSmuggling; // al
  struct _NET_BUFFER_LIST **v18; // r10
  unsigned int v19; // r11d
  unsigned int v20; // esi
  unsigned __int64 v21; // r12
  unsigned int v22; // r11d
  unsigned int v23; // ebx
  __int64 v24; // r13
  unsigned int v25; // r15d
  int v26; // ecx
  ULONG_PTR v27; // rcx
  unsigned int Number; // edx
  int v29; // edx
  unsigned __int64 *v30; // r10
  __int64 v31; // r9
  unsigned int v32; // r8d
  unsigned int v33; // edx
  unsigned __int64 v34; // rax
  __int64 v35; // r11
  struct _NET_BUFFER_LIST *Alignment; // r12
  struct _NET_BUFFER_LIST *v37; // r10
  unsigned __int64 v38; // r15
  unsigned int v40; // [rsp+24h] [rbp-4Ch]
  int v41; // [rsp+28h] [rbp-48h]
  struct _NET_BUFFER_LIST *v43; // [rsp+38h] [rbp-38h]
  unsigned __int64 v44; // [rsp+40h] [rbp-30h]
  __int64 v45; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v46; // [rsp+50h] [rbp-20h]
  __int64 v47; // [rsp+58h] [rbp-18h]

  v45 = 0LL;
  v46 = 0LL;
  v6 = a4;
  v47 = 0LL;
  HIDWORD(v11) = 0;
  v8 = a2;
  v43 = ndisBreakNbl;
  v9 = ndisMaxNumberOfProcessors + 1;
  LODWORD(v11) = ndisNblTrackerHistorySize % (unsigned int)v9;
  v12 = 0;
  v13 = 0;
  v41 = 0;
  v14 = a2 | 0x8000000000000002uLL;
  v15 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  v44 = v14;
  v16 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      IsPossibleSmuggling = ndisIsPossibleSmuggling(
                              v15,
                              (__int64)v16->NetBufferListInfo[27],
                              (__int64)v16->SourceHandle,
                              v14);
      v9 = v12 + 1;
      if ( !IsPossibleSmuggling )
        v9 = v12;
      v12 = v9 + 1;
      if ( (int)v9 + 1 > v19 )
        break;
      if ( a3 >= 0x1F )
      {
        v16 = *v18;
        if ( v16 )
          continue;
      }
      v13 = 0;
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v20 = 8;
    v21 = v6 & 0xFFFFFFFFFFFFF000uLL;
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v20 = 16;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
    {
      v13 = ndisCaptureStackTrace(v9, v11);
      v41 = v13;
    }
    v22 = v20 + 8 * v12;
    v40 = v22;
    v23 = v22 >> 3;
    v24 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v22 >> 3)
        % ndisNblTrackerHistorySize;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
    {
      v25 = 0;
      if ( v23 )
      {
        do
        {
          v26 = HIDWORD(ndisNblTrackerHistoryBuffer[(v25 + (unsigned int)v24) % ndisNblTrackerHistorySize]);
          if ( v26 >= 0 )
          {
            v27 = v26 & 0x3FFFFFF;
            if ( (_DWORD)v27 )
              ndisReleaseStackTrace(v27);
          }
          ++v25;
        }
        while ( v25 < v23 );
        v13 = v41;
        v22 = v40;
      }
      v6 = a4;
    }
    Number = KeGetPcr()->Prcb.Number;
    LOBYTE(v45) = a3;
    v29 = v45 & 0xFFFFF | (Number << 20);
    LODWORD(v45) = v29;
    if ( v21 )
    {
      HIDWORD(v45) = HIDWORD(v45) & 0x80000000 | v13 & 0x3FFFFFF | ((a5 & 0xF) << 26) & 0xBFFFFFFF;
      v46 = v6 | 0x8000000000000000uLL;
    }
    else
    {
      HIDWORD(v45) = HIDWORD(v45) & 0xC0000000 | v13 & 0x3FFFFFF | ((a5 & 0xF) << 26) | 0x40000000;
      LODWORD(v45) = v29 ^ (v29 ^ ((_DWORD)v6 << 8)) & 0xFFF00;
    }
    v30 = (unsigned __int64 *)&v45;
    v31 = v20 >> 3;
    v32 = 0;
    do
    {
      v33 = (v32 + (unsigned int)v24) % ndisNblTrackerHistorySize;
      v34 = *v30;
      ++v32;
      ++v30;
      ndisNblTrackerHistoryBuffer[v33] = v34;
    }
    while ( v32 < (unsigned int)v31 );
    if ( v20 < v22 )
    {
      v35 = v24;
      do
      {
        Alignment = 0LL;
        v37 = a1;
        v38 = (v35 + ((unsigned __int64)v20 >> 3)) % ndisNblTrackerHistorySize;
        if ( a1 )
        {
          if ( a1 == v43 )
          {
            DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v43);
            if ( a4 )
            {
              if ( a3 >= 0x1F )
              {
                DbgPrint("NBL will be given to: ");
                ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a4 & 0xFFFFFFFFFFFFFFF8uLL));
              }
            }
            __debugbreak();
          }
          if ( a3 >= 0x1F )
            Alignment = (struct _NET_BUFFER_LIST *)a1->Link.Alignment;
          if ( ndisIsPossibleSmuggling(v15, (__int64)a1->NetBufferListInfo[27], (__int64)a1->SourceHandle, v31) )
          {
            v20 += 8;
            if ( v20 >= v40 )
            {
              ndisNblTrackerHistoryBuffer[(unsigned int)v38] = 0LL;
              return;
            }
            ndisNblTrackerHistoryBuffer[(unsigned int)v38] = v44;
            LODWORD(v38) = (v35 + ((unsigned __int64)v20 >> 3)) % ndisNblTrackerHistorySize;
          }
        }
        v20 += 8;
        a1 = Alignment;
        ndisNblTrackerHistoryBuffer[(unsigned int)v38] = (unsigned __int64)v37;
      }
      while ( v20 < v40 );
    }
  }
}
