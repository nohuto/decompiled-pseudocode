/*
 * XREFs of RemotePassthruDisable @ 0x1C01F8820
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1C01F8780 (GetRemoteHDEV.c)
 *     bDrvReconnect @ 0x1C0298970 (bDrvReconnect.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 RemoteContext; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  PVOID v4; // r8
  HANDLE v5; // rdx
  __int64 RemoteHDEV; // rcx

  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v2, v1) != gpepCSRSS )
    return 3221225506LL;
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
    {
      v4 = gConsoleShadowThinwireFileObject;
      v5 = ghConsoleShadowThinwireChannel;
      RemoteHDEV = gConsoleShadowhDev;
    }
    else
    {
      RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
      v4 = (PVOID)gThinwireFileObject;
      v5 = (HANDLE)ghRemoteThinwireChannel;
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v5, v4, 1LL) )
      return 3221880856LL;
    RemoteRedrawScreen();
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
