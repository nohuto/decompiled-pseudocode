/*
 * XREFs of GatewayCheckWaitTimeout @ 0x1C0040374
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C002C9C8 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GatewayCheckWaitTimeout(KSPIN_LOCK *SpinLock, int a2, KSPIN_LOCK a3)
{
  PKSPIN_LOCK v4; // rbx
  unsigned int v6; // r14d
  char v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rbp
  ULONGLONG UnbiasedInterruptTime; // r12
  PKSPIN_LOCK v11; // rcx
  KSPIN_LOCK v12; // rdx
  ULONGLONG v13; // rax
  KSPIN_LOCK v14; // rax
  PKSPIN_LOCK *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  PKSPIN_LOCK *v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = SpinLock + 33;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( !*((_DWORD *)SpinLock + 6) || (PKSPIN_LOCK)*v4 == v4 )
    return 0LL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
  v11 = (PKSPIN_LOCK)*v4;
  if ( (PKSPIN_LOCK)*v4 != v4 )
  {
    do
    {
      v12 = v11[3];
      if ( (*(_BYTE *)(v12 + 154) & 2) == 0 )
      {
        v13 = *(v11 - 2);
        if ( v13 == -1LL || v13 >= UnbiasedInterruptTime )
          break;
        if ( !v7 )
        {
          v9 = *(_QWORD *)(v12 + 24);
          v7 = 1;
          v8 = *((_DWORD *)SpinLock + 6);
        }
      }
      v14 = *v11;
      if ( *(PKSPIN_LOCK *)(*v11 + 8) != v11 || (v15 = (PKSPIN_LOCK *)v11[1], *v15 != v11) )
        __fastfail(3u);
      *v15 = (PKSPIN_LOCK)v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = v11[2] + 120;
      v17 = *(_QWORD *)v16;
      if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || (v18 = *(_QWORD **)(v11[2] + 128), *v18 != v16) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      --*((_DWORD *)SpinLock + 6);
      v19 = *(PKSPIN_LOCK **)(a3 + 8);
      if ( *v19 != (PKSPIN_LOCK)a3 )
        __fastfail(3u);
      *v11 = a3;
      ++v6;
      v11[1] = (KSPIN_LOCK)v19;
      *v19 = v11;
      *(_QWORD *)(a3 + 8) = v11;
      v11 = (PKSPIN_LOCK)*v4;
    }
    while ( v6 != a2 && v11 != v4 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v7 )
  {
    if ( v8 > *(_DWORD *)(v9 + 5440) )
      *(_DWORD *)(v9 + 5440) = v8;
  }
  return v6;
}
