/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x140082E10
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void MiDeleteStaleCacheMaps()
{
  int v0; // edi
  __int64 v1; // rdx
  int v2; // ecx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( (__int64 *)qword_14036CE20 != &qword_14036CE20 )
  {
    _InterlockedOr(v10, 0);
    v0 = KiCacheFlushTimeStamp;
    if ( (unsigned int)(KiCacheFlushTimeStamp - dword_14036CE30) > 2
      || (dword_14036CE30 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - dword_14036CE30) >= 2 )
    {
      v11[1] = v11;
      v11[0] = v11;
      KeAcquireInStackQueuedSpinLock(&qword_14036CE00, &LockHandle);
      while ( (__int64 *)qword_14036CE20 != &qword_14036CE20 )
      {
        v1 = qword_14036CE20 - 24;
        v2 = *(_DWORD *)(qword_14036CE20 - 24 + 56);
        if ( (unsigned int)(v0 - v2) <= 2 && ((v2 & 1) != 0 || (unsigned int)(v0 - v2) < 2) )
          break;
        v3 = (_QWORD *)qword_14036CE20;
        v4 = *(_QWORD *)qword_14036CE20;
        v5 = *(_QWORD **)(v1 + 32);
        if ( *(_QWORD *)(*(_QWORD *)qword_14036CE20 + 8LL) != qword_14036CE20 || *v5 != qword_14036CE20 )
          __fastfail(3u);
        *v5 = v4;
        *(_QWORD *)(v4 + 8) = v5;
        RtlAvlRemoveNode(&qword_14036CE18, v1);
        v6 = v11[0];
        --qword_14036CE38;
        if ( *(_QWORD **)(v11[0] + 8LL) != v11 )
          __fastfail(3u);
        *v3 = v11[0];
        v3[1] = v11;
        *(_QWORD *)(v6 + 8) = v3;
        v11[0] = v3;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      while ( (_QWORD *)v11[0] != v11 )
      {
        v7 = (void *)(v11[0] - 24LL);
        v8 = *(_QWORD *)v11[0];
        v9 = *(_QWORD **)(v11[0] + 8LL);
        if ( *(_QWORD *)(*(_QWORD *)v11[0] + 8LL) != v11[0] || *v9 != v11[0] )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
