/*
 * XREFs of ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C006C734
 * Callers:
 *     CoreMsgCreatePort @ 0x1C0069DD8 (CoreMsgCreatePort.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C006B2F0 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     CoreMsgOpenConnection @ 0x1C006B624 (CoreMsgOpenConnection.c)
 *     CoreMsgObjectCallout @ 0x1C006C0A4 (CoreMsgObjectCallout.c)
 *     CoreMsgSend @ 0x1C006C2DC (CoreMsgSend.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01567B0 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

NTSTATUS __fastcall CoreMessagingK::EntryLock::Acquire(_BYTE *a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(a2, 0LL, 0LL);
  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  *a1 = 1;
  return result;
}
