/*
 * XREFs of ExDeferredFreePool @ 0x1402B2010
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall ExDeferredFreePool(_DWORD *a1, int a2)
{
  signed __int64 v3; // rbp
  int v4; // esi
  _QWORD *v5; // r14
  volatile __int64 *v6; // r15
  int v7; // r12d
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  signed __int64 v10; // r13
  __int64 v11; // rdx
  ULONG_PTR v12; // r8
  ULONG_PTR v13; // r9
  ULONG_PTR BugCheckParameter4; // rax
  char v15; // bl
  int v16; // r11d
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  _DWORD *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  __int64 v24; // r10
  _QWORD *v25; // r9
  char v26; // al
  __int64 v27; // r10
  _QWORD *v28; // r9
  unsigned __int8 CurrentIrql; // al
  __int64 Next; // rax
  _QWORD *v31; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v34; // [rsp+80h] [rbp+8h]

  if ( _InterlockedIncrement(a1 + 66) != 1 && !a2 )
  {
    _InterlockedDecrement(a1 + 66);
    return;
  }
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v34 = 0;
  _m_prefetchw(a1);
  v6 = (volatile __int64 *)(a1 + 2);
  v7 = *a1 & 1;
  if ( v7 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 2));
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  }
  else
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 2);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v6);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
    }
  }
  v9 = (__int64 *)*((_QWORD *)a1 + 32);
  if ( !v9 )
  {
    _InterlockedDecrement(a1 + 66);
    if ( v7 )
    {
      LOBYTE(v8) = 1;
      PsBoostThreadIo((__int64)KeGetCurrentThread(), (__int64)v8);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)v6);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    return;
  }
  while ( 1 )
  {
    v10 = (signed __int64)v9;
    while ( 1 )
    {
      v11 = *v9;
      v12 = (ULONG_PTR)(v9 - 2);
      ++v4;
      v13 = *(v9 - 1);
      BugCheckParameter4 = (unsigned __int64)(v9 - 2) ^ ExpPoolQuotaCookie;
      if ( v13 != BugCheckParameter4 )
        KeBugCheckEx(0x19u, 0xDuLL, v12, v13, BugCheckParameter4);
      v15 = *(_BYTE *)(v12 + 1);
      v16 = 0;
      _InterlockedIncrement(a1 + 32);
      _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 19, 16LL * (unsigned __int8)*(_WORD *)(v12 + 2));
      v17 = v12 + 16LL * (unsigned __int8)*(_WORD *)(v12 + 2);
      if ( (v17 & 0xFFF) != 0 && !*(_BYTE *)(v17 + 3) )
      {
        v16 = 1;
        if ( *(_BYTE *)(v17 + 2) != 1 )
        {
          v27 = *(_QWORD *)(v17 + 16);
          if ( *(_QWORD *)(v27 + 8) != v17 + 16 || (v28 = *(_QWORD **)(v17 + 24), *v28 != v17 + 16) )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
        }
        *(_BYTE *)(v12 + 2) += *(_BYTE *)(v17 + 2);
      }
      if ( (unsigned __int8)*(_WORD *)v12 )
      {
        v18 = v12 - 16LL * (unsigned __int8)*(_WORD *)v12;
        if ( !*(_BYTE *)(v18 + 3) )
        {
          v16 = 1;
          if ( *(_BYTE *)(v18 + 2) != 1 )
          {
            v24 = *(_QWORD *)(v18 + 16);
            if ( *(_QWORD *)(v24 + 8) != v18 + 16 || (v25 = *(_QWORD **)(v18 + 24), *v25 != v18 + 16) )
              __fastfail(3u);
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
          }
          v26 = *(_BYTE *)(v12 + 2);
          v12 = v18;
          *(_BYTE *)(v18 + 2) += v26;
        }
      }
      if ( (v12 & 0xFFF) != 0 || (((_WORD)v12 + 16 * *(_WORD *)(v12 + 2)) & 0xFFF) != 0 )
      {
        *(_BYTE *)(v12 + 3) = 0;
        v19 = (unsigned __int8)*(_WORD *)(v12 + 2);
        *(_BYTE *)(v12 + 1) = v15;
        if ( v16 )
        {
          v23 = (_BYTE *)(v12 + 16 * v19);
          if ( ((unsigned __int16)v23 & 0xFFF) != 0 )
            *v23 = v19;
        }
        v20 = (_QWORD *)(v12 + 16);
        v21 = &a1[4 * (unsigned int)(v19 - 1) + 80];
        v22 = *(_QWORD *)v21;
        if ( *(_DWORD **)(*(_QWORD *)v21 + 8LL) != v21 )
          __fastfail(3u);
        *v20 = v22;
        v20[1] = v21;
        *(_QWORD *)(v22 + 8) = v20;
        *(_QWORD *)v21 = v20;
      }
      else
      {
        ++v34;
        *(_QWORD *)v12 = v5;
        v5 = (_QWORD *)v12;
      }
      if ( v11 == v3 )
        break;
      v9 = (__int64 *)v11;
    }
    v9 = (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)a1 + 32, 0LL, v10);
    if ( (__int64 *)v10 == v9 )
      break;
    v3 = v10;
  }
  _InterlockedDecrement(a1 + 66);
  if ( !v7 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
      goto LABEL_43;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_43:
        __writecr8(LockHandle.OldIrql);
        goto LABEL_34;
      }
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_43;
  }
  LOBYTE(v11) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v11);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)v6);
LABEL_34:
  if ( v5 )
  {
    do
    {
      v31 = (_QWORD *)*v5;
      MiFreePoolPages((ULONG_PTR)v5, 0x1000uLL);
      v5 = v31;
    }
    while ( v31 );
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 17, v34);
  }
  _InterlockedExchangeAdd(a1 + 67, -v4);
}
