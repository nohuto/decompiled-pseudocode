/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0056EE4
 * Callers:
 *     CoreMsgSend @ 0x1C0056AA8 (CoreMsgSend.c)
 *     CoreMsgCreatePort @ 0x1C01652B4 (CoreMsgCreatePort.c)
 *     CoreMsgObjectCallout @ 0x1C01653FC (CoreMsgObjectCallout.c)
 *     CoreMsgOpenConnection @ 0x1C016555C (CoreMsgOpenConnection.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C0166D10 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
