/*
 * XREFs of CalcWindowFullScreen @ 0x1C0020C84
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     CalcWindowsFullScreen @ 0x1C0020080 (CalcWindowsFullScreen.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C009E7C4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     GetDPIMonitorRect @ 0x1C0020B94 (GetDPIMonitorRect.c)
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall CalcWindowFullScreen(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm0
  char MonitorFlagsFromWindow; // al
  __int64 v12; // r8
  _DWORD *DPIMonitorRect; // rax
  unsigned int v14; // ecx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 0;
  if ( !v1 )
    goto LABEL_6;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(_QWORD *)(v6 + 16);
  }
  if ( v1 == v5 && (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
  {
    v9 = MonitorFromWindow(a1, 2u);
    if ( v9 )
    {
      if ( (*(_BYTE *)(a1 + 70) & 0xC4) == 0xC4 )
        v10 = *(_OWORD *)(a1 + 144);
      else
        v10 = *(_OWORD *)(a1 + 128);
      v15 = v10;
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      DPIMonitorRect = (_DWORD *)GetDPIMonitorRect(v12, MonitorFlagsFromWindow);
      UnionRect(v16, &v15, DPIMonitorRect);
      v8 = v16[0] - v15;
      if ( v16[0] == (_QWORD)v15 )
        v8 = v16[1] - *((_QWORD *)&v15 + 1);
      LOBYTE(v2) = v8 == 0;
    }
    if ( v2 != (*(_DWORD *)(a1 + 304) & 0x8000u) >> 15 )
    {
      *(_DWORD *)(a1 + 304) = (v2 << 15) | *(_DWORD *)(a1 + 304) & 0xFFFF7FFF;
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL, v8, v9);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL, v8, v9);
      }
      v14 = 54 - (v2 != 0);
      goto LABEL_19;
    }
  }
  else
  {
LABEL_6:
    v7 = *(_DWORD *)(a1 + 304);
    if ( (v7 & 0x8000) != 0 )
    {
      v14 = 54;
      *(_DWORD *)(a1 + 304) = v7 & 0xFFFF7FFF;
LABEL_19:
      PostShellHookMessagesEx(v14, *(_QWORD *)a1, 0LL);
    }
  }
}
