/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x1400F1070
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void MiDeleteStaleCacheMaps()
{
  int v0; // edi
  __int64 v1; // rdx
  int v2; // ecx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( (__int64 *)qword_1403890E0 != &qword_1403890E0 )
  {
    _InterlockedOr(v10, 0);
    v0 = KiCacheFlushTimeStamp;
    if ( (unsigned int)(KiCacheFlushTimeStamp - dword_1403890F0) > 2
      || (dword_1403890F0 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - dword_1403890F0) >= 2 )
    {
      v11[1] = v11;
      v11[0] = v11;
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      while ( (__int64 *)qword_1403890E0 != &qword_1403890E0 )
      {
        v1 = qword_1403890E0 - 24;
        v2 = *(_DWORD *)(qword_1403890E0 - 24 + 56);
        if ( (unsigned int)(v0 - v2) <= 2 && ((v2 & 1) != 0 || (unsigned int)(v0 - v2) < 2) )
          break;
        v3 = (_QWORD *)qword_1403890E0;
        v4 = *(_QWORD *)qword_1403890E0;
        if ( *(_QWORD *)(*(_QWORD *)qword_1403890E0 + 8LL) != qword_1403890E0
          || (v5 = *(_QWORD **)(v1 + 32), *v5 != qword_1403890E0) )
        {
          __fastfail(3u);
        }
        *v5 = v4;
        *(_QWORD *)(v4 + 8) = v5;
        RtlAvlRemoveNode((unsigned __int64 *)&qword_1403890D8, v1);
        v6 = v11[0];
        --qword_1403890F8;
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
        if ( *(_QWORD *)(*(_QWORD *)v11[0] + 8LL) != v11[0] || (v9 = *(_QWORD **)(v11[0] + 8LL), *v9 != v11[0]) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
