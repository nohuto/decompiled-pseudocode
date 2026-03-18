/*
 * XREFs of PnpOrphanNotification @ 0x1405EABC4
 * Callers:
 *     PpDevNodeRemoveFromTree @ 0x1401590B4 (PpDevNodeRemoveFromTree.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

void __fastcall PnpOrphanNotification(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  void *v5; // rcx

  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  v2 = a1 + 472;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(_QWORD **)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v5 = (void *)v3[11];
    v3[1] = v3;
    *v3 = v3;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      v3[11] = 0LL;
    }
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
}
