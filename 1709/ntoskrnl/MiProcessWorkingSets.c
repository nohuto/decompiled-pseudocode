/*
 * XREFs of MiProcessWorkingSets @ 0x14009FE30
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x1400147A4 (MiReturnWsToExpansionList.c)
 *     MiDrainZeroLookasides @ 0x140031040 (MiDrainZeroLookasides.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStop @ 0x1400BA29C (MiLogProcessWorkingSetsStop.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiComputeSystemTrimCriteria @ 0x1400F4B60 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1400F4F08 (MiComputeAgingPercent.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140159EF4 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeRetryOutswapProcess @ 0x140202F18 (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14021D020 (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x14021D9B0 (MiOrderTrimList.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  bool v2; // zf
  PRKEVENT v4; // rdi
  _QWORD *v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // rdx
  ULONG64 v8; // r8
  const struct _TlgProvider_t *v9; // r9
  _QWORD *v10; // rbx
  __int64 v11; // r9
  __int64 **v12; // rsi
  int v13; // r12d
  __int16 v14; // dx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 Next; // rax
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v19; // rdx
  BOOL v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 **v24; // rax
  __int64 v25; // rcx
  __int64 **v26; // rax
  _QWORD *v27; // rdx
  char v28; // r15
  unsigned int v29; // eax
  int Blink; // r13d
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _LIST_ENTRY *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // r8
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
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
  const GUID *v50; // [rsp+20h] [rbp-E0h]
  const GUID *v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+40h] [rbp-C0h]
  __int16 v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+40h] [rbp-C0h]
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
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(PRKEVENT *)(a1 + 5680);
  v5 = (_QWORD *)a1;
  Event = v4;
  v59 = a2;
  v64 = (_QWORD *)a1;
  if ( !v2 )
    MiInitializeWorkingSetManagerParameters();
  MiComputeAgingPercent(v5);
  v6 = MiComputeSystemTrimCriteria(v5, a2);
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    v57 = *(_BYTE *)(a2 + 2);
    v43 = v5[710];
    v66 = v6;
    v75 = v7;
    v77 = 2LL;
    v44 = *(_WORD *)(v43 + 2354);
    v68 = *(_QWORD *)(a2 + 80);
    v69 = *(_QWORD *)(a2 + 72);
    v70 = v5[744];
    v71 = v5[792];
    v72 = v5[806];
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
    TlgWriteEx(v9, &unk_1402D0834, v8, (ULONG)v9, v50, v51, 0xAu, &pData);
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
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    if ( BYTE2(v4[2].Header.SignalState) == 1 )
    {
      v36 = v5 + 711;
      BYTE2(v4[2].Header.SignalState) = 0;
      v37 = (_QWORD *)v5[711];
      if ( v37 != v5 + 711 )
      {
        do
        {
          v38 = v37 - 3;
          v37 = (_QWORD *)*v37;
          if ( (struct _LIST_ENTRY *)v38[12] >= v4[2].Header.WaitListHead.Blink )
          {
            v39 = v38[3];
            v40 = v38 + 3;
            if ( *(_QWORD **)(v39 + 8) != v40 || (v41 = (_QWORD *)v40[1], (_QWORD *)*v41 != v40) )
              __fastfail(3u);
            *v41 = v39;
            *(_QWORD *)(v39 + 8) = v41;
            v42 = *v36;
            if ( *(_QWORD **)(*v36 + 8LL) != v36 )
              __fastfail(3u);
            *v40 = v42;
            v40[1] = v36;
            *(_QWORD *)(v42 + 8) = v40;
            *v36 = v40;
          }
        }
        while ( v37 != v36 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  }
  v11 = v59;
  v12 = (__int64 **)(v5 + 711);
  BYTE1(v4[2].Header.SignalState) = 1;
  do
  {
LABEL_18:
    v13 = 0;
    v67 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v45 = MiOrderTrimList(v5, (unsigned __int8)MiTrimPassToAge[*(_BYTE *)v11 & 0x7F]);
      v11 = v59;
      *(_QWORD *)(v59 + 104) = v45;
    }
    v14 = ++LOWORD(v4[98].Header.Lock);
    *(_QWORD *)(v11 + 88) = *(_QWORD *)(v11 + 80) - *(_QWORD *)(v11 + 96);
    v58 = v14;
    while ( 1 )
    {
      if ( *v12 == (__int64 *)v12 )
      {
LABEL_93:
        v5 = v64;
        goto LABEL_46;
      }
      v15 = *v12;
      if ( (__int64 **)(*v12)[1] != v12 || (v16 = *v15, *(__int64 **)(*v15 + 8) != v15) )
        __fastfail(3u);
      *v12 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v12;
      *v15 = 0LL;
      if ( *((_WORD *)v15 - 11) == v14 )
        break;
      *((_WORD *)v15 - 11) = v14;
      if ( (v6 & 0x40) != 0 && (struct _LIST_ENTRY *)v15[9] < Event[2].Header.WaitListHead.Blink )
      {
        v26 = (__int64 **)v12[1];
        if ( *v26 != (__int64 *)v12 )
          __fastfail(3u);
        v5 = v64;
        *v15 = (__int64)v12;
        v15[1] = (__int64)v26;
        *v26 = v15;
        v12[1] = v15;
        goto LABEL_46;
      }
      if ( (unsigned __int64)v15[14] > 1 || (v15[21] & 7) != 0 )
      {
        v52 = *((_DWORD *)v15 + 42);
        BYTE1(v52) = BYTE1(v52) & 0xF9 | 2;
        *((_WORD *)v15 + 84) = v52;
        if ( *(_BYTE *)(v11 + 2) == 2 )
        {
          v47 = v15[14];
          v48 = v15[11];
          if ( v47 <= v48 || v47 - v48 < 0x40000 )
            goto LABEL_36;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          v11 = v59;
          goto LABEL_31;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( LockHandle.LockQueue.Next )
          goto LABEL_68;
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) != &LockHandle )
        {
          Next = KxWaitForLockChainValid(&LockHandle);
          v11 = v59;
LABEL_68:
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
LABEL_31:
        __writecr8(LockHandle.OldIrql);
        v13 = MiTrimOrAgeWorkingSet((__int64)(v15 - 3), v11, v6);
        if ( v13 == 1 )
          *(_BYTE *)(v59 + 4) = 2;
        LockHandle.LockQueue.Lock = &qword_140389240;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_140389240);
        }
        else
        {
          v19 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_140389240, (__int64)&LockHandle);
          if ( v19 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v19);
        }
LABEL_36:
        v20 = (v6 & 0x40) == 0;
        if ( (v6 & 0x40) != 0 && ((struct _LIST_ENTRY *)v15[9] < Event[2].Header.WaitListHead.Blink || v15[10]) )
          v20 = 1;
        v21 = *((_DWORD *)v15 + 42);
        LOBYTE(v53) = v21;
        if ( v20 )
        {
          HIBYTE(v53) = BYTE1(v21) & 0xF9;
          *((_WORD *)v15 + 84) = v53;
          v22 = *((unsigned __int16 *)v15 + 74);
          v23 = *(_QWORD *)(qword_140388AF0 + 8 * v22) + 5688LL;
          v24 = *(__int64 ***)(*(_QWORD *)(qword_140388AF0 + 8 * v22) + 5696LL);
          if ( *v24 != (__int64 *)v23 )
            __fastfail(3u);
          *v15 = v23;
          v15[1] = (__int64)v24;
          *v24 = v15;
          *(_QWORD *)(v23 + 8) = v15;
          v25 = v15[10];
          if ( v25 )
            KeSignalGate(v25, 1LL);
        }
        else
        {
          HIBYTE(v53) = BYTE1(v21) | 6;
          *((_WORD *)v15 + 84) = v53;
          v15[1] = (__int64)v10;
          v10 = v15 + 1;
        }
        v11 = v59;
        if ( v13 == 1 )
          goto LABEL_93;
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
        KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
        v56 = *((_DWORD *)v15 + 42);
        BYTE1(v56) &= 0xF9u;
        *((_WORD *)v15 + 84) = v56;
        MiReturnWsToExpansionList((__int64)(v15 - 3), 0);
        v14 = v58;
        v11 = v59;
      }
    }
    v32 = (__int64)*v12;
    if ( (__int64 **)(*v12)[1] != v12 )
      __fastfail(3u);
    v5 = v64;
    *v15 = v32;
    v15[1] = (__int64)v12;
    *(_QWORD *)(v32 + 8) = v15;
    *v12 = v15;
    if ( !v67 )
      break;
    v49 = MiCheckSystemTrimEndCriteria(v5, v11, &LockHandle);
    v11 = v59;
    v4 = Event;
  }
  while ( !v49 );
LABEL_46:
  if ( (v6 & 0x40) != 0 )
  {
    while ( 1 )
    {
      v27 = v10;
      if ( !v10 )
        break;
      v35 = (__int64)(v10 - 4);
      v10 = (_QWORD *)*v10;
      v54 = *((_DWORD *)v27 + 40);
      BYTE1(v54) &= 0xF9u;
      *((_WORD *)v27 + 80) = v54;
      MiReturnWsToExpansionList(v35, 1);
    }
    v11 = v59;
  }
  v4 = Event;
  v28 = v6 | v62;
  v62 |= v6;
  if ( v13 == 1 )
  {
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v28 & 5) != 0 )
      LOBYTE(v4[2].Header.SignalState) = 0;
  }
  else
  {
    v29 = v6 & 0xFFFFFF3C | v63;
    Blink = (int)Event[1].Header.WaitListHead.Blink;
    v63 = v29;
    if ( v29 != Blink )
    {
      v6 = v29 ^ Blink;
      if ( (v6 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v11 + 2) = 7;
      goto LABEL_18;
    }
    BYTE1(Event[2].Header.SignalState) = 0;
    if ( (v28 & 5) != 0 )
      LOBYTE(v4[2].Header.SignalState) = 0;
    if ( Blink )
    {
      LODWORD(v4[1].Header.WaitListHead.Blink) = 0;
      KeSetEvent(v4, 0, 0);
      v11 = v59;
    }
    if ( (v28 & 0x83) != 0 )
    {
      *(_QWORD *)&v4[101].Header.Lock = *(_QWORD *)(v11 + 8);
      v4[101].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(v11 + 16);
      v4[101].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(v11 + 24);
      *(_QWORD *)&v4[102].Header.Lock = *(_QWORD *)(v11 + 32);
      v4[102].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(v11 + 40);
      v4[102].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(v11 + 48);
      v33 = *(_QWORD *)(v11 + 56);
      *(_QWORD *)&v4[103].Header.Lock = v33;
      v34 = *(struct _LIST_ENTRY **)(v11 + 64);
      v4[103].Header.WaitListHead.Flink = v34;
      v4[100].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v34 + v33);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return MiLogProcessWorkingSetsStop(v5);
}
