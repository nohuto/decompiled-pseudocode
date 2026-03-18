/*
 * XREFs of MiInsertNewCombineBlocks @ 0x140134E24
 * Callers:
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 * Callees:
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiUnlockPagedAddress @ 0x140038DB8 (MiUnlockPagedAddress.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140192D80 (memset.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  unsigned int i; // edi
  int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rcx
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
  v5 = 71;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v6 = (__int64 *)(a1 + 72);
  do
  {
    v7 = *v6;
    if ( *(__int64 **)(*v6 + 8) != v6 )
      __fastfail(3u);
    *a2 = v7;
    a2[1] = v6;
    *(_QWORD *)(v7 + 8) = a2;
    *v6 = (__int64)a2;
    a2 += 7;
    --v5;
  }
  while ( v5 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return a2;
}
