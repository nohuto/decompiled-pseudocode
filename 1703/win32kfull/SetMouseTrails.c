/*
 * XREFs of SetMouseTrails @ 0x1C00B9CC4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 result; // rax

  SetPointer(0);
  if ( a1 )
    gMouseTrails = a1 - 1;
  else
    gMouseTrails = 0;
  SetPointer(1);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    result = gMouseTrails != 0;
    if ( (_DWORD)result != (gtmridMouseTrails != 0) )
    {
      if ( gMouseTrails )
      {
        return PostMessage(*(_QWORD *)(*(_QWORD *)(gTermIO[2] + 416LL) + 16LL), 1025LL, 0LL, 0LL);
      }
      else
      {
        result = FindTimer(0LL, gtmridMouseTrails, 4u, 1, 0LL);
        gtmridMouseTrails = 0LL;
      }
    }
  }
  return result;
}
