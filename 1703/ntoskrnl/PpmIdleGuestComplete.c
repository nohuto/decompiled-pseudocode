/*
 * XREFs of PpmIdleGuestComplete @ 0x140237160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x1401E982C (HvlSetPlatformIdleState.c)
 */

struct _KPRCB *__fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *result; // rax

  if ( a3 != -1 )
  {
    (*(void (__fastcall **)(__int64))(PpmPlatformStates + 32))(a1);
    result = KeGetCurrentPrcb();
    if ( result->PowerState.Hypervisor == ProcHypervisorHvCounters && a3 == PpmDripsStateIndex )
      return (struct _KPRCB *)HvlSetPlatformIdleState();
  }
  return result;
}
