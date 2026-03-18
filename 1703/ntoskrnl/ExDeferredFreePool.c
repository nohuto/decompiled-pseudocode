/*
 * XREFs of ExDeferredFreePool @ 0x140285C90
 * Callers:
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall ExDeferredFreePool(int *a1, int a2)
{
  signed __int64 v3; // rbp
  int v4; // esi
  unsigned int v5; // r13d
  _QWORD *v6; // r14
  int v7; // r12d
  struct _FAST_MUTEX *v8; // r15
  struct _FAST_MUTEX *v9; // rcx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r8
  char v15; // bl
  int v16; // r10d
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  int *v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  __int64 v24; // r11
  _QWORD *v25; // r9
  char v26; // al
  __int64 v27; // r11
  _QWORD *v28; // r9
  __int64 *v29; // rtt
  _QWORD *v30; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  signed __int64 v32; // [rsp+80h] [rbp+8h]

  if ( _InterlockedIncrement(a1 + 66) == 1 || a2 )
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    _m_prefetchw(a1);
    v7 = *a1;
    v8 = (struct _FAST_MUTEX *)(a1 + 2);
    v9 = (struct _FAST_MUTEX *)(a1 + 2);
    v10 = v7 & 1;
    if ( v10 )
    {
      ExAcquireFastMutex(v9);
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9, &LockHandle);
    }
    v12 = (__int64 *)*((_QWORD *)a1 + 32);
    if ( v12 )
    {
      do
      {
        v32 = (signed __int64)v12;
        while ( 1 )
        {
          v13 = *v12;
          v14 = (ULONG_PTR)(v12 - 2);
          ++v4;
          if ( *(v12 - 1) != ((unsigned __int64)(v12 - 2) ^ ExpPoolQuotaCookie) )
            KeBugCheckEx(0x19u, 0xDuLL, v14, *(_QWORD *)(v14 + 8), v14 ^ ExpPoolQuotaCookie);
          v15 = *(_BYTE *)(v14 + 1);
          v16 = 0;
          _InterlockedIncrement(a1 + 32);
          _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 19, 16LL * (unsigned __int8)*(_WORD *)(v14 + 2));
          v17 = v14 + 16LL * (unsigned __int8)*(_WORD *)(v14 + 2);
          if ( (v17 & 0xFFF) != 0 && !*(_BYTE *)(v17 + 3) )
          {
            v16 = 1;
            if ( *(_BYTE *)(v17 + 2) != 1 )
            {
              v27 = *(_QWORD *)(v17 + 16);
              v28 = *(_QWORD **)(v17 + 24);
              if ( *(_QWORD *)(v27 + 8) != v17 + 16 || *v28 != v17 + 16 )
                __fastfail(3u);
              *v28 = v27;
              *(_QWORD *)(v27 + 8) = v28;
            }
            *(_BYTE *)(v14 + 2) += *(_BYTE *)(v17 + 2);
          }
          if ( (unsigned __int8)*(_WORD *)v14 )
          {
            v18 = v14 - 16LL * (unsigned __int8)*(_WORD *)v14;
            if ( !*(_BYTE *)(v18 + 3) )
            {
              v16 = 1;
              if ( *(_BYTE *)(v18 + 2) != 1 )
              {
                v24 = *(_QWORD *)(v18 + 16);
                v25 = *(_QWORD **)(v18 + 24);
                if ( *(_QWORD *)(v24 + 8) != v18 + 16 || *v25 != v18 + 16 )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
              }
              v26 = *(_BYTE *)(v14 + 2);
              v14 = v18;
              *(_BYTE *)(v18 + 2) += v26;
            }
          }
          if ( (v14 & 0xFFF) != 0 || (((_WORD)v14 + 16 * (unsigned __int8)*(_WORD *)(v14 + 2)) & 0xFFF) != 0 )
          {
            *(_BYTE *)(v14 + 3) = 0;
            v19 = (unsigned __int8)*(_WORD *)(v14 + 2);
            *(_BYTE *)(v14 + 1) = v15;
            if ( v16 )
            {
              v23 = (_BYTE *)(v14 + 16 * v19);
              if ( ((unsigned __int16)v23 & 0xFFF) != 0 )
                *v23 = v19;
            }
            v20 = (_QWORD *)(v14 + 16);
            v21 = &a1[4 * (unsigned int)(v19 - 1) + 80];
            v22 = *(_QWORD *)v21;
            if ( *(int **)(*(_QWORD *)v21 + 8LL) != v21 )
              __fastfail(3u);
            *v20 = v22;
            v20[1] = v21;
            *(_QWORD *)(v22 + 8) = v20;
            *(_QWORD *)v21 = v20;
          }
          else
          {
            *(_QWORD *)v14 = v6;
            ++v5;
            v6 = (_QWORD *)v14;
          }
          if ( v13 == v3 )
            break;
          v12 = (__int64 *)v13;
        }
        v3 = v32;
        v29 = (__int64 *)v32;
        v12 = (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)a1 + 32, 0LL, v32);
      }
      while ( v29 != v12 );
      _InterlockedDecrement(a1 + 66);
      if ( v10 )
      {
        LOBYTE(v13) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v13);
        KeReleaseGuardedMutex(v8);
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
          v30 = (_QWORD *)*v6;
          MiFreePoolPages((ULONG_PTR)v6);
          v6 = v30;
        }
        while ( v30 );
        _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 17, v5);
      }
      _InterlockedExchangeAdd(a1 + 67, -v4);
    }
    else
    {
      _InterlockedDecrement(a1 + 66);
      if ( v10 )
      {
        LOBYTE(v11) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v11);
        KeReleaseGuardedMutex(v8);
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
