/*
 * XREFs of ZwDeleteWnfStateName @ 0x1401A8F00
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14058BC18 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x1405EE18C (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
