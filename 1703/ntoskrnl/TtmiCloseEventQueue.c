/*
 * XREFs of TtmiCloseEventQueue @ 0x1406DA860
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x1406D97BC (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmiCloseEventQueue(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  *(_BYTE *)(a1 + 168) = 0;
  v3 = (__int64 **)(a1 + 152);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    ExFreePoolWithTag(v4, 0x716D7454u);
  }
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
