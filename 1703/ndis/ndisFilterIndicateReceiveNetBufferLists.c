/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C000F260
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00110CC (ndisInvokeNextReceiveHandler.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012B34 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  unsigned int v9; // edi
  int v10; // ebp
  int v11; // r11d
  __int64 v12; // r12
  int Scratch; // r14d
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // r11
  unsigned __int64 v15; // rbx
  __int64 v16; // r9
  char v17; // di
  __int64 v18; // r10
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  struct _NET_BUFFER_LIST *Alignment; // r15
  bool v22; // bp
  void *v23; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v24; // r13
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  _QWORD *v29; // rcx
  int v30; // ebp
  __int64 v31; // rcx
  struct _NET_BUFFER_LIST *v32; // rax
  struct _NET_BUFFER_LIST **p_Next; // rdx
  unsigned __int64 v34; // rcx
  bool v35; // [rsp+40h] [rbp-78h] BYREF
  char v36; // [rsp+41h] [rbp-77h] BYREF
  bool v37; // [rsp+42h] [rbp-76h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  __int64 v39; // [rsp+50h] [rbp-68h]
  unsigned __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v43; // [rsp+70h] [rbp-48h]
  __int64 v44; // [rsp+78h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  v5 = &retaddr;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v7 = a1[54];
  v8 = a1;
  v9 = a4;
  v10 = a5;
  v11 = a3;
  v42 = v7;
  v12 = 96LL * (_QWORD)v5;
  Scratch = 1;
  v44 = 96LL * (_QWORD)v5;
  if ( ndisNblTrackerMode )
  {
    v14 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[100];
    v15 = a1[65];
    v16 = 0LL;
    v17 = ndisNblTrackerEpoch;
    v18 = 0LL;
    v41 = 0LL;
    v43 = v14;
    v38 = 0LL;
    v19 = a5 & 1;
    LOBYTE(v19) = a5 & 1;
    v39 = 0LL;
    v37 = a5 & 1;
    v35 = a5 & 1;
    v36 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, v14, (a5 & 2 | 0x104u) >> 1, (void *)v15, a5 & 1);
      v18 = v38;
      v16 = v38;
    }
    v20 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
      v40 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v40 = v20;
    if ( (v20 & 1) != 0 )
      v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v17)) & 2;
    Alignment = a2;
    if ( a2 )
    {
      v22 = v37;
      v23 = (void *)v40;
      v24 = v43;
      while ( 1 )
      {
        v25 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        while ( Alignment->NetBufferListInfo[26] == (void *)v25 )
        {
          if ( !v25 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v19);
          if ( (v25 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
          {
            v18 = v38;
            Alignment->NetBufferListInfo[26] = (void *)(v20 | 4);
            goto LABEL_23;
          }
          if ( Alignment->SourceHandle != v23 || Alignment->ParentNetBufferList )
          {
            v18 = v38 + 1;
            Alignment->NetBufferListInfo[26] = (void *)v20;
            v38 = v18;
LABEL_23:
            v16 = v39;
            goto LABEL_24;
          }
          v16 = v39 + 1;
          v18 = v38 + 1;
          ++v39;
          ++v38;
          Alignment->NetBufferListInfo[26] = (void *)24;
LABEL_24:
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v26 = v41 - v18;
        if ( (v25 & 1) != 0 && v26 )
        {
          if ( !v22 && !v36 )
          {
            v36 = 1;
            v22 = KeGetCurrentIrql() == 2;
            v35 = v22;
          }
          v27 = v25;
          v28 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
          v19 = 2 * ((v27 >> 1) & 1);
          if ( v22 )
          {
            v29 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v19 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v29 += v26;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v19 + 48), v26);
          }
          v22 = v35;
        }
        v41 = v18;
        if ( !Alignment )
        {
          v10 = a5;
          v12 = v44;
          v8 = a1;
          break;
        }
      }
    }
    if ( (v20 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v20, v18 - v16, &v35, &v36);
    v9 = a4;
    v11 = a3;
    v7 = v42;
  }
  if ( (v10 & 2) == 0
    && ndisIterativeDataPathDisabled == (v10 & 2)
    && ((v10 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v12 + v7 + 64) )
  {
    v30 = v10 | 1;
    if ( !*(_QWORD *)(v12 + v7 + 48) )
    {
      *(_QWORD *)(v12 + v7 + 48) = a2;
      goto LABEL_57;
    }
    v31 = *(_QWORD *)(v12 + v7 + 56);
    if ( v11 != *(_DWORD *)(v31 + 140) || v30 != *(_DWORD *)(v31 + 132) || (v30 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v31 + 112) = a2;
LABEL_57:
      *(_QWORD *)(v12 + v7 + 56) = a2;
      a2->Scratch = 0LL;
      v34 = a2->Link.Alignment;
      a2->ChildRefCount = v30;
      a2->Status = v11;
      if ( v34 )
        *(_QWORD *)(v34 + 112) = v9;
      return;
    }
    v32 = *(struct _NET_BUFFER_LIST **)v31;
    if ( *(_QWORD *)v31 )
      Scratch = (int)v32->Scratch;
    p_Next = *(struct _NET_BUFFER_LIST ***)(v12 + v7 + 56);
    while ( v32 )
    {
      p_Next = &v32->Next;
      v32 = (struct _NET_BUFFER_LIST *)v32->Link.Alignment;
    }
    *p_Next = a2;
    if ( *(_QWORD *)v31 )
      *(_QWORD *)(*(_QWORD *)v31 + 112LL) = Scratch + v9;
  }
  else
  {
    ndisInvokeNextReceiveHandler(a2, (struct _NDIS_FILTER_BLOCK *)v8[66], (void *)v8[64], (void (*)(void))v8[63]);
    if ( (v10 & 2) != 0 && ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(a2, v8[65], v8[100], 0x8Cu, v10 & 1);
  }
}
