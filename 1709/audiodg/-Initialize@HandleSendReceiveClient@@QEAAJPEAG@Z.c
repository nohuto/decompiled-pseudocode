/*
 * XREFs of ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x14004786C
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x1400568E0 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x140060730 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?AeServerConnectPortInternal@HandleSendReceiveClient@@AEAAJPEAGPEAPEAX@Z @ 0x140047784 (-AeServerConnectPortInternal@HandleSendReceiveClient@@AEAAJPEAGPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSendReceiveClient::Initialize(void **this, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  signed int LastError; // eax

  v2 = 0;
  if ( this[1] )
  {
    return 1;
  }
  else
  {
    v3 = HandleSendReceiveClient::AeServerConnectPortInternal((HandleSendReceiveClient *)this, a2, this + 1);
    if ( v3 < 0 )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v3);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  return v2;
}
