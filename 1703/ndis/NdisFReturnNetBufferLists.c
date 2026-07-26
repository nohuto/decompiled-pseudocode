/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C000EE90
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0012AC0 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  PNET_BUFFER_LIST v3; // r13
  ULONG v4; // r10d
  _QWORD *v5; // rdx
  __int64 CurrentIrql; // rax
  char v7; // bl
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r14
  char v12; // r8
  __int64 v13; // r15
  unsigned __int64 v14; // rdi
  void *v15; // r12
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // r8
  int v28; // r10d
  PNET_BUFFER_LIST *v29; // rcx
  _QWORD *v30; // rax
  char v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  char v36; // [rsp+A8h] [rbp+20h]

  v3 = NetBufferLists;
  v4 = ReturnFlags;
  v5 = NdisFilterHandle;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v3);
  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v7 = ndisNblTrackerEpoch;
    v8 = 0LL;
    v9 = v5[69];
    v10 = v5[100];
    v11 = 0LL;
    v32 = v10;
    v12 = v4 & 1;
    v31 = 0;
    v13 = 0LL;
    v36 = v4 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v3, (struct NDIS_NBL_TRACKER_HANDLE__ *)v10, 0x8Au, (void *)v9, v4 & 1);
      v12 = v36;
    }
    v14 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      v15 = *(void **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v7)) & 2;
      v14 ^= CurrentIrql;
    }
    else
    {
      v15 = (void *)v14;
    }
    Alignment = v3;
    if ( v3 )
    {
      do
      {
        v17 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v17 )
            break;
          if ( !v17 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v32 & 0xFFFFFFFFFFFFFFFDuLL, v10);
          if ( (v17 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
          {
            HIDWORD(CurrentIrql) = HIDWORD(v14);
            Alignment->NetBufferListInfo[26] = (void *)(v14 | 4);
          }
          else if ( Alignment->SourceHandle != v15 || Alignment->ParentNetBufferList )
          {
            ++v8;
            Alignment->NetBufferListInfo[26] = (void *)v14;
          }
          else
          {
            ++v11;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v8;
          }
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v12 = v36;
        v18 = v13 - v8;
        if ( (v17 & 1) != 0 && v18 )
        {
          if ( !v36 && !v31 )
          {
            v31 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v12 = (_BYTE)CurrentIrql == 2;
            v36 = (_BYTE)CurrentIrql == 2;
          }
          v19 = v17;
          v20 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
          v10 = 2 * ((v19 >> 1) & 1);
          if ( v12 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v21 = (_QWORD *)(*(_QWORD *)(v20 + 8 * v10 + 40) + (unsigned int)CurrentIrql);
            *v21 += v18;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 8 * v10 + 48), v18);
          }
        }
        v13 = v8;
      }
      while ( Alignment );
      v3 = NetBufferLists;
    }
    v22 = v8 - v11;
    if ( (v14 & 1) != 0 && v22 )
    {
      if ( !v12 && !v31 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v12 = (_BYTE)CurrentIrql == 2;
      }
      v4 = ReturnFlags;
      v23 = v14 >> 1;
      v24 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
      v25 = 2 * (v23 & 1);
      if ( v12 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v26 = (_QWORD *)(*(_QWORD *)(v24 + 8 * v25 + 40) + (unsigned int)CurrentIrql);
        *v26 += v22;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8 * v25 + 48), v22);
      }
    }
    else
    {
      v4 = ReturnFlags;
    }
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v27 = *((_QWORD *)NdisFilterHandle + 54) + 96 * CurrentIrql;
  if ( !ndisIterativeDataPathDisabled && ((v4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v27 + 88) )
  {
    v28 = v4 | 1;
    if ( !*(_QWORD *)(v27 + 72) )
    {
      *(_QWORD *)(v27 + 72) = v3;
LABEL_54:
      *(_QWORD *)(v27 + 80) = v3;
      v3->Scratch = 0LL;
      v3->ChildRefCount = v28;
      return;
    }
    v29 = *(PNET_BUFFER_LIST **)(v27 + 80);
    if ( v28 != *((_DWORD *)v29 + 33) || (v28 & 6) != 0 )
    {
      v29[14] = v3;
      goto LABEL_54;
    }
    v30 = *v29;
    if ( *v29 )
    {
      do
      {
        v29 = (PNET_BUFFER_LIST *)v30;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 );
    }
    *v29 = v3;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(
      v3,
      *((_QWORD *)NdisFilterHandle + 68),
      *((void (**)(void))NdisFilterHandle + 67));
  }
}
