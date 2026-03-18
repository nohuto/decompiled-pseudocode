/*
 * XREFs of xxxNextWindow @ 0x1C01D04FC
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C0104150 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     SetNewForegroundQueue @ 0x1C00CC1C0 (SetNewForegroundQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B5C44 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CF1B4 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CF790 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01D0100 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 */

void __fastcall xxxNextWindow(__int64 a1, int a2)
{
  struct _LARGE_STRING *v3; // rbx
  __int64 NonChildAncestor; // r15
  ULONG_PTR v6; // r12
  __int64 v7; // r13
  struct tagWND *inited; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 NextQueueWindow; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v23; // zf
  char v24; // al
  _DWORD *Window; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  ULONG_PTR v40; // rcx
  struct tagWND *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG_PTR v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // r13
  struct tagSwitchWndInfo *v48; // rax
  __int64 v49; // rdx
  struct tagWND *v50; // rcx
  int v51; // r11d
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r15
  __int128 v58; // [rsp+90h] [rbp-80h]
  __int128 v59; // [rsp+90h] [rbp-80h]
  __int128 v60; // [rsp+90h] [rbp-80h]
  __int128 v61; // [rsp+90h] [rbp-80h]
  __int128 v62; // [rsp+90h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-68h] BYREF
  ULONG_PTR v65; // [rsp+B0h] [rbp-60h]
  __int64 v66; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-48h]
  __int64 v68; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-30h]
  __int64 v70; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-18h]
  __int128 v72; // [rsp+110h] [rbp+0h] BYREF
  __int128 v73; // [rsp+120h] [rbp+10h] BYREF
  __int128 v74; // [rsp+130h] [rbp+20h] BYREF
  __int128 v75; // [rsp+140h] [rbp+30h] BYREF
  __int128 v76; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v77[3]; // [rsp+160h] [rbp+50h] BYREF
  __int64 v78[11]; // [rsp+178h] [rbp+68h] BYREF
  BOOL v79; // [rsp+1E0h] [rbp+D0h]
  struct tagSwitchWndInfo *v81; // [rsp+1F0h] [rbp+E0h] BYREF
  _DWORD *v82; // [rsp+1F8h] [rbp+E8h]

  if ( !a1 )
    return;
  v3 = 0LL;
  v79 = (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL;
  NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  if ( a2 == 9 )
  {
    v6 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v77[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v77;
      v77[1] = v6;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v47 = 0LL;
      while ( 1 )
      {
        v48 = Getpswi((struct tagWND *)v6);
        v81 = v48;
        if ( !v48 )
        {
          ThreadUnlock1(v50, v49);
          goto LABEL_67;
        }
        v52 = xxxMoveSwitchWndHilite(v50, v48, v51);
        if ( v47 )
        {
          if ( v47 == v52 )
          {
            v57 = 0LL;
LABEL_64:
            ThreadUnlock1(v54, v53);
            *((_QWORD *)&v62 + 1) = v57;
            *(_QWORD *)&v62 = &gspwndActivate;
            v76 = v62;
            HMAssignmentLock(&v76);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v47 = v52;
        }
        LOBYTE(v53) = 1;
        v57 = HMValidateHandleNoSecure(v52, v53, v55, v56);
        if ( v57 )
          goto LABEL_64;
      }
    }
    if ( (gdwMitConfig & 1) != 0 )
      ForceResetMouseButtonsDownState();
    else
      gwMouseOwnerButton = 0;
    *((_QWORD *)&v58 + 1) = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v58 = &gspwndActivate;
    v72 = v58;
    HMAssignmentLock(&v72);
    if ( !gspwndActivate )
    {
      *(_QWORD *)&v59 = &gspwndActivate;
      *((_QWORD *)&v59 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) + 112LL);
      v73 = v59;
      HMAssignmentLock(&v73);
      if ( !gspwndActivate )
        return;
    }
    v66 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v66;
    v67 = NonChildAncestor;
    if ( NonChildAncestor )
      _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
    v7 = gspwndActivate;
    v68 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v68;
    v69 = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    xxxSendTransformableMessageTimeout((__int64 *)v7, 31LL, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1u, 0);
    inited = InitSwitchWndInfo(&v81, (struct tagWND *)v7, v79);
    v12 = *(_QWORD *)(gptiCurrent + 392LL);
    NextQueueWindow = (__int64)inited;
    v70 = v12;
    *(_QWORD *)(gptiCurrent + 392LL) = &v70;
    v71 = (__int64)inited;
    if ( inited )
      _InterlockedAdd((volatile signed __int32 *)inited + 2, 1u);
    if ( v81 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v81, v9, v10);
        ThreadUnlock1(v15, v14);
        ThreadUnlock1(v17, v16);
        ThreadUnlock1(v19, v18);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v81, v78, (__int64)RemoveSwitchWindowInfo, v11);
      *((_DWORD *)v81 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v20)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21),
            v23 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v24 = 1,
            v23) )
      {
        v24 = 0;
      }
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 0x88800000,
                 0,
                 0,
                 0xAu,
                 0xAu,
                 0LL,
                 0LL,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v24,
                 0LL);
      v82 = Window;
      if ( gspwndAltTab )
      {
        PostMessage(gspwndAltTab, 16LL, 0LL, 0LL);
        Window = v82;
      }
      *((_QWORD *)&v60 + 1) = Window;
      *(_QWORD *)&v60 = &gspwndAltTab;
      v74 = v60;
      HMAssignmentLock(&v74);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28);
      *(_QWORD *)(ThreadWin32Thread + 16) = v78[0];
      if ( gspwndAltTab )
      {
        v39 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
        if ( v39 )
          *(_QWORD *)(v39 + 8) = v81;
        *(_QWORD *)&v61 = &gspwndActivate;
        *((_QWORD *)&v61 + 1) = NextQueueWindow;
        v75 = v61;
        HMAssignmentLock(&v75);
        if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
        v40 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( gspwndFullScreen != v40 )
        {
          v64 = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = &v64;
          v65 = v40;
          if ( v40 )
            _InterlockedAdd((volatile signed __int32 *)(v40 + 8), 1u);
          v41 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          if ( v41 )
            v3 = *(struct _LARGE_STRING **)v41;
          xxxSendNotifyMessage(v41, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v43, v42);
        }
        v44 = gspwndAltTab;
        v64 = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = &v64;
        v65 = v44;
        _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u);
        xxxShowSwitchWindow((struct tagWND *)v44);
        ThreadUnlock1(v46, v45);
        goto LABEL_43;
      }
      RemoveSwitchWindowInfo(&v81, v30, v31);
    }
