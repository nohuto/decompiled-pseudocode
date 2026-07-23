/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14069642C
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140469170 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(int a1, const void *a2)
{
  NTSTATUS result; // eax
  void *SessionById; // rdi
  int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  SessionById = (void *)MmGetSessionById(a1);
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
