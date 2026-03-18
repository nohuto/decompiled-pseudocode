/*
 * XREFs of CtxDisplayIOCtl @ 0x1C01F86FC
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1C01E3B50 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     RemoteRedrawRectangle @ 0x1C01F3AD8 (RemoteRedrawRectangle.c)
 *     GetRemoteHDEV @ 0x1C01F8780 (GetRemoteHDEV.c)
 *     bDrvDisplayIOCtl @ 0x1C02987E0 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  __int64 RemoteContext; // rax
  __int64 RemoteHDEV; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  RemoteContext = GreGetRemoteContext();
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL, v8, v9, v10);
  return 0LL;
}
