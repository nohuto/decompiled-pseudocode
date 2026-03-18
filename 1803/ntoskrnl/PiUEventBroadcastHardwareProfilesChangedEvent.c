/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140728018
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x1405EA4F0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(int a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 16LL);
  SessionById = (void *)MmGetSessionById(a1);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 16LL);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
