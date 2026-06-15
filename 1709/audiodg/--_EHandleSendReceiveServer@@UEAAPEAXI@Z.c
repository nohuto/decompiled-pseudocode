/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x14001A220
 * Callers:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x1400020C8 (--1CStreamProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x14001A250 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 */

HandleSendReceiveServer *__fastcall HandleSendReceiveServer::`vector deleting destructor'(
        HandleSendReceiveServer *this,
        char a2)
{
  HandleSendReceiveServer::~HandleSendReceiveServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
