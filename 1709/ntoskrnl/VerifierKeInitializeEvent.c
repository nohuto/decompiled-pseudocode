/*
 * XREFs of VerifierKeInitializeEvent @ 0x1407B8F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeEvent(ULONG_PTR a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  VfUtilSynchronizationObjectSanityChecks(a1, 0x18uLL);
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, __int64))pXdvKeInitializeEvent)(a1, a2, v6);
}
