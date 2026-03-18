/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C000EB98
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000EE34 (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0047EE0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  KSPIN_LOCK *v6; // r15
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 **v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+50h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 600) || *(_QWORD *)(a2 + 256)) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3);
    v14[3] = 281LL;
    v14[4] = 2560LL;
    v14[5] = a2;
    v14[6] = *(_QWORD *)(a2 + 600);
    v14[7] = *(_QWORD *)(a2 + 256);
    WdLogEvent5_WdCriticalError(v14);
    JUMPOUT(0x1C001C237LL);
  }
  v6 = (KSPIN_LOCK *)(v5 + 1888);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v7 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 52) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1888), &LockHandle);
  v8 = *v7;
  v9 = (_QWORD *)v7[1];
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( a1 != -784 )
    --*(_DWORD *)(a1 + 784);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v6, a1 + 744, v7, (_DWORD *)(a1 + 760));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v6, &v16);
    v10 = *(_QWORD **)(a1 + 728);
    if ( *v10 != a1 + 720 )
      __fastfail(3u);
    *v7 = a1 + 720;
    v7[1] = v10;
    *v10 = v7;
    *(_QWORD *)(a1 + 728) = v7;
    if ( a1 != -736 )
      ++*(_DWORD *)(a1 + 736);
    KeReleaseInStackQueuedSpinLock(&v16);
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    v11 = (__int64 **)(a1 + 720);
    while ( 1 )
    {
      v12 = 0LL;
      KeAcquireInStackQueuedSpinLock(v6, &v17);
      if ( *v11 != (__int64 *)v11 && *(_DWORD *)(a1 + 736) > 0x10u )
      {
        v12 = *v11;
        v13 = **v11;
        if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
          __fastfail(3u);
        *v11 = (__int64 *)v13;
        *(_QWORD *)(v13 + 8) = v11;
        --*(_DWORD *)(a1 + 736);
      }
      KeReleaseInStackQueuedSpinLock(&v17);
      if ( !v12 )
        break;
      ExFreePoolWithTag(v12 - 1, 0);
    }
  }
}
