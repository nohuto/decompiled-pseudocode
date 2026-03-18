/*
 * XREFs of MiFreeUltraMapping @ 0x1401559FC
 * Callers:
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiReleaseLargeZeroingVa @ 0x14022B7D8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFreeUltraMapping(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  _QWORD *v2; // rdi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - qword_140389040) >> 30;
  v2 = (_QWORD *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  KeAcquireInStackQueuedSpinLock(&qword_140389038, &LockHandle);
  _bittestandset64((signed __int64 *)qword_140389068, v1);
  *v2 = 0LL;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v2, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
