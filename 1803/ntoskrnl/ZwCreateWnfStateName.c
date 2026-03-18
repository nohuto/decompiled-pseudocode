/*
 * XREFs of ZwCreateWnfStateName @ 0x1401A8D60
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x140582AF8 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
