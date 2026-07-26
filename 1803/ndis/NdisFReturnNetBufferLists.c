/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C0008000
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0025614 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C005A30C (ndisInvokeNextReceiveCompleteHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  char *v3; // r9
  ULONG v4; // ebp
  NDIS_HANDLE v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  char v9; // r12
  char v10; // di
  char *v11; // rdx
  char *v12; // r14
  unsigned __int64 v13; // rbx
  _BYTE *v14; // r8
  PNET_BUFFER_LIST Alignment; // r15
  unsigned __int64 v16; // rdi
  char *v17; // rbp
  _BYTE *SourceHandle; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // ebp
  unsigned __int8 CurrentIrql; // al
  bool v29; // zf
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  PNET_BUFFER_LIST *v34; // rcx
  _QWORD *i; // rax
  char *v36; // [rsp+30h] [rbp-58h]
  unsigned __int64 v37; // [rsp+30h] [rbp-58h]
  char *v38; // [rsp+38h] [rbp-50h]
  _BYTE *v39; // [rsp+40h] [rbp-48h]
  __int64 v40; // [rsp+48h] [rbp-40h]
  char v43; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v4 = ReturnFlags;
  v6 = NdisFilterHandle;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  v7 = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v8 = *((_QWORD *)v6 + 69);
    v9 = ReturnFlags & 1;
    v10 = ndisNblTrackerEpoch;
    v11 = v3;
    v40 = *((_QWORD *)v6 + 100);
    v12 = v3;
    v36 = v3;
    v38 = v3;
    v43 = (char)v3;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(
        NetBufferLists,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)v6 + 100),
        0x8Au,
        (void *)v8,
        ReturnFlags & 1);
      v3 = 0LL;
    }
    v13 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v13 & 1) != 0 )
    {
      HIDWORD(v7) = HIDWORD(v13);
      v14 = *(_BYTE **)((v13 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    else
    {
      v14 = (_BYTE *)v13;
    }
    v39 = v14;
    if ( (v13 & 1) != 0 )
    {
      v7 = 2LL * (v10 & 1);
      v13 |= v7;
    }
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      while ( 1 )
      {
        v16 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        v17 = v38;
        while ( Alignment->NetBufferListInfo[27] == (void *)v16 )
        {
          if ( !v16 && Alignment->SourceHandle == v3 )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v40 & 0xFFFFFFFFFFFFFFFDuLL, v11, v14, v3);
          if ( (v16 & 4) != 0 )
            goto LABEL_46;
          SourceHandle = Alignment->SourceHandle;
          if ( SourceHandle )
          {
            LOBYTE(v11) = *SourceHandle;
            if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || (_BYTE)v11 == 5 )
            {
              if ( SourceHandle == v14 && (char *)Alignment->ParentNetBufferList == v3 )
              {
                ++v17;
                v19 = 24LL;
                ++v12;
              }
              else
              {
                ++v12;
                v19 = v13;
              }
              goto LABEL_20;
            }
            if ( (unsigned __int8)byte_1C0099622 >= 3u )
            {
              WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)v11);
              goto LABEL_45;
            }
          }
          else if ( (unsigned __int8)byte_1C0099622 >= 3u )
          {
            WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v3);
LABEL_45:
            v3 = 0LL;
          }
LABEL_46:
          v14 = v39;
          v19 = v13 | 4;
LABEL_20:
          Alignment->NetBufferListInfo[27] = (void *)v19;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v7 = v36 - v12;
        v38 = v17;
        v37 = v36 - v12;
        if ( (v16 & 1) != 0 && v7 )
        {
          if ( !v9 && !v43 )
          {
            v43 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v29 = CurrentIrql == 2;
            v7 = v37;
            v9 = v29;
          }
          v20 = v16;
          v21 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
          v22 = 2 * ((v20 >> 1) & 1);
          if ( v9 )
          {
            v7 = KeGetPcr()->Prcb.Number << 12;
            v23 = (_QWORD *)(*(_QWORD *)(v21 + 8 * v22 + 40) + (unsigned int)v7);
            *v23 += v37;
          }
          else
          {
            v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8 * v22 + 48), v7);
          }
        }
        v11 = v12;
        v36 = v12;
        if ( !Alignment )
        {
          v4 = ReturnFlags;
          v6 = NdisFilterHandle;
          break;
        }
      }
    }
    v24 = v12 - v38;
    if ( (v13 & 1) != 0 && v24 )
    {
      if ( !v9 && v43 == (_BYTE)v3 )
      {
        v7 = KeGetCurrentIrql();
        v9 = (_BYTE)v7 == 2;
      }
      v30 = v13;
      v31 = v13 & 0xFFFFFFFFFFFFFFF8uLL;
      v32 = 2 * ((v30 >> 1) & 1);
      if ( v9 )
      {
        v7 = KeGetPcr()->Prcb.Number << 12;
        v33 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v32 + 40) + (unsigned int)v7);
        *v33 += v24;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v32 + 48), v24);
      }
    }
  }
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v25 = *((_QWORD *)v6 + 54);
  v26 = 96 * v7;
  if ( ndisIterativeDataPathDisabled == (_DWORD)v3
    && ((v4 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v26 + v25 + 88) != (_BYTE)v3 )
  {
    v27 = v4 | 1;
    if ( *(char **)(v26 + v25 + 72) == v3 )
    {
      *(_QWORD *)(v26 + v25 + 72) = NetBufferLists;
LABEL_35:
      *(_QWORD *)(v26 + v25 + 80) = NetBufferLists;
      NetBufferLists->Scratch = v3;
      NetBufferLists->ChildRefCount = v27;
      return;
    }
    v34 = *(PNET_BUFFER_LIST **)(v26 + v25 + 80);
    if ( v27 != *((_DWORD *)v34 + 33) || (v27 & 6) != 0 )
    {
      v34[14] = NetBufferLists;
      goto LABEL_35;
    }
    for ( i = *v34; i; i = (_QWORD *)*i )
      v34 = (PNET_BUFFER_LIST *)i;
    *v34 = NetBufferLists;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(NetBufferLists, *((void **)v6 + 68), *((void (**)(void))v6 + 67));
  }
}
