/*
 * XREFs of LdrEnumerateLoadedModules @ 0x180082C20
 * Callers:
 *     RtlLockModuleSection @ 0x180082A40 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x18004B184 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrEnumerateLoadedModules(int a1, void (__fastcall *a2)(__int64 *, __int64, char *), __int64 a3)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+20h]

  if ( a1 || !a2 )
    return 3221225485LL;
  v9 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v5 = 1;
    v10 = 1;
  }
  else
  {
    v5 = 0;
    v10 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_18015F3B0; i != &qword_18015F3B0; i = (__int64 *)*i )
  {
    a2(i, a3, &v9);
    if ( v9 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15, 0);
  if ( !v5 )
    LdrpDropLastInProgressCount();
  return 0LL;
}
