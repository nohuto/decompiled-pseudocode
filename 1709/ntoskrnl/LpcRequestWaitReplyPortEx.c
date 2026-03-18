/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x14059C250
 * Callers:
 *     ExpRaiseHardError @ 0x14050A5C4 (ExpRaiseHardError.c)
 *     DbgkpSendApiMessageLpc @ 0x1406AC3DC (DbgkpSendApiMessageLpc.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x140463C18 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, __int64 a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode);
}
