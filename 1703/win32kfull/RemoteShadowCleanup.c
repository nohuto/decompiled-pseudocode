/*
 * XREFs of RemoteShadowCleanup @ 0x1C01EE430
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01EE2D8 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x1C029C528 (bDrvShadowDisconnect.c)
 */

__int64 __fastcall RemoteShadowCleanup(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 RemoteContext; // r15
  __int64 v5; // rcx
  void *v7; // rax
  void *v8; // rbx
  __int64 RemoteHDEV; // rax
  int v10; // eax

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext(Src);
  if ( PsGetCurrentProcess(v5) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v7 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v8 = v7;
  if ( !v7 )
    ExRaiseStatus(-1073741801);
  memmove(v7, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  bDrvShadowDisconnect(RemoteHDEV, v8, (unsigned int)v2);
  Win32FreePool(v8);
  v10 = gnShadowers;
  if ( gnShadowers && (--gnShadowers, v10 != 1) || gbConnected )
    RemoteRedrawScreen();
  SetPointer(1);
  if ( !gnShadowers )
    *(_DWORD *)(gpsi + 2220LL) &= ~2u;
  return 0LL;
}
