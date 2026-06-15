/*
 * XREFs of ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x140019DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140019E8C (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiProc(HandleSendReceiveServer *Parameter)
{
  HandleSendReceiveServer::AeServerApiLoop(Parameter);
  return 0LL;
}
