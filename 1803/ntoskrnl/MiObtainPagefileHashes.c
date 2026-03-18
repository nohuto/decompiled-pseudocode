/*
 * XREFs of MiObtainPagefileHashes @ 0x1401537F4
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140153348 (MiValidatePagefilePageHash.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiObtainPagefileHashes(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v8 = *(_QWORD *)(a1 + 216) + 4 * v4;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      if ( (*(_BYTE *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
        v10 = *(_DWORD *)v8;
      else
        v10 = 0;
      *a4 = v10;
      v8 += 4LL;
      ++a4;
      --v9;
    }
    while ( v9 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
