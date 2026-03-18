/*
 * XREFs of PnpOrphanNotification @ 0x14056D4E8
 * Callers:
 *     PpDevNodeRemoveFromTree @ 0x140131A0C (PpDevNodeRemoveFromTree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void __fastcall PnpOrphanNotification(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax
  void *v5; // rcx

  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  v2 = (__int64 **)(a1 + 472);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    v5 = (void *)v3[11];
    v3[1] = (__int64)v3;
    *v3 = (__int64)v3;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      v3[11] = 0LL;
    }
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
}
