/*
 * XREFs of RaUnitStartIo @ 0x1C0008160
 * Callers:
 *     <none>
 * Callees:
 *     RaidProcessDeferredItemsWorker @ 0x1C0001A28 (RaidProcessDeferredItemsWorker.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitClaimIrp @ 0x1C0008880 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009270 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitReleaseIrp @ 0x1C0009D88 (RaidUnitReleaseIrp.c)
 *     StorRemoveIoGatewayItem @ 0x1C000B240 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C000F10C (RaidDeleteDeviceQueueEntry.c)
 *     IsUntaggedRequest @ 0x1C001B454 (IsUntaggedRequest.c)
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002C590 (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002E628 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C002FEE8 (RaidDmaFlushDmaBuffers.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0032564 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C00327B8 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C003B1E8 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003E48C (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rdi
  char v4; // r15
  int *v5; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r12
  char *SrbScsiData; // rax
  _QWORD *v11; // rbx
  char v12; // al
  int v13; // ebp
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v15; // rax
  int v16; // r14d
  unsigned int v17; // ebp
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // esi
  int v29; // r15d
  unsigned int v30; // esi
  int v31; // ebp
  int v32; // ecx
  bool v33; // r15
  __int64 *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  bool v38; // si
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rsi
  unsigned __int8 v42; // al
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rcx
  BOOL v46; // r14d
  unsigned int v47; // ebx
  unsigned int HighestNodeNumber; // r8d
  unsigned __int8 v49; // al
  int v50; // ebx
  char v51; // al
  struct _KDPC *v52; // rcx
  int v54; // [rsp+38h] [rbp-80h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  ULONGLONG v56; // [rsp+68h] [rbp-50h]
  int v57; // [rsp+C0h] [rbp+8h]
  int v58; // [rsp+C8h] [rbp+10h]
  int v60; // [rsp+D8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = a3;
  v60 = 0;
  v58 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v8 = *(_QWORD *)(v3 + 24);
  v55 = 0LL;
  v56 = 0LL;
  *(_BYTE *)(v7 + 3) = 0;
  if ( *(int *)(v8 + 4200) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v8 + 1184)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 4200)) == 1 )
      RaidProcessDeferredItemsWorker(v8 + 1088, *(_QWORD *)(v8 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4200));
  }
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    v9 = *(_QWORD *)(v7 + 104);
    v57 = *(_DWORD *)(v7 + 24);
    v55 = v7;
    if ( !*(_DWORD *)(v7 + 20) )
    {
      SrbScsiData = (char *)GetSrbScsiData(v7, 0, 0, 0, 0LL, 0LL);
      if ( SrbScsiData )
        v4 = *SrbScsiData;
    }
  }
  else
  {
    v9 = *(_QWORD *)(v7 + 40);
    v4 = *(_BYTE *)(v7 + 72);
    v57 = *(_DWORD *)(v7 + 12);
    if ( v9 )
      *(_QWORD *)(v7 + 40) = 0LL;
  }
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      v11 = *(_QWORD **)(v7 + 96);
      v55 = v7;
      *(_QWORD *)(v7 + 96) = v11[2];
    }
    else
    {
      v11 = *(_QWORD **)(v7 + 48);
      *(_QWORD *)(v7 + 48) = v11[2];
    }
    if ( v11[1] != -1LL )
      v56 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v3 + 2648)) - v11[1];
    ExFreePoolWithTag(v11, 0x54436152u);
  }
  if ( (*(_BYTE *)(v3 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    RaUnitReleaseRemoveLock(v3);
    v12 = 56;
    v13 = -1073740534;
    if ( *(char *)(v7 + 3) < 0 )
      v12 = -72;
    *(_BYTE *)(v7 + 3) = v12;
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1824));
    goto LABEL_96;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v15 )
  {
    v16 = 0;
    v17 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v18 = 0;
      if ( v17 )
        break;
LABEL_29:
      if ( ++v16 == 10 )
      {
        v5 = a3;
        v19 = -1;
        goto LABEL_33;
      }
    }
    while ( 1 )
    {
      v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v18 << 6)));
      if ( v15 )
        break;
      if ( ++v18 >= v17 )
        goto LABEL_29;
    }
    v5 = a3;
  }
  v19 = *((_DWORD *)&v15->Next + 2);
LABEL_33:
  *v5 = v19;
  v58 = 1;
  v13 = RaidUnitClaimIrp(v3, a2, v9, v5);
  if ( v13 < 0 )
  {
    LOBYTE(v21) = RaUnitReleaseRemoveLock(v3);
    goto LABEL_95;
  }
  v60 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v4 != 18 && v4 != -96 )
  {
    LOBYTE(v20) = 37;
    *(_BYTE *)(v7 + 3) = 37;
    LODWORD(v21) = RaidSrbStatusToNtStatus(v20);
    v13 = v21;
    goto LABEL_95;
  }
  if ( *(char *)(v3 + 153) >= 0
    || *(_DWORD *)(v3 + 196) == 1
    || !(unsigned __int8)RaidSrbIsPowerRequired(v3, v7)
    || (v57 & 0x100000) == 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v22 + 2) == 40 )
      v23 = *(_QWORD **)(v22 + 96);
    else
      v23 = *(_QWORD **)(v22 + 48);
    v23[96] = v9;
    v23[82] = RaidUnitCompleteRequest;
    v23[86] = v56;
    v24 = *(_QWORD *)(v3 + 24);
    if ( *(_QWORD *)(v24 + 5696) )
    {
      LODWORD(v21) = RaidAdapterAcquireCryptoKeyResources(v24, v23);
      v13 = v21;
      if ( (_DWORD)v21 == 259 )
        return v21;
      if ( (int)v21 < 0 )
      {
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          LOBYTE(v21) = v55;
          *(_BYTE *)(v55 + 3) = 48;
          *(_DWORD *)(v55 + 44) = v13;
        }
        else
        {
          *(_BYTE *)(v7 + 3) = 48;
          *(_DWORD *)(v7 + 64) = v21;
        }
        goto LABEL_95;
      }
    }
    v25 = *(_QWORD *)(v3 + 24);
    if ( *(_BYTE *)(v25 + 4450) )
    {
      v26 = v23[21];
      v27 = *(unsigned __int8 *)(v26 + 2);
      if ( (_BYTE)v27 == 40 )
        v28 = *(_DWORD *)(v26 + 24);
      else
        v28 = *(_DWORD *)(v26 + 12);
      if ( (*(_BYTE *)(v25 + 4451) & 4) != 0 )
      {
        v37 = v23[13];
        v38 = (v28 & 0x40) != 0;
        if ( v37 )
          RaidDmaFlushDmaBuffers(v25 + 696, v37, v38);
        v39 = v23[17];
        if ( v39 )
          RaidDmaFlushDmaBuffers(v25 + 696, v39, v38);
      }
      else
      {
        if ( v23[17] )
        {
          LODWORD(v21) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v23);
          goto LABEL_88;
        }
        if ( (v28 & 0xC0) != 0 )
        {
          if ( (_BYTE)v27 == 40 )
          {
            v29 = *(_DWORD *)(v26 + 24);
            v30 = *(_DWORD *)(v26 + 60);
            v31 = *(_DWORD *)(v26 + 20);
          }
          else
          {
            v29 = *(_DWORD *)(v26 + 12);
            v30 = *(_DWORD *)(v26 + 16);
            v31 = (unsigned __int8)v27;
          }
          LODWORD(v21) = *(_DWORD *)(v25 + 524);
          v32 = v29 & 0x40;
          v33 = (v29 & 0x80) != 0;
          if ( (v21 & 8) == 0 && (*(_BYTE *)(v25 + 109) & 2) == 0 )
          {
            LOBYTE(v27) = v32 != 0;
            LOBYTE(v21) = KeFlushIoBuffers(v23[13], v27);
          }
          if ( v31 == 23 )
          {
            v21 = v23[13];
            if ( *(_DWORD *)(v21 + 40) > v30 )
              v30 = *(_DWORD *)(v21 + 40);
          }
          v34 = (__int64 *)(v25 + 696);
          if ( v25 != -696
            && (v35 = *v34) != 0
            && (v21 = *(_QWORD *)(v35 + 8)) != 0
            && (v21 = *(_QWORD *)(v21 + 112)) != 0 )
          {
            LODWORD(v21) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, bool, _QWORD *, int))v21)(
                             v35,
                             *(_QWORD *)(v25 + 8),
                             v23[13],
                             v23[23],
                             v30,
                             RaidpAdapterContinueScatterGather,
                             v23,
                             v33,
                             v23 + 29,
                             424);
            v13 = v21;
          }
          else
          {
            v13 = -1073741811;
          }
          if ( v13 != -1073741789 )
            goto LABEL_89;
          if ( v25 == -696
            || (v36 = *v34) == 0
            || (v21 = *(_QWORD *)(v36 + 8)) == 0
            || (v21 = *(_QWORD *)(v21 + 88)) == 0 )
          {
            v13 = -1073741811;
LABEL_89:
            if ( v13 < 0 )
              goto LABEL_96;
            v40 = *(_QWORD *)(v3 + 24);
            if ( *(int *)(v40 + 4200) <= 0 )
            {
              LOWORD(v21) = ExQueryDepthSList((PSLIST_HEADER)(v40 + 1184));
              if ( (_WORD)v21 )
              {
                LODWORD(v21) = _InterlockedIncrement((volatile signed __int32 *)(v40 + 4200));
                if ( (_DWORD)v21 == 1 )
                  LOBYTE(v21) = RaidProcessDeferredItemsWorker(v40 + 1088, *(_QWORD *)(v40 + 8));
                _InterlockedDecrement((volatile signed __int32 *)(v40 + 4200));
              }
            }
LABEL_95:
            if ( v13 >= 0 )
              return v21;
            goto LABEL_96;
          }
          LOBYTE(v54) = v33;
          LODWORD(v21) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int))v21)(
                           v36,
                           *(_QWORD *)(v25 + 8),
                           v23[13],
                           v23[23],
                           v30,
                           RaidpAdapterContinueScatterGather,
                           v23,
                           v54);
LABEL_88:
          v13 = v21;
          goto LABEL_89;
        }
      }
    }
    LODWORD(v21) = RaidAdapterPostScatterGatherExecute(v25, v23);
    goto LABEL_88;
  }
  v13 = -1073741823;
  *(_BYTE *)(v7 + 3) = 36;
LABEL_96:
  v41 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v42 = *(_BYTE *)(v41 + 2);
  if ( v42 == 40 )
  {
    v43 = *(unsigned int *)(v41 + 20);
    v44 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v45 = *(unsigned int *)(v41 + 24);
  }
  else
  {
    v45 = *(unsigned int *)(v41 + 12);
    v44 = v55;
    v43 = v42;
  }
  v46 = IsUntaggedRequest(v45, v43) != 0;
  if ( v58 )
  {
    v47 = *a3;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v47 / *(_DWORD *)(v3 + 328) < HighestNodeNumber + 1 )
      HighestNodeNumber = v47 / *(_DWORD *)(v3 + 328);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v3 + 320) + 16LL * v47));
  }
  RaidDeleteDeviceQueueEntry(v3 + 400, v46);
  if ( v60 )
    RaidUnitReleaseIrp(a2);
  v49 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v3 + 408));
  *(_QWORD *)(a2 + 56) = 0LL;
  v50 = v49;
  if ( (*(_BYTE *)(v41 + 3) & 0x3F) == 0 )
  {
    v51 = RaidNtStatusToSrbStatus((unsigned int)v13);
    *(_BYTE *)(v41 + 3) = v51;
    if ( (v51 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v41 + 2) == 40 )
        *(_DWORD *)(v44 + 44) = -1073741670;
      else
        *(_DWORD *)(v41 + 64) = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      25LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  RaidUnitEndDeviceBusy(v3, a2);
  RaidCompleteRequestEx((PIRP)a2);
  if ( v50 )
    v52 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
  else
    v52 = (struct _KDPC *)(v3 + 952);
  LOBYTE(v21) = KeInsertQueueDpc(v52, 0LL, 0LL);
  return v21;
}
