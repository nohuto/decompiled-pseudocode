/*
 * XREFs of PnpProcessDeferredRegistrations @ 0x140520164
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x1405E5808 (PnpDereferenceNotify.c)
 */

void PnpProcessDeferredRegistrations()
{
  PVOID *v0; // rbx
  __int64 v1; // rax
  PVOID v2; // rax
  struct _FAST_MUTEX *v3; // rdi

  ExAcquireFastMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v0 = (PVOID *)PnpDeferredRegistrationList;
    if ( PnpDeferredRegistrationList == &PnpDeferredRegistrationList )
      break;
    if ( *((PVOID **)PnpDeferredRegistrationList + 1) != &PnpDeferredRegistrationList
      || (v1 = *(_QWORD *)PnpDeferredRegistrationList,
          *(PVOID *)(*(_QWORD *)PnpDeferredRegistrationList + 8LL) != PnpDeferredRegistrationList) )
    {
      __fastfail(3u);
    }
    PnpDeferredRegistrationList = *(PVOID *)PnpDeferredRegistrationList;
    *(_QWORD *)(v1 + 8) = &PnpDeferredRegistrationList;
    v2 = v0[2];
    v3 = (struct _FAST_MUTEX *)*((_QWORD *)v2 + 8);
    if ( v3 )
    {
      ExAcquireFastMutex(*((PFAST_MUTEX *)v2 + 8));
      v2 = v0[2];
    }
    *((_BYTE *)v2 + 58) = 0;
    PnpDereferenceNotify(v0[2]);
    ExFreePoolWithTag(v0, 0x37706E50u);
    if ( v3 )
      KeReleaseGuardedMutex(v3);
  }
  KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
}
