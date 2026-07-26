/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C0017D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0059B5C (ndisInvokeNextReceiveHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rax
  unsigned int v8; // r15d
  int v9; // edi
  _QWORD *v10; // rsi
  int Scratch; // edx
  __int64 v12; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v13; // r11
  unsigned __int64 v14; // rdi
  char v15; // bl
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int8 *v22; // r13
  _SLIST_HEADER *Alignment; // rsi
  unsigned __int64 Region; // rbx
  unsigned __int8 *v25; // rcx
  unsigned __int64 v26; // r9
  bool v27; // r10
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  int v32; // ebp
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  struct _NET_BUFFER_LIST *v35; // rax
  unsigned int v36; // r8d
  struct _NET_BUFFER_LIST **i; // rdx
  bool v38; // [rsp+40h] [rbp-58h] BYREF
  char v39[7]; // [rsp+41h] [rbp-57h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+58h] [rbp-40h]
  bool v46; // [rsp+C0h] [rbp+28h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  Scratch = 1;
  v12 = a1[54] + 96 * v5;
  if ( ndisNblTrackerMode )
  {
    v13 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[100];
    v14 = a1[65];
    v15 = ndisNblTrackerEpoch;
    v16 = 131LL;
    if ( (a5 & 2) == 0 )
      v16 = 130LL;
    v41 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[100];
    v17 = (a5 & 1) != 0;
    v18 = 0LL;
    v19 = 0LL;
    v42 = 0LL;
    v40 = 0LL;
    v39[0] = 0;
    v20 = 0LL;
    v46 = v17 & 1;
    v38 = v17 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, v13, v16, (void *)v14, v17);
      v13 = v41;
      v19 = 0LL;
    }
    v21 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
    {
      v22 = *(unsigned __int8 **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v21 |= 2LL * (v15 & 1);
    }
    else
    {
      v22 = (unsigned __int8 *)v21;
    }
    Alignment = (_SLIST_HEADER *)a2;
    if ( a2 )
    {
      do
      {
        Region = Alignment[22].Region;
        while ( Alignment[22].Region == Region )
        {
          if ( !Region && !Alignment[7].Region )
            Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFDuLL, v18, v16);
          if ( (Region & 4) != 0 )
            goto LABEL_43;
          v25 = (unsigned __int8 *)Alignment[7].Region;
          if ( v25 )
          {
            v18 = *v25;
            if ( (unsigned __int8)(v18 - 17) <= 1u || (_BYTE)v18 == 5 )
            {
              if ( v25 != v22 || Alignment[1].Region )
              {
                ++v20;
                Alignment[22].Region = v21;
              }
              else
              {
                ++v19;
                Alignment[22].Region = 24LL;
                v40 = v19;
                ++v20;
              }
              goto LABEL_17;
            }
            if ( (unsigned __int8)byte_1C0098762 >= 3u )
            {
              WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)v18);
              goto LABEL_42;
            }
          }
          else if ( (unsigned __int8)byte_1C0098762 >= 3u )
          {
            WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
LABEL_42:
            v13 = v41;
            v19 = v40;
          }
LABEL_43:
          Alignment[22].Region = v21 | 4;
LABEL_17:
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v26 = v42 - v20;
        if ( (Region & 1) != 0 && v26 )
        {
          v27 = v46;
          if ( !v46 && !v39[0] )
          {
            v39[0] = 1;
            v27 = KeGetCurrentIrql() == 2;
            v38 = v27;
          }
          v28 = Region;
          v29 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v30 = 2 * ((v28 >> 1) & 1);
          if ( v27 )
          {
            v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v31 += v26;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v26);
          }
          v46 = v38;
        }
        v19 = v40;
        v18 = v20;
        v42 = v20;
      }
      while ( Alignment );
    }
    if ( (v21 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v21, v20 - v19, &v38, v39);
    v8 = a4;
    Scratch = 1;
    v9 = a3;
    v10 = a1;
  }
  if ( (a5 & 2) == 0
    && ndisIterativeDataPathDisabled == (a5 & 2)
    && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v12 + 64) )
  {
    v32 = a5 | 1;
    if ( !*(_QWORD *)(v12 + 48) )
    {
      *(_QWORD *)(v12 + 48) = a2;
      goto LABEL_34;
    }
    v34 = *(_QWORD *)(v12 + 56);
    if ( v9 != *(_DWORD *)(v34 + 140) || v32 != *(_DWORD *)(v34 + 132) || (v32 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v34 + 112) = a2;
LABEL_34:
      *(_QWORD *)(v12 + 56) = a2;
      v33 = a2->Link.Alignment;
      a2->Scratch = 0LL;
      a2->ChildRefCount = v32;
      a2->Status = v9;
      if ( v33 )
        *(_QWORD *)(v33 + 112) = v8;
      return;
    }
    v35 = *(struct _NET_BUFFER_LIST **)v34;
    if ( *(_QWORD *)v34 )
      Scratch = (int)v35->Scratch;
    v36 = Scratch + v8;
    for ( i = *(struct _NET_BUFFER_LIST ***)(v12 + 56); v35; v35 = (struct _NET_BUFFER_LIST *)v35->Link.Alignment )
      i = &v35->Next;
    *i = a2;
    if ( *(_QWORD *)v34 )
      *(_QWORD *)(*(_QWORD *)v34 + 112LL) = v36;
  }
  else
  {
    ndisInvokeNextReceiveHandler(a2, (struct _NDIS_FILTER_BLOCK *)v10[66], (void *)v10[64], (void (*)(void))v10[63]);
    if ( (a5 & 2) != 0 && ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)v10[65], v10[100], 0x8Cu, a5 & 1);
  }
}
