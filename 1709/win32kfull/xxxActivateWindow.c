/*
 * XREFs of xxxActivateWindow @ 0x1C00CB624
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxSetActiveWindow @ 0x1C00C8C60 (xxxSetActiveWindow.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00C9224 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     NextTopWindow @ 0x1C0065110 (NextTopWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00C83C4 (SkipWindowOnMonitor.c)
 *     FBadWindow @ 0x1C00CB910 (FBadWindow.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00CB944 (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND *v3; // rdi
  char v4; // r12
  struct tagWND *ImmersiveRealmFallbackWindow; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  char v8; // bl
  struct tagWND *v9; // r15
  struct tagWND *TopWindow; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  BOOL v18; // ebx
  __int64 v19; // rax
  unsigned int v20; // edi
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
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
      {
LABEL_6:
        if ( (((*((_BYTE *)v3 + 71) & 0xC0) + 0x80) & 0xBF) == 0 )
        {
          v21 = (struct tagWND *)*((_QWORD *)v3 + 15);
          if ( !(unsigned int)FBadWindow(v21) )
          {
            v3 = v21;
            goto LABEL_16;
          }
        }
        goto LABEL_7;
      }
      if ( v2 != 4 )
      {
        if ( v2 != 5 )
        {
          if ( v2 != 6 )
            return 0LL;
          v4 = 3;
          goto LABEL_16;
        }
LABEL_7:
        ImmersiveRealmFallbackWindow = GetImmersiveRealmFallbackWindow(v3);
        if ( ImmersiveRealmFallbackWindow )
        {
          v3 = ImmersiveRealmFallbackWindow;
        }
        else if ( !gpqForegroundPrev
               || (v6 = *(_QWORD *)(gpqForegroundPrev + 128LL), (unsigned int)FBadWindow(v6))
               || (*(_BYTE *)(v6 + 60) & 0x20) != 0
               || (*(_BYTE *)(v6 + 71) & 0x20) != 0
               || (unsigned int)SkipWindowOnMonitor(v6) )
        {
          v7 = (__int64)v3;
          v8 = 6;
          if ( v2 != 3 )
            v3 = 0LL;
          v9 = v3;
          while ( 1 )
          {
            TopWindow = NextTopWindow(gptiCurrent, v7, v9, v8);
            v3 = TopWindow;
            if ( TopWindow )
              break;
            if ( (v8 & 2) == 0 )
              return 0LL;
            v8 &= ~2u;
          }
          v11 = (struct tagWND *)*((_QWORD *)TopWindow + 32);
          if ( !(unsigned int)FBadWindow(v11) )
            v3 = v11;
        }
        else
        {
          v3 = *(struct tagWND **)(gpqForegroundPrev + 128LL);
        }
        goto LABEL_16;
      }
      v4 = 3;
    }
    if ( !(unsigned int)((__int64 (*)(void))FBadWindow)() )
      goto LABEL_16;
    goto LABEL_6;
  }
LABEL_16:
  if ( v3 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v22;
    v22[1] = v3;
    _InterlockedAdd((volatile signed __int32 *)v3 + 2, 1u);
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( *(_QWORD *)(*((_QWORD *)v3 + 2) + 408LL) == v12 )
    {
      if ( !FAllowForegroundActivate(*(struct tagQ **)(gptiCurrent + 408LL), v3) )
      {
        v13 = xxxActivateThisWindow(v3, 0, v4, 0);
        ThreadUnlock1(v15, v14);
        return v13;
      }
      v18 = *(_DWORD *)(gptiCurrent + 872LL) == 0;
    }
    else
    {
      v17 = gpqForeground;
      if ( gpqForeground != v12 && gpqForeground )
      {
        v20 = 0;
LABEL_27:
        ThreadUnlock1(v17, a2);
        return v20;
      }
      if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 872LL) || (v18 = 0, v2 == 1) )
        v18 = 1;
    }
    v19 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v19 && v3 == *(struct tagWND **)(v19 + 296) && v2 == 3 )
      *(_DWORD *)(gptiCurrent + 1184LL) |= 0x40u;
    *(_DWORD *)(gptiCurrent + 464LL) |= 0x20u;
    v20 = xxxSetForegroundWindow(v3);
    if ( v18 )
      *(_DWORD *)(gptiCurrent + 464LL) |= 0x20u;
    else
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x20u;
    goto LABEL_27;
  }
  return 0LL;
}
