/*
 * XREFs of PowerOffGdi @ 0x1C0142310
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0046CC0 (TransitionCursorSuppressionState.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 PowerOffGdi()
{
  int MDEVPowerState; // ebx
  __int64 result; // rax
  __int64 v2; // rcx

  TransitionCursorSuppressionState(2, 0);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2LL);
    DestroyMonitorDCs();
    gbGDIOn = 0;
  }
  DrvDxgkLogCodePointPacket(12LL, *((_DWORD *)&gPowerState + 15) == 5, 0LL);
  result = DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL), 0LL);
  if ( MDEVPowerState )
  {
    result = gPowerState;
    if ( *((_DWORD *)&gPowerState + 15) == 5 )
    {
      result = *(_QWORD *)(gptiCurrent + 432LL);
      if ( result )
      {
        result = *(_QWORD *)(result + 8);
        if ( result )
        {
          v2 = *(_QWORD *)(result + 160);
          if ( v2 )
            return PostMessage(v2, 536LL, 0xCuLL, 0LL);
        }
      }
    }
  }
  return result;
}
