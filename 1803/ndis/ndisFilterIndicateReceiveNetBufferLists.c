/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C0008700
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C005A528 (ndisInvokeNextReceiveHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        __int64 a4,
        int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // r11d
  _QWORD *v11; // r13
  int Scratch; // r14d
  __int64 v13; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // r11
  __int64 v15; // r10
  unsigned __int64 v16; // rbx
  char v17; // di
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  _BYTE *v21; // r8
  _SLIST_HEADER *Alignment; // r15
  bool v23; // r12
  __int64 v24; // r13
  struct NDIS_NBL_TRACKER_HANDLE__ *v25; // rbp
  unsigned __int64 Region; // rdi
  _BYTE *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  _QWORD *v32; // rcx
  int v33; // ebp
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  struct _NET_BUFFER_LIST *v36; // rax
  struct _NET_BUFFER_LIST **p_Next; // rdx
  bool v38; // [rsp+40h] [rbp-88h] BYREF
  char v39[7]; // [rsp+41h] [rbp-87h] BYREF
  __int64 v40; // [rsp+48h] [rbp-80h]
  int v41; // [rsp+50h] [rbp-78h]
  _BYTE *v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v46; // [rsp+78h] [rbp-50h]
  __int64 v47; // [rsp+80h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  unsigned int v51; // [rsp+E8h] [rbp+20h]
  bool v52; // [rsp+F0h] [rbp+28h]

  v5 = &retaddr;
  v51 = a4;
  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v7 = a1[54];
  v8 = a4;
  v9 = a5;
  v10 = a3;
  v11 = a1;
  v45 = v7;
  v41 = a5;
  Scratch = 1;
  v13 = 96LL * (_QWORD)v5;
  v47 = 96LL * (_QWORD)v5;
  if ( ndisNblTrackerMode )
  {
    v14 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[100];
    v15 = 0LL;
    v16 = a1[65];
    v17 = ndisNblTrackerEpoch;
    v43 = 0LL;
    v46 = v14;
    v18 = (a5 & 2 | 0x104u) >> 1;
    v19 = a5 & 1;
    v40 = 0LL;
    v52 = a5 & 1;
    v44 = 0LL;
    v38 = v9 & 1;
    v39[0] = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, v14, v18, (void *)v16, v19);
      v15 = v40;
    }
    v20 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
      v21 = *(_BYTE **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v21 = (_BYTE *)v20;
    v42 = v21;
    if ( (v20 & 1) != 0 )
      v20 |= 2LL * (v17 & 1);
    Alignment = (_SLIST_HEADER *)a2;
    if ( a2 )
    {
      v23 = v52;
      v24 = v43;
      v25 = v46;
      while ( 1 )
      {
        Region = Alignment[22].Region;
        while ( Alignment[22].Region == Region )
        {
          if ( !Region && !Alignment[7].Region )
            Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFDuLL, v19, v21, a4);
          if ( (Region & 4) == 0 )
          {
            v27 = (_BYTE *)Alignment[7].Region;
            if ( v27 )
            {
              LOBYTE(v19) = *v27;
              if ( (unsigned __int8)(*v27 - 17) <= 1u || (_BYTE)v19 == 5 )
              {
                if ( v27 != v21 || Alignment[1].Region )
                {
                  ++v15;
                  v28 = v20;
                  v40 = v15;
                }
                else
                {
                  ++v24;
                  v28 = 24LL;
                  v40 = ++v15;
                }
                goto LABEL_18;
              }
              if ( (unsigned __int8)byte_1C0099622 >= 3u )
                WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)v19);
            }
            else if ( (unsigned __int8)byte_1C0099622 >= 3u )
            {
              WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, a4);
            }
          }
          v15 = v40;
          v21 = v42;
          v28 = v20 | 4;
LABEL_18:
          Alignment[22].Region = v28;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v29 = v44 - v15;
        v43 = v24;
        if ( (Region & 1) != 0 && v29 )
        {
          if ( !v23 && !v39[0] )
          {
            v39[0] = 1;
            v23 = KeGetCurrentIrql() == 2;
            v38 = v23;
          }
          v30 = Region;
          v31 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v19 = 16 * ((v30 >> 1) & 1);
          if ( v23 )
          {
            v32 = (_QWORD *)(*(_QWORD *)(v19 + v31 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v32 += v29;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + v31 + 48), v29);
          }
          v23 = v38;
        }
        v21 = v42;
        v44 = v15;
        if ( !Alignment )
        {
          v9 = v41;
          v13 = v47;
          v11 = a1;
          break;
        }
      }
    }
    if ( (v20 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v20, v15 - v43, &v38, v39);
    v8 = v51;
    v10 = a3;
    v7 = v45;
  }
  if ( (v9 & 2) == 0
    && ndisIterativeDataPathDisabled == (v9 & 2)
    && ((v9 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v13 + v7 + 64) )
  {
    v33 = v9 | 1;
    if ( !*(_QWORD *)(v13 + v7 + 48) )
    {
      *(_QWORD *)(v13 + v7 + 48) = a2;
      goto LABEL_36;
    }
    v35 = *(_QWORD *)(v13 + v7 + 56);
    if ( v10 != *(_DWORD *)(v35 + 140) || v33 != *(_DWORD *)(v35 + 132) || (v33 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v35 + 112) = a2;
LABEL_36:
      *(_QWORD *)(v13 + v7 + 56) = a2;
      a2->Scratch = 0LL;
      v34 = a2->Link.Alignment;
      a2->ChildRefCount = v33;
      a2->Status = v10;
      if ( v34 )
        *(_QWORD *)(v34 + 112) = v8;
      return;
    }
    v36 = *(struct _NET_BUFFER_LIST **)v35;
    if ( *(_QWORD *)v35 )
      Scratch = (int)v36->Scratch;
    p_Next = *(struct _NET_BUFFER_LIST ***)(v13 + v7 + 56);
    while ( v36 )
    {
      p_Next = &v36->Next;
      v36 = (struct _NET_BUFFER_LIST *)v36->Link.Alignment;
    }
    *p_Next = a2;
    if ( *(_QWORD *)v35 )
      *(_QWORD *)(*(_QWORD *)v35 + 112LL) = Scratch + v8;
  }
  else
  {
    ndisInvokeNextReceiveHandler(a2, (struct _NDIS_FILTER_BLOCK *)v11[66], (void *)v11[64], (void (*)(void))v11[63]);
    if ( (v9 & 2) != 0 && ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)v11[65], v11[100], 140LL, v9 & 1);
  }
}
