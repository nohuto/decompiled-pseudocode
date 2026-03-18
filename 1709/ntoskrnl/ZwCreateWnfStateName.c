/*
 * XREFs of ZwCreateWnfStateName @ 0x14017F140
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1405994C8 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
