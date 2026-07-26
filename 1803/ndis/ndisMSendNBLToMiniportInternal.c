/*
 * XREFs of ndisMSendNBLToMiniportInternal @ 0x1C0005A50
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001920 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMSendNBLToMiniport @ 0x1C0005A30 (ndisMSendNBLToMiniport.c)
 *     ndisReplaySendNbls @ 0x1C0071078 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C004DE98 (ndisMSetTimestampOnNblChainTx.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C005661C (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisSetBusyAsync @ 0x1C0071BD4 (ndisSetBusyAsync.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  struct _NET_BUFFER_LIST *v5; // r14
  KIRQL v7; // bl
  __int64 v9; // r13
  void (__fastcall *v11)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  int v12; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // di
  __int64 v17; // r10
  char v18; // r11
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int8 *v21; // r9
  unsigned __int64 v22; // rdi
  unsigned __int8 *SourceHandle; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  _QWORD *v32; // rcx
  int v33; // edx
  _SLIST_HEADER *Alignment; // rax
  int v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  unsigned __int8 *v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  struct NDIS_PCW_CONTEXT v40; // [rsp+68h] [rbp-50h] BYREF
  char v41; // [rsp+C0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v42; // [rsp+C8h] [rbp+10h] BYREF

  v42 = (struct _NET_BUFFER_LIST *)a2;
  v5 = (struct _NET_BUFFER_LIST *)a2;
  v40.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v7 = 2;
  v9 = *(_QWORD *)(a1 + 3784);
  v40.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v9 + 184);
  v40.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v40.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(42LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
  if ( *(_DWORD *)(a1 + 1836)
    || (!*(_BYTE *)(a1 + 91) || *(_WORD *)(a1 + 1820) <= 1u && !*(_BYTE *)(a1 + 1999))
    && (a4 & 2) == 0
    && (*(_DWORD *)(a1 + 120) & 0x4000) == 0
    || (ndisMLoopbackNetBufferLists(a1, (_DWORD)v5, a3, a4, (__int64)&v42), (v5 = v42) != 0LL) )
  {
    if ( a5 || !*(_QWORD *)(a1 + 4480) )
      goto LABEL_9;
    v33 = 0;
    Alignment = (_SLIST_HEADER *)v5;
    if ( v5 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        ++v33;
      }
      while ( Alignment );
    }
    if ( (unsigned __int8)ndisSetBusyAsync(a1, v33, 52, (_DWORD)v5, a3) )
    {
LABEL_9:
      if ( ndisNblTrackerMode == NdisTrackNblDisabled )
        goto LABEL_10;
      v13 = *(_QWORD *)(a1 + 4104);
      v14 = 0LL;
      v15 = 0LL;
      v16 = ndisNblTrackerEpoch;
      v17 = 0LL;
      v18 = 0;
      v36 = 0LL;
      v39 = 0LL;
      LODWORD(v19) = a4 & 1;
      v38 = 0LL;
      v35 = (int)v19;
      v41 = 0;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(v5, 0LL, 0x92u, (void *)v13, (unsigned int)v19);
        LOBYTE(v19) = v35;
        v14 = 0LL;
        v17 = 0LL;
        v18 = 0;
      }
      v20 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v20 & 1) != 0 )
      {
        v21 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v20 |= 2LL * (v16 & 1);
      }
      else
      {
        v21 = (unsigned __int8 *)v20;
      }
      v37 = v21;
      if ( !v5 )
      {
LABEL_39:
        a2 = v14 - v17;
        if ( (v20 & 1) != 0 && a2 )
        {
          if ( !(_BYTE)v19 && !v18 )
            LOBYTE(v19) = KeGetCurrentIrql() == 2;
          v29 = v20;
          v30 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
          v31 = 2 * ((v29 >> 1) & 1);
          if ( (_BYTE)v19 )
          {
            v32 = (_QWORD *)(*(_QWORD *)(v30 + 8 * v31 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v32 += a2;
          }
          else
          {
            a2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 8 * v31 + 48), a2);
          }
          v5 = v42;
        }
        v7 = 2;
LABEL_10:
        v12 = *(_DWORD *)(a1 + 2688);
        if ( (v12 & 2) != 0 )
        {
          a2 = 0LL;
        }
        else
        {
          if ( (v12 & 4) == 0 )
          {
LABEL_12:
            if ( SLOBYTE(v40.DatapathCyclesMask) < 0 )
            {
              if ( (a4 & 1) == 0 )
                v7 = KfRaiseIrql(2u);
              ndisPcwStartCycleCounter(&v40, 7u);
            }
            if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v9 + 26) & 2) != 0 )
              ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
                *(void **)(a1 + 24),
                v5,
                a3,
                a4,
                (void *)a1,
                *(void **)(a1 + 4992),
                v11);
            else
              v11(*(void **)(a1 + 24), v5, a3, a4);
            if ( SLOBYTE(v40.DatapathCyclesMask) < 0 )
            {
              ndisPcwEndCycleCounter(&v40, 7u, 0x14uLL);
              if ( v7 != 2 )
                KeLowerIrql(v7);
            }
            goto LABEL_16;
          }
          LOBYTE(a2) = 1;
        }
        ndisMSetTimestampOnNblChainTx(v5, a2);
        goto LABEL_12;
      }
LABEL_23:
      v22 = (unsigned __int64)v5->NetBufferListInfo[27];
      while ( 1 )
      {
        if ( v5->NetBufferListInfo[27] != (void *)v22 )
        {
LABEL_32:
          LODWORD(v19) = v35;
          v25 = v39 - v14;
          v18 = v41;
          if ( (v22 & 1) != 0 && v25 )
          {
            if ( !(_BYTE)v35 && !v41 )
            {
              v18 = 1;
              v41 = 1;
              LOBYTE(v19) = KeGetCurrentIrql() == 2;
              v35 = (int)v19;
            }
            v26 = v22;
            v27 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
            v28 = 2 * ((v26 >> 1) & 1);
            if ( (_BYTE)v19 )
            {
              v19 = (_QWORD *)(*(_QWORD *)(v27 + 8 * v28 + 40) + (KeGetPcr()->Prcb.Number << 12));
              *v19 += v25;
              LOBYTE(v19) = v35;
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8 * v28 + 48), v25);
            }
          }
          v21 = v37;
          v15 = v14;
          v39 = v14;
          if ( !v5 )
          {
            v5 = v42;
            goto LABEL_39;
          }
          goto LABEL_23;
        }
        if ( !v22 && !v5->SourceHandle )
          v5->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, v14, v15, v21);
        if ( (v22 & 4) != 0 )
          goto LABEL_66;
        SourceHandle = (unsigned __int8 *)v5->SourceHandle;
        if ( SourceHandle )
        {
          v15 = *SourceHandle;
          if ( (unsigned __int8)(v15 - 17) <= 1u || (_BYTE)v15 == 5 )
          {
            if ( SourceHandle != v21 || v5->ParentNetBufferList )
            {
              ++v14;
              v24 = v20;
              v36 = v14;
            }
            else
            {
              ++v17;
              v24 = 24LL;
              ++v14;
              v38 = v17;
              v36 = v14;
            }
            goto LABEL_31;
          }
          if ( (unsigned __int8)byte_1C0099622 >= 3u )
          {
            WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v5, (unsigned __int8)v15);
            goto LABEL_65;
          }
        }
        else if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, v5, v21);
LABEL_65:
          v14 = v36;
          v21 = v37;
          v17 = v38;
        }
LABEL_66:
        v24 = v20 | 4;
LABEL_31:
        v5->NetBufferListInfo[27] = (void *)v24;
        v5 = (struct _NET_BUFFER_LIST *)v5->Link.Alignment;
        if ( !v5 )
          goto LABEL_32;
      }
    }
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(43LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, v5);
}
