/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x1400F1580
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x1400F1560 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x140143DC0 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14001F1A0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x14027E980 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a3,
        ULONG_PTR a4)
{
  char v4; // r12
  bool v7; // r15
  ULONG_PTR CurrentThread; // r14
  volatile signed __int64 *v9; // rcx
  unsigned int v10; // r13d
  char v11; // al
  _QWORD *v12; // rdx
  __int64 v13; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // r10
  unsigned __int64 v16; // rcx
  ULONG_PTR v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  ULONG_PTR v21; // r10
  __int64 v22; // rax
  __int64 result; // rax
  ULONG_PTR v24; // rax
  volatile signed __int64 *v25; // r14
  signed __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v31; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v33; // [rsp+80h] [rbp+8h] BYREF

  v4 = a3;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v9 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v33 = 2;
  v30 = 0LL;
  v10 = 65792;
  v31 = v9;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v11 = KiFastAcquireQueuedSpinLockInstrumented(&v30, v9, &v33);
  }
  else
  {
    v11 = 0;
    v12 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&v30);
    if ( v12 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&v30, v12, &v33);
      v11 = 1;
    }
  }
  if ( v11 )
  {
    _disable();
    __writecr8(v33);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (v4 & 1) != 0 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 48) + 1804LL));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x63D4u);
    if ( v7 )
      v10 = 65824;
  }
  else
  {
    v13 = *(_QWORD *)(BugCheckParameter1 + 48);
    v14 = BugCheckParameter1 + 48;
    if ( v13 == BugCheckParameter4 )
    {
      v17 = BugCheckParameter1 + 48;
    }
    else
    {
      v15 = *(_QWORD *)(BugCheckParameter1 + 16);
      a4 = BugCheckParameter1 + 48;
      if ( v13 )
        a4 = 0LL;
      v16 = v13 != 0;
      a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v15 && (v17 = v15 + 16, v16 < a3) )
      {
        while ( *(_QWORD *)v17 != BugCheckParameter4 )
        {
          if ( *(_QWORD *)v17 )
          {
            if ( ++v16 == a3 )
              goto LABEL_16;
          }
          else if ( !a4 )
          {
            a4 = v17;
          }
          v17 += 16LL;
          if ( v17 == v15 + 16LL * *(unsigned int *)(v15 + 8) )
            goto LABEL_16;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v17 - v15) >> 4;
      }
      else
      {
LABEL_16:
        v17 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v18 = 0;
    else
      v18 = *(unsigned __int8 *)(CurrentThread + 649);
    v19 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 != CurrentThread )
    {
      v20 = 0LL;
      if ( v19 )
        v14 = 0LL;
      LOBYTE(v20) = v19 != 0;
      v21 = v14;
      if ( !v18
        || (v22 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v18 >= *(_DWORD *)(v22 + 8)
        || (v14 = v22 + 16LL * v18, *(_QWORD *)v14 != CurrentThread) )
      {
        a4 = *(_QWORD *)(BugCheckParameter1 + 16);
        v27 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !a4 || (a3 = a4 + 16LL * *(unsigned int *)(a4 + 8), v14 = a4 + 16, v20 >= v27) )
LABEL_88:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, a4, 4uLL);
        while ( *(_QWORD *)v14 != CurrentThread )
        {
          if ( *(_QWORD *)v14 )
          {
            if ( ++v20 == v27 )
              goto LABEL_88;
          }
          else if ( !v21 )
          {
            v21 = v14;
          }
          v14 += 16LL;
          if ( v14 == a3 )
            goto LABEL_88;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v14 - a4) >> 4;
      }
    }
    if ( v17 )
    {
      if ( (v4 & 1) != 0 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
        {
          v28 = *(_DWORD *)(v17 + 8);
          if ( (v28 & 1) != 0 )
            PsBoostThreadIoEx(*(_QWORD *)v14, 1, 0, 0LL);
          else
            *(_DWORD *)(v17 + 8) = v28 | 1;
          *(_DWORD *)(v14 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v14 + 8) & 4) != 0 )
        {
          v29 = *(_DWORD *)(v17 + 8);
          if ( (v29 & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v14 + 1804LL));
          else
            *(_DWORD *)(v17 + 8) = v29 | 4;
          *(_DWORD *)(v14 + 8) &= ~4u;
        }
        if ( (*(_DWORD *)(v17 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v14, 0x746C6644u);
          *(_DWORD *)(v17 + 8) |= 2u;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v14, 1, 0, 0LL);
          *(_DWORD *)(v14 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v14 + 8) & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v14 + 1804LL));
          *(_DWORD *)(v14 + 8) &= ~4u;
        }
      }
      *(_DWORD *)(v17 + 8) += *(_DWORD *)(v14 + 8) & 0xFFFFFFF8;
      *(_DWORD *)(v14 + 8) &= 7u;
      *(_QWORD *)v14 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
      __incgsdword(0x63DCu);
    }
    else
    {
      if ( (v4 & 1) != 0 )
      {
        v24 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v25 = (volatile signed __int64 *)(v24 - 48);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v24 - 48);
        v26 = _InterlockedIncrement64(v25);
        if ( v26 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v25 + 6), 0x10uLL, v26);
        *(_DWORD *)(v14 + 8) |= 2u;
      }
      else
      {
        if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v14, 1, 0, 0LL);
          *(_DWORD *)(v14 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v14 + 8) & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v14 + 1804LL));
          *(_DWORD *)(v14 + 8) &= ~4u;
        }
      }
      *(_QWORD *)v14 = BugCheckParameter4;
      __incgsdword(0x63D8u);
    }
    if ( v7 )
      v10 = 65856;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v30, retaddr);
  }
  else
  {
    _m_prefetchw(&v30);
    result = v30;
    if ( !v30 )
    {
      result = _InterlockedCompareExchange64(v31, 0LL, (signed __int64)&v30);
      if ( (__int64 *)result == &v30 )
        goto LABEL_38;
      result = KxWaitForLockChainValid(&v30);
    }
    v30 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_38:
  _enable();
  if ( v7 )
    return PerfLogExecutiveResourceSetOwnerPointer(v10, BugCheckParameter1, a3, a4);
  return result;
}
