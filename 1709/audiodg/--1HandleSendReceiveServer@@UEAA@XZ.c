/*
 * XREFs of ??1HandleSendReceiveServer@@UEAA@XZ @ 0x14001A250
 * Callers:
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x14001A220 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ @ 0x140047950 (-SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ.c)
 */

void __fastcall HandleSendReceiveServer::~HandleSendReceiveServer(HandleSendReceiveServer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_QWORD *)this + 6) == 0LL;
  *(_QWORD *)this = &HandleSendReceiveServer::`vftable';
  if ( !v1 )
  {
    if ( !*((_BYTE *)this + 60) )
      HandleSendReceiveServer::SendStopListeningMessage(this);
    WaitForSingleObject(*((HANDLE *)this + 6), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 6));
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
}
