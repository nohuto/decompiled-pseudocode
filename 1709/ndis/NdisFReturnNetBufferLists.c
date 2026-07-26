/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C0016840
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0016B0C (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  ULONG v3; // r15d
  NDIS_HANDLE v5; // r10
  __int64 CurrentIrql; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v7; // rdx
  ULONG v8; // ecx
  char v9; // bl
  _BOOL8 v10; // r8
  char v11; // r11
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int8 *v17; // r9
  PNET_BUFFER_LIST Alignment; // rsi
  bool v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int8 *SourceHandle; // rcx
  int v22; // edx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rbp
  __int64 v29; // rcx
  int v30; // r15d
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  PNET_BUFFER_LIST *v35; // rdx
  _QWORD *v36; // rax
  BOOL v37; // [rsp+30h] [rbp-58h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v38; // [rsp+38h] [rbp-50h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-48h]
  char v42; // [rsp+A8h] [rbp+20h]

  v3 = ReturnFlags;
  v5 = NdisFilterHandle;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists, NetBufferLists, ReturnFlags);
  CurrentIrql = (unsigned int)ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v7 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v5 + 100);
    v8 = ReturnFlags & 1;
    v9 = ndisNblTrackerEpoch;
    v10 = v8 != 0;
    v11 = 0;
    v12 = *((_QWORD *)v5 + 69);
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v38 = v7;
    v37 = v8 != 0;
    v42 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferLists, v7, 0x8Au, (void *)v12, v8);
      v10 = v37;
      v11 = 0;
      v5 = NdisFilterHandle;
      v7 = v38;
    }
    v16 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v16 & 1) != 0 )
    {
      v17 = *(unsigned __int8 **)((v16 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      CurrentIrql = 2LL * (v9 & 1);
      v16 |= CurrentIrql;
    }
    else
    {
      v17 = (unsigned __int8 *)v16;
    }
    v39 = v17;
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      v19 = v37;
      while ( 1 )
      {
        v20 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v20 )
        {
          if ( !v20 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v7,
                                                v10);
          if ( (v20 & 4) != 0 )
            goto LABEL_47;
          SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v22 = *SourceHandle;
            CurrentIrql = (unsigned int)(v22 - 17);
            if ( (unsigned __int8)(v22 - 17) <= 1u || (_BYTE)v22 == 5 )
            {
              if ( SourceHandle != v17 || Alignment->ParentNetBufferList )
              {
                v7 = v38;
                ++v13;
                Alignment->NetBufferListInfo[27] = (void *)v16;
              }
              else
              {
                v7 = v38;
                ++v14;
                ++v13;
                Alignment->NetBufferListInfo[27] = (void *)24;
              }
              goto LABEL_19;
            }
            if ( (unsigned __int8)byte_1C0098762 >= 3u )
            {
              WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)v22);
LABEL_45:
              v17 = v39;
            }
            v7 = v38;
            goto LABEL_47;
          }
          if ( (unsigned __int8)byte_1C0098762 >= 3u )
          {
            WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
            goto LABEL_45;
          }
LABEL_47:
          HIDWORD(CurrentIrql) = HIDWORD(v16);
          Alignment->NetBufferListInfo[27] = (void *)(v16 | 4);
LABEL_19:
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v11 = v42;
        v23 = v15 - v13;
        if ( (v20 & 1) != 0 && v23 )
        {
          if ( !v19 && !v42 )
          {
            v11 = 1;
            v42 = 1;
            CurrentIrql = KeGetCurrentIrql();
            v19 = (_BYTE)CurrentIrql == 2;
          }
          v24 = v20;
          v25 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
          v26 = 2 * ((v24 >> 1) & 1);
          if ( v19 )
          {
            CurrentIrql = KeGetPcr()->Prcb.Number << 12;
            v27 = (_QWORD *)(*(_QWORD *)(v25 + 8 * v26 + 40) + (unsigned int)CurrentIrql);
            *v27 += v23;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 8 * v26 + 48), v23);
          }
        }
        v7 = v38;
        v15 = v13;
        if ( !Alignment )
        {
          v5 = NdisFilterHandle;
          LOBYTE(v10) = v19;
          v3 = ReturnFlags;
          break;
        }
      }
    }
    v28 = v13 - v14;
    if ( (v16 & 1) != 0 && v28 )
    {
      if ( !v10 && !v11 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v10) = (_BYTE)CurrentIrql == 2;
      }
      v31 = v16;
      v32 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
      v33 = 2 * ((v31 >> 1) & 1);
      if ( v10 )
      {
        CurrentIrql = KeGetPcr()->Prcb.Number << 12;
        v34 = (_QWORD *)(*(_QWORD *)(v32 + 8 * v33 + 40) + (unsigned int)CurrentIrql);
        *v34 += v28;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8 * v33 + 48), v28);
      }
    }
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v29 = *((_QWORD *)v5 + 54) + 96 * CurrentIrql;
  if ( !ndisIterativeDataPathDisabled && ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v29 + 88) )
  {
    v30 = v3 | 1;
    if ( !*(_QWORD *)(v29 + 72) )
    {
      *(_QWORD *)(v29 + 72) = NetBufferLists;
LABEL_34:
      *(_QWORD *)(v29 + 80) = NetBufferLists;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v30;
      return;
    }
    v35 = *(PNET_BUFFER_LIST **)(v29 + 80);
    if ( v30 != *((_DWORD *)v35 + 33) || (v30 & 6) != 0 )
    {
      v35[14] = NetBufferLists;
      goto LABEL_34;
    }
    v36 = *v35;
    if ( *v35 )
    {
      do
      {
        v35 = (PNET_BUFFER_LIST *)v36;
        v36 = (_QWORD *)*v36;
      }
      while ( v36 );
    }
    *v35 = NetBufferLists;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(NetBufferLists, *((_QWORD *)v5 + 68), *((void (**)(void))v5 + 67));
  }
}
