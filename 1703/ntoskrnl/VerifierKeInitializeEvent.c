/*
 * XREFs of VerifierKeInitializeEvent @ 0x140777100
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeEvent(void *a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  VfUtilSynchronizationObjectSanityChecks(a1, 24LL);
  LOBYTE(v6) = a3;
  return ((__int64 (__fastcall *)(void *, _QWORD, __int64))pXdvKeInitializeEvent)(a1, a2, v6);
}
