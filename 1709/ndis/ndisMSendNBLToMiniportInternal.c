/*
 * XREFs of ndisMSendNBLToMiniportInternal @ 0x1C0016490
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0012F00 (NdisSendNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0013610 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMSendNBLToMiniport @ 0x1C0016470 (ndisMSendNBLToMiniport.c)
 *     ndisReplaySendNbls @ 0x1C0070828 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C004D534 (ndisMSetTimestampOnNblChainTx.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0055C7C (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisSetBusyAsync @ 0x1C0071374 (ndisSetBusyAsync.c)
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
  char v15; // di
  __int64 v16; // r11
  __int64 v17; // r8
  char v18; // r10
  unsigned __int64 v19; // rbx
  unsigned __int8 *v20; // r9
  char v21; // r12
  unsigned __int64 v22; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // r9
  _QWORD *v28; // rcx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rbx
  __int64 v31; // r9
  _QWORD *v32; // rcx
  int v33; // edx
  _SLIST_HEADER *Alignment; // rax
  BOOL v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  void (__fastcall *v39)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+60h] [rbp-58h]
  struct NDIS_PCW_CONTEXT v40; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int8 *v41; // [rsp+C0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v42; // [rsp+C8h] [rbp+10h] BYREF

  v42 = (struct _NET_BUFFER_LIST *)a2;
  v5 = (struct _NET_BUFFER_LIST *)a2;
  v40.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v7 = 2;
  v9 = *(_QWORD *)(a1 + 3784);
  v40.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v9 + 184);
  v39 = v11;
  v40.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v40.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(42LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, a2);
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
      v15 = ndisNblTrackerEpoch;
      v16 = 0LL;
      v36 = 0LL;
      v17 = (a4 & 1) != 0;
      v38 = 0LL;
      v18 = 0;
      v37 = 0LL;
      v35 = (a4 & 1) != 0;
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      {
        ndisNblTrackerRecordEvent(v5, 0LL, 0x92u, (void *)v13, a4 & 1);
        v17 = (a4 & 1) != 0;
        v14 = 0LL;
        v16 = 0LL;
        v18 = 0;
      }
      v19 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (v19 & 1) != 0 )
      {
        v20 = *(unsigned __int8 **)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
        v19 |= 2LL * (v15 & 1);
      }
      else
      {
        v20 = (unsigned __int8 *)v19;
      }
      v41 = v20;
      if ( !v5 )
      {
LABEL_40:
        a2 = v14 - v16;
        if ( (v19 & 1) != 0 && a2 )
        {
          if ( !(_BYTE)v17 && !v18 )
            LOBYTE(v17) = KeGetCurrentIrql() == 2;
          v29 = v19;
          v30 = v19 & 0xFFFFFFFFFFFFFFF8uLL;
          v31 = 2 * ((v29 >> 1) & 1);
          if ( (_BYTE)v17 )
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
      v21 = 0;
LABEL_24:
      v22 = (unsigned __int64)v5->NetBufferListInfo[27];
      while ( 1 )
      {
        if ( v5->NetBufferListInfo[27] != (void *)v22 )
        {
LABEL_33:
          v17 = v35;
          v24 = v38 - v14;
          if ( (v22 & 1) != 0 && v24 )
          {
            if ( !v35 && !v21 )
            {
              v21 = 1;
              LOBYTE(v17) = KeGetCurrentIrql() == 2;
              v35 = v17;
            }
            v25 = v22;
            v26 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
            v27 = 2 * ((v25 >> 1) & 1);
            if ( (_BYTE)v17 )
            {
              v28 = (_QWORD *)(*(_QWORD *)(v26 + 8 * v27 + 40) + (KeGetPcr()->Prcb.Number << 12));
              *v28 += v24;
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 8 * v27 + 48), v24);
            }
          }
          v20 = v41;
          v38 = v14;
          if ( !v5 )
          {
            v5 = v42;
            v18 = v21;
            v11 = v39;
            goto LABEL_40;
          }
          goto LABEL_24;
        }
        if ( !v22 && !v5->SourceHandle )
          v5->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, v14, v17);
        if ( (v22 & 4) != 0 )
          goto LABEL_67;
        SourceHandle = (unsigned __int8 *)v5->SourceHandle;
        if ( SourceHandle )
        {
          v17 = *SourceHandle;
          if ( (unsigned __int8)(v17 - 17) <= 1u || (_BYTE)v17 == 5 )
          {
            if ( SourceHandle != v20 || v5->ParentNetBufferList )
            {
              ++v14;
              v5->NetBufferListInfo[27] = (void *)v19;
              v36 = v14;
            }
            else
            {
              ++v16;
              v5->NetBufferListInfo[27] = (void *)24;
              ++v14;
              v37 = v16;
              v36 = v14;
            }
            goto LABEL_32;
          }
          if ( (unsigned __int8)byte_1C0098762 >= 3u )
          {
            WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v5, (unsigned __int8)v17);
            goto LABEL_66;
          }
        }
        else if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v5);
LABEL_66:
          v14 = v36;
          v20 = v41;
          v16 = v37;
        }
LABEL_67:
        v5->NetBufferListInfo[27] = (void *)(v19 | 4);
LABEL_32:
        v5 = (struct _NET_BUFFER_LIST *)v5->Link.Alignment;
        if ( !v5 )
          goto LABEL_33;
      }
    }
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(43LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, v5);
}
