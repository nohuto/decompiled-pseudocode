/*
 * XREFs of NdisAllocateReassembledNetBufferList @ 0x1C004C680
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0019050 (NdisAllocateNetBufferAndNetBufferList.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004BDF0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C004D050 (NdisFreeReassembledNetBufferList.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C004D0F0 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C004D1DC (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateReassembledNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        NDIS_HANDLE NetBufferAndNetBufferListPoolHandle,
        ULONG StartOffset,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateReassembleFlags)
{
  ULONG v6; // esi
  NDIS_HANDLE v7; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v10; // rdi
  _NET_BUFFER *FirstNetBuffer; // rbx
  _NET_BUFFER *v12; // r15
  unsigned int DataLength; // r14d
  ULONG v14; // r14d
  ULONG v15; // edx
  struct _MDL *MdlChain; // rsi
  ULONG ByteCount; // eax
  ULONG v18; // eax
  ULONG v19; // r13d
  struct _MDL *Mdl; // rax
  struct _MDL *v21; // r12
  bool v22; // zf
  ULONG v23; // r14d
  struct _MDL *v24; // r13
  ULONG v25; // r12d
  struct _MDL *v26; // rax
  struct _MDL *v27; // rax
  unsigned int v28; // edx
  int v29; // eax
  NDIS_STATUS v30; // eax
  struct _NET_BUFFER_LIST *v31; // rcx
  const struct _EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-B8h]
  const struct _GUID *v36; // [rsp+28h] [rbp-B0h]
  char *VirtualAddress; // [rsp+50h] [rbp-88h]
  char *VirtualAddressa; // [rsp+50h] [rbp-88h]
  struct _GUID v42; // [rsp+70h] [rbp-68h] BYREF
  struct _GUID v43; // [rsp+80h] [rbp-58h] BYREF

  v6 = StartOffset;
  v7 = NetBufferAndNetBufferListPoolHandle;
  if ( !NetBufferAndNetBufferListPoolHandle || (*((_DWORD *)NetBufferAndNetBufferListPoolHandle + 15) & 1) == 0 )
    v7 = ndisNetBufferListPool;
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v7, 0, 0, 0LL, 0, 0LL);
  v10 = NetBufferAndNetBufferList;
  if ( NetBufferAndNetBufferList )
  {
    FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
    if ( !FirstNetBuffer )
      goto LABEL_38;
    do
    {
      if ( FirstNetBuffer->DataLength > v6 )
        break;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    if ( FirstNetBuffer )
    {
      v12 = NetBufferAndNetBufferList->FirstNetBuffer;
      *(_QWORD *)&v42.Data1 = 0LL;
      do
      {
        DataLength = FirstNetBuffer->DataLength;
        if ( DataLength > v6 )
        {
          v14 = DataLength - v6;
          v15 = v6 + FirstNetBuffer->DataOffset;
          MdlChain = FirstNetBuffer->MdlChain;
          while ( 1 )
          {
            if ( !MdlChain )
              goto LABEL_31;
            ByteCount = MdlChain->ByteCount;
            if ( v15 < ByteCount )
              break;
            MdlChain = MdlChain->Next;
            v15 -= ByteCount;
          }
          v18 = ByteCount - v15;
          v19 = v14;
          if ( v14 >= v18 )
            v19 = v18;
          VirtualAddress = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v15;
          Mdl = IoAllocateMdl(VirtualAddress, v19, 0, 0, 0LL);
          v21 = Mdl;
          if ( Mdl )
          {
            IoBuildPartialMdl(MdlChain, Mdl, VirtualAddress, v19);
            v21->Next = 0LL;
            if ( v12->MdlChain )
            {
              **(_QWORD **)&v42.Data1 = v21;
            }
            else
            {
              v12->Link.Region = (unsigned __int64)v21;
              v12->MdlChain = v21;
              v12->CurrentMdlOffset = 0;
              v12->DataOffset = 0;
            }
            v12->DataLength += v19;
            v23 = v14 - v19;
            v22 = v23 == 0;
            *(_QWORD *)&v42.Data1 = v21;
            v24 = v21;
            while ( !v22 )
            {
              MdlChain = MdlChain->Next;
              if ( !MdlChain )
                break;
              v25 = MdlChain->ByteCount;
              VirtualAddressa = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
              if ( v23 < v25 )
                v25 = v23;
              v26 = IoAllocateMdl((char *)MdlChain->StartVa + MdlChain->ByteOffset, v25, 0, 0, 0LL);
              *(_QWORD *)&v42.Data1 = v26;
              if ( !v26 )
                goto LABEL_38;
              IoBuildPartialMdl(MdlChain, v26, VirtualAddressa, v25);
              v27 = *(struct _MDL **)&v42.Data1;
              **(_QWORD **)&v42.Data1 = 0LL;
              v24->Next = v27;
              v24 = v27;
              v28 = v12->DataLength;
              v29 = -1;
              if ( v28 + v25 >= v28 )
                v29 = v28 + v25;
              v12->DataLength = v29;
              if ( v28 + v25 < v28 )
                goto LABEL_38;
              v23 -= v25;
              v22 = v23 == 0;
            }
LABEL_31:
            v6 = StartOffset;
            goto LABEL_32;
          }
          goto LABEL_38;
        }
LABEL_32:
        FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      }
      while ( FirstNetBuffer );
      v30 = NdisRetreatNetBufferListDataStart(
              v10,
              DataOffsetDelta,
              DataBackFill,
              (NET_BUFFER_ALLOCATE_MDL_HANDLER)ndisAllocateMdl,
              (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdl);
      v31 = v10;
      if ( v30 )
        goto LABEL_39;
      NetioCopyOpaqueNetBufferListInformation(v10, FragmentNetBufferList);
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
      {
        v33 = (__int64)v10->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
        v43 = (struct _GUID)((__int64)FragmentNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
        v42 = (struct _GUID)(unsigned __int64)v33;
        EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v32, &v43, &v42, FreeMdlHandler, v36, 3u);
      }
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(v10, 0LL, 9u, FragmentNetBufferList, 0);
    }
    else
    {
LABEL_38:
      v31 = v10;
LABEL_39:
      NdisFreeReassembledNetBufferList(v31, 0, 0);
      return 0LL;
    }
  }
  return v10;
}
