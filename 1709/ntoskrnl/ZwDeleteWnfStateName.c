/*
 * XREFs of ZwDeleteWnfStateName @ 0x14017F2E0
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14059576C (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x1406FA310 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
