/*
 * XREFs of MiInsertNewCombineBlocks @ 0x14014B324
 * Callers:
 *     MiAllocateCombineProto @ 0x140122E30 (MiAllocateCombineProto.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPagedAddress @ 0x1400CEA8C (MiUnlockPagedAddress.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  unsigned int i; // edi
  int v5; // edi
  _QWORD *v6; // rcx
  _QWORD *j; // rax
  _QWORD *v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < 504; i += 512 )
  {
    if ( !(unsigned int)MiLockPagedAddress((ULONG_PTR)&a2[i]) )
    {
      while ( i * 8 )
      {
        i -= 512;
        MiUnlockPagedAddress((unsigned __int64)&a2[i]);
      }
      return 0LL;
    }
  }
  memset(a2, 0, 0xFC0uLL);
  v5 = 62;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v6 = (_QWORD *)(a1 + 72);
  for ( j = *(_QWORD **)(a1 + 72); ; j = v8 )
  {
    v8 = a2;
    if ( (_QWORD *)j[1] != v6 )
      __fastfail(3u);
    *a2 = j;
    a2[1] = v6;
    j[1] = a2;
    *v6 = a2;
    a2 += 8;
    if ( !--v5 )
      break;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return a2;
}
