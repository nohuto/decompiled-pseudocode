/*
 * XREFs of RemoteShadowStart @ 0x1C01EE5A0
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01EE2D8 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C029C360 (bDrvShadowConnect.c)
 */

__int64 __fastcall RemoteShadowStart(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 RemoteContext; // r15
  __int64 v5; // rcx
  void *v7; // rax
  void *v8; // rdi
  __int64 RemoteHDEV; // rax
  int v10; // ebx

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
  v10 = bDrvShadowConnect(RemoteHDEV, v8, (unsigned int)v2);
  Win32FreePool(v8);
  if ( !v10 )
    return 3221880856LL;
  RemoteRedrawScreen();
  SetPointer(1);
  *(_DWORD *)(gpsi + 2220LL) |= 2u;
  return 0LL;
}
