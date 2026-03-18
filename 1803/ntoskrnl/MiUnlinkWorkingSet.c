/*
 * XREFs of MiUnlinkWorkingSet @ 0x140070894
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x140154238 (MiUnlinkSessionWorkingSet.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rbx
  char v5; // al
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-30h] BYREF
  char v11; // [rsp+22h] [rbp-2Eh]
  int v12; // [rsp+24h] [rbp-2Ch]
  _QWORD v13[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v10 = 263;
  v12 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v13[1] = v13;
  v13[0] = v13;
  v11 = 6;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  p_LockHandle = &LockHandle;
  if ( a2 )
    p_LockHandle = a2;
  while ( 1 )
  {
    v5 = *(_BYTE *)(a1 + 185);
    if ( (v5 & 6) == 0 && (v5 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 104) = &v10;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(p_LockHandle);
    __writecr8(p_LockHandle->OldIrql);
    KeWaitForGate(&v10, 18LL);
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, p_LockHandle);
  }
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    if ( *(_QWORD **)(v7 + 8) != v6 || (v8 = *(_QWORD **)(a1 + 32), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
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
