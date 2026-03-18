/*
 * XREFs of PnpOrphanNotification @ 0x1405C9B68
 * Callers:
 *     PpDevNodeRemoveFromTree @ 0x140145460 (PpDevNodeRemoveFromTree.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall PnpOrphanNotification(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  void *v5; // rcx

  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  v2 = (_QWORD **)(a1 + 472);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
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
