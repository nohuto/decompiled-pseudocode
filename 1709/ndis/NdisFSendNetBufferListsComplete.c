/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C00172C0
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C002478C (ndisFLoopbackNetBufferLists.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0059E78 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  __int64 CurrentIrql; // rax
  __int64 v7; // rcx
  ULONG v8; // ebp
  unsigned __int64 v9; // rbx
  char v10; // di
  unsigned int v11; // ecx
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // rdx
  __int64 v13; // r9
  char v14; // r11
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  unsigned __int8 *v19; // r10
  PNET_BUFFER_LIST Alignment; // r15
  unsigned __int64 v21; // rdi
  unsigned __int8 *SourceHandle; // rcx
  int v23; // edx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  PNET_BUFFER_LIST *v34; // rdx
  _QWORD *v35; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  unsigned __int8 *v38; // [rsp+40h] [rbp-48h]
  unsigned __int8 v39; // [rsp+90h] [rbp+8h]
  char v40; // [rsp+A8h] [rbp+20h]

  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_2;
  v9 = *((_QWORD *)NdisFilterHandle + 61);
  v10 = ndisNblTrackerEpoch;
  v11 = (SendCompleteFlags & 1) != 0;
  v12 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 100);
  v13 = 0LL;
  v14 = 0;
  v15 = (unsigned __int8)v11;
  LOBYTE(v15) = v11 & 1;
  v36 = v12;
  v16 = 0LL;
  v37 = 0LL;
  v17 = 0LL;
  v39 = v11 & 1;
  v40 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferList, v12, 0x94u, (void *)v9, v11);
    v15 = v39;
    v13 = 0LL;
    v12 = v36;
    v14 = 0;
  }
  v18 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v18 & 1) != 0 )
  {
    v19 = *(unsigned __int8 **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    CurrentIrql = 2LL * (v10 & 1);
    v18 |= CurrentIrql;
  }
  else
  {
    v19 = (unsigned __int8 *)v18;
  }
  v38 = v19;
  Alignment = NetBufferList;
  if ( NetBufferList )
  {
LABEL_13:
    v21 = (unsigned __int64)Alignment->NetBufferListInfo[27];
    while ( 1 )
    {
      if ( Alignment->NetBufferListInfo[27] != (void *)v21 )
      {
LABEL_22:
        v15 = v39;
        v24 = v17 - v16;
        v14 = v40;
        if ( (v21 & 1) != 0 && v24 )
        {
          if ( !v39 && !v40 )
          {
            v14 = 1;
            v40 = 1;
            CurrentIrql = KeGetCurrentIrql();
            LOBYTE(v15) = (_BYTE)CurrentIrql == 2;
            v39 = (_BYTE)CurrentIrql == 2;
          }
          v25 = v21;
          v26 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
          v27 = 2 * ((v25 >> 1) & 1);
          if ( (_BYTE)v15 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v28 = (_QWORD *)(*(_QWORD *)(v26 + 8 * v27 + 40) + (unsigned int)CurrentIrql);
            *v28 += v24;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8 * v27 + 48), v24);
          }
        }
        v12 = v36;
        v17 = v16;
        if ( !Alignment )
          goto LABEL_28;
        goto LABEL_13;
      }
      if ( !v21 && !Alignment->SourceHandle )
        Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                            (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFDuLL,
                                            v12,
                                            v15);
      if ( (v21 & 4) != 0 )
        goto LABEL_42;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
        break;
      if ( (unsigned __int8)byte_1C0098762 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
        goto LABEL_40;
      }
LABEL_42:
      HIDWORD(CurrentIrql) = HIDWORD(v18);
      Alignment->NetBufferListInfo[27] = (void *)(v18 | 4);
LABEL_21:
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_22;
    }
    v23 = *SourceHandle;
    CurrentIrql = (unsigned int)(v23 - 17);
    if ( (unsigned __int8)(v23 - 17) <= 1u || (_BYTE)v23 == 5 )
    {
      if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
      {
        v12 = v36;
        ++v16;
        Alignment->NetBufferListInfo[27] = (void *)v18;
      }
      else
      {
        v12 = v36;
        v37 = ++v13;
        ++v16;
        Alignment->NetBufferListInfo[27] = (void *)24;
      }
      goto LABEL_21;
    }
    if ( (unsigned __int8)byte_1C0098762 >= 3u )
    {
      WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)v23);
LABEL_40:
      v13 = v37;
      v19 = v38;
    }
    v12 = v36;
    goto LABEL_42;
  }
LABEL_28:
  v29 = v16 - v13;
  if ( (v18 & 1) != 0 && v29 )
  {
    if ( !(_BYTE)v15 && !v14 )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v15) = (_BYTE)CurrentIrql == 2;
    }
    v30 = v18;
    v31 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
    v32 = 2 * ((v30 >> 1) & 1);
    if ( (_BYTE)v15 )
    {
      CurrentIrql = KeGetPcr()->Prcb.Number << 12;
      v33 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v32 + 40) + (unsigned int)CurrentIrql);
      *v33 += v29;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v32 + 48), v29);
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
    v34 = *(PNET_BUFFER_LIST **)(v7 + 32);
    if ( v8 != *((_DWORD *)v34 + 33) || (v8 & 6) != 0 )
    {
      v34[14] = NetBufferList;
      goto LABEL_7;
    }
    v35 = *v34;
    if ( *v34 )
    {
      do
      {
        v34 = (PNET_BUFFER_LIST *)v35;
        v35 = (_QWORD *)*v35;
      }
      while ( v35 );
    }
    *v34 = NetBufferList;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(
      NetBufferList,
      *((_QWORD *)NdisFilterHandle + 60),
      *((void (**)(void))NdisFilterHandle + 59));
  }
}
