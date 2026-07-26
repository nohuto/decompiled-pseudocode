/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C0006D10
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C0025720 (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005A7D4 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 CurrentIrql; // rax
  __int64 v7; // rcx
  ULONG v8; // ebp
  struct NDIS_NBL_TRACKER_HANDLE__ *v9; // r10
  unsigned __int64 v10; // rbx
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // r11
  bool v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int8 *v18; // r8
  PNET_BUFFER_LIST Alignment; // r12
  unsigned __int64 v20; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // r8
  _QWORD *v26; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  PNET_BUFFER_LIST *v32; // rdx
  _QWORD *v33; // rax
  unsigned __int8 *v34; // [rsp+30h] [rbp-58h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-48h]
  char v37; // [rsp+90h] [rbp+8h]
  __int64 v38; // [rsp+A8h] [rbp+20h]

  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_2;
  v9 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 100);
  v10 = *((_QWORD *)NdisFilterHandle + 61);
  v11 = ndisNblTrackerEpoch;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v35 = v9;
  v15 = (SendCompleteFlags & 1) != 0;
  v36 = 0LL;
  v16 = 0LL;
  v38 = 0LL;
  v37 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferList, v9, 0x94u, (void *)v10, (SendCompleteFlags & 1) != 0);
    v9 = v35;
    v13 = 0LL;
    v14 = 0;
  }
  v17 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v17 & 1) != 0 )
  {
    v18 = *(unsigned __int8 **)((v17 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    CurrentIrql = 2LL * (v11 & 1);
    v17 |= CurrentIrql;
  }
  else
  {
    v18 = (unsigned __int8 *)v17;
  }
  v34 = v18;
  Alignment = NetBufferList;
  if ( NetBufferList )
  {
LABEL_13:
    v20 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v20 )
      {
LABEL_22:
        v14 = v37;
        v22 = v36 - v16;
        if ( (v20 & 1) != 0 && v22 )
        {
          if ( !v15 && !v37 )
          {
            v14 = 1;
            v37 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v15 = (_BYTE)CurrentIrql == 2;
          }
          v23 = v20;
          v24 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
          v25 = 2 * ((v23 >> 1) & 1);
          if ( v15 )
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
        v18 = v34;
        v12 = v16;
        v36 = v16;
        if ( !Alignment )
          break;
        goto LABEL_13;
      }
      if ( !v20 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                            (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFDuLL,
                                            v12,
                                            v18,
                                            v13);
      if ( (v20 & 4) != 0 )
        goto LABEL_41;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        v12 = *SourceHandle;
        if ( (unsigned __int8)(v12 - 17) <= 1u || (_BYTE)v12 == 5 )
        {
          if ( SourceHandle != v18 || Alignment->ParentNetBufferList )
          {
            ++v16;
            CurrentIrql = v17;
          }
          else
          {
            ++v13;
            CurrentIrql = 24LL;
            v38 = v13;
            ++v16;
          }
          goto LABEL_21;
        }
        if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)v12);
          goto LABEL_40;
        }
      }
      else if ( (unsigned __int8)byte_1C0099622 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v13);
LABEL_40:
        v18 = v34;
        v13 = v38;
        v9 = v35;
      }
LABEL_41:
      CurrentIrql = v17 | 4;
LABEL_21:
      Alignment->NetBufferListInfo[27] = (void *)CurrentIrql;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_22;
    }
  }
  v27 = v16 - v13;
  if ( (v17 & 1) != 0 && v27 )
  {
    if ( !v15 && !v14 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v15 = (_BYTE)CurrentIrql == 2;
    }
    v28 = v17;
    v29 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
    v30 = 2 * ((v28 >> 1) & 1);
    if ( v15 )
    {
      CurrentIrql = KeGetPcr()->Prcb.Number << 12;
      v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (unsigned int)CurrentIrql);
      *v31 += v27;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v27);
    }
  }
LABEL_2:
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v7 = *((_QWORD *)NdisFilterHandle + 54) + 96 * CurrentIrql;
  if ( !ndisIterativeDataPathDisabled
    && ((SendCompleteFlags & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v7 + 40) )
  {
    v8 = SendCompleteFlags | 1;
    if ( !*(_QWORD *)(v7 + 24) )
    {
      *(_QWORD *)(v7 + 24) = NetBufferList;
LABEL_7:
      *(_QWORD *)(v7 + 32) = NetBufferList;
      NetBufferList->Scratch = 0LL;
      NetBufferList->ChildRefCount = v8;
      return;
    }
    v32 = *(PNET_BUFFER_LIST **)(v7 + 32);
    if ( v8 != *((_DWORD *)v32 + 33) || (v8 & 6) != 0 )
    {
      v32[14] = NetBufferList;
      goto LABEL_7;
    }
    v33 = *v32;
    if ( *v32 )
    {
      do
      {
        v32 = (PNET_BUFFER_LIST *)v33;
        v33 = (_QWORD *)*v33;
      }
      while ( v33 );
    }
    *v32 = NetBufferList;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(
      NetBufferList,
      *((void **)NdisFilterHandle + 60),
      *((void (**)(void))NdisFilterHandle + 59));
  }
}
