/*
 * XREFs of CalcWindowFullScreen @ 0x1C0066940
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C008D8F0 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     CalcWindowsFullScreen @ 0x1C0112050 (CalcWindowsFullScreen.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  __int64 v1; // rdx
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  struct tagMONITOR *v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0;
  if ( !v1 )
    goto LABEL_6;
  v4 = *((_QWORD *)a1 + 3);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(_QWORD *)(v6 + 16);
  }
  if ( v1 == v5 && (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    v8 = _MonitorFromWindowInternal(a1, 2, 0);
    if ( v8 )
    {
      if ( (*((_BYTE *)a1 + 70) & 0xC4) == 0xC4 )
        v9 = *((_OWORD *)a1 + 9);
      else
        v9 = *((_OWORD *)a1 + 8);
      v13 = v9;
      v12 = *GetMonitorRectForWindow(&v12, (__int64)v8, a1);
      UnionRect(v14, &v13, &v12);
      v10 = v14[0] - v13;
      if ( v14[0] == (_QWORD)v13 )
        v10 = v14[1] - *((_QWORD *)&v13 + 1);
      LOBYTE(v2) = v10 == 0;
    }
    if ( v2 != (*((_DWORD *)a1 + 76) & 0x8000u) >> 15 )
    {
      *((_DWORD *)a1 + 76) = (v2 << 15) | *((_DWORD *)a1 + 76) & 0xFFFF7FFF;
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
      }
      v11 = (v2 ^ 1) + 53;
      goto LABEL_19;
    }
  }
  else
  {
LABEL_6:
    v7 = *((_DWORD *)a1 + 76);
    if ( (v7 & 0x8000) != 0 )
    {
      v11 = 54;
      *((_DWORD *)a1 + 76) = v7 & 0xFFFF7FFF;
LABEL_19:
      PostShellHookMessagesEx(v11, *(_QWORD *)a1, 0LL);
    }
  }
}