LABEL_25:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(NonChildAncestor + 71) & 0xC0) != 0x40 )
        {
          v32 = *(_QWORD *)(NonChildAncestor + 208);
          if ( v32 )
            *(_DWORD *)(v32 + 56) &= ~4u;
        }
      }
      if ( !v79 && (*(_BYTE *)(v7 + 64) & 8) == 0 )
        xxxSetWindowPos((struct tagWND *)v7, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(NextQueueWindow + 71) & 0xC0) != 0x40 )
      {
        v33 = *(_QWORD *)(NextQueueWindow + 208);
        if ( v33 )
          *(_DWORD *)(v33 + 56) |= 4u;
      }
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 408LL) )
        SetNewForegroundQueue(0LL);
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(NextQueueWindow + 16), 0);
      v34 = 18;
      if ( a2 != 9 )
        v34 = 2;
      xxxSetForegroundWindow2((LARGE_INTEGER *)NextQueueWindow, 0LL, v34, 0);
      if ( a2 == 9 && (*(_BYTE *)(NextQueueWindow + 71) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_43:
    ThreadUnlock1(v12, v9);
    ThreadUnlock1(v36, v35);
    ThreadUnlock1(v38, v37);
    return;
  }
  if ( a2 != 27 )
    return;
LABEL_67:
  if ( (*(_DWORD *)(a1 + 380) & 0x4000000) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7
      || (v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 432LL) + 8LL) + 16LL) + 112LL)) != 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      v66 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v66;
      v67 = NonChildAncestor;
      if ( NonChildAncestor )
        _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
      v68 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v68;
      v69 = v7;
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      xxxSendTransformableMessageTimeout((__int64 *)v7, 31LL, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1u, 0);
      NextQueueWindow = GetNextQueueWindow(v7, v79, 1);
      v70 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v70;
      v71 = NextQueueWindow;
      if ( NextQueueWindow )
        _InterlockedAdd((volatile signed __int32 *)(NextQueueWindow + 8), 1u);
      if ( NextQueueWindow == v7 )
        goto LABEL_43;
      goto LABEL_25;
    }
  }
}
