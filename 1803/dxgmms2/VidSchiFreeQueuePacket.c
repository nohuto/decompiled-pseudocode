/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C0011368
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C00117A8 (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0053170 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  KSPIN_LOCK *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD **v12; // rsi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+38h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+50h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 608) || *(_QWORD *)(a2 + 264)) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v16[3] = 281LL;
    v16[4] = 2560LL;
    v16[5] = a2;
    v16[6] = *(_QWORD *)(a2 + 608);
    v16[7] = *(_QWORD *)(a2 + 264);
    WdLogEvent5_WdCriticalError(v16);
    JUMPOUT(0x1C0021423LL);
  }
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogEvent5_WdEvent(v6);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v7 = (KSPIN_LOCK *)(v5 + 1912);
  *(_DWORD *)(a2 + 52) = 0;
  v8 = a2 + 8;
  KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
  v9 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD **)(a2 + 16), *v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  if ( a1 != -768 )
    --*(_DWORD *)(a1 + 768);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v7, a1 + 728, (_QWORD *)(a2 + 8), (_DWORD *)(a1 + 744));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v7, &v18);
    v11 = *(_QWORD **)(a1 + 712);
    if ( *v11 != a1 + 704 )
      __fastfail(3u);
    *(_QWORD *)v8 = a1 + 704;
    *(_QWORD *)(a2 + 16) = v11;
    *v11 = v8;
    *(_QWORD *)(a1 + 712) = v8;
    if ( a1 != -720 )
      ++*(_DWORD *)(a1 + 720);
    KeReleaseInStackQueuedSpinLock(&v18);
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    v12 = (_QWORD **)(a1 + 704);
    while ( 1 )
    {
      v13 = 0LL;
      KeAcquireInStackQueuedSpinLock(v7, &v19);
      v14 = *v12;
      if ( *v12 != v12 && *(_DWORD *)(a1 + 720) > 0x10u )
      {
        v13 = *v12;
        if ( (_QWORD **)v14[1] != v12 || (v15 = (_QWORD *)*v14, (_QWORD *)v15[1] != v13) )
          __fastfail(3u);
        *v12 = v15;
        v15[1] = v12;
        --*(_DWORD *)(a1 + 720);
      }
      KeReleaseInStackQueuedSpinLock(&v19);
      if ( !v13 )
        break;
      ExFreePoolWithTag(v13 - 1, 0);
    }
  }
}
