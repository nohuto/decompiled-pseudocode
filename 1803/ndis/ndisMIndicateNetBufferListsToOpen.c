/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C0003180
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00258A4 (ndisIndicateToPmodeOpens.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisTraceRcv @ 0x1C00507AC (ndisTraceRcv.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006B330 (ndisReturnNetBufferListsInternal.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int CurrentCpu; // r8d
  KIRQL v9; // r11
  unsigned int v10; // r10d
  unsigned int v13; // r12d
  bool v14; // cl
  unsigned int Flags; // edx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  unsigned int v20; // r8d
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int8 *v25; // r8
  _SLIST_HEADER *Alignment; // rsi
  unsigned __int64 Region; // rdi
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  bool v31; // cl
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 Clock; // rax
  KIRQL v37; // al
  __int16 v38; // ax
  __int64 v39; // rax
  KIRQL v40; // [rsp+30h] [rbp-41h]
  char v41; // [rsp+31h] [rbp-40h]
  unsigned int v42; // [rsp+34h] [rbp-3Dh]
  int v43; // [rsp+38h] [rbp-39h]
  struct NDIS_PCW_CONTEXT v44; // [rsp+40h] [rbp-31h] BYREF
  __int64 v45; // [rsp+58h] [rbp-19h]
  unsigned __int8 *v46; // [rsp+60h] [rbp-11h]
  __int64 v47; // [rsp+68h] [rbp-9h]
  __int64 v48; // [rsp+70h] [rbp-1h]
  __int64 v49; // [rsp+78h] [rbp+7h]
  bool v50; // [rsp+D0h] [rbp+5Fh] BYREF
  char v51; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int v52; // [rsp+E0h] [rbp+6Fh]
  unsigned int v53; // [rsp+E8h] [rbp+77h]

  v53 = a4;
  v52 = a3;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v7 = a3;
  v49 = v5;
  CurrentCpu = -1;
  v48 = 0LL;
  v9 = 2;
  v10 = a4;
  v13 = *(_DWORD *)(v5 + 48);
  v44.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v44.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v44.DatapathEventsMask = v13;
  v42 = -1;
  v44.CurrentCpu = -1;
  v40 = 2;
  v14 = a2->SourceHandle == (void *)a1;
  Flags = a2->Flags;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == (void *)a1 )
  {
    v14 = 1;
LABEL_70:
    if ( (Flags & 0x200) == 0 )
    {
LABEL_17:
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v5, a2, a5 & 1, 0LL);
      return;
    }
    goto LABEL_3;
  }
  if ( v14 )
    goto LABEL_70;
LABEL_3:
  if ( *(_BYTE *)(v5 + 1998) && !*(_DWORD *)(a1 + 432)
    || (*(_DWORD *)(a1 + 432) & 0x10000) != 0 && !v14 && (Flags & 0x80u) != 0 )
  {
    goto LABEL_17;
  }
  if ( (_BYTE)dword_1C009AF18 )
  {
    v41 = 1;
    LOBYTE(a4) = (Flags & 0x200) != 0;
    Clock = WmiGetClock(0LL, 0LL, 0xFFFFFFFFLL, a4);
    CurrentCpu = -1;
    v9 = 2;
    v10 = v53;
    v48 = Clock;
  }
  else
  {
    v41 = 0;
  }
  v16 = a5;
  v43 = a5;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_9;
  v19 = ndisNblTrackerEpoch;
  v47 = 0LL;
  v20 = 133;
  v45 = 0LL;
  if ( (a5 & 2) == 0 )
    v20 = 132;
  v21 = 0LL;
  v51 = 0;
  v22 = *(_QWORD *)(a1 + 680);
  v23 = (a5 & 1) != 0;
  v50 = (a5 & 1) != 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v20, (void *)v22, v23);
    v21 = 0LL;
  }
  v24 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v24 & 1) != 0 )
  {
    v25 = *(unsigned __int8 **)((v24 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v24 |= 2LL * (v19 & 1);
  }
  else
  {
    v25 = (unsigned __int8 *)v24;
  }
  v46 = v25;
  Alignment = (_SLIST_HEADER *)a2;
  do
  {
    Region = Alignment[22].Region;
    while ( Alignment[22].Region == Region )
    {
      if ( !Region && !Alignment[7].Region )
        Alignment[7].Region = ndisSourceHandleFromOwner(32LL, v23, v25, v21);
      if ( (Region & 4) != 0 )
        goto LABEL_82;
      v28 = (unsigned __int8 *)Alignment[7].Region;
      if ( v28 )
      {
        v23 = *v28;
        if ( (unsigned __int8)(v23 - 17) <= 1u || (_BYTE)v23 == 5 )
        {
          if ( v28 != v25 || Alignment[1].Region )
          {
            ++v6;
            v29 = v24;
          }
          else
          {
            ++v21;
            v29 = 24LL;
            v45 = v21;
            ++v6;
          }
          goto LABEL_36;
        }
        if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, (unsigned __int8)v23);
          goto LABEL_81;
        }
      }
      else if ( (unsigned __int8)byte_1C0099622 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v21);
LABEL_81:
        v25 = v46;
        v21 = v45;
      }
LABEL_82:
      v29 = v24 | 4;
LABEL_36:
      Alignment[22].Region = v29;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        break;
    }
    if ( (Region & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(Region, v47 - v6, &v50, &v51);
      v25 = v46;
      v21 = v45;
    }
    v47 = v6;
  }
  while ( Alignment );
  v5 = v49;
  v30 = v6 - v21;
  if ( (v24 & 1) != 0 && v30 )
  {
    v31 = v50;
    if ( !v50 && !v51 )
    {
      v31 = KeGetCurrentIrql() == 2;
      v50 = v31;
    }
    v7 = v52;
    v32 = v24;
    v10 = v53;
    v33 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
    v9 = 2;
    v34 = 2 * ((v32 >> 1) & 1);
    if ( v31 )
    {
      CurrentCpu = v44.CurrentCpu;
      LOWORD(v13) = v44.DatapathEventsMask;
      v35 = (_QWORD *)(*(_QWORD *)(v33 + 8 * v34 + 40) + (KeGetPcr()->Prcb.Number << 12));
      v42 = v44.CurrentCpu;
      *v35 += v30;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 8 * v34 + 48), v30);
      CurrentCpu = v44.CurrentCpu;
      LOWORD(v13) = v44.DatapathEventsMask;
      v42 = v44.CurrentCpu;
    }
  }
  else
  {
    v10 = v53;
    v9 = 2;
    v7 = v52;
    CurrentCpu = -1;
  }
  v16 = v43;
