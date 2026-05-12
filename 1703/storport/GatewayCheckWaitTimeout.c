/*
 * XREFs of GatewayCheckWaitTimeout @ 0x1C003FE44
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C002BBC4 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GatewayCheckWaitTimeout(KSPIN_LOCK *SpinLock, int a2, KSPIN_LOCK a3)
{
  PKSPIN_LOCK v4; // rbx
  unsigned int v7; // r14d
  char v8; // r15
  unsigned int v9; // esi
  __int64 v10; // rbp
  PKSPIN_LOCK v11; // rax
  KSPIN_LOCK v12; // r8
  ULONGLONG v13; // rdx
  KSPIN_LOCK v14; // rdx
  PKSPIN_LOCK *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  PKSPIN_LOCK *v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+70h] [rbp+8h]

  v4 = SpinLock + 33;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v10 = 0LL;
  if ( !*((_DWORD *)SpinLock + 6) || (PKSPIN_LOCK)*v4 == v4 )
    return 0LL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
  v11 = (PKSPIN_LOCK)*v4;
  while ( v11 != v4 )
  {
    v12 = v11[3];
    if ( (*(_BYTE *)(v12 + 154) & 2) == 0 )
    {
      v13 = *(v11 - 2);
      if ( v13 == -1LL || v13 >= UnbiasedInterruptTime )
        break;
    }
    if ( (*(_BYTE *)(v12 + 154) & 2) == 0 && !v8 )
    {
      v10 = *(_QWORD *)(v12 + 24);
      v8 = 1;
      v9 = *((_DWORD *)SpinLock + 6);
    }
    v14 = *v11;
    v15 = (PKSPIN_LOCK *)v11[1];
    if ( *(PKSPIN_LOCK *)(*v11 + 8) != v11 || *v15 != v11 )
      __fastfail(3u);
    *v15 = (PKSPIN_LOCK)v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = v11[2] + 120;
    v17 = *(_QWORD *)v16;
    v18 = *(_QWORD **)(v11[2] + 128);
    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    --*((_DWORD *)SpinLock + 6);
    v19 = *(PKSPIN_LOCK **)(a3 + 8);
    if ( *v19 != (PKSPIN_LOCK)a3 )
      __fastfail(3u);
    *v11 = a3;
    ++v7;
    v11[1] = (KSPIN_LOCK)v19;
    *v19 = v11;
    *(_QWORD *)(a3 + 8) = v11;
    v11 = (PKSPIN_LOCK)*v4;
    if ( v7 == a2 )
      break;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v8 )
  {
    if ( v9 > *(_DWORD *)(v10 + 5440) )
      *(_DWORD *)(v10 + 5440) = v9;
  }
  return v7;
}
