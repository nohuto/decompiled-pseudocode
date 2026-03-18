/*
 * XREFs of RemoteShadowCleanup @ 0x1C01F88E0
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01F8780 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x1C0298D2C (bDrvShadowDisconnect.c)
 */

__int64 __fastcall RemoteShadowCleanup(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 RemoteContext; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v8; // rax
  void *v9; // rbx
  __int64 RemoteHDEV; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax

  v2 = (unsigned int)Size;
  RemoteContext = GreGetRemoteContext(Src);
  if ( PsGetCurrentProcess(v6, v5) != gpepCSRSS )
    return 3221225506LL;
  ProbeForRead(Src, v2, 1u);
  v8 = (void *)Win32AllocPoolWithQuota(v2, 1769435989LL);
  v9 = v8;
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  memmove(v8, Src, v2);
  if ( gfRemotingConsole )
    RemoteHDEV = gConsoleShadowhDev;
  else
    RemoteHDEV = GetRemoteHDEV(gProtocolType, *(_QWORD *)(RemoteContext + 40));
  bDrvShadowDisconnect(RemoteHDEV, v9, (unsigned int)v2);
  Win32FreePool(v9, v11, v12);
  v13 = gnShadowers;
  if ( gnShadowers && (--gnShadowers, v13 != 1) || gbConnected )
    RemoteRedrawScreen();
  SetPointer(1);
  if ( !gnShadowers )
    *(_DWORD *)(gpsi + 2220LL) &= ~2u;
  return 0LL;
}
