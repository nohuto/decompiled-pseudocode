/*
 * XREFs of ?ReplyMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C01E5760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::ReplyMessage(DXGCHANNELENDPOINTPROXY *this, void *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = 3221225473LL;
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
  {
    VmbChannelPacketComplete(v5, a2, a3);
    *((_QWORD *)this + 17) = 0LL;
    return 0LL;
  }
  return result;
}
