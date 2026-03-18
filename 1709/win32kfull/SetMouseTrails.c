/*
 * XREFs of SetMouseTrails @ 0x1C00470EC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 * Callees:
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0LL);
  if ( a1 )
    gMouseTrails = a1 - 1;
  else
    gMouseTrails = 0;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = gMouseTrails != 0;
    if ( (_DWORD)result != (gtmridMouseTrails != 0) )
    {
      if ( gMouseTrails )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 440LL) + 16LL), 1025LL, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0, gtmridMouseTrails, 4, 1, 0LL);
        gtmridMouseTrails = 0LL;
      }
    }
  }
  return result;
}
