/*
 * XREFs of PpmIdleGuestPreExecute @ 0x140237200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x1401E982C (HvlSetPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleGuestPreExecute(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD); // rax
  int v5; // ebx

  if ( a3 == -1 )
  {
    return 0;
  }
  else
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(PpmPlatformStates + 24);
    if ( v4 )
      v5 = v4(a1, 0xFFFFFFFFLL, a3);
    else
      v5 = 0;
    if ( v5 >= 0 && KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorHvCounters && a3 == PpmDripsStateIndex )
      HvlSetPlatformIdleState();
  }
  return (unsigned int)v5;
}
