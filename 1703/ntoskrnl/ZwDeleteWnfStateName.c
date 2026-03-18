/*
 * XREFs of ZwDeleteWnfStateName @ 0x14017F940
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PopFreeRegistration @ 0x1405796B8 (PopFreeRegistration.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406E011C (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
