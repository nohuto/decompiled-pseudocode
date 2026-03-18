/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C0120F4C
 * Callers:
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C0121030 (-NotifyLogon@@YAHK@Z.c)
 *     HandlePTPTelemetry @ 0x1C0142630 (HandlePTPTelemetry.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  unsigned int v1; // ecx

  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2220LL) &= ~1u;
  *(_DWORD *)(grpwinstaLogoff + 32LL) &= ~8u;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 0x16u, 0LL, 0LL);
      gptiShutdownNotify = 0LL;
    }
    v1 = gdwShutdownFlags | 0x80;
    *(_DWORD *)(grpwinstaLogoff + 32LL) = gdwLocks | *(_DWORD *)(grpwinstaLogoff + 32LL) & 0xFFFFFFFD;
    NotifyLogon(v1);
  }
  else
  {
    gptiShutdownNotify = 0LL;
    NotifyLogon(gdwShutdownFlags);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !gProtocolType )
    {
      if ( gSqmIsOptedIn )
        SqmPowerState();
      HandlePTPTelemetry();
    }
  }
  UnlockObjectAssignment(grpwinstaLogoff);
}
