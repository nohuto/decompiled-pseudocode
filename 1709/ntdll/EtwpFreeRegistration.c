/*
 * XREFs of EtwpFreeRegistration @ 0x180060C7C
 * Callers:
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  memset((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1, v2, v3);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
