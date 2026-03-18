/*
 * XREFs of TtmpDeleteQueue @ 0x1406DADE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1406D9958 (TtmpDereferenceSessionMaybeLast.c)
 */

__int64 __fastcall TtmpDeleteQueue(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  volatile signed __int32 *v4; // rbx
  __int64 **v5; // rax
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v3 = (__int64 *)*a1;
  v4 = (volatile signed __int32 *)a1[2];
  v5 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v3;
  v3[1] = (__int64)v5;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  TtmpDereferenceSessionMaybeLast(v4);
  ExDeleteResourceLite((PERESOURCE)(a1 + 3));
  v6 = (__int64 **)(a1 + 19);
  while ( *v6 != (__int64 *)v6 )
  {
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    ExFreePoolWithTag(v7, 0x716D7454u);
  }
  return TtmiLogQueueDestroyed(a1);
}
