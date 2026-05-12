/*
 * XREFs of RaUnitStartIo @ 0x1C0009A00
 * Callers:
 *     <none>
 * Callees:
 *     RaidProcessDeferredItemsWorker @ 0x1C00036C0 (RaidProcessDeferredItemsWorker.c)
 *     RaidUnitReleaseIrp @ 0x1C0007EEC (RaidUnitReleaseIrp.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitClaimIrp @ 0x1C0009E80 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A670 (RaidAdapterPostScatterGatherExecute.c)
 *     StorRemoveIoGatewayItem @ 0x1C000C170 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0010478 (RaidDeleteDeviceQueueEntry.c)
 *     IsUntaggedRequest @ 0x1C001222C (IsUntaggedRequest.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C0017A60 (RaidDmaFlushDmaBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C0024DBC (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0027CF0 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C002E324 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C002E538 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0039944 (RaidNtStatusToSrbStatus.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003CA6C (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  char v4; // r13
  ULONGLONG v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  char v9; // dl
  int v10; // edi
  __int64 v11; // r15
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  char *v18; // rcx
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // rdi
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // ebp
  bool v31; // bp
  __int64 v32; // rcx
  __int64 v33; // rax
  void (__fastcall *v34)(__int64, _QWORD, bool); // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  int v38; // r15d
  unsigned int v39; // r13d
  int v40; // ebp
  int v41; // ecx
  bool v42; // r15
  __int64 *v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  _QWORD *v47; // rdi
  char v48; // al
  char v49; // dl
  char v50; // cl
  __int64 v51; // rsi
  unsigned __int8 v52; // al
  __int64 v53; // rdx
  __int64 v54; // r13
  __int64 v55; // rcx
  unsigned int v56; // edi
  int v57; // r13d
  unsigned int v58; // ebp
  char IsPowerRequired; // al
  BOOL v60; // r15d
  unsigned int v61; // edi
  unsigned int HighestNodeNumber; // r8d
  int v63; // edi
  char v64; // al
  struct _KDPC *v65; // rcx
  int v67; // [rsp+38h] [rbp-80h]
  int v68; // [rsp+60h] [rbp-58h]
  __int64 v69; // [rsp+68h] [rbp-50h]
  char v70; // [rsp+C0h] [rbp+8h]
  int v71; // [rsp+C8h] [rbp+10h]
  int v73; // [rsp+D8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v68 = 0;
  v73 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v8 = *(_QWORD *)(v3 + 24);
  v69 = 0LL;
  v70 = 0;
  *(_BYTE *)(v7 + 3) = 0;
  if ( *(int *)(v8 + 4200) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v8 + 1184)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 4200)) == 1 )
      RaidProcessDeferredItemsWorker(v8 + 1088, *(_QWORD *)(v8 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4200));
  }
  v9 = *(_BYTE *)(v7 + 2);
  if ( v9 != 40 )
  {
    v11 = *(_QWORD *)(v7 + 40);
    v4 = *(_BYTE *)(v7 + 72);
    v10 = *(_DWORD *)(v7 + 12);
    v71 = v10;
    v70 = v4;
    if ( v11 )
      *(_QWORD *)(v7 + 40) = 0LL;
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(v7 + 24);
  v11 = *(_QWORD *)(v7 + 104);
  v71 = v10;
  v69 = v7;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_14;
  v12 = *(_DWORD *)(v7 + 56);
  v13 = 0;
  if ( !v12 )
    goto LABEL_14;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v7 + 4LL * v13 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_82;
    v15 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v14 > (unsigned int)v15 )
      goto LABEL_82;
    v16 = (unsigned int)v14;
    v17 = *(_DWORD *)(v14 + v7);
    if ( v17 == 64 )
    {
      if ( v16 + 40 <= v15 )
      {
        if ( !*(_BYTE *)(v16 + v7 + 10) )
          goto LABEL_14;
LABEL_11:
        v18 = (char *)(v16 + v7 + 24);
        goto LABEL_12;
      }
      goto LABEL_82;
    }
    v46 = v17 - 65;
    if ( v46 )
      break;
    if ( v16 + 56 <= v15 )
    {
      if ( !*(_BYTE *)(v16 + v7 + 10) )
        goto LABEL_14;
      goto LABEL_11;
    }
LABEL_82:
    if ( ++v13 >= v12 )
      goto LABEL_14;
  }
  if ( v46 != 1 || v16 + 40 > v15 )
    goto LABEL_82;
  v18 = (char *)(v16 + v7 + 32);
  if ( !*(_DWORD *)(v16 + v7 + 12) )
    v18 = 0LL;
LABEL_12:
  if ( v18 )
  {
    v4 = *v18;
    v70 = *v18;
  }
LABEL_14:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v9 == 40 )
    {
      v47 = *(_QWORD **)(v7 + 96);
      v69 = v7;
      *(_QWORD *)(v7 + 96) = v47[2];
    }
    else
    {
      v47 = *(_QWORD **)(v7 + 48);
      *(_QWORD *)(v7 + 48) = v47[2];
    }
    if ( v47[1] != -1LL )
      v6 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v3 + 2648)) - v47[1];
    ExFreePoolWithTag(v47, 0x54436152u);
    v10 = v71;
  }
  if ( (*(_BYTE *)(v3 + 154) & 2) == 0 || !(unsigned __int8)RaidIsUnresponsiveBlockedCmd(v7) )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v20 )
    {
      v56 = 0;
      v57 = 0;
      v58 = KeQueryHighestNodeNumber() + 1;
      while ( !v58 )
      {
LABEL_105:
        ++v57;
        v56 = 0;
        if ( v57 == 10 )
        {
          v4 = v70;
          v10 = v71;
          v21 = -1;
          goto LABEL_18;
        }
      }
      while ( 1 )
      {
        v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)v56 << 6)));
        if ( v20 )
          break;
        if ( ++v56 >= v58 )
          goto LABEL_105;
      }
      v4 = v70;
      v10 = v71;
    }
    v21 = *((_DWORD *)&v20->Next + 2);
LABEL_18:
    v73 = 1;
    *a3 = v21;
    v23 = RaidUnitClaimIrp(v3, a2, v11, a3);
    if ( v23 < 0 )
    {
      LOBYTE(v36) = RaUnitReleaseRemoveLock(v3);
      goto LABEL_42;
    }
    v68 = 1;
    if ( !*(_DWORD *)(*(_QWORD *)(v3 + 24) + 2156LL) && v4 != 18 && v4 != -96 )
    {
      LOBYTE(v22) = 37;
      *(_BYTE *)(v7 + 3) = 37;
      LODWORD(v36) = RaidSrbStatusToNtStatus(v22);
      v23 = v36;
      goto LABEL_42;
    }
    if ( *(char *)(v3 + 153) < 0 && *(_DWORD *)(v3 + 196) != 1 )
    {
      IsPowerRequired = RaidSrbIsPowerRequired(v3, v7);
      if ( IsPowerRequired && (v10 & 0x100000) != 0 )
      {
        v23 = -1073741823;
        *(_BYTE *)(v7 + 3) = 36;
        goto LABEL_99;
      }
    }
    v24 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v24 + 2) == 40 )
      v25 = *(_QWORD **)(v24 + 96);
    else
      v25 = *(_QWORD **)(v24 + 48);
    v25[96] = v11;
    v25[82] = RaidUnitCompleteRequest;
    v25[86] = v6;
    v26 = *(_QWORD *)(v3 + 24);
    if ( *(_QWORD *)(v26 + 5696) )
    {
      LODWORD(v36) = RaidAdapterAcquireCryptoKeyResources(v26, v25);
      v23 = v36;
      if ( (_DWORD)v36 == 259 )
        return v36;
      if ( (int)v36 < 0 )
      {
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          LOBYTE(v36) = v69;
          *(_BYTE *)(v69 + 3) = 48;
          *(_DWORD *)(v69 + 44) = v23;
        }
        else
        {
          *(_BYTE *)(v7 + 3) = 48;
          *(_DWORD *)(v7 + 64) = v36;
        }
        goto LABEL_42;
      }
    }
    v27 = *(_QWORD *)(v3 + 24);
    if ( *(_BYTE *)(v27 + 4450) )
    {
      v28 = v25[21];
      v29 = *(unsigned __int8 *)(v28 + 2);
      if ( (_BYTE)v29 == 40 )
        v30 = *(_DWORD *)(v28 + 24);
      else
        v30 = *(_DWORD *)(v28 + 12);
      if ( (*(_BYTE *)(v27 + 4451) & 4) != 0 )
      {
        v31 = (v30 & 0x40) != 0;
        if ( v25[13] )
        {
          if ( v27 != -696 )
          {
            v32 = *(_QWORD *)(v27 + 696);
            if ( v32 )
            {
              v33 = *(_QWORD *)(v32 + 8);
              if ( v33 )
              {
                if ( *(int *)(v27 + 724) >= 3
                  && (v34 = *(void (__fastcall **)(__int64, _QWORD, bool))(v33 + 240)) != 0LL )
                {
                  v34(v32, v25[13], v31);
                }
                else
                {
                  KeFlushIoBuffers(v25[13], v31);
                }
              }
            }
          }
        }
        v35 = v25[17];
        if ( v35 )
          RaidDmaFlushDmaBuffers(v27 + 696, v35, v31);
      }
      else
      {
        if ( v25[17] )
        {
          LODWORD(v36) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v3 + 24), v25);
          goto LABEL_38;
        }
        if ( (v30 & 0xC0) != 0 )
        {
          if ( (_BYTE)v29 == 40 )
          {
            v38 = *(_DWORD *)(v28 + 24);
            v39 = *(_DWORD *)(v28 + 60);
            v40 = *(_DWORD *)(v28 + 20);
          }
          else
          {
            v38 = *(_DWORD *)(v28 + 12);
            v39 = *(_DWORD *)(v28 + 16);
            v40 = (unsigned __int8)v29;
          }
          LODWORD(v36) = *(_DWORD *)(v27 + 524);
          v41 = v38 & 0x40;
          v42 = (v38 & 0x80) != 0;
          if ( (v36 & 8) == 0 && (*(_BYTE *)(v27 + 109) & 2) == 0 )
          {
            LOBYTE(v29) = v41 != 0;
            LOBYTE(v36) = KeFlushIoBuffers(v25[13], v29);
          }
          if ( v40 == 23 )
          {
            v36 = v25[13];
            if ( *(_DWORD *)(v36 + 40) > v39 )
              v39 = *(_DWORD *)(v36 + 40);
          }
          v43 = (__int64 *)(v27 + 696);
          if ( v27 != -696
            && (v44 = *v43) != 0
            && (v36 = *(_QWORD *)(v44 + 8)) != 0
            && (v36 = *(_QWORD *)(v36 + 112)) != 0 )
          {
            LODWORD(v36) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, bool, _QWORD *, int))v36)(
                             v44,
                             *(_QWORD *)(v27 + 8),
                             v25[13],
                             v25[23],
                             v39,
                             RaidpAdapterContinueScatterGather,
                             v25,
                             v42,
                             v25 + 29,
                             424);
            v23 = v36;
          }
          else
          {
            v23 = -1073741811;
          }
          if ( v23 != -1073741789 )
            goto LABEL_39;
          if ( v27 == -696
            || (v45 = *v43) == 0
            || (v36 = *(_QWORD *)(v45 + 8)) == 0
            || (v36 = *(_QWORD *)(v36 + 88)) == 0 )
          {
            v23 = -1073741811;
            goto LABEL_39;
          }
          LOBYTE(v67) = v42;
          LODWORD(v36) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v36)(
                           v45,
                           *(_QWORD *)(v27 + 8),
                           v25[13],
                           v25[23],
                           v39,
                           RaidpAdapterContinueScatterGather,
                           v25,
                           v67);
LABEL_38:
          v23 = v36;
LABEL_39:
          if ( v23 < 0 )
            goto LABEL_99;
          v37 = *(_QWORD *)(v3 + 24);
          if ( *(int *)(v37 + 4200) <= 0 )
          {
            LOWORD(v36) = ExQueryDepthSList((PSLIST_HEADER)(v37 + 1184));
            if ( (_WORD)v36 )
            {
              LODWORD(v36) = _InterlockedIncrement((volatile signed __int32 *)(v37 + 4200));
              if ( (_DWORD)v36 == 1 )
                LOBYTE(v36) = RaidProcessDeferredItemsWorker(v37 + 1088, *(_QWORD *)(v37 + 8));
              _InterlockedDecrement((volatile signed __int32 *)(v37 + 4200));
            }
          }
LABEL_42:
          if ( v23 < 0 )
            goto LABEL_99;
          return v36;
        }
      }
    }
    LODWORD(v36) = RaidAdapterPostScatterGatherExecute(v27, v25);
    goto LABEL_38;
  }
  RaUnitReleaseRemoveLock(v3);
  v48 = -72;
  v49 = *(_BYTE *)(v7 + 3) & 0x80;
  v50 = 56;
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    if ( !v49 )
      v48 = 56;
  }
  else
  {
    if ( v49 )
      v50 = -72;
    v48 = v50;
  }
  *(_BYTE *)(v7 + 3) = v48;
  v23 = -1073740534;
  _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1824));
LABEL_99:
  v51 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v52 = *(_BYTE *)(v51 + 2);
  if ( v52 == 40 )
  {
    v53 = *(unsigned int *)(v51 + 20);
    v54 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v55 = *(unsigned int *)(v51 + 24);
  }
  else
  {
    v55 = *(unsigned int *)(v51 + 12);
    v54 = v69;
    v53 = v52;
  }
  v60 = IsUntaggedRequest(v55, v53) != 0;
  if ( v73 )
  {
    v61 = *a3;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v61 / *(_DWORD *)(v3 + 328) < HighestNodeNumber + 1 )
      HighestNodeNumber = v61 / *(_DWORD *)(v3 + 328);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v3 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v3 + 320) + 16LL * v61));
  }
  RaidDeleteDeviceQueueEntry(v3 + 400, v60);
  if ( v68 )
    RaidUnitReleaseIrp(a2);
  v63 = (unsigned __int8)StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v3 + 408));
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(v51 + 3) & 0x3F) == 0 )
  {
    v64 = RaidNtStatusToSrbStatus((unsigned int)v23);
    *(_BYTE *)(v51 + 3) = v64;
    if ( (v64 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v51 + 2) == 40 )
        *(_DWORD *)(v54 + 44) = -1073741670;
      else
        *(_DWORD *)(v51 + 64) = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      25LL,
      &WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
      *(_QWORD *)(v3 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  RaidUnitEndDeviceBusy(v3, a2);
  RaidCompleteRequestEx((PIRP)a2);
  if ( v63 )
    v65 = (struct _KDPC *)(*(_QWORD *)(v3 + 24) + 1792LL);
  else
    v65 = (struct _KDPC *)(v3 + 952);
  LOBYTE(v36) = KeInsertQueueDpc(v65, 0LL, 0LL);
  return v36;
}
