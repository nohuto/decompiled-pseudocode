/*
 * XREFs of PnpDeferNotification @ 0x1405862C0
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax

  v2 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( PnpNotificationInProgress )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x37706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v6 = (_QWORD *)qword_1407F3FF0;
      if ( *(PVOID **)qword_1407F3FF0 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v5 = &PnpDeferredRegistrationList;
      v5[1] = v6;
      *v6 = v5;
      qword_1407F3FF0 = (__int64)v5;
      KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  return v2;
}
