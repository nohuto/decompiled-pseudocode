/*
 * XREFs of RemoteShadowStart @ 0x1C01F8A50
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GetRemoteHDEV @ 0x1C01F8780 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x1C0298B64 (bDrvShadowConnect.c)
 */

__int64 __fastcall RemoteShadowStart(void *Src, size_t Size)
{
  SIZE_T v2; // r14
  __int64 RemoteContext; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v8; // rax
  void *v9; // rdi
  __int64 RemoteHDEV; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8

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
  v11 = bDrvShadowConnect(RemoteHDEV, v9, (unsigned int)v2);
  Win32FreePool(v9, v12, v13);
  if ( !v11 )
    return 3221880856LL;
  RemoteRedrawScreen();
  SetPointer(1);
  *(_DWORD *)(gpsi + 2220LL) |= 2u;
  return 0LL;
}
