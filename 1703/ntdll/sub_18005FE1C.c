/*
 * XREFs of sub_18005FE1C @ 0x18005FE1C
 * Callers:
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

PSLIST_ENTRY __fastcall sub_18005FE1C(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  memset(&ListEntry[5].Next + 1, 0, 0xA8uLL);
  result = RtlInterlockedPushEntrySList_0(&stru_18015C0C0, ListEntry);
  _InterlockedDecrement(&dword_1801593D0);
  return result;
}
