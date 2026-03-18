/*
 * XREFs of ExDeferredFreePool @ 0x1402EA030
 * Callers:
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall ExDeferredFreePool(_DWORD *a1, int a2)
{
  int v3; // ebp
  unsigned int v4; // esi
  signed __int64 v5; // r14
  _QWORD *v6; // r15
  struct _FAST_MUTEX *v7; // r12
  int v8; // r13d
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // r8
  ULONG_PTR v13; // r9
  ULONG_PTR BugCheckParameter4; // rax
  char v15; // bl
  int v16; // r11d
  unsigned __int8 v17; // r9
  ULONG_PTR v18; // rcx
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r8
  _DWORD *v22; // rcx
  __int64 v23; // rax
  _BYTE *v24; // rcx
  __int64 v25; // r10
  _QWORD *v26; // r9
  __int16 v27; // si
  char v28; // r9
  __int64 v29; // r10
  _QWORD *v30; // r9
  __int64 *v31; // rtt
  unsigned __int8 CurrentIrql; // al
  _QWORD *v33; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+8h]
  signed __int64 v36; // [rsp+A0h] [rbp+18h]

  if ( _InterlockedIncrement(a1 + 66) == 1 || a2 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0LL;
    v6 = 0LL;
    v35 = 0;
    _m_prefetchw(a1);
    v7 = (struct _FAST_MUTEX *)(a1 + 2);
    v8 = *a1 & 1;
    if ( v8 )
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
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)a1 + 1);
    }
    v10 = (__int64 *)*((_QWORD *)a1 + 32);
    if ( v10 )
    {
      do
      {
        v36 = (signed __int64)v10;
        while ( 1 )
        {
          v11 = *v10;
          v12 = (ULONG_PTR)(v10 - 2);
          ++v3;
          v13 = *(v10 - 1);
          BugCheckParameter4 = (unsigned __int64)(v10 - 2) ^ ExpPoolQuotaCookie;
          if ( v13 != BugCheckParameter4 )
            KeBugCheckEx(0x19u, 0xDuLL, v12, v13, BugCheckParameter4);
          v15 = *(_BYTE *)(v12 + 1);
          v16 = 0;
          _InterlockedIncrement(a1 + 32);
          _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 19, 16LL * (unsigned __int8)*(_WORD *)(v12 + 2));
          v17 = *(_WORD *)(v12 + 2);
          v18 = v12 + 16LL * v17;
          if ( (v18 & 0xFFF) != 0 && !*(_BYTE *)(v18 + 3) )
          {
            v27 = *(_WORD *)(v18 + 2);
            v16 = 1;
            v28 = *(_WORD *)(v12 + 2);
            if ( (_BYTE)v27 != 1 )
            {
              v29 = *(_QWORD *)(v18 + 16);
              if ( *(_QWORD *)(v29 + 8) != v18 + 16 || (v30 = *(_QWORD **)(v18 + 24), *v30 != v18 + 16) )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              LOBYTE(v27) = *(_BYTE *)(v18 + 2);
              v28 = *(_BYTE *)(v12 + 2);
            }
            v17 = v27 + v28;
            v4 = v35;
            *(_BYTE *)(v12 + 2) = v17;
          }
          if ( (unsigned __int8)*(_WORD *)v12 )
          {
            v19 = v12 - 16LL * (unsigned __int8)*(_WORD *)v12;
            if ( !*(_BYTE *)(v19 + 3) )
            {
              LOWORD(v25) = *(_WORD *)(v19 + 2);
              v16 = 1;
              if ( (_BYTE)v25 != 1 )
              {
                v25 = *(_QWORD *)(v19 + 16);
                if ( *(_QWORD *)(v25 + 8) != v19 + 16 || (v26 = *(_QWORD **)(v19 + 24), *v26 != v19 + 16) )
                  __fastfail(3u);
                *v26 = v25;
                *(_QWORD *)(v25 + 8) = v26;
                LOBYTE(v25) = *(_BYTE *)(v19 + 2);
                v17 = *(_BYTE *)(v12 + 2);
              }
              v12 = v19;
              *(_BYTE *)(v19 + 2) = v25 + v17;
            }
          }
          if ( (v12 & 0xFFF) != 0 || (((_WORD)v12 + 16 * *(_WORD *)(v12 + 2)) & 0xFFF) != 0 )
          {
            *(_BYTE *)(v12 + 3) = 0;
            v20 = (unsigned __int8)*(_WORD *)(v12 + 2);
            *(_BYTE *)(v12 + 1) = v15;
            if ( v16 )
            {
              v24 = (_BYTE *)(v12 + 16 * v20);
              if ( ((unsigned __int16)v24 & 0xFFF) != 0 )
                *v24 = v20;
            }
            v21 = (_QWORD *)(v12 + 16);
            v22 = &a1[4 * (unsigned int)(v20 - 1) + 80];
            v23 = *(_QWORD *)v22;
            if ( *(_DWORD **)(*(_QWORD *)v22 + 8LL) != v22 )
              __fastfail(3u);
            *v21 = v23;
            v21[1] = v22;
            *(_QWORD *)(v23 + 8) = v21;
            *(_QWORD *)v22 = v21;
          }
          else
          {
            ++v4;
            *(_QWORD *)v12 = v6;
            v35 = v4;
            v6 = (_QWORD *)v12;
          }
          if ( v11 == v5 )
            break;
          v10 = (__int64 *)v11;
        }
        v5 = v36;
        v31 = (__int64 *)v36;
        v10 = (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)a1 + 32, 0LL, v36);
      }
      while ( v31 != v10 );
      _InterlockedDecrement(a1 + 66);
      if ( v8 )
      {
        LOBYTE(v11) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v11);
        KeReleaseGuardedMutex(v7);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      if ( v6 )
      {
        do
        {
          v33 = (_QWORD *)*v6;
          ExFreeHeapPages((ULONG_PTR)v6);
          v6 = v33;
        }
        while ( v33 );
        _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 17, v4);
      }
      _InterlockedExchangeAdd(a1 + 67, -v3);
    }
    else
    {
      _InterlockedDecrement(a1 + 66);
      if ( v8 )
      {
        LOBYTE(v9) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v9);
        KeReleaseGuardedMutex(v7);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
    }
  }
  else
  {
    _InterlockedDecrement(a1 + 66);
  }
}
