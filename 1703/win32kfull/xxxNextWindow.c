/*
 * XREFs of xxxNextWindow @ 0x1C01CC154
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00CB4B0 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     SetNewForegroundQueue @ 0x1C00B6AD0 (SetNewForegroundQueue.c)
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 *     RemoveSwitchWindowInfo @ 0x1C013DEB0 (RemoveSwitchWindowInfo.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B2C2C (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 */

void __fastcall xxxNextWindow(__int64 a1, int a2)
{
  struct _LARGE_STRING *v3; // rbx
  __int64 NonChildAncestor; // r15
  struct tagWND *v6; // r12
  struct tagWND *v7; // r13
  struct tagWND *v8; // rcx
  struct tagWND *inited; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 NextQueueWindow; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v24; // zf
  char v25; // al
  _DWORD *Window; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  struct tagWND *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagWND *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // r13
  struct tagSwitchWndInfo *v44; // rax
  __int64 v45; // rdx
  struct tagWND *v46; // rcx
  int v47; // r11d
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r15
  __int128 v52; // [rsp+90h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-68h] BYREF
  struct tagWND *v55; // [rsp+B0h] [rbp-60h]
  __int64 v56; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-48h]
  __int64 v58; // [rsp+D8h] [rbp-38h] BYREF
  struct tagWND *v59; // [rsp+E0h] [rbp-30h]
  __int64 v60; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-18h]
  __int128 v62; // [rsp+110h] [rbp+0h] BYREF
  __int128 v63; // [rsp+120h] [rbp+10h] BYREF
  __int128 v64; // [rsp+130h] [rbp+20h] BYREF
  __int128 v65; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v66[3]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v67[11]; // [rsp+168h] [rbp+58h] BYREF
  BOOL v68; // [rsp+1D0h] [rbp+C0h]
  struct tagSwitchWndInfo *v70; // [rsp+1E0h] [rbp+D0h] BYREF
  _DWORD *v71; // [rsp+1E8h] [rbp+D8h]

  if ( !a1 )
    return;
  v3 = 0LL;
  v68 = (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL;
  NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 80));
  if ( a2 == 9 )
  {
    v6 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v43 = 0LL;
      v66[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v66;
      v66[1] = v6;
      ++*((_DWORD *)v6 + 2);
      while ( 1 )
      {
        v44 = Getpswi(v6);
        v70 = v44;
        if ( !v44 )
        {
          ThreadUnlock1(v46, v45);
          goto LABEL_67;
        }
        v48 = xxxMoveSwitchWndHilite(v46, v44, v47);
        if ( v43 )
        {
          if ( v43 == v48 )
          {
            v51 = 0LL;
LABEL_64:
            ThreadUnlock1(v50, v49);
            *((_QWORD *)&v52 + 1) = v51;
            *(_QWORD *)&v52 = &gspwndActivate;
            v65 = v52;
            HMAssignmentLock(&v65);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v43 = v48;
        }
        v51 = HMValidateHandleNoSecure(v48, 1);
        if ( v51 )
          goto LABEL_64;
      }
    }
    gLangToggleKeyState = 8;
    if ( (gdwMitConfig & 1) != 0 )
      ForceResetMouseButtonsDownState();
    else
      gwMouseOwnerButton = 0;
    *((_QWORD *)&v52 + 1) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)&v52 = &gspwndActivate;
    v62 = v52;
    HMAssignmentLock(&v62);
    if ( !gspwndActivate )
    {
      *(_QWORD *)&v52 = &gspwndActivate;
      *((_QWORD *)&v52 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) + 112LL);
      v63 = v52;
      HMAssignmentLock(&v63);
      if ( !gspwndActivate )
        return;
    }
    v56 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v56;
    v57 = NonChildAncestor;
    if ( NonChildAncestor )
      ++*(_DWORD *)(NonChildAncestor + 8);
    v7 = gspwndActivate;
    v58 = *(_QWORD *)(gptiCurrent + 368LL);
    v8 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 368LL) = &v58;
    v59 = v8;
    ++*((_DWORD *)v8 + 2);
    xxxSendTransformableMessageTimeout((ULONG_PTR)v8, 0x1Fu, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
    inited = InitSwitchWndInfo(&v70, v7, v68);
    v11 = *(_QWORD *)(gptiCurrent + 368LL);
    NextQueueWindow = (__int64)inited;
    v60 = v11;
    *(_QWORD *)(gptiCurrent + 368LL) = &v60;
    v61 = (__int64)inited;
    if ( inited )
      ++*((_DWORD *)inited + 2);
    if ( v70 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v70);
        ThreadUnlock1(v14, v13);
        ThreadUnlock1(v16, v15);
        ThreadUnlock1(v18, v17);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v70, v67, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v70 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v20, v19)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21),
            v24 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v25 = 1,
            v24) )
      {
        v25 = 0;
      }
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 -2004877312,
                 0,
                 0,
                 10,
                 10,
                 0LL,
                 0LL,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v25,
                 0LL);
      v71 = Window;
      if ( gspwndAltTab )
      {
        PostMessage((__int64)gspwndAltTab, 16LL, 0LL, 0LL);
        Window = v71;
      }
      *((_QWORD *)&v52 + 1) = Window;
      *(_QWORD *)&v52 = &gspwndAltTab;
      HMAssignmentLock(&v52);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v67[0];
      if ( gspwndAltTab )
      {
        v35 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
        if ( v35 )
          *(_QWORD *)(v35 + 8) = v70;
        *(_QWORD *)&v52 = &gspwndActivate;
        *((_QWORD *)&v52 + 1) = NextQueueWindow;
        v64 = v52;
        HMAssignmentLock(&v64);
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
        v36 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( gspwndFullScreen != (struct tagWND *)v36 )
        {
          v54 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v54;
          v55 = (struct tagWND *)v36;
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          v37 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          if ( v37 )
            v3 = *(struct _LARGE_STRING **)v37;
          xxxSendNotifyMessage(v37, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v39, v38);
        }
        v40 = gspwndAltTab;
        v54 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v54;
        v55 = v40;
        ++*((_DWORD *)v40 + 2);
        xxxShowSwitchWindow(v40);
        ThreadUnlock1(v42, v41);
        goto LABEL_43;
      }
      RemoveSwitchWindowInfo(&v70);
    }
