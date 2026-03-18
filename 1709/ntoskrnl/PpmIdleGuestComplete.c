/*
 * XREFs of PpmIdleGuestComplete @ 0x140141580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x1401EE924 (HvlSetPlatformIdleState.c)
 */

struct _KPRCB *__fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *result; // rax

  if ( a3 != -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(PpmPlatformStates + 32))(a1, 0xFFFFFFFFLL, a3);
    result = KeGetCurrentPrcb();
    if ( result->PowerState.Hypervisor == ProcHypervisorHvCounters && a3 == PpmDripsStateIndex )
      return (struct _KPRCB *)HvlSetPlatformIdleState(0LL);
  }
  return result;
}
