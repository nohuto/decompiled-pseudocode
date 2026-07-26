/*
 * XREFs of ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0024998 (ndisIndicateToPmodeOpens.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisTraceRcv @ 0x1C004FE64 (ndisTraceRcv.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
 */

void __fastcall ndisMIndicateNetBufferListsToOpen(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // edi
  unsigned int CurrentCpu; // r9d
  KIRQL v9; // r10
  unsigned int v12; // r13d
  bool v13; // cl
  unsigned int Flags; // edx
  int v15; // ebx
  char v16; // di
  unsigned int v17; // r8d
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int8 *v22; // r8
  _SLIST_HEADER *Alignment; // rsi
  unsigned __int64 Region; // rdi
  unsigned __int8 *v25; // rcx
  unsigned __int64 v26; // r12
  bool v27; // cl
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 Clock; // rax
  KIRQL v33; // al
  __int16 v34; // ax
  __int64 v35; // rax
  KIRQL v36; // [rsp+30h] [rbp-41h]
  char v37; // [rsp+31h] [rbp-40h]
  unsigned int v38; // [rsp+34h] [rbp-3Dh]
  struct NDIS_PCW_CONTEXT v39; // [rsp+38h] [rbp-39h] BYREF
  __int64 v40; // [rsp+50h] [rbp-21h]
  unsigned __int8 *v41; // [rsp+58h] [rbp-19h]
  __int64 v42; // [rsp+60h] [rbp-11h]
  __int64 v43; // [rsp+68h] [rbp-9h]
  __int64 v44; // [rsp+70h] [rbp-1h]
  bool v45; // [rsp+D0h] [rbp+5Fh] BYREF
  char v46; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+6Fh]
  unsigned int v48; // [rsp+E8h] [rbp+77h]

  v48 = a4;
  v47 = a3;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v7 = a4;
  v44 = v5;
  CurrentCpu = -1;
  v43 = 0LL;
  v9 = 2;
  v12 = *(_DWORD *)(v5 + 48);
  v39.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v5 + 40);
  v39.DatapathCyclesMask = *(_DWORD *)(v5 + 80);
  v39.DatapathEventsMask = v12;
  v38 = -1;
  v39.CurrentCpu = -1;
  v36 = 2;
  v13 = a2->SourceHandle == (void *)a1;
  Flags = a2->Flags;
  if ( (a2->NblFlags & 0x8000) != 0 && a2->NetBufferListInfo[5] == (void *)a1 )
  {
    v13 = 1;
LABEL_60:
    if ( (Flags & 0x200) == 0 )
    {
LABEL_5:
      if ( (a5 & 2) == 0 )
        ndisReturnNetBufferListsInternal(v5, a2, a5 & 1, 0LL);
      return;
    }
    goto LABEL_3;
  }
  if ( v13 )
    goto LABEL_60;
LABEL_3:
  if ( *(_BYTE *)(v5 + 1998) && !*(_DWORD *)(a1 + 432)
    || (*(_DWORD *)(a1 + 432) & 0x10000) != 0 && !v13 && (Flags & 0x80u) != 0 )
  {
    goto LABEL_5;
  }
  if ( (_BYTE)dword_1C0099FD8 )
  {
    v37 = 1;
    Clock = WmiGetClock(0LL, 0LL);
    CurrentCpu = -1;
    v9 = 2;
    v43 = Clock;
  }
  else
  {
    v37 = 0;
  }
  v15 = a5;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_11;
  v16 = ndisNblTrackerEpoch;
  v42 = 0LL;
  v17 = 133;
  v40 = 0LL;
  if ( (a5 & 2) == 0 )
    v17 = 132;
  v18 = 0LL;
  v46 = 0;
  v19 = *(_QWORD *)(a1 + 680);
  v20 = (a5 & 1) != 0;
  v45 = (a5 & 1) != 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(a2, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x20, v17, (void *)v19, v20);
    v18 = 0LL;
  }
  v21 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v21 & 1) != 0 )
  {
    v22 = *(unsigned __int8 **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v21 |= 2LL * (v16 & 1);
  }
  else
  {
    v22 = (unsigned __int8 *)v21;
  }
  v41 = v22;
  Alignment = (_SLIST_HEADER *)a2;
  do
  {
    Region = Alignment[22].Region;
    while ( Alignment[22].Region == Region )
    {
      if ( !Region && !Alignment[7].Region )
        Alignment[7].Region = ndisSourceHandleFromOwner(32LL, v20, v22);
      if ( (Region & 4) != 0 )
        goto LABEL_73;
      v25 = (unsigned __int8 *)Alignment[7].Region;
      if ( v25 )
      {
        v20 = *v25;
        if ( (unsigned __int8)(v20 - 17) <= 1u || (_BYTE)v20 == 5 )
        {
          if ( v25 != v22 || Alignment[1].Region )
          {
            ++v6;
            Alignment[22].Region = v21;
          }
          else
          {
            ++v18;
            Alignment[22].Region = 24LL;
            v40 = v18;
            ++v6;
          }
          goto LABEL_34;
        }
        if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)v20);
          goto LABEL_72;
        }
      }
      else if ( (unsigned __int8)byte_1C0098762 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
LABEL_72:
        v22 = v41;
        v18 = v40;
      }
