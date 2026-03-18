/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1C011716C
 * Callers:
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C0117230 (-NotifyLogon@@YAHK@Z.c)
 *     HandlePTPTelemetry @ 0x1C013B880 (HandlePTPTelemetry.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EndShutdown(int a1)
{
  unsigned int v1; // edx
  __int16 v2; // di
  int v3; // edi

  gpidEndSession = 0LL;
  gdwThreadEndSession = 0;
  *(_DWORD *)(gpsi + 2220LL) &= ~1u;
  v1 = gdwShutdownFlags;
  v2 = gdwShutdownFlags;
  *(_DWORD *)(grpwinstaLogoff + 32LL) &= ~8u;
  v3 = v2 & 0x1803;
  if ( a1 < 0 )
  {
    if ( gptiShutdownNotify )
    {
      PostThreadMessage(gptiShutdownNotify, 0x16u, 0LL, 0LL);
      gptiShutdownNotify = 0LL;
    }
    *(_DWORD *)(grpwinstaLogoff + 32LL) = gdwLocks | *(_DWORD *)(grpwinstaLogoff + 32LL) & 0xFFFFFFFD;
    PoUserShutdownCancelled();
    NotifyLogon(gdwShutdownFlags | 0x80);
  }
  else
  {
    gptiShutdownNotify = 0LL;
    NotifyLogon(v1);
    if ( (gdwShutdownFlags & 0x40580B) != 0 && !gProtocolType )
    {
      if ( gSqmIsOptedIn )
        SqmPowerState();
      HandlePTPTelemetry();
    }
    if ( !v3 )
      PoUserShutdownCancelled();
  }
  UnlockObjectAssignment(grpwinstaLogoff);
}
