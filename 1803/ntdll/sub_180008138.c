/*
 * XREFs of sub_180008138 @ 0x180008138
 * Callers:
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

PSLIST_ENTRY __fastcall sub_180008138(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  memset(&ListEntry[5].Next + 1, 0, 0xA8uLL);
  result = RtlInterlockedPushEntrySList_0(&ListHead, ListEntry);
  _InterlockedDecrement(&dword_18015A430);
  return result;
}