LABEL_73:
      Alignment[22].Region = v21 | 4;
LABEL_34:
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        break;
    }
    if ( (Region & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(Region, v42 - v6, &v45, &v46);
      v22 = v41;
      v18 = v40;
    }
    v42 = v6;
  }
  while ( Alignment );
  v5 = v44;
  v26 = v6 - v18;
  if ( (v21 & 1) != 0 && v26 )
  {
    v27 = v45;
    if ( !v45 && !v46 )
    {
      v27 = KeGetCurrentIrql() == 2;
      v45 = v27;
    }
    v7 = v48;
    v28 = v21 >> 1;
    v29 = v21 & 0xFFFFFFFFFFFFFFF8uLL;
    v9 = 2;
    v30 = 2 * (v28 & 1);
    if ( v27 )
    {
      CurrentCpu = v39.CurrentCpu;
      LOWORD(v12) = v39.DatapathEventsMask;
      v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
      v38 = v39.CurrentCpu;
      *v31 += v26;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v26);
      CurrentCpu = v39.CurrentCpu;
      LOWORD(v12) = v39.DatapathEventsMask;
      v38 = v39.CurrentCpu;
    }
  }
  else
  {
    v7 = v48;
    v9 = 2;
    CurrentCpu = -1;
  }
  v15 = a5;
LABEL_11:
  if ( (v12 & 0x3014) != 0 || (v39.DatapathCyclesMask & 8) != 0 )
  {
    if ( (v15 & 1) == 0 )
    {
      v33 = KfRaiseIrql(2u);
      CurrentCpu = v38;
      v9 = v33;
      v36 = v33;
    }
    if ( (v12 & 4) != 0 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      LOWORD(v12) = v39.DatapathEventsMask;
      v39.CurrentCpu = CurrentCpu;
      ++*(_QWORD *)((char *)&v39.PcwBlock->DatapathEventReferences[4]
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData);
    }
    if ( (v12 & 0x10) != 0 )
    {
      if ( CurrentCpu == -1 )
      {
        CurrentCpu = KeGetPcr()->Prcb.Number;
        LOWORD(v12) = v39.DatapathEventsMask;
        v39.CurrentCpu = CurrentCpu;
      }
      *(_QWORD *)((char *)&v39.PcwBlock->DatapathEventReferences[8]
                + CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData) += v7;
    }
    if ( (v15 & 2) != 0 )
    {
      if ( (v12 & 0x1000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          LOWORD(v12) = v39.DatapathEventsMask;
          v39.CurrentCpu = CurrentCpu;
        }
        ++*(_QWORD *)((char *)&v39.PcwBlock->TotalInstanceName
                    + CurrentCpu * ndisPcwPerCpuDataStride
                    + ndisPcwOffsetToPerCpuData
                    + 40);
      }
      if ( (v12 & 0x2000) != 0 )
      {
        if ( CurrentCpu == -1 )
        {
          CurrentCpu = KeGetPcr()->Prcb.Number;
          v39.CurrentCpu = CurrentCpu;
        }
        *(_QWORD *)((char *)&v39.PcwBlock->TotalInstanceName
                  + CurrentCpu * ndisPcwPerCpuDataStride
                  + ndisPcwOffsetToPerCpuData
                  + 48) += v7;
      }
    }
    if ( (v39.DatapathCyclesMask & 8) != 0 )
    {
      ndisPcwStartCycleCounter(&v39, 3u);
    }
    else if ( v9 != 2 )
    {
      KeLowerIrql(v9);
    }
  }
  (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))(a1 + 544))(
    *(_QWORD *)(a1 + 552),
    a2,
    v47,
    v7,
    v15);
  if ( (v39.DatapathCyclesMask & 8) != 0 )
  {
    ndisPcwEndCycleCounter(&v39, 3u, 0x10uLL);
    if ( v36 != 2 )
      KeLowerIrql(v36);
  }
  if ( (v15 & 2) != 0 && ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 680),
      0x20uLL,
      0x88u,
      v15 & 1);
  if ( (_BYTE)dword_1C0099FD8 )
    WmiGetClock(0LL, 0LL);
  if ( v37 )
  {
    v34 = *(_WORD *)(a1 + 252);
    if ( v34 == -8826 || v34 == 1544 || v34 == 8 )
    {
      v35 = WmiGetClock(0LL, 0LL);
      ndisTraceRcv(v5, v35 - v43, v7);
    }
  }
}
