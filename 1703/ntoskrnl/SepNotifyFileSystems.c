/*
 * XREFs of SepNotifyFileSystems @ 0x140584AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(__int64); // rdi
  PVOID j; // rdi
  void *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(__int64))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(__int64))*i )
    i[1]((__int64)(a1 + 4));
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = *(PVOID *)j )
    (*((void (__fastcall **)(_QWORD *, _QWORD, _QWORD))j + 1))(a1 + 4, a1[5], *((_QWORD *)j + 2));
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v5 = (void *)a1[5];
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x53466553u);
  ExFreePoolWithTag(a1, 0);
}
