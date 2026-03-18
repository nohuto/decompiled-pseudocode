/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x14014F82C
 * Callers:
 *     MiPurgeZeroList @ 0x14014F71C (MiPurgeZeroList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiMoveLargeZeroToFree @ 0x14014F9E8 (MiMoveLargeZeroToFree.c)
 */

__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  unsigned __int64 *v3; // r14
  unsigned int v4; // r13d
  __int64 v5; // rdi
  int *v6; // rcx
  _QWORD *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebp
  int v10; // r12d
  _QWORD **v11; // rax
  _QWORD *v12; // rsi
  unsigned int v13; // r15d
  unsigned __int8 v14; // al
  _QWORD *v15; // [rsp+30h] [rbp-88h]
  int *v16; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  _QWORD *v18; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  int v20; // [rsp+C0h] [rbp+8h]
  int v21; // [rsp+C8h] [rbp+10h]
  unsigned __int8 CurrentIrql; // [rsp+D0h] [rbp+18h]
  _QWORD **v23; // [rsp+D8h] [rbp+20h]

  v20 = a1;
  v1 = *(_QWORD **)(a1 + 16);
  result = (unsigned __int16)KeNumberNodes;
  v18 = &v1[248 * (unsigned __int16)KeNumberNodes];
  if ( v1 < v18 )
  {
    v3 = v1 + 241;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = v3;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v3);
      v4 = 0;
      v15 = v1;
      v5 = 0LL;
      v6 = dword_1403CB6E8;
      v17 = 0LL;
      v7 = v1;
      v16 = dword_1403CB6E8;
      do
      {
        if ( *v7 )
        {
          v8 = *v6;
          v9 = 0;
          v21 = *v6;
          if ( MmNumberOfChannels )
          {
            do
            {
              v10 = 0;
              v11 = (_QWORD **)&v1[v5 + 18 + v9];
              v23 = v11;
              do
              {
                v12 = *v11;
                v13 = 0;
                if ( v8 )
                {
                  do
                  {
                    if ( (_QWORD *)*v12 != v12 )
                    {
                      if ( !(unsigned int)MiMoveLargeZeroToFree(v20, (_DWORD)v1, v4, v10, v13, v9) )
                      {
                        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                        __writecr8(CurrentIrql);
                        --v13;
                        v12 -= 3;
                        v14 = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        LockHandle.LockQueue.Next = 0LL;
                        CurrentIrql = v14;
                        LockHandle.LockQueue.Lock = v3;
                        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v3);
                      }
                      v8 = v21;
                    }
                    ++v13;
                    v12 += 3;
                  }
                  while ( v13 < v8 );
                  v11 = v23;
                }
                v11 += 8;
                ++v10;
                v23 = v11;
              }
              while ( v10 <= 1 );
              v5 = v17;
              ++v9;
            }
            while ( v9 < MmNumberOfChannels );
            v7 = v15;
            v6 = v16;
          }
        }
        v7 += 34;
        ++v6;
        v5 += 34LL;
        v15 = v7;
        ++v4;
        v16 = v6;
        v17 = v5;
      }
      while ( v4 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v1 += 248;
      v3 += 248;
    }
    while ( v1 < v18 );
  }
  return result;
}
