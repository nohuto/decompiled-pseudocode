/*
 * XREFs of MiUnlinkWorkingSet @ 0x1400178A8
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x14013E1D4 (MiUnlinkSessionWorkingSet.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rbx
  struct _KLOCK_QUEUE_HANDLE *i; // rdx
  char v5; // al
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  unsigned __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-30h] BYREF
  char v11; // [rsp+22h] [rbp-2Eh]
  int v12; // [rsp+24h] [rbp-2Ch]
  _QWORD v13[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0;
  p_LockHandle = a2;
  v13[1] = v13;
  v13[0] = v13;
  v10 = 263;
  v11 = 6;
  if ( a2 )
    goto LABEL_4;
  p_LockHandle = &LockHandle;
  for ( i = &LockHandle; ; i = p_LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, i);
LABEL_4:
    v5 = *(_BYTE *)(a1 + 193);
    if ( (v5 & 6) == 0 && (v5 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 104) = &v10;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
    __writecr8(p_LockHandle->OldIrql);
    KeWaitForGate(&v10, 18LL);
  }
  v6 = (__int64 *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = (__int64 *)*v6;
    v8 = *(__int64 ***)(a1 + 32);
    if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = MmBadPointer;
  result = (unsigned __int64)&LockHandle;
  if ( p_LockHandle == &LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
    result = p_LockHandle->OldIrql;
    __writecr8(result);
  }
  return result;
}
