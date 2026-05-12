/*
 * XREFs of RaUnitStartIo @ 0x1C0007D00
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     IsUntaggedRequest @ 0x1C0006B68 (IsUntaggedRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C0006CB4 (RaidUnitReleaseIrp.c)
 *     RaidUnitClaimIrp @ 0x1C00080D0 (RaidUnitClaimIrp.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009840 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A340 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C000CC14 (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C000FAA8 (RaidDeleteDeviceQueueEntry.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002D630 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C002F1B4 (RaidDmaFlushDmaBuffers.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0031924 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C0031B78 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00396D8 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003D4D0 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  char v5; // r15
  ULONGLONG v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rax
  unsigned __int8 v21; // al
  int v22; // r15d
  unsigned int v23; // r12d
  int v24; // esi
  bool v25; // cl
  bool v26; // r15
  __int64 *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  char *SrbScsiData; // rax
  _QWORD *v32; // rsi
  char v33; // al
  __int64 v34; // rbp
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rdx
  __int64 v37; // r13
  int v38; // ecx
  USHORT HighestNodeNumber; // ax
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // rdx
  bool v44; // si
  __int64 v45; // rdx
  BOOL v46; // r15d
  unsigned int v47; // ebx
  unsigned int v48; // r8d
  unsigned __int8 v49; // al
  int v50; // ebx
  char v51; // al
  struct _KDPC *v52; // rcx
  int v54; // [rsp+38h] [rbp-80h]
  int v55; // [rsp+60h] [rbp-58h]
  __int64 v56; // [rsp+68h] [rbp-50h]
  unsigned int v57; // [rsp+C0h] [rbp+8h]
  int v58; // [rsp+C0h] [rbp+8h]
  int v59; // [rsp+C8h] [rbp+10h]
  int v61; // [rsp+D8h] [rbp+20h]
  unsigned int v62; // [rsp+D8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v55 = 0;
  v6 = 0LL;
  v61 = 0;
  v7 = *(_QWORD *)(v3 + 24);
  v56 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  *(_BYTE *)(v8 + 3) = 0;
  if ( *(int *)(v7 + 4200) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v7 + 1184)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 4200)) == 1 )
      RaidProcessDeferredItemsWorker(v7 + 1088, *(_QWORD *)(v7 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 4200));
  }
  if ( *(_BYTE *)(v8 + 2) == 40 )
  {
    v9 = *(_QWORD *)(v8 + 104);
    v59 = *(_DWORD *)(v8 + 24);
    v56 = v8;
    if ( !*(_DWORD *)(v8 + 20) )
    {
      SrbScsiData = (char *)GetSrbScsiData(v8, 0, 0, 0, 0LL, 0LL);
      if ( SrbScsiData )
        v5 = *SrbScsiData;
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    v5 = *(_BYTE *)(v8 + 72);
    v59 = *(_DWORD *)(v8 + 12);
    if ( v9 )
      *(_QWORD *)(v8 + 40) = 0LL;
  }
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      v32 = *(_QWORD **)(v8 + 96);
      v56 = v8;
      *(_QWORD *)(v8 + 96) = v32[2];
    }
    else
    {
      v32 = *(_QWORD **)(v8 + 48);
      *(_QWORD *)(v8 + 48) = v32[2];
    }
    if ( v32[1] != -1LL )
      v6 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v3 + 2600)) - v32[1];
    ExFreePoolWithTag(v32, 0x54436152u);
  }
  if ( (*(_BYTE *)(v3 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    RaUnitReleaseRemoveLock((struct _KEVENT *)v3);
    v33 = 56;
    v14 = -1073740534;
    if ( *(char *)(v8 + 3) < 0 )
      v33 = -72;
    *(_BYTE *)(v8 + 3) = v33;
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1792));
    goto LABEL_65;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v11 )
  {
    v58 = 0;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v40 = 0;
    v41 = HighestNodeNumber + 1;
    v62 = v41;
    while ( 1 )
    {
      v42 = 0;
      if ( v41 )
        break;
LABEL_72:
      v58 = ++v40;
      if ( v40 == 10 )
      {
        v12 = -1;
        goto LABEL_10;
      }
    }
    while ( 1 )
    {
      v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v42 << 6)));
      if ( v11 )
        break;
      v41 = v62;
      if ( ++v42 >= v62 )
      {
        v40 = v58;
        goto LABEL_72;
      }
    }
  }
  v12 = *((_DWORD *)&v11->Next + 2);
LABEL_10:
  v61 = 1;
  *a3 = v12;
  v14 = RaidUnitClaimIrp(v3, a2, v9, a3);
  if ( v14 < 0 )
  {
    LOBYTE(v20) = RaUnitReleaseRemoveLock((struct _KEVENT *)v3);
    goto LABEL_38;
  }
  v55 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v5 != 18 && v5 != -96 )
  {
    LOBYTE(v13) = 37;
    *(_BYTE *)(v8 + 3) = 37;
    LODWORD(v20) = RaidSrbStatusToNtStatus(v13);
    v14 = v20;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v3 + 153) >= 0x80u
    && *(_DWORD *)(v3 + 196) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v3, v8)
    && (v59 & 0x100000) != 0 )
  {
    v14 = -1073741823;
    *(_BYTE *)(v8 + 3) = 36;
    goto LABEL_65;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v15 + 2) == 40 )
    v16 = *(_QWORD **)(v15 + 96);
  else
    v16 = *(_QWORD **)(v15 + 48);
  v16[96] = v9;
  v16[82] = RaidUnitCompleteRequest;
  v16[86] = v6;
  v17 = *(_QWORD *)(v3 + 24);
  if ( !*(_BYTE *)(v17 + 4450) )
    goto LABEL_22;
  v18 = v16[21];
  if ( *(_BYTE *)(v18 + 2) == 40 )
    v19 = *(_DWORD *)(v18 + 24);
  else
    v19 = *(_DWORD *)(v18 + 12);
  if ( (*(_BYTE *)(v17 + 4451) & 4) != 0 )
  {
    v43 = v16[13];
    v44 = (v19 & 0x40) != 0;
    if ( v43 )
      RaidDmaFlushDmaBuffers(v17 + 696, v43, v44);
    v45 = v16[17];
    if ( v45 )
      RaidDmaFlushDmaBuffers(v17 + 696, v45, v44);
LABEL_22:
    LODWORD(v20) = RaidAdapterPostScatterGatherExecute(v17, v16);
LABEL_45:
    v14 = v20;
    goto LABEL_35;
  }
  if ( v16[17] )
  {
    LODWORD(v20) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v16);
    goto LABEL_45;
  }
  if ( (v19 & 0xC0) == 0 )
    goto LABEL_22;
  v21 = *(_BYTE *)(v18 + 2);
  if ( v21 == 40 )
  {
    v22 = *(_DWORD *)(v18 + 24);
    v23 = *(_DWORD *)(v18 + 60);
    v24 = *(_DWORD *)(v18 + 20);
  }
  else
  {
    v22 = *(_DWORD *)(v18 + 12);
    v23 = *(_DWORD *)(v18 + 16);
    v24 = v21;
  }
  LODWORD(v20) = *(_DWORD *)(v17 + 524);
  v25 = (v22 & 0x40) != 0;
  v26 = (v22 & 0x80) != 0;
  v57 = v23;
  if ( (v20 & 8) == 0 && (*(_BYTE *)(v17 + 109) & 2) == 0 )
    LOBYTE(v20) = KeFlushIoBuffers(v16[13], v25);
  if ( v24 == 23 )
  {
    v20 = v16[13];
    if ( *(_DWORD *)(v20 + 40) > v23 )
      v23 = *(_DWORD *)(v20 + 40);
    v57 = v23;
  }
  v27 = (__int64 *)(v17 + 696);
  if ( v17 != -696 && (v28 = *v27) != 0 && (v20 = *(_QWORD *)(v28 + 8)) != 0 && (v20 = *(_QWORD *)(v20 + 112)) != 0 )
  {
    LODWORD(v20) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, bool, _QWORD *, int))v20)(
                     v28,
                     *(_QWORD *)(v17 + 8),
                     v16[13],
                     v16[23],
                     v57,
                     RaidpAdapterContinueScatterGather,
                     v16,
                     v26,
                     v16 + 29,
                     424);
    v14 = v20;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 == -1073741789 )
  {
    if ( v17 != -696 )
    {
      v30 = *v27;
      if ( *v27 )
      {
        v20 = *(_QWORD *)(v30 + 8);
        if ( v20 )
        {
          v20 = *(_QWORD *)(v20 + 88);
          if ( v20 )
          {
            LOBYTE(v54) = v26;
            LODWORD(v20) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int))v20)(
                             v30,
                             *(_QWORD *)(v17 + 8),
                             v16[13],
                             v16[23],
                             v57,
                             RaidpAdapterContinueScatterGather,
                             v16,
                             v54);
            goto LABEL_45;
          }
        }
      }
    }
    v14 = -1073741811;
  }
LABEL_35:
  if ( v14 >= 0 )
  {
    v29 = *(_QWORD *)(v3 + 24);
    if ( *(int *)(v29 + 4200) <= 0 )
    {
      LOWORD(v20) = ExQueryDepthSList((PSLIST_HEADER)(v29 + 1184));
      if ( (_WORD)v20 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v29 + 4200)) == 1 )
          LOBYTE(v20) = RaidProcessDeferredItemsWorker(v29 + 1088, *(_QWORD *)(v29 + 8));
        _InterlockedDecrement((volatile signed __int32 *)(v29 + 4200));
      }
    }
LABEL_38:
    if ( v14 >= 0 )
      return v20;
  }
LABEL_65:
  v34 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v35 = *(_BYTE *)(v34 + 2);
  if ( v35 == 40 )
  {
    v36 = *(unsigned int *)(v34 + 20);
    v37 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v38 = *(_DWORD *)(v34 + 24);
  }
  else
  {
    v38 = *(_DWORD *)(v34 + 12);
    v37 = v56;
    v36 = v35;
  }
  v46 = IsUntaggedRequest(v38, v36);
  if ( v61 )
  {
    v47 = *a3;
    v48 = KeQueryHighestNodeNumber();
    if ( v47 / *(_DWORD *)(v3 + 328) < v48 + 1 )
      v48 = v47 / *(_DWORD *)(v3 + 328);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v48 << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v3 + 320) + 16LL * v47));
  }
  RaidDeleteDeviceQueueEntry(v3 + 400, v46);
  if ( v55 )
    RaidUnitReleaseIrp(a2);
  v49 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v3 + 408));
  *(_QWORD *)(a2 + 56) = 0LL;
  v50 = v49;
  if ( (*(_BYTE *)(v34 + 3) & 0x3F) == 0 )
  {
    v51 = RaidNtStatusToSrbStatus((unsigned int)v14);
    *(_BYTE *)(v34 + 3) = v51;
    if ( (v51 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v34 + 2) == 40 )
        *(_DWORD *)(v37 + 44) = -1073741670;
      else
        *(_DWORD *)(v34 + 64) = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      25LL,
      &WPP_95124dee8acf35750318326cda357b29_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  RaidUnitEndDeviceBusy(v3, a2);
  RaidCompleteRequestEx((PIRP)a2);
  if ( v50 )
    v52 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
  else
    v52 = (struct _KDPC *)(v3 + 920);
  LOBYTE(v20) = KeInsertQueueDpc(v52, 0LL, 0LL);
  return v20;
}