LABEL_9:
  if ( (v13 & 0x3014) != 0 || (v44.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v16 & 1) == 0 )
    {
      v37 = KfRaiseIrql(2u);
      CurrentCpu = v42;
      v9 = v37;
      v10 = v53;
      v40 = v37;
    }
    if ( (v13 & 4) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        LOWORD(v13) = v44.DatapathEventsMask;
        v44.CurrentCpu = CurrentCpu;
      }
      ++*(_QWORD *)((char *)&v44.PcwBlock->DatapathEventReferences[4]
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( (v13 & 0x10) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        LOWORD(v13) = v44.DatapathEventsMask;
        v44.CurrentCpu = CurrentCpu;
      }
      *(_QWORD *)((char *)&v44.PcwBlock->DatapathEventReferences[8]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData) += v10;
    }
    if ( (v16 & 2) != 0 )
    {
      if ( (v13 & 0x1000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          LOWORD(v13) = v44.DatapathEventsMask;
          v44.CurrentCpu = CurrentCpu;
        }
        ++*(_QWORD *)((char *)&v44.PcwBlock->TotalInstanceName
                    + CurrentCpu * ndisPcwPerCpuDataStride
                    + ndisPcwOffsetToPerCpuData
                    + 40);
      }
      if ( (v13 & 0x2000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v44.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v44.PcwBlock->TotalInstanceName
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 48) += v10;
      }
    }
    if ( (v44.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v44, 3u);
    }
    else if ( v9 != 2 )
    {
      KeLowerIrql(v9);
      v10 = v53;
    }
  }
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))(a1 + 544))(
    *(_QWORD *)(a1 + 552),
    a2,
    v7,
    v10,
    v16);
  if ( (v44.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v44, 3u, 0x10uLL);
    if ( v40 != 2 )
      KeLowerIrql(v40);
  }
  if ( (v16 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 680),
      0x20uLL,
      136LL,
      v16 & 1);
  if ( (_BYTE)dword_1C009AF18 )
    WmiGetClock(0LL, 0LL, v17, v18);
  if ( v41 )
  {
    v38 = *(_WORD *)(a1 + 252);
    if ( v38 == -8826 || v38 == 1544 || v38 == 8 )
    {
      v39 = WmiGetClock(0LL, 0LL, v17, v18);
      ndisTraceRcv(v5, v39 - v48, v53);
    }
  }
}
