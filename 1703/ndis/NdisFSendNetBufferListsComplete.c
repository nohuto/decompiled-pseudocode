/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C0006800
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C005A5A4 (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0010F3C (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  unsigned __int64 CurrentIrql; // rax
  ULONG v4; // r11d
  PNET_BUFFER_LIST v5; // r10
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r15
  char v12; // r13
  unsigned __int64 v13; // rdi
  void *v14; // r12
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  int v27; // r11d
  PNET_BUFFER_LIST *v28; // rcx
  _QWORD *v29; // rax
  char v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  char v36; // [rsp+A8h] [rbp+20h]

  CurrentIrql = (unsigned __int64)&retaddr;
  v4 = SendCompleteFlags;
  v5 = NetBufferList;
  if ( ndisNblTrackerMode )
  {
    v6 = *((_QWORD *)NdisFilterHandle + 100);
    v7 = ndisNblTrackerEpoch;
    v8 = 0LL;
    v9 = *((_QWORD *)NdisFilterHandle + 61);
    v10 = 0LL;
    v11 = 0LL;
    CurrentIrql = SendCompleteFlags & 1;
    v31 = v6;
    v36 = 0;
    v12 = SendCompleteFlags & 1;
    v30 = SendCompleteFlags & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v5, (struct NDIS_NBL_TRACKER_HANDLE__ *)v6, 0x94u, (void *)v9, SendCompleteFlags & 1);
      v5 = NetBufferList;
    }
    v13 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v13 & 1) != 0 )
    {
      v14 = *(void **)((v13 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = ((unsigned __int8)v13 ^ (unsigned __int8)(2 * v7)) & 2;
      v13 ^= CurrentIrql;
    }
    else
    {
      v14 = (void *)v13;
    }
    Alignment = v5;
    if ( v5 )
    {
      do
      {
        v16 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v16 )
            break;
          if ( !v16 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v31 & 0xFFFFFFFFFFFFFFFDuLL, v6);
          if ( (v16 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
          {
            HIDWORD(CurrentIrql) = HIDWORD(v13);
            Alignment->NetBufferListInfo[26] = (void *)(v13 | 4);
          }
          else if ( Alignment->SourceHandle != v14 || Alignment->ParentNetBufferList )
          {
            ++v8;
            Alignment->NetBufferListInfo[26] = (void *)v13;
          }
          else
          {
            ++v10;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v8;
          }
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v12 = v30;
        v17 = v11 - v8;
        if ( (v16 & 1) != 0 && v17 )
        {
          if ( !v30 && !v36 )
          {
            v36 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v12 = (_BYTE)CurrentIrql == 2;
            v30 = (_BYTE)CurrentIrql == 2;
          }
          v18 = v16;
          v19 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
          v6 = 2 * ((v18 >> 1) & 1);
          if ( v12 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v20 = (_QWORD *)(*(_QWORD *)(v19 + 8 * v6 + 40) + (unsigned int)CurrentIrql);
            *v20 += v17;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 8 * v6 + 48), v17);
          }
        }
        v11 = v8;
      }
      while ( Alignment );
      v5 = NetBufferList;
    }
    v21 = v8 - v10;
    if ( (v13 & 1) != 0 && v21 )
    {
      if ( !v12 && !v36 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v12 = (_BYTE)CurrentIrql == 2;
      }
      v4 = SendCompleteFlags;
      v22 = v13 >> 1;
      v23 = v13 & 0xFFFFFFFFFFFFFFF8uLL;
      v24 = 2 * (v22 & 1);
      if ( v12 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v25 = (_QWORD *)(*(_QWORD *)(v23 + 8 * v24 + 40) + (unsigned int)CurrentIrql);
        *v25 += v21;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 8 * v24 + 48), v21);
      }
    }
    else
    {
      v4 = SendCompleteFlags;
    }
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v26 = *((_QWORD *)NdisFilterHandle + 54) + 96 * CurrentIrql;
  if ( !ndisIterativeDataPathDisabled && ((v4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v26 + 40) )
  {
    v27 = v4 | 1;
    if ( !*(_QWORD *)(v26 + 24) )
    {
      *(_QWORD *)(v26 + 24) = v5;
LABEL_52:
      *(_QWORD *)(v26 + 32) = v5;
      v5->Scratch = 0LL;
      v5->ChildRefCount = v27;
      return;
    }
    v28 = *(PNET_BUFFER_LIST **)(v26 + 32);
    if ( v27 != *((_DWORD *)v28 + 33) || (v27 & 6) != 0 )
    {
      v28[14] = v5;
      goto LABEL_52;
    }
    v29 = *v28;
    if ( *v28 )
    {
      do
      {
        v28 = (PNET_BUFFER_LIST *)v29;
        v29 = (_QWORD *)*v29;
      }
      while ( v29 );
    }
    *v28 = v5;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(v5, *((_QWORD *)NdisFilterHandle + 60), *((void (**)(void))NdisFilterHandle + 59));
  }
}
