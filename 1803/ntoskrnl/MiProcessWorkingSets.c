/*
 * XREFs of MiProcessWorkingSets @ 0x14000A690
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnWsToExpansionList @ 0x14006A984 (MiReturnWsToExpansionList.c)
 *     MiLogProcessWorkingSetsStop @ 0x14006F060 (MiLogProcessWorkingSetsStop.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x14007A058 (_TlgWriteEx.c)
 *     MiComputeSystemTrimCriteria @ 0x140081620 (MiComputeSystemTrimCriteria.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     MiDrainZeroLookasides @ 0x1400B1B20 (MiDrainZeroLookasides.c)
 *     MiComputeAgingPercent @ 0x1400BB4D4 (MiComputeAgingPercent.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140184940 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x140240590 (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140259334 (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x140259ADC (MiOrderTrimList.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  bool v2; // zf
  PRKEVENT v4; // rsi
  _QWORD *v5; // r14
  unsigned int v6; // r13d
  _QWORD *v7; // rbx
  __int64 v8; // r10
  __int64 **v9; // r15
  __int64 v10; // r9
  int v11; // r12d
  KSPIN_LOCK *v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v20; // rdx
  _DWORD *v21; // rcx
  int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 **v26; // rax
  __int64 v27; // rcx
  __int64 **v28; // rax
  _QWORD *v29; // rdx
  char v30; // di
  unsigned int v31; // eax
  int Blink; // r13d
  __int64 *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rdx
  struct _LIST_ENTRY *v37; // rax
  __int64 v38; // rdx
  ULONG64 v39; // r8
  const struct _TlgProvider_t *v40; // r9
  __int64 v41; // r10
  _QWORD *v42; // rcx
  _QWORD *v43; // r8
  _QWORD *v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // r9
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 **v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  const GUID *v57; // [rsp+20h] [rbp-E0h]
  const GUID *v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+40h] [rbp-C0h]
  __int16 v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+40h] [rbp-C0h]
  int v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v65; // [rsp+46h] [rbp-BAh]
  __int64 v66; // [rsp+48h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v68; // [rsp+68h] [rbp-98h] BYREF
  int v69; // [rsp+6Ch] [rbp-94h]
  unsigned int v70; // [rsp+70h] [rbp-90h]
  _QWORD *v71; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  unsigned int v73; // [rsp+88h] [rbp-78h] BYREF
  int v74; // [rsp+8Ch] [rbp-74h]
  __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v81; // [rsp+E0h] [rbp-20h]
  __int64 v82; // [rsp+E8h] [rbp-18h]
  __int16 *v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  unsigned int *v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  __int64 *v87; // [rsp+110h] [rbp+10h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  __int64 *v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  __int64 *v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  __int64 *v93; // [rsp+140h] [rbp+40h]
  __int64 v94; // [rsp+148h] [rbp+48h]
  __int64 *v95; // [rsp+150h] [rbp+50h]
  __int64 v96; // [rsp+158h] [rbp+58h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(PRKEVENT *)(a1 + 6768);
  v5 = (_QWORD *)a1;
  Event = v4;
  v66 = a2;
  v71 = (_QWORD *)a1;
  if ( !v2 )
    MiInitializeWorkingSetManagerParameters();
  MiComputeAgingPercent(v5);
  v6 = MiComputeSystemTrimCriteria(v5, a2);
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    v64 = *(_BYTE *)(a2 + 2);
    v68 = *(_WORD *)(v41 + 2354);
    v75 = *(_QWORD *)(a2 + 80);
    v76 = *(_QWORD *)(a2 + 72);
    v77 = v5[880];
    v78 = v5[928];
    v79 = v5[942];
    v81 = &v64;
    v83 = &v68;
    v85 = &v73;
    v87 = &v75;
    v89 = &v76;
    v91 = &v77;
    v93 = &v78;
    v95 = &v79;
    v73 = v6;
    v82 = v38;
    v84 = 2LL;
    v86 = 4LL;
    v88 = 8LL;
    v90 = 8LL;
    v92 = 8LL;
    v94 = 8LL;
    v96 = 8LL;
    TlgWriteEx(v40, &unk_14030A16E, v39, (ULONG)v40, v57, v58, 0xAu, &pData);
  }
  if ( (v6 & 5) != 0 )
    MiDrainZeroLookasides(v5, 0LL, 0LL, 0LL);
  v69 = 0;
  v70 = 0;
  if ( (v6 & 5) != 0 )
    LOBYTE(v4[2].Header.SignalState) = 1;
  if ( (v6 & 2) != 0 )
    ++HIDWORD(v4[3].Header.WaitListHead.Blink);
  v7 = 0LL;
  if ( (v6 & 0x40) != 0 )
  {
    if ( *(_WORD *)&v4[98].Header.Size > 0xAu )
      *(_WORD *)&v4[98].Header.Size = 10;
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    if ( BYTE2(v4[2].Header.SignalState) == 1 )
    {
      v43 = v5 + 847;
      BYTE2(v4[2].Header.SignalState) = 0;
      v44 = (_QWORD *)v5[847];
      if ( v44 != v5 + 847 )
      {
        do
        {
          v45 = v44 - 3;
          v44 = (_QWORD *)*v44;
          if ( (struct _LIST_ENTRY *)v45[12] >= v4[2].Header.WaitListHead.Blink )
          {
            v46 = v45[3];
            v47 = v45 + 3;
            v48 = (_QWORD *)v47[1];
            if ( *(_QWORD **)(v46 + 8) != v47 || (_QWORD *)*v48 != v47 )
              __fastfail(3u);
            *v48 = v46;
            *(_QWORD *)(v46 + 8) = v48;
            v49 = *v43;
            if ( *(_QWORD **)(*v43 + 8LL) != v43 )
              __fastfail(3u);
            *v47 = v49;
            v47[1] = v43;
            *(_QWORD *)(v49 + 8) = v47;
            *v43 = v47;
          }
        }
        while ( v44 != v43 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  }
  v8 = v66;
  v9 = (__int64 **)(v5 + 847);
  v10 = 0LL;
  BYTE1(v4[2].Header.SignalState) = 1;
  do
  {
LABEL_16:
    v11 = 0;
    v12 = (KSPIN_LOCK *)(v6 & 1);
    v74 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v50 = MiOrderTrimList(v5, MiTrimPassToAge[*(_BYTE *)v8 & 0x7F], v12, 0LL);
      v8 = v66;
      v10 = 0LL;
      *(_QWORD *)(v66 + 104) = v50;
    }
    v13 = (unsigned __int16)++LOWORD(v4[98].Header.Lock);
    *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80) - *(_QWORD *)(v8 + 96);
    v65 = v13;
    while ( 1 )
    {
      v14 = *v9;
      if ( *v9 == (__int64 *)v9 )
        goto LABEL_47;
      v15 = *v14;
      if ( (__int64 **)v14[1] != v9 || *(__int64 **)(v15 + 8) != v14 )
        __fastfail(3u);
      *v9 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v9;
      *v14 = 0LL;
      if ( *((_WORD *)v14 + 74) == (_WORD)v13 )
        break;
      *((_WORD *)v14 + 74) = v13;
      if ( (v6 & 0x40) != 0 && (struct _LIST_ENTRY *)v14[9] < Event[2].Header.WaitListHead.Blink )
      {
        v28 = (__int64 **)v9[1];
        if ( *v28 != (__int64 *)v9 )
          __fastfail(3u);
        *v14 = (__int64)v9;
        v14[1] = (__int64)v28;
        *v28 = v14;
        v9[1] = v14;
LABEL_47:
        v5 = v71;
        goto LABEL_48;
      }
      if ( (unsigned __int64)v14[14] > 1 || (v14[20] & 7) != 0 )
      {
        v59 = *((_DWORD *)v14 + 40);
        BYTE1(v59) = BYTE1(v59) & 0xF9 | 2;
        *((_WORD *)v14 + 80) = v59;
        if ( *(_BYTE *)(v8 + 2) == 2 )
        {
          v52 = v14[14];
          v53 = v14[11];
          if ( v52 <= v53 || v52 - v53 < 0x40000 )
            goto LABEL_36;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, v12, 0LL);
          v8 = v66;
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_29;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v13, v12, 0LL);
            v8 = v66;
            v10 = 0LL;
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_29:
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v54 = SchedulerAssist[5] - 1;
            SchedulerAssist[5] = v54;
            if ( !v54 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        __writecr8(LockHandle.OldIrql);
        v11 = MiTrimOrAgeWorkingSet(v14 - 3, v8, v6, v10);
        if ( v11 == 1 )
          *(_BYTE *)(v66 + 4) = 2;
        v12 = &qword_1403CC4C0;
        LockHandle.LockQueue.Lock = &qword_1403CC4C0;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = CurrentIrql;
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v55 = v21[5];
            v21[5] = v55 + 1;
            if ( v55 == -1 )
            {
              if ( !*((_BYTE *)v21 + 25) && !*((_BYTE *)v21 + 27) )
                KiPerformUnboostKick(v20);
              v12 = &qword_1403CC4C0;
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_1403CC4C0);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)&qword_1403CC4C0, (__int64)&LockHandle) )
        {
          KxWaitForLockOwnerShip(&LockHandle);
        }
LABEL_36:
        if ( (v6 & 0x40) == 0 || (v22 = 0, (struct _LIST_ENTRY *)v14[9] < Event[2].Header.WaitListHead.Blink) || v14[10] )
          v22 = 1;
        v23 = *((_DWORD *)v14 + 40);
        LOBYTE(v60) = v23;
        if ( v22 )
        {
          HIBYTE(v60) = BYTE1(v23) & 0xF9;
          *((_WORD *)v14 + 80) = v60;
          v24 = *((unsigned __int16 *)v14 + 75);
          v25 = *(_QWORD *)(qword_1403CBD88 + 8 * v24) + 6776LL;
          v26 = *(__int64 ***)(*(_QWORD *)(qword_1403CBD88 + 8 * v24) + 6784LL);
          if ( *v26 != (__int64 *)v25 )
            __fastfail(3u);
          *v14 = v25;
          v14[1] = (__int64)v26;
          *v26 = v14;
          *(_QWORD *)(v25 + 8) = v14;
          v27 = v14[10];
          if ( v27 )
            KeSignalGate(v27, 1LL);
        }
        else
        {
          HIBYTE(v60) = BYTE1(v23) | 6;
          *((_WORD *)v14 + 80) = v60;
          v14[1] = (__int64)v7;
          v7 = v14 + 1;
        }
        v8 = v66;
        v10 = 0LL;
        if ( v11 == 1 )
          goto LABEL_47;
        v13 = v65;
      }
      else if ( v14[10] )
      {
        v51 = (__int64 **)v9[1];
        if ( *v51 != (__int64 *)v9 )
          __fastfail(3u);
        *v14 = (__int64)v9;
        v14[1] = (__int64)v51;
        *v51 = v14;
        v9[1] = v14;
      }
      else
      {
        v62 = *((_DWORD *)v14 + 40);
        BYTE1(v62) |= 6u;
        *((_WORD *)v14 + 80) = v62;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeRetryOutswapProcess(v14 - 163);
        KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
        v63 = *((_DWORD *)v14 + 40);
        BYTE1(v63) &= 0xF9u;
        *((_WORD *)v14 + 80) = v63;
        MiReturnWsToExpansionList(v14 - 3, 0LL);
        v13 = v65;
        v10 = 0LL;
        v8 = v66;
      }
    }
    v34 = *v9;
    if ( (__int64 **)(*v9)[1] != v9 )
      __fastfail(3u);
    v2 = v74 == 0;
    v5 = v71;
    *v14 = (__int64)v34;
    v14[1] = (__int64)v9;
    v34[1] = (__int64)v14;
    *v9 = v14;
    if ( v2 )
      break;
    v56 = MiCheckSystemTrimEndCriteria(v5, v8, &LockHandle, 0LL);
    v8 = v66;
    v10 = 0LL;
    v4 = Event;
  }
  while ( !v56 );
LABEL_48:
  if ( (v6 & 0x40) != 0 )
  {
    while ( 1 )
    {
      v29 = v7;
      if ( !v7 )
        break;
      v42 = v7 - 4;
      v7 = (_QWORD *)*v7;
      v61 = *((_DWORD *)v29 + 38);
      BYTE1(v61) &= 0xF9u;
      *((_WORD *)v29 + 76) = v61;
      MiReturnWsToExpansionList(v42, 1LL);
    }
    v8 = v66;
    v10 = 0LL;
  }
  v4 = Event;
  v30 = v6 | v69;
  v69 |= v6;
  if ( v11 == 1 )
  {
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v30 & 5) != 0 )
      LOBYTE(v4[2].Header.SignalState) = 0;
  }
  else
  {
    v31 = v6 & 0xFFFFFF3C | v70;
    Blink = (int)Event[1].Header.WaitListHead.Blink;
    v70 = v31;
    if ( v31 != Blink )
    {
      v6 = v31 ^ Blink;
      if ( (v6 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v8 + 2) = 7;
      goto LABEL_16;
    }
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v30 & 5) != 0 )
      LOBYTE(v4[2].Header.SignalState) = 0;
    if ( Blink )
    {
      LODWORD(v4[1].Header.WaitListHead.Blink) = 0;
      KeSetEvent(v4, 0, 0);
    }
    if ( (v30 & 0x83) != 0 )
    {
      v35 = (_QWORD *)v66;
      *(_QWORD *)&v4[101].Header.Lock = *(_QWORD *)(v66 + 8);
      v4[101].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v35[2];
      v4[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v35[3];
      *(_QWORD *)&v4[102].Header.Lock = v35[4];
      v4[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v35[5];
      v4[102].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v35[6];
      v36 = v35[7];
      *(_QWORD *)&v4[103].Header.Lock = v36;
      v37 = (struct _LIST_ENTRY *)v35[8];
      v4[103].Header.WaitListHead.Flink = v37;
      v4[100].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v37 + v36);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return MiLogProcessWorkingSetsStop(v5);
}
