/*
 * XREFs of CtxDisplayIOCtl @ 0x1C01EE254
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C01D7340 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     RemoteRedrawRectangle @ 0x1C01E7AF8 (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C01EE2D8 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C029BFDC (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  __int64 RemoteContext; // rax
  __int64 RemoteHDEV; // rax

  RemoteContext = GreGetRemoteContext();
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
