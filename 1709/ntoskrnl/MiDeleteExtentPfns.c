/*
 * XREFs of MiDeleteExtentPfns @ 0x140222AA0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiDeleteExtentPfns(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  do
  {
    MiPurgeBadFileOnlyPages(a1, a2);
    while ( qword_140388248 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    KeAcquireInStackQueuedSpinLock(&qword_14038B060, &LockHandle);
    v3 = qword_140388248;
    if ( !qword_140388248 )
    {
      if ( a1 )
        byte_140388270 = qword_140388248;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  while ( v3 );
  return result;
}
