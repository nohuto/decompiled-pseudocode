/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x140224E24
 * Callers:
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInitializePagefileBitmapsCache @ 0x1401500A0 (MiInitializePagefileBitmapsCache.c)
 *     MiFreeModifiedReservations @ 0x140225BB0 (MiFreeModifiedReservations.c)
 */

void __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v3; // r15
  __int64 v4; // rcx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned __int64 v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdi
  char v11; // al
  signed __int32 v12[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 6448);
  v3 = *(_QWORD *)(a1 + 2624);
  v4 = *(_QWORD *)(a1 + 6016);
  if ( v4 < 0 )
    v4 = 0LL;
  if ( *(_QWORD *)(a1 + 816) < 0x800uLL && (v1 > *(_QWORD *)(a1 + 5776) >> 2 || v1 > (unsigned __int64)v4 >> 2) )
  {
    v5 = *(_DWORD *)(a1 + 832);
    if ( v5 >= 0x40 && *(_DWORD *)(a1 + 824) / v5 < (unsigned int)dword_140400120 >> 3 )
    {
      v6 = *(_DWORD *)(a1 + 5784);
      v7 = 3 * (v1 >> 2);
      if ( v6 )
      {
        v8 = (__int64 *)(a1 + 5792);
        v9 = v6;
        do
        {
          v10 = *v8;
          if ( (*(_BYTE *)(*v8 + 204) & 0x60) == 0 )
          {
            if ( v3 > v7 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 232), &LockHandle);
              v11 = *(_BYTE *)(v10 + 207);
              if ( (v11 & 1) == 0 )
              {
                *(_BYTE *)(v10 + 207) = v11 | 1;
                MiInitializePagefileBitmapsCache(v10);
                *(_DWORD *)(v10 + 124) = dword_140400120;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              __writecr8(LockHandle.OldIrql);
            }
            MiFreeModifiedReservations(v10, 0LL);
          }
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      ++*(_DWORD *)(a1 + 840);
      if ( v3 > v7 )
      {
        *(_QWORD *)(a1 + 848) = KiQueryUnbiasedInterruptTime();
        _InterlockedOr(v12, 0);
        *(_WORD *)(a1 + 860) |= 1u;
        ++*(_DWORD *)(a1 + 836);
      }
      *(_DWORD *)(a1 + 832) = 0;
      *(_QWORD *)(a1 + 824) = 0LL;
    }
  }
}
