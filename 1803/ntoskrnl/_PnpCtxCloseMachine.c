/*
 * XREFs of _PnpCtxCloseMachine @ 0x1407E6ABC
 * Callers:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072CBC0 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     _PnpCtxDestroyNode @ 0x1407E6B80 (_PnpCtxDestroyNode.c)
 */

__int64 __fastcall PnpCtxCloseMachine(PERESOURCE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  struct _ERESOURCE *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(P[30], 1u);
  do
  {
    if ( P[1] == (PERESOURCE)(P + 1) )
      break;
    v4 = P[2];
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 == v4 )
        continue;
    }
    __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v2 = PnpCtxDestroyNode(v4);
  }
  while ( v2 >= 0 );
  ExReleaseResourceLite(P[30]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 >= 0 )
  {
    v7 = P[30];
    ExDeleteResourceLite(v7);
    ExFreePoolWithTag(v7, 0);
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v2;
}
