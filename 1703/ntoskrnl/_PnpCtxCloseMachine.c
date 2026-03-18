/*
 * XREFs of _PnpCtxCloseMachine @ 0x140739AE0
 * Callers:
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxCloseMachine @ 0x140741724 (_SysCtxCloseMachine.c)
 */

__int64 __fastcall PnpCtxCloseMachine(PERESOURCE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v3; // rcx
  PERESOURCE v4; // rcx
  PERESOURCE v5; // rcx
  PERESOURCE v6; // rcx
  PERESOURCE v7; // rcx
  PERESOURCE v8; // rcx
  PERESOURCE v9; // rcx
  PERESOURCE v10; // rcx
  struct _ERESOURCE *v11; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(P[10], 1u);
  v3 = P[2];
  if ( v3 )
    ZwClose(v3);
  v4 = P[3];
  if ( v4 )
    ZwClose(v4);
  v5 = P[4];
  if ( v5 )
    ZwClose(v5);
  v6 = P[5];
  if ( v6 )
    ZwClose(v6);
  v7 = P[6];
  if ( v7 )
    ZwClose(v7);
  v8 = P[7];
  if ( v8 )
    ZwClose(v8);
  v9 = P[8];
  if ( v9 )
    ZwClose(v9);
  v10 = P[9];
  if ( v10 )
    ZwClose(v10);
  if ( *P )
    SysCtxCloseMachine(*P);
  ExReleaseResourceLite(P[10]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v11 = P[10];
  ExDeleteResourceLite(v11);
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
