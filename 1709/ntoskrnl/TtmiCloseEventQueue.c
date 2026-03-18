/*
 * XREFs of TtmiCloseEventQueue @ 0x140710C70
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x14070FBC8 (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall TtmiCloseEventQueue(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  *(_BYTE *)(a1 + 168) = 0;
  v3 = (__int64 **)(a1 + 152);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    if ( (__int64 **)(*v3)[1] != v3 || (v5 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = (__int64)v3;
    ExFreePoolWithTag(v4, 0x716D7454u);
  }
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
