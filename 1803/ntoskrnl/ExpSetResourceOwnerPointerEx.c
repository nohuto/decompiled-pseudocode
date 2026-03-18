/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x1400880C0
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x140088070 (ExSetResourceOwnerPointer.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400880A0 (ExSetResourceOwnerPointerEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ObpIncrPointerCount @ 0x1400F3900 (ObpIncrPointerCount.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140102960 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1402B1B4C (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, char a3)
{
  bool v6; // r14
  ULONG_PTR CurrentThread; // rbp
  volatile __int64 *v8; // r10
  unsigned int v9; // r13d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  unsigned __int64 v18; // r11
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rsi
  int v26; // r15d
  ULONG_PTR v27; // rax
  ULONG_PTR v28; // rbx
  unsigned int v29; // eax
  __int64 result; // rax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  int v33; // ecx
  __int64 v34; // r10
  __int64 v35; // r9
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v43; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v45; // [rsp+80h] [rbp+8h] BYREF

  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v43 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v42 = 0LL;
  v9 = 65792;
  v45 = 2;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v40 = SchedulerAssist[5];
      SchedulerAssist[5] = v40 + 1;
      if ( v40 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v12 = KiFastAcquireQueuedSpinLockInstrumented(&v42, v8, &v45);
  }
  else
  {
    v12 = 0;
    v13 = _InterlockedExchange64(v8, (__int64)&v42);
    if ( v13 )
    {
      KxWaitForLockOwnerShipWithIrql(&v42, v13, &v45);
      v12 = 1;
    }
  }
  if ( v12 )
  {
    _disable();
    __writecr8(v45);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter1 + 48);
    v15 = BugCheckParameter1 + 48;
    if ( v14 != BugCheckParameter4 )
    {
      v16 = 0LL;
      if ( v14 )
        v15 = 0LL;
      LOBYTE(v16) = v14 != 0;
      v17 = *(_QWORD *)(BugCheckParameter1 + 16);
      v18 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      v19 = v15;
      if ( v17 && (v15 = v17 + 16, v16 < v18) )
      {
        while ( 1 )
        {
          v34 = v19;
          v35 = v19;
          if ( *(_QWORD *)v15 == BugCheckParameter4 )
            break;
          if ( *(_QWORD *)v15 )
          {
            if ( ++v16 == v18 )
              goto LABEL_13;
          }
          else
          {
            v19 = v15;
            if ( v35 )
              v19 = v34;
          }
          v15 += 16LL;
          if ( v15 == v17 + 16LL * *(unsigned int *)(v17 + 8) )
            goto LABEL_13;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v15 - v17) >> 4;
      }
      else
      {
LABEL_13:
        v15 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v20 = 0;
    else
      v20 = *(unsigned __int8 *)(CurrentThread + 649);
    v21 = ExpFindCurrentThread(BugCheckParameter1, CurrentThread, (unsigned int)&v42, 0, 0, v20);
    v25 = (_DWORD *)v21;
    if ( !v21 )
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
    v26 = a3 & 1;
    if ( !v15 )
    {
      if ( v26 )
      {
        v27 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v28 = v27 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v27 - 48);
        ObpIncrPointerCount(v28);
        v25[2] |= 2u;
      }
      else
      {
        v37 = *(_DWORD *)(v21 + 8);
        if ( (v37 & 1) != 0 )
        {
          LOBYTE(v22) = 1;
          PsBoostThreadIoEx(*(_QWORD *)v25, v22, 0LL, 0LL);
          v25[2] &= ~1u;
          v37 = v25[2];
        }
        if ( (v37 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v25 + 1804LL));
          v25[2] &= ~4u;
        }
      }
      *(_QWORD *)v25 = BugCheckParameter4;
      v29 = 25560;
      goto LABEL_24;
    }
    if ( v26 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v36 = *(_DWORD *)(v21 + 8);
      if ( (v36 & 1) != 0 )
      {
        v41 = *(_DWORD *)(v15 + 8);
        if ( (v41 & 1) != 0 )
        {
          LOBYTE(v22) = 1;
          PsBoostThreadIoEx(*(_QWORD *)v25, v22, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v15 + 8) = v41 | 1;
        }
        v25[2] &= ~1u;
        v36 = v25[2];
      }
      if ( (v36 & 4) != 0 )
      {
        v39 = *(_DWORD *)(v15 + 8);
        if ( (v39 & 4) != 0 )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v25 + 1804LL));
        else
          *(_DWORD *)(v15 + 8) = v39 | 4;
        v25[2] &= ~4u;
      }
      if ( (*(_DWORD *)(v15 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)v25, 0x746C6644u);
        *(_DWORD *)(v15 + 8) |= 2u;
      }
    }
    else
    {
      v33 = *(_DWORD *)(v21 + 8);
      if ( (v33 & 1) != 0 )
      {
        LOBYTE(v22) = 1;
        PsBoostThreadIoEx(*(_QWORD *)v21, v22, 0LL, 0LL);
        v25[2] &= ~1u;
        v33 = v25[2];
      }
      if ( (v33 & 4) == 0 )
        goto LABEL_37;
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v25 + 1804LL));
      v25[2] &= ~4u;
    }
    v33 = v25[2];
LABEL_37:
    v29 = 25564;
    *(_DWORD *)(v15 + 8) += v33 & 0xFFFFFFF8;
    v25[2] &= 7u;
    *(_QWORD *)v25 = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_24:
    __incgsdword(v29);
    if ( v6 )
      v9 = 65856;
    goto LABEL_26;
  }
  if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
    && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
      KeBugCheckEx(0x132u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 16), CurrentThread, BugCheckParameter4);
    ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
  }
  else
  {
    v38 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v38 & 1) != 0 )
    {
      LOBYTE(v22) = 1;
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), v22, 0LL, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v38 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v38 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 48) + 1804LL));
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
  __incgsdword(0x63D4u);
  if ( v6 )
    v9 = 65824;
LABEL_26:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v42, retaddr, v23, v24);
    goto LABEL_29;
  }
  _m_prefetchw(&v42);
  result = v42;
  if ( v42 )
    goto LABEL_54;
  result = _InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42);
  if ( (__int64 *)result != &v42 )
  {
    result = KxWaitForLockChainValid(&v42, v22, v23, v24);
LABEL_54:
    v42 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_29:
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      result = (unsigned int)(v32[5] - 1);
      v32[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v32 + 25);
        v23 = *((unsigned __int8 *)v32 + 27);
        if ( !(_BYTE)result && !(_BYTE)v23 )
          result = KiPerformUnboostKick(v31);
      }
    }
  }
  _enable();
  if ( v6 )
    return PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1, v23);
  return result;
}
