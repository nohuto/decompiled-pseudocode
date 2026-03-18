/*
 * XREFs of VerifierPortKeReleaseSpinLock @ 0x1407779D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViKeReleaseSpinLockCommon @ 0x140778690 (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLock(__int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx

  v4 = ViKeReleaseSpinLockCommon();
  LOBYTE(v5) = a2;
  ((void (__fastcall *)(__int64, __int64))pXdvKeReleaseSpinLock)(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
