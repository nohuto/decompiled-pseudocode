/*
 * XREFs of xxxActivateWindow @ 0x1C00B3994
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxSetActiveWindow @ 0x1C00B2D78 (xxxSetActiveWindow.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00B3344 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     NextTopWindow @ 0x1C005F5C0 (NextTopWindow.c)
 *     FBadWindow @ 0x1C00B3C74 (FBadWindow.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00B3CA8 (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00B4718 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     SkipWindowOnMonitor @ 0x1C00B7360 (SkipWindowOnMonitor.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND *v3; // rdi
  char v4; // r14
  struct tagWND *ImmersiveRealmFallbackWindow; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rcx
  BOOL v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  char v17; // bl
  struct tagWND *v18; // r12
  struct tagWND *TopWindow; // rax
  struct tagWND *v20; // rbx
  struct tagWND *v21; // rbx
  _QWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 2;
  if ( a1 )
  {
    if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
      return 0LL;
  }
  else
  {
    v2 = 5;
  }
  switch ( v2 )
  {
    case 1:
      goto LABEL_13;
    case 2:
LABEL_45:
      if ( !(unsigned int)((__int64 (*)(void))FBadWindow)() )
        goto LABEL_13;
      goto LABEL_6;
    case 3:
LABEL_6:
      if ( (((*((_BYTE *)v3 + 71) & 0xC0) + 0x80) & 0xBF) == 0 )
      {
        v20 = (struct tagWND *)*((_QWORD *)v3 + 15);
        if ( !(unsigned int)FBadWindow(v20) )
        {
          v3 = v20;
          goto LABEL_13;
        }
      }
      goto LABEL_7;
    case 4:
      v4 = 3;
      goto LABEL_45;
    case 5:
LABEL_7:
      ImmersiveRealmFallbackWindow = GetImmersiveRealmFallbackWindow(v3);
      if ( ImmersiveRealmFallbackWindow )
      {
        v3 = ImmersiveRealmFallbackWindow;
      }
      else if ( !gpqForegroundPrev
             || (v6 = *(_QWORD *)(gpqForegroundPrev + 96LL), (unsigned int)FBadWindow(v6))
             || (*(_BYTE *)(v6 + 60) & 0x20) != 0
             || (unsigned int)SkipWindowOnMonitor(v6) )
      {
        v16 = (__int64)v3;
        v17 = 6;
        if ( v2 != 3 )
          v3 = 0LL;
        v18 = v3;
        while ( 1 )
        {
          TopWindow = NextTopWindow(gptiCurrent, v16, v18, v17);
          v3 = TopWindow;
          if ( TopWindow )
            break;
          if ( (v17 & 2) == 0 )
            return 0LL;
          v17 &= ~2u;
        }
        v21 = (struct tagWND *)*((_QWORD *)TopWindow + 32);
        if ( !(unsigned int)FBadWindow(v21) )
          v3 = v21;
      }
      else
      {
        v3 = *(struct tagWND **)(gpqForegroundPrev + 96LL);
      }
      goto LABEL_13;
  }
  if ( v2 != 6 )
    return 0LL;
  v4 = 3;
LABEL_13:
  if ( !v3 )
    return 0LL;
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  v22[1] = v3;
  ++*((_DWORD *)v3 + 2);
  v7 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(*((_QWORD *)v3 + 2) + 384LL) != v7 )
  {
    v8 = gpqForeground;
    if ( gpqForeground != v7 && gpqForeground )
    {
      v11 = 0;
LABEL_22:
      ThreadUnlock1(v8, a2);
      return v11;
    }
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 784LL) || (v9 = 0, v2 == 1) )
      v9 = 1;
LABEL_18:
    v10 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v10 && v3 == *(struct tagWND **)(v10 + 296) && v2 == 3 )
      *(_DWORD *)(gptiCurrent + 1096LL) |= 0x40u;
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    v11 = xxxSetForegroundWindow(v3);
    if ( v9 )
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    else
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x20u;
    goto LABEL_22;
  }
  if ( FAllowForegroundActivate(*(struct tagQ **)(gptiCurrent + 384LL), v3) )
  {
    v9 = *(_DWORD *)(gptiCurrent + 784LL) == 0;
    goto LABEL_18;
  }
  v13 = xxxActivateThisWindow(v3, 0LL, v4, 0);
  ThreadUnlock1(v15, v14);
  return v13;
}
