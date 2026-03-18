/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x140233458
 * Callers:
 *     MiPurgeZeroList @ 0x14022A7B0 (MiPurgeZeroList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiMoveLargeZeroToFree @ 0x140233294 (MiMoveLargeZeroToFree.c)
 */

__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 *v4; // r15
  unsigned int v5; // r12d
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rsi
  int v9; // r14d
  __int64 v10; // r13
  unsigned int v11; // edi
  _QWORD *v12; // rax
  unsigned __int8 v13; // al
  _QWORD *v14; // rax
  unsigned __int8 v15; // al
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  _QWORD *v18; // [rsp+40h] [rbp-38h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+50h]
  unsigned int v23; // [rsp+D0h] [rbp+58h]
  __int64 v24; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 16);
  v22 = dword_140388550;
  result = (unsigned __int16)KeNumberNodes;
  v19 = v2 + 8256LL * (unsigned __int16)KeNumberNodes;
  if ( v2 < v19 )
  {
    v4 = (unsigned __int64 *)(v2 + 8200);
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = v4;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v4);
      v5 = 0;
      v18 = (_QWORD *)v2;
      v6 = 0LL;
      v23 = 0;
      v24 = 0LL;
      v7 = (_QWORD *)v2;
      do
      {
        if ( *v7 )
        {
          v8 = 0LL;
          if ( MmNumberOfChannels )
          {
            do
            {
              v9 = 0;
              v10 = 0LL;
              v17 = 0LL;
              do
              {
                if ( v5 == 2 )
                {
                  v11 = 0;
                  if ( v22 )
                  {
                    do
                    {
                      v12 = (_QWORD *)(v2 + 16 * (16 * (v8 + 8 * v10) + v11 + 59LL));
                      if ( (_QWORD *)*v12 != v12 && !(unsigned int)MiMoveLargeZeroToFree(a1, v2, 2u, v9, v11, v8) )
                      {
                        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                        __writecr8(CurrentIrql);
                        --v11;
                        v13 = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        LockHandle.LockQueue.Next = 0LL;
                        CurrentIrql = v13;
                        LockHandle.LockQueue.Lock = v4;
                        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v4);
                      }
                      ++v11;
                    }
                    while ( v11 < v22 );
                    v10 = v17;
                    v5 = v23;
                    v6 = v24;
                  }
                  v1 = a1;
                }
                else
                {
                  v14 = (_QWORD *)(v2 + 16 * (v8 + 8 * (v10 + v6) + 27));
                  if ( (_QWORD *)*v14 != v14 && !(unsigned int)MiMoveLargeZeroToFree(v1, v2, v5, v9, 0, v8) )
                  {
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    __writecr8(CurrentIrql);
                    --v9;
                    --v10;
                    v15 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    LockHandle.LockQueue.Next = 0LL;
                    CurrentIrql = v15;
                    LockHandle.LockQueue.Lock = v4;
                    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v4);
                  }
                  v6 = v24;
                }
                ++v10;
                ++v9;
                v17 = v10;
              }
              while ( v9 <= 1 );
              v8 = (unsigned int)(v8 + 1);
            }
            while ( (unsigned int)v8 < MmNumberOfChannels );
            v7 = v18;
          }
        }
        ++v5;
        v7 += 2;
        v6 += 2LL;
        v23 = v5;
        v18 = v7;
        v24 = v6;
      }
      while ( v5 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      result = 2LL;
      v2 += 8256LL;
      v4 += 1032;
    }
    while ( v2 < v19 );
  }
  return result;
}
