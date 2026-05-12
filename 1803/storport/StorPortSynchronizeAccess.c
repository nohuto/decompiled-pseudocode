/*
 * XREFs of StorPortSynchronizeAccess @ 0x1C00312A0
 * Callers:
 *     StorPortSynchronizeAccessVrfy @ 0x1C006A7A0 (StorPortSynchronizeAccessVrfy.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006EEC (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // rax
  KIRQL v4; // di
  __int64 v8; // rbx
  char v10; // si

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0;
  v8 = *v3;
  if ( !*v3 )
    return 0;
  if ( *(_DWORD *)(v8 + 688) == 1 )
    v4 = RaidAdapterAcquireInterruptLock(*v3);
  v10 = a2(a1, a3);
  if ( *(_DWORD *)(v8 + 688) == 1 )
    RaidAdapterReleaseInterruptLock(v8, v4);
  return v10;
}
