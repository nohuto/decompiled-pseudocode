/*
 * XREFs of MiVolunteerForTrimFirst @ 0x1400331E0
 * Callers:
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 */

void __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  int v5; // ebp
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v3 = v2[693];
  if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v3 + 64) )
  {
    if ( a2 < 0 )
      return;
    v4 = (_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (_QWORD *)v2[694] == v4 )
      return;
    v5 = 1;
  }
  else
  {
    if ( a2 > 0 )
      return;
    v4 = (_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (_QWORD *)v2[695] == v4 )
      return;
    v5 = 2;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_14036CF80;
  KxAcquireQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(v3 + 53) || !*v4 )
  {
    *(_BYTE *)(v3 + 54) = 1;
  }
  else
  {
    v6 = *v4;
    v7 = (_QWORD *)v4[1];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v7 != v4 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = v2 + 694;
    if ( v5 == 1 )
    {
      v10 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        __fastfail(3u);
      *v4 = v10;
      v4[1] = v8;
      *(_QWORD *)(v10 + 8) = v4;
      *v8 = v4;
    }
    else
    {
      v9 = (_QWORD *)v2[695];
      if ( (_QWORD *)*v9 != v8 )
        __fastfail(3u);
      *v4 = v8;
      v4[1] = v9;
      *v9 = v4;
      v2[695] = v4;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