LABEL_25:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(NonChildAncestor + 71) & 0xC0) != 0x40 )
        {
          v28 = *(_QWORD *)(NonChildAncestor + 208);
          if ( v28 )
            *(_DWORD *)(v28 + 56) &= ~4u;
        }
      }
      if ( !v68 && (*((_BYTE *)v7 + 64) & 8) == 0 )
        xxxSetWindowPos(v7, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(NextQueueWindow + 71) & 0xC0) != 0x40 )
      {
        v29 = *(_QWORD *)(NextQueueWindow + 208);
        if ( v29 )
          *(_DWORD *)(v29 + 56) |= 4u;
      }
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 384LL) )
        SetNewForegroundQueue(0LL);
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(NextQueueWindow + 16), 0);
      v30 = 18;
      if ( a2 != 9 )
        v30 = 2;
      xxxSetForegroundWindow2((LARGE_INTEGER *)NextQueueWindow, 0LL, v30, 0);
      if ( a2 == 9 && (*(_BYTE *)(NextQueueWindow + 71) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_43:
    ThreadUnlock1(v11, v10);
    ThreadUnlock1(v32, v31);
    ThreadUnlock1(v34, v33);
    return;
  }
  if ( a2 != 27 )
    return;
LABEL_67:
  if ( (*(_DWORD *)(a1 + 340) & 0x4000000) == 0 )
  {
    v7 = *(struct tagWND **)(a1 + 88);
    if ( v7
      || (v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 408LL) + 8LL) + 16LL)
                                 + 112LL)) != 0LL )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 80));
      v56 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v56;
      v57 = NonChildAncestor;
      if ( NonChildAncestor )
        ++*(_DWORD *)(NonChildAncestor + 8);
      v58 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v58;
      v59 = v7;
      ++*((_DWORD *)v7 + 2);
      xxxSendTransformableMessageTimeout((ULONG_PTR)v7, 0x1Fu, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v7, v68, 1);
      v60 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v60;
      v61 = NextQueueWindow;
      if ( NextQueueWindow )
        ++*(_DWORD *)(NextQueueWindow + 8);
      if ( (struct tagWND *)NextQueueWindow == v7 )
        goto LABEL_43;
      goto LABEL_25;
    }
  }
}
