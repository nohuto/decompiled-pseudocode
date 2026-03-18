/*
 * XREFs of MiDeleteExtentPfns @ 0x14025D700
 * Callers:
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
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
    while ( qword_1403CB3E8 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    KeAcquireInStackQueuedSpinLock(&qword_1403CEF20, &LockHandle);
    v3 = qword_1403CB3E8;
    if ( !qword_1403CB3E8 )
    {
      if ( a1 )
        byte_1403CB410 = qword_1403CB3E8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  while ( v3 );
  return result;
}
