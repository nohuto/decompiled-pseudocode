/*
 * XREFs of SepNotifyFileSystems @ 0x1405832A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(char *P)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(char *); // rdi
  PVOID j; // rdi
  void *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(char *))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(char *))*i )
    i[1](P + 32);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = *(PVOID *)j )
    (*((void (__fastcall **)(char *, _QWORD, _QWORD))j + 1))(P + 32, *((_QWORD *)P + 5), *((_QWORD *)j + 2));
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v5 = (void *)*((_QWORD *)P + 5);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
