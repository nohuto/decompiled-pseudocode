/*
 * XREFs of xxxOldNextWindow @ 0x1C01D0BF8
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     xxxCallMsgFilter @ 0x1C0144054 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B5C44 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01C1328 (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CF1B4 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CF790 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CFF78 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01D0100 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v15; // zf
  char v16; // al
  __int64 v17; // rdx
  _DWORD *Window; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int16 v30; // ax
  __int64 NextQueueWindow; // rax
  __int64 v32; // rcx
  ULONG_PTR v33; // r14
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r11d
  __int16 v40; // ax
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int16 v44; // ax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  BOOL v52; // edi
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  _QWORD v73[3]; // [rsp+98h] [rbp-80h] BYREF
  _QWORD v74[7]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v75[2]; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-20h] BYREF
  ULONG_PTR v77; // [rsp+100h] [rbp-18h]
  __int64 v78; // [rsp+110h] [rbp-8h] BYREF
  __int64 v79; // [rsp+118h] [rbp+0h]
  _QWORD v80[3]; // [rsp+128h] [rbp+10h] BYREF
  __int64 v81[3]; // [rsp+140h] [rbp+28h] BYREF
  struct tagSwitchWndInfo *v82; // [rsp+190h] [rbp+78h] BYREF

  v1 = a1;
  memset(v74, 0, 0x30uLL);
  result = gptiCurrent;
  v3 = 0;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 408LL);
  v4 = *(_QWORD *)(result + 120);
  if ( !v4 )
    return result;
  v73[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v73;
  v73[1] = v4;
  _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
  xxxCapture(gptiCurrent, v4, 4);
  v74[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    KeyState = GetKeyState(0x10u, v5, v6, v7);
    inited = (__int64)InitSwitchWndInfo(&v82, (struct tagWND *)v4, KeyState < 0);
    if ( v82 )
    {
      *((_DWORD *)v82 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v80[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v80;
      v80[1] = inited;
      if ( inited )
        _InterlockedAdd((volatile signed __int32 *)(inited + 8), 1u);
      PushW32ThreadLock((__int64)&v82, v81, (__int64)RemoveSwitchWindowInfo, v11);
      if ( !PsGetCurrentProcessWin32Process(v12)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13),
            v15 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v16 = 1,
            v15) )
      {
        v16 = 0;
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
                 v16,
                 0LL);
      if ( gspwndAltTab )
        PostMessage(gspwndAltTab, 16LL, 0LL, 0LL);
      v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v19, v20);
      v75[1] = Window;
      *(_QWORD *)(v21 + 16) = v81[0];
      v75[0] = &gspwndAltTab;
      HMAssignmentLock(v75);
      v24 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v76 = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = &v76;
        v77 = v24;
        _InterlockedAdd((volatile signed __int32 *)(v24 + 8), 1u);
        v27 = safe_cast_fnid_to_PSWITCHWND(v24);
        if ( v27 )
          *(_QWORD *)(v27 + 8) = v82;
        xxxShowSwitchWindow((struct tagWND *)v27);
        ThreadUnlock1(v29, v28);
      }
      else
      {
        RemoveSwitchWindowInfo(&v82, v22, v23);
      }
      inited = ThreadUnlock1(v26, v25);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v30 = GetKeyState(0x10u, v5, v6, v7);
    NextQueueWindow = GetNextQueueWindow(v4, v30 < 0, 1);
    inited = NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v3 = 1;
    v4 = NextQueueWindow;
    v32 = NextQueueWindow;
    goto LABEL_38;
  }
  v33 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v76 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v76;
    v77 = v33;
    _InterlockedAdd((volatile signed __int32 *)(v33 + 8), 1u);
    v34 = 0LL;
    while ( 1 )
    {
      v82 = Getpswi((struct tagWND *)v33);
      if ( !v82 )
        goto LABEL_31;
      v40 = GetKeyState(v39, v35, v37, v38);
      v41 = xxxMoveSwitchWndHilite((struct tagWND *)v33, v82, v40 < 0);
      if ( v34 )
      {
        if ( v34 == v41 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v36, v35);
LABEL_37:
          v32 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v32, (__int64)v73);
          goto LABEL_39;
        }
      }
      else
      {
        v34 = v41;
      }
      LOBYTE(v35) = 1;
      inited = HMValidateHandleNoSecure(v41, v35, v42, v43);
      if ( inited )
        goto LABEL_31;
    }
  }
  v44 = GetKeyState(0x10u, v5, v6, v7);
  v45 = GetNextQueueWindow(v4, v44 < 0, 0);
  inited = v45;
  if ( v45 && v45 != v4 )
  {
    if ( (*(_BYTE *)(v4 + 64) & 8) == 0 )
    {
      v78 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v78;
      v79 = v45;
      _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v47, v46);
    }
    if ( inited )
      goto LABEL_37;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_39:
            if ( v4 )
              v48 = *(_QWORD *)v4;
            else
              v48 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((int)v74, 0, 0, 0, 2, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            LOBYTE(v49) = 1;
            v4 = HMValidateHandleNoSecure(v48, v49, v50, v51);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v73);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v74, 6) )
              break;
            xxxInternalGetMessage((int)v74, 0, v74[1], v74[1], 1, 0);
          }
          if ( LODWORD(v74[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v74[2]) == 9 || LOWORD(v74[2]) == 27 )
              goto LABEL_78;
            if ( LOWORD(v74[2]) != 16 )
              goto LABEL_53;
          }
          if ( LODWORD(v74[1]) > 0x202 )
          {
            if ( LODWORD(v74[1]) >= 0x204
              && (LODWORD(v74[1]) <= 0x205
               || LODWORD(v74[1]) > 0x206
               && (LODWORD(v74[1]) <= 0x208
                || LODWORD(v74[1]) > 0x20A && (LODWORD(v74[1]) <= 0x20C || LODWORD(v74[1]) == 786))) )
            {
              goto LABEL_53;
            }
            goto LABEL_107;
          }
          if ( LODWORD(v74[1]) >= 0x201 || LODWORD(v74[1]) == 75 )
            goto LABEL_53;
          if ( LODWORD(v74[1]) <= 0xFF )
            goto LABEL_107;
          if ( LODWORD(v74[1]) <= 0x101 )
            break;
          if ( LODWORD(v74[1]) == 260 )
          {
LABEL_78:
            LOWORD(v1) = v74[2];
            if ( LOWORD(v74[2]) != 9 && LOWORD(v74[2]) != 16 && LOWORD(v74[2]) != 27 )
              goto LABEL_55;
            if ( v4 )
              v59 = *(_QWORD *)v4;
            else
              v59 = 0LL;
            xxxInternalGetMessage((int)v74, 0, 260, 260, 1, 0);
            LOBYTE(v60) = 1;
            v4 = HMValidateHandleNoSecure(v59, v60, v61, v62);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v73);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v74[1]) > 0x104 && (LODWORD(v74[1]) <= 0x106 || LODWORD(v74[1]) == 512) )
              break;
LABEL_107:
            if ( v4 )
              v66 = *(_QWORD *)v4;
            else
              v66 = 0LL;
            xxxInternalGetMessage((int)v74, 0, v74[1], v74[1], 1, 0);
            xxxTranslateMessage((__int64)v74, 0);
            xxxDispatchMessage((__int64)v74, v67, v68, v69);
            LOBYTE(v70) = 1;
            v4 = HMValidateHandleNoSecure(v66, v70, v71, v72);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
              v32 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v58 = *(_QWORD *)v4;
        else
          v58 = 0LL;
        xxxInternalGetMessage((int)v74, 0, v74[1], v74[1], 1, 0);
        LOBYTE(v63) = 1;
        v4 = HMValidateHandleNoSecure(v58, v63, v64, v65);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
          ThreadLockExchange(v4, (__int64)v73);
        }
        if ( ((LODWORD(v74[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v74[1]) == 256 )
          goto LABEL_53;
      }
      if ( LOWORD(v74[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_54;
    }
  }
  while ( LOWORD(v74[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_53:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
    ThreadLockExchange(v4, (__int64)v73);
LABEL_54:
    v3 = 0;
    goto LABEL_55;
  }
  v3 = 1;
LABEL_55:
  xxxReleaseCapture();
  v52 = gspwndAltTab != 0;
  if ( v3 == 1 )
  {
    if ( gpqForeground )
    {
      v53 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v53 )
      {
        if ( v53 != v4 )
        {
          v78 = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = &v78;
          v79 = v53;
          _InterlockedAdd((volatile signed __int32 *)(v53 + 8), 1u);
          xxxSetWindowPos((struct tagWND *)v53, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v55, v54);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindow((struct tagWND *)v4, 0);
    if ( (*(_BYTE *)(v4 + 71) & 0x20) != 0 && !v3 )
    {
      if ( v52 )
        PostMessage(v4, 274LL, 0xF120uLL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v57, v56);
}
