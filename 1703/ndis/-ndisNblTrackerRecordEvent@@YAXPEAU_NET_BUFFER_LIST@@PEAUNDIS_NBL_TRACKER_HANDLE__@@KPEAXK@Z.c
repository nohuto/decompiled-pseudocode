/*
 * XREFs of ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C00 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 *     NdisAllocateNetBufferList @ 0x1C0004710 (NdisAllocateNetBufferList.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0004D20 (ndisMSendNBLToMiniportInternal.c)
 *     NdisReturnNetBufferLists @ 0x1C00051B0 (NdisReturnNetBufferLists.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0006260 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0006520 (NdisFreeNetBufferList.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0006800 (NdisFSendNetBufferListsComplete.c)
 *     NdisFSendNetBufferLists @ 0x1C000D5A0 (NdisFSendNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000DBB0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFReturnNetBufferLists @ 0x1C000EE90 (NdisFReturnNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000F260 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0023D80 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0024530 (NdisFreeFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C004E3B0 (NdisAllocateReassembledNetBufferList.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004EBE4 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004ED90 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004F040 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004F0E8 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004F180 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004F210 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004F310 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004F6B0 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C00664D4 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1C0066600 (NdisNblTrackerRecordEvent.c)
 * Callees:
 *     ndisReleaseStackTrace @ 0x1C00115F8 (ndisReleaseStackTrace.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x1C0065E14 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0065F4C (-ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisCaptureStackTrace @ 0x1C006C5A4 (ndisCaptureStackTrace.c)
 */

