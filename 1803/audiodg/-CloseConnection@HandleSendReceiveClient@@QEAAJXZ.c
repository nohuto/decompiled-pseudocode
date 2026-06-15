/*
 * XREFs of ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x140045AB0
 * Callers:
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140053450 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140054560 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DD10 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveClient::CloseConnection(HandleSendReceiveClient *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  return 0LL;
}
