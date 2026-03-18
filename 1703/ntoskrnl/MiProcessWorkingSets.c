/*
 * XREFs of MiProcessWorkingSets @ 0x1400830E0
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     MiDrainZeroLookasides @ 0x14001C448 (MiDrainZeroLookasides.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     MiReturnWsToExpansionList @ 0x1400646C4 (MiReturnWsToExpansionList.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     MiLogProcessWorkingSetsStop @ 0x1400836EC (MiLogProcessWorkingSetsStop.c)
 *     MiComputeSystemTrimCriteria @ 0x140083750 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140083B20 (MiComputeAgingPercent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140166550 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x1401FD0EC (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140214A74 (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x1402152D4 (MiOrderTrimList.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  bool v2; // zf
  PRKEVENT v4; // rdi
  _QWORD *v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rdx
  ULONG64 v8; // r8
  const struct _TlgProvider_t *v9; // r9
  __int64 *v10; // rbx
  __int64 v11; // r9
  __int64 **v12; // r14
  int v13; // r12d
  __int16 v14; // dx
  __int64 *v15; // rdi
  __int64 v16; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int8 CurrentIrql; // cl
  BOOL v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 **v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rax
  char v26; // r15
  unsigned int v27; // eax
  int Blink; // r13d
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  struct _LIST_ENTRY *v31; // rax
  __int64 **v33; // rax
  _QWORD *v34; // r8
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r9
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int16 v44; // cx
  __int64 v45; // rax
  __int64 **v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  int v49; // eax
  char v50; // al
  const GUID *v51; // [rsp+20h] [rbp-E0h]
  const GUID *v52; // [rsp+28h] [rbp-D8h]
  int v53; // [rsp+40h] [rbp-C0h]
  __int16 v54; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+40h] [rbp-C0h]
  char v57; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v58; // [rsp+46h] [rbp-BAh]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+6Ch] [rbp-94h]
  unsigned int v63; // [rsp+70h] [rbp-90h]
  _QWORD *v64; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  unsigned int v66; // [rsp+88h] [rbp-78h] BYREF
  int v67; // [rsp+8Ch] [rbp-74h]
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  __int16 *v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  unsigned int *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  __int64 *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  __int64 *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  __int64 *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  __int64 *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int64 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(PRKEVENT *)(a1 + 5544);
  v5 = (_QWORD *)a1;
  Event = v4;
  v59 = a2;
  v64 = (_QWORD *)a1;
  if ( !v2 )
    MiInitializeWorkingSetManagerParameters();
  MiComputeAgingPercent(v5);
  v6 = MiComputeSystemTrimCriteria(v5, a2);
  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 && TlgKeywordOn(qword_14036CFD8, 1uLL) )
  {
    v57 = *(_BYTE *)(a2 + 2);
    v43 = v5[693];
    v66 = v6;
    v75 = v7;
    v77 = 2LL;
    v44 = *(_WORD *)(v43 + 2354);
    v68 = *(_QWORD *)(a2 + 80);
    v69 = *(_QWORD *)(a2 + 72);
    v70 = v5[720];
    v71 = v5[768];
    v72 = v5[782];
    v74 = &v57;
    v76 = &v61;
    v78 = &v66;
    v80 = &v68;
    v82 = &v69;
    v84 = &v70;
    v86 = &v71;
    v88 = &v72;
    v61 = v44;
    v79 = 4LL;
    v81 = 8LL;
    v83 = 8LL;
    v85 = 8LL;
    v87 = 8LL;
    v89 = 8LL;
    TlgWriteEx(v9, &unk_1402AC8F7, v8, (ULONG)v9, v51, v52, 0xAu, &pData);
  }
  ++LODWORD(v4[5].Header.WaitListHead.Flink);
  if ( (v6 & 5) != 0 )
    MiDrainZeroLookasides((__int64)v5, 0LL, 0LL, 0);
  v62 = 0;
  v63 = 0;
  if ( (v6 & 5) != 0 )
    LOBYTE(v4[2].Header.SignalState) = 1;
  if ( (v6 & 2) != 0 )
    ++HIDWORD(v4[3].Header.WaitListHead.Blink);
  v10 = 0LL;
  if ( (v6 & 0x40) != 0 )
  {
    if ( *(_WORD *)&v4[98].Header.Size > 0xAu )
      *(_WORD *)&v4[98].Header.Size = 10;
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    if ( BYTE2(v4[2].Header.SignalState) == 1 )
    {
      v34 = v5 + 694;
      BYTE2(v4[2].Header.SignalState) = 0;
      v35 = (_QWORD *)v5[694];
      if ( v35 != v5 + 694 )
      {
        do
        {
          v36 = v35 - 3;
          v35 = (_QWORD *)*v35;
          if ( (struct _LIST_ENTRY *)v36[12] >= v4[2].Header.WaitListHead.Blink )
          {
            v39 = v36[3];
            v40 = v36 + 3;
            v41 = (_QWORD *)v40[1];
            if ( *(_QWORD **)(v39 + 8) != v40 || (_QWORD *)*v41 != v40 )
              __fastfail(3u);
            *v41 = v39;
            *(_QWORD *)(v39 + 8) = v41;
            v42 = *v34;
            if ( *(_QWORD **)(*v34 + 8LL) != v34 )
              __fastfail(3u);
            *v40 = v42;
            v40[1] = v34;
            *(_QWORD *)(v42 + 8) = v40;
            *v34 = v40;
          }
        }
        while ( v35 != v34 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  }
  v11 = v59;
  v12 = (__int64 **)(v5 + 694);
  BYTE1(v4[2].Header.SignalState) = 1;
  do
  {
LABEL_16:
    v13 = 0;
    v67 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v45 = MiOrderTrimList(v5, MiTrimPassToAge[*(_BYTE *)v11 & 0x7F]);
      v11 = v59;
      *(_QWORD *)(v59 + 104) = v45;
    }
    v14 = ++LOWORD(v4[98].Header.Lock);
    *(_QWORD *)(v11 + 88) = *(_QWORD *)(v11 + 80) - *(_QWORD *)(v11 + 96);
    v58 = v14;
    while ( 1 )
    {
      if ( *v12 == (__int64 *)v12 )
        goto LABEL_56;
      v15 = *v12;
      v16 = **v12;
      if ( (__int64 **)(*v12)[1] != v12 || *(__int64 **)(v16 + 8) != v15 )
        __fastfail(3u);
      *v12 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v12;
      *v15 = 0LL;
      if ( *((_WORD *)v15 - 11) == v14 )
        break;
      *((_WORD *)v15 - 11) = v14;
      if ( (v6 & 0x40) != 0 && (struct _LIST_ENTRY *)v15[9] < Event[2].Header.WaitListHead.Blink )
      {
        v33 = (__int64 **)v12[1];
        if ( *v33 != (__int64 *)v12 )
          __fastfail(3u);
        *v15 = (__int64)v12;
        v15[1] = (__int64)v33;
        *v33 = v15;
        v12[1] = v15;
LABEL_56:
        v5 = v64;
        goto LABEL_43;
      }
      if ( (unsigned __int64)v15[14] > 1 || (v15[21] & 7) != 0 )
      {
        v53 = *((_DWORD *)v15 + 42);
        BYTE1(v53) = BYTE1(v53) & 0xF9 | 2;
        *((_WORD *)v15 + 84) = v53;
        if ( *(_BYTE *)(v11 + 2) == 2 )
        {
          v47 = v15[14];
          v48 = v15[11];
          if ( v47 <= v48 || v47 - v48 < 0x40000 )
            goto LABEL_34;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          v11 = v59;
          goto LABEL_29;
        }
        _m_prefetchw(&LockHandle);
        Next = LockHandle.LockQueue.Next;
        if ( LockHandle.LockQueue.Next )
          goto LABEL_67;
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) != &LockHandle )
        {
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          v11 = v59;
LABEL_67:
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_29:
        __writecr8(LockHandle.OldIrql);
        v13 = MiTrimOrAgeWorkingSet(v15 - 3, v11, v6);
        if ( v13 == 1 )
          *(_BYTE *)(v59 + 4) = 2;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_14036CF80;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_14036CF80);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)&qword_14036CF80, (__int64)&LockHandle) )
        {
          KxWaitForLockOwnerShip(&LockHandle);
        }
LABEL_34:
        v19 = (v6 & 0x40) == 0;
        if ( (v6 & 0x40) != 0 && ((struct _LIST_ENTRY *)v15[9] < Event[2].Header.WaitListHead.Blink || v15[10]) )
          v19 = 1;
        v20 = *((_DWORD *)v15 + 42);
        LOBYTE(v54) = v20;
        if ( v19 )
        {
          HIBYTE(v54) = BYTE1(v20) & 0xF9;
          *((_WORD *)v15 + 84) = v54;
          v21 = *((unsigned __int16 *)v15 + 74);
          v22 = *(_QWORD *)(qword_14036C8F8 + 8 * v21) + 5552LL;
          v23 = *(__int64 ***)(*(_QWORD *)(qword_14036C8F8 + 8 * v21) + 5560LL);
          if ( *v23 != (__int64 *)v22 )
            __fastfail(3u);
          *v15 = v22;
          v15[1] = (__int64)v23;
          *v23 = v15;
          *(_QWORD *)(v22 + 8) = v15;
          v24 = v15[10];
          if ( v24 )
            KeSignalGate(v24, 1);
        }
        else
        {
          HIBYTE(v54) = BYTE1(v20) | 6;
          *((_WORD *)v15 + 84) = v54;
          v15[1] = (__int64)v10;
          v10 = v15 + 1;
        }
        v11 = v59;
        if ( v13 == 1 )
          goto LABEL_56;
        v14 = v58;
      }
      else if ( v15[10] )
      {
        v46 = (__int64 **)v12[1];
        if ( *v46 != (__int64 *)v12 )
          __fastfail(3u);
        *v15 = (__int64)v12;
        v15[1] = (__int64)v46;
        *v46 = v15;
        v12[1] = v15;
      }
      else
      {
        v55 = *((_DWORD *)v15 + 42);
        BYTE1(v55) |= 6u;
        *((_WORD *)v15 + 84) = v55;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeRetryOutswapProcess(v15 - 163);
        KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
        v56 = *((_DWORD *)v15 + 42);
        BYTE1(v56) &= 0xF9u;
        *((_WORD *)v15 + 84) = v56;
        MiReturnWsToExpansionList((__int64)(v15 - 3), 0);
        v14 = v58;
        v11 = v59;
      }
    }
    v25 = *v12;
    if ( (__int64 **)(*v12)[1] != v12 )
      __fastfail(3u);
    v2 = v67 == 0;
    v5 = v64;
    *v15 = (__int64)v25;
    v15[1] = (__int64)v12;
    v25[1] = (__int64)v15;
    *v12 = v15;
    if ( v2 )
      break;
    v49 = MiCheckSystemTrimEndCriteria(v5, v11, &LockHandle);
    v11 = v59;
    v4 = Event;
  }
  while ( !v49 );
LABEL_43:
  if ( (v6 & 0x40) != 0 )
  {
    while ( v10 )
    {
      v37 = *((_DWORD *)v10 + 40);
      v38 = (__int64)(v10 - 4);
      v10 = (__int64 *)*v10;
      *(_WORD *)(v38 + 192) = v37 & 0xF9FF;
      MiReturnWsToExpansionList(v38, 1);
    }
    v11 = v59;
  }
  v4 = Event;
  if ( v13 == 1 )
  {
    v50 = v62;
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v50 & 5) != 0 )
      LOBYTE(v4[2].Header.SignalState) = 0;
  }
  else
  {
    v26 = v6 | v62;
    v62 |= v6;
    v27 = v6 & 0xFFFFFF3C | v63;
    Blink = (int)Event[1].Header.WaitListHead.Blink;
    v63 = v27;
    if ( v27 != Blink )
    {
      if ( (Blink & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      v6 = v27 ^ Blink;
      *(_BYTE *)(v11 + 2) = 7;
      goto LABEL_16;
    }
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v26 & 5) != 0 )
      LOBYTE(v4[2].Header.SignalState) = 0;
    if ( Blink )
    {
      LODWORD(v4[1].Header.WaitListHead.Blink) = 0;
      KeSetEvent(v4, 0, 0);
    }
    if ( (v26 & 0x83) != 0 )
    {
      v29 = (_QWORD *)v59;
      *(_QWORD *)&v4[101].Header.Lock = *(_QWORD *)(v59 + 8);
      v4[101].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v29[2];
      v4[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v29[3];
      *(_QWORD *)&v4[102].Header.Lock = v29[4];
      v4[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v29[5];
      v4[102].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v29[6];
      v30 = v29[7];
      *(_QWORD *)&v4[103].Header.Lock = v30;
      v31 = (struct _LIST_ENTRY *)v29[8];
      v4[103].Header.WaitListHead.Flink = v31;
      v4[100].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v31 + v30);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return MiLogProcessWorkingSetsStop(v5);
}
