/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C00071C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0005950 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C0025720 (ndisFLoopbackNetBufferLists.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  NDIS_PORT_NUMBER v5; // r15d
  __int64 v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  ULONG v12; // esi
  struct _NET_BUFFER_LIST *v13; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  char v17; // cl
  char v18; // di
  __int64 v19; // r12
  int v20; // r13d
  unsigned __int64 v21; // rbx
  unsigned __int8 *v22; // r8
  char v23; // r15
  struct _NET_BUFFER_LIST *Alignment; // r13
  unsigned __int64 v25; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  struct _NET_BUFFER_LIST **p_Next; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *v41; // [rsp+30h] [rbp-78h] BYREF
  __int64 v42; // [rsp+38h] [rbp-70h]
  unsigned __int8 *v43; // [rsp+40h] [rbp-68h]
  PNET_BUFFER_LIST v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h]
  ULONG v46; // [rsp+B0h] [rbp+8h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v47; // [rsp+B8h] [rbp+10h]

  v5 = PortNumber;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_2;
  v14 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 100);
  v15 = 0LL;
  v16 = *((_QWORD *)NdisFilterHandle + 57);
  v17 = 0;
  v18 = ndisNblTrackerEpoch;
  v19 = 0LL;
  LOBYTE(v20) = SendFlags & 1;
  v47 = v14;
  v46 = SendFlags & 1;
  v45 = 0LL;
  v42 = 0LL;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferList, v14, 0x90u, (void *)v16, SendFlags & 1);
    v14 = v47;
    v17 = 0;
    v15 = 0LL;
  }
  v21 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v21 & 1) != 0 )
  {
    v22 = *(unsigned __int8 **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v21 |= 2LL * (v18 & 1);
  }
  else
  {
    v22 = (unsigned __int8 *)v21;
  }
  v43 = v22;
  v44 = NetBufferList;
  if ( NetBufferList )
  {
    v23 = 0;
    while ( 1 )
    {
      Alignment = v44;
      v25 = (unsigned __int64)v44->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v25 )
      {
        if ( !v25 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                              (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFDuLL,
                                              v14,
                                              v22,
                                              v15);
        if ( (v25 & 4) != 0 )
          goto LABEL_60;
        SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          v27 = *SourceHandle;
          if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || v27 == 5 )
          {
            if ( SourceHandle != v22 || Alignment->ParentNetBufferList )
            {
              v14 = v47;
              ++v19;
              v28 = v21;
            }
            else
            {
              v14 = v47;
              v42 = ++v15;
              ++v19;
              v28 = 24LL;
            }
            goto LABEL_28;
          }
          if ( (unsigned __int8)byte_1C0099622 >= 3u )
          {
            WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v27);
LABEL_58:
            v15 = v42;
            v22 = v43;
          }
          v14 = v47;
          goto LABEL_60;
        }
        if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v15);
          goto LABEL_58;
        }
LABEL_60:
        v28 = v21 | 4;
LABEL_28:
        Alignment->NetBufferListInfo[27] = (void *)v28;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      v29 = v45 - v19;
      v44 = Alignment;
      v20 = v46;
      if ( (v25 & 1) != 0 && v29 )
      {
        if ( !(_BYTE)v46 && !v23 )
        {
          v23 = 1;
          if ( KeGetCurrentIrql() == 2 )
            v20 = 1;
          else
            LOBYTE(v20) = 0;
          v46 = v20;
        }
        v30 = v25;
        v31 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
        v32 = 2 * ((v30 >> 1) & 1);
        if ( (_BYTE)v20 )
        {
          v33 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v32 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v33 += v29;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v32 + 48), v29);
        }
      }
      v22 = v43;
      v14 = v47;
      v45 = v19;
      if ( !v44 )
      {
        v17 = v23;
        v5 = PortNumber;
        break;
      }
    }
  }
  v34 = v19 - v15;
  if ( (v21 & 1) != 0 && v34 )
  {
    if ( !(_BYTE)v20 && !v17 )
      LOBYTE(v20) = KeGetCurrentIrql() == 2;
    v35 = v21;
    v36 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
    v37 = 2 * ((v35 >> 1) & 1);
    if ( (_BYTE)v20 )
    {
      v38 = (_QWORD *)(*(_QWORD *)(v36 + 8 * v37 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v38 += v34;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 8 * v37 + 48), v34);
    }
  }
LABEL_2:
  v8 = *((_QWORD *)NdisFilterHandle + 79);
  if ( (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))v8 != ndisFilterSendNetBufferLists )
  {
    ((void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))v8)(
      NdisFilterHandle,
      NetBufferList,
      v5,
      SendFlags);
    return;
  }
  v9 = (_DWORD *)*((_QWORD *)NdisFilterHandle + 58);
  v10 = *((_QWORD *)NdisFilterHandle + 4);
  v41 = NetBufferList;
  if ( *(_BYTE *)v9 == 5
    && (v9[14] & 0x8000) != 0
    && !v9[86]
    && (*(_BYTE *)(v10 + 91) && (*(_WORD *)(v10 + 1820) > 1u || *(_BYTE *)(v10 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v10 + 120) & 0x4000) != 0) )
  {
    v8 = ndisFLoopbackNetBufferLists(v9, NetBufferList, (__int64)&v41);
    NetBufferList = v41;
  }
  if ( NetBufferList )
  {
    LODWORD(v8) = KeGetPcr()->Prcb.Number;
    v11 = *((_QWORD *)NdisFilterHandle + 54) + 96 * v8;
    if ( ndisIterativeDataPathDisabled || (SendFlags & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v11 + 16) )
    {
      ndisInvokeNextSendHandler(
        v41,
        v5,
        SendFlags,
        *((struct _NDIS_FILTER_BLOCK **)NdisFilterHandle + 58),
        *((void **)NdisFilterHandle + 56),
        *((void (**)(void))NdisFilterHandle + 55));
      return;
    }
    v12 = SendFlags | 1;
    if ( !*(_QWORD *)v11 )
    {
      v13 = v41;
      *(_QWORD *)v11 = v41;
LABEL_10:
      *(_QWORD *)(v11 + 8) = v13;
      v13->Scratch = 0LL;
      v13->ChildRefCount = v12;
      v13->Status = v5;
      return;
    }
    p_Next = *(struct _NET_BUFFER_LIST ***)(v11 + 8);
    if ( v5 != *((_DWORD *)p_Next + 35) || v12 != *((_DWORD *)p_Next + 33) || (v12 & 0x34) != 0 )
    {
      v13 = v41;
      p_Next[14] = v41;
      goto LABEL_10;
    }
    for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      p_Next = &i->Next;
    *p_Next = v41;
  }
}
