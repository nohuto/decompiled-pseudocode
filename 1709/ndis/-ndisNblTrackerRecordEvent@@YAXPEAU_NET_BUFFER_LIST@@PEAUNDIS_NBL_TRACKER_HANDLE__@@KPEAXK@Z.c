/*
 * XREFs of ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0012F00 (NdisSendNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00139F0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeCloneNetBufferList @ 0x1C00140C0 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0014360 (NdisFreeNetBufferList.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisAllocateNetBufferList @ 0x1C0015EA0 (NdisAllocateNetBufferList.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0016490 (ndisMSendNBLToMiniportInternal.c)
 *     NdisFReturnNetBufferLists @ 0x1C0016840 (NdisFReturnNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C0016B80 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00172C0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C0017530 (NdisFSendNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0017D70 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0018230 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0019050 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C004C0E0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C004C680 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004D6F0 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D89C (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004DB4C (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004DBEC (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004DC84 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004DD14 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004DE14 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004E1B0 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0066CCC (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C0066DF0 (NdisNblTrackerRecordEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0066574 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00666B8 (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisCaptureStackTrace @ 0x1C006DB18 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C006DCFC (ndisReleaseStackTrace.c)
 */

void __fastcall ndisNblTrackerRecordEvent(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // r8d
  unsigned __int64 v13; // rdi
  struct _NET_BUFFER_LIST *v14; // r10
  char IsPossibleSmuggling; // al
  struct _NET_BUFFER_LIST **v16; // r10
  unsigned int v17; // r11d
  unsigned int v18; // esi
  unsigned __int64 v19; // r12
  unsigned int v20; // r11d
  unsigned int v21; // ebx
  __int64 v22; // r13
  unsigned int v23; // r15d
  int v24; // ecx
  ULONG_PTR v25; // rcx
  unsigned int Number; // edx
  int v27; // edx
  unsigned __int64 *v28; // r10
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned __int64 v31; // rax
  __int64 v32; // r11
  struct _NET_BUFFER_LIST *Alignment; // r12
  struct _NET_BUFFER_LIST *v34; // r10
  unsigned __int64 v35; // r15
  unsigned int v37; // [rsp+24h] [rbp-4Ch]
  int v38; // [rsp+28h] [rbp-48h]
  struct _NET_BUFFER_LIST *v40; // [rsp+38h] [rbp-38h]
  unsigned __int64 v41; // [rsp+40h] [rbp-30h]
  __int64 v42; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-20h]
  __int64 v44; // [rsp+58h] [rbp-18h]

  v42 = 0LL;
  v43 = 0LL;
  v6 = a4;
  v44 = 0LL;
  HIDWORD(v10) = 0;
  v40 = ndisBreakNbl;
  v8 = ndisMaxNumberOfProcessors + 1;
  LODWORD(v10) = ndisNblTrackerHistorySize % (unsigned int)v8;
  v11 = 0;
  v12 = 0;
  v38 = 0;
  v13 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v41 = a2 | 0x8000000000000002uLL;
  v14 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      IsPossibleSmuggling = ndisIsPossibleSmuggling(
                              v13,
                              (__int64)v14->NetBufferListInfo[27],
                              (__int64)v14->SourceHandle);
      v8 = v11 + 1;
      if ( !IsPossibleSmuggling )
        v8 = v11;
      v11 = v8 + 1;
      if ( (int)v8 + 1 > v17 )
        break;
      if ( a3 >= 0x1F )
      {
        v14 = *v16;
        if ( v14 )
          continue;
      }
      v12 = 0;
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v18 = 8;
    v19 = v6 & 0xFFFFFFFFFFFFF000uLL;
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v18 = 16;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
    {
      v12 = ndisCaptureStackTrace(v8, v10);
      v38 = v12;
    }
    v20 = v18 + 8 * v11;
    v37 = v20;
    v21 = v20 >> 3;
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v20 >> 3)
        % ndisNblTrackerHistorySize;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
    {
      v23 = 0;
      if ( v21 )
      {
        do
        {
          v24 = HIDWORD(ndisNblTrackerHistoryBuffer[(v23 + (unsigned int)v22) % ndisNblTrackerHistorySize]);
          if ( v24 >= 0 )
          {
            v25 = v24 & 0x3FFFFFF;
            if ( (_DWORD)v25 )
              ndisReleaseStackTrace(v25);
          }
          ++v23;
        }
        while ( v23 < v21 );
        v12 = v38;
        v20 = v37;
      }
      v6 = a4;
    }
    Number = KeGetPcr()->Prcb.Number;
    LOBYTE(v42) = a3;
    v27 = v42 & 0xFFFFF | (Number << 20);
    LODWORD(v42) = v27;
    if ( v19 )
    {
      HIDWORD(v42) = HIDWORD(v42) & 0x80000000 | v12 & 0x3FFFFFF | ((a5 & 0xF) << 26) & 0xBFFFFFFF;
      v43 = v6 | 0x8000000000000000uLL;
    }
    else
    {
      HIDWORD(v42) = HIDWORD(v42) & 0xC0000000 | v12 & 0x3FFFFFF | ((a5 & 0xF) << 26) | 0x40000000;
      LODWORD(v42) = (v27 ^ ((_DWORD)v6 << 8)) & 0xFFF00 ^ v27;
    }
    v28 = (unsigned __int64 *)&v42;
    v29 = 0;
    do
    {
      v30 = (v29 + (unsigned int)v22) % ndisNblTrackerHistorySize;
      v31 = *v28;
      ++v29;
      ++v28;
      ndisNblTrackerHistoryBuffer[v30] = v31;
    }
    while ( v29 < v18 >> 3 );
    if ( v18 < v20 )
    {
      v32 = v22;
      do
      {
        Alignment = 0LL;
        v34 = a1;
        v35 = (v32 + ((unsigned __int64)v18 >> 3)) % ndisNblTrackerHistorySize;
        if ( a1 )
        {
          if ( a1 == v40 )
          {
            DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v40);
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
          if ( ndisIsPossibleSmuggling(v13, (__int64)a1->NetBufferListInfo[27], (__int64)a1->SourceHandle) )
          {
            v18 += 8;
            if ( v18 >= v37 )
            {
              ndisNblTrackerHistoryBuffer[(unsigned int)v35] = 0LL;
              return;
            }
            ndisNblTrackerHistoryBuffer[(unsigned int)v35] = v41;
            LODWORD(v35) = (v32 + ((unsigned __int64)v18 >> 3)) % ndisNblTrackerHistorySize;
          }
        }
        v18 += 8;
        a1 = Alignment;
        ndisNblTrackerHistoryBuffer[(unsigned int)v35] = (unsigned __int64)v34;
      }
      while ( v18 < v37 );
    }
  }
}