void __fastcall ndisNblTrackerRecordEvent(
        struct _NET_BUFFER_LIST *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  int v10; // r9d
  bool v12; // si
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  struct _NET_BUFFER_LIST *v16; // r10
  char IsPossibleSmuggling; // al
  struct _NET_BUFFER_LIST **v18; // r10
  unsigned int v19; // r11d
  unsigned int v20; // esi
  unsigned __int64 v21; // r12
  unsigned int v22; // ebx
  unsigned int v23; // r8d
  __int64 v24; // r13
  unsigned int v25; // r15d
  unsigned int v26; // ecx
  ULONG_PTR v27; // rcx
  unsigned int Number; // edx
  int v29; // edx
  unsigned int v30; // ecx
  unsigned __int64 *v31; // r10
  unsigned __int64 *v32; // r11
  unsigned int v33; // r8d
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 i; // rcx
  struct _NET_BUFFER_LIST *Alignment; // r12
  struct _NET_BUFFER_LIST *v38; // r11
  unsigned __int64 v39; // r15
  bool v40; // [rsp+20h] [rbp-50h]
  int v41; // [rsp+28h] [rbp-48h]
  unsigned int v42; // [rsp+30h] [rbp-40h]
  unsigned int v43; // [rsp+34h] [rbp-3Ch]
  struct _NET_BUFFER_LIST *v45; // [rsp+40h] [rbp-30h]
  unsigned __int64 v46; // [rsp+48h] [rbp-28h]
  __int64 v47; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-18h]
  __int64 v49; // [rsp+60h] [rbp-10h]

  v47 = 0LL;
  v48 = 0LL;
  v8 = 0;
  v49 = 0LL;
  v9 = a4;
  v10 = 0;
  v43 = a3;
  v12 = a3 >= 0x1F;
  v45 = ndisBreakNbl;
  HIDWORD(v14) = 0;
  v13 = ndisMaxNumberOfProcessors + 1;
  v41 = 0;
  LODWORD(v14) = ndisNblTrackerHistorySize % (unsigned int)v13;
  v15 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v40 = a3 >= 0x1F;
  v16 = a1;
  v46 = a2 | 0x8000000000000002uLL;
  if ( a1 )
  {
    while ( 1 )
    {
      IsPossibleSmuggling = ndisIsPossibleSmuggling(v15, (__int64)v16->NetBufferListInfo[26]);
      v13 = v8 + 1;
      if ( !IsPossibleSmuggling )
        v13 = v8;
      v8 = v13 + 1;
      if ( (int)v13 + 1 > v19 )
        break;
      if ( v12 )
      {
        v16 = *v18;
        if ( v16 )
          continue;
      }
      v10 = 0;
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v20 = 8;
    v21 = v9 & 0xFFFFFFFFFFFFF000uLL;
    if ( (v9 & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v20 = 16;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
    {
      v10 = ndisCaptureStackTrace(v13, v14);
      v41 = v10;
    }
    v42 = v20 + 8 * v8;
    v22 = v42 >> 3;
    v23 = ndisNblTrackerHistorySize;
    v24 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v42 >> 3)
        % ndisNblTrackerHistorySize;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogWithStack )
    {
      v25 = 0;
      if ( v22 )
      {
        do
        {
          v26 = HIDWORD(ndisNblTrackerHistoryBuffer[(v25 + (unsigned int)v24) % v23]);
          if ( v26 < 0x80000000 )
          {
            v27 = v26 & 0x3FFFFFF;
            if ( (_DWORD)v27 )
            {
              ndisReleaseStackTrace(v27);
              v23 = ndisNblTrackerHistorySize;
            }
          }
          ++v25;
        }
        while ( v25 < v22 );
        v10 = v41;
      }
      v9 = a4;
    }
    Number = KeGetPcr()->Prcb.Number;
    LOBYTE(v47) = v43;
    v29 = v47 & 0xFFFFF | (Number << 20);
    LODWORD(v47) = v29;
    v30 = (v10 ^ HIDWORD(v47) ^ (HIDWORD(v47) ^ (a5 << 26)) & 0x3C000000) & 0x3FFFFFF ^ HIDWORD(v47) ^ (HIDWORD(v47) ^ (a5 << 26)) & 0x3C000000;
    if ( v21 )
    {
      HIDWORD(v47) = v30 & 0xBFFFFFFF;
      v48 = v9 | 0x8000000000000000uLL;
    }
    else
    {
      HIDWORD(v47) = v30 | 0x40000000;
      LODWORD(v47) = (v29 ^ ((_DWORD)v9 << 8)) & 0xFFF00 ^ v29;
    }
    v31 = ndisNblTrackerHistoryBuffer;
    v32 = (unsigned __int64 *)&v47;
    v33 = 0;
    do
    {
      v34 = (v33 + (unsigned int)v24) % ndisNblTrackerHistorySize;
      v35 = *v32;
      ++v33;
      ++v32;
      v31[v34] = v35;
    }
    while ( v33 < v20 >> 3 );
    if ( v20 < v42 )
    {
      for ( i = v24; ; i = v24 )
      {
        Alignment = 0LL;
        v38 = a1;
        v39 = (i + ((unsigned __int64)v20 >> 3)) % ndisNblTrackerHistorySize;
        if ( a1 )
        {
          if ( a1 == v45 )
          {
            DbgPrint("Break on NBL %p (ndis!ndisBreakNbl)\n", v45);
            if ( a4 )
            {
              if ( v43 >= 0x1F )
              {
                DbgPrint("NBL will be given to: ");
                ndisNblTrackerPrintComponentNameToDebugger((struct _NDIS_NBL_TRACKER *)(a4 & 0xFFFFFFFFFFFFFFF8uLL));
              }
            }
            __debugbreak();
          }
          if ( v40 )
            Alignment = (struct _NET_BUFFER_LIST *)a1->Link.Alignment;
          if ( ndisIsPossibleSmuggling(v15, (__int64)a1->NetBufferListInfo[26]) )
          {
            v20 += 8;
            if ( v20 >= v42 )
            {
              v31[(unsigned int)v39] = 0LL;
              return;
            }
            v31[(unsigned int)v39] = v46;
            LODWORD(v39) = (v24 + ((unsigned __int64)v20 >> 3)) % ndisNblTrackerHistorySize;
          }
        }
        v20 += 8;
        a1 = Alignment;
        v31[(unsigned int)v39] = (unsigned __int64)v38;
        if ( v20 >= v42 )
          return;
      }
    }
  }
}
