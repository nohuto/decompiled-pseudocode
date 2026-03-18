/*
 * XREFs of xxxOldNextWindow @ 0x1C01CC84C
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 *     xxxCallMsgFilter @ 0x1C013DDF4 (xxxCallMsgFilter.c)
 *     RemoveSwitchWindowInfo @ 0x1C013DEB0 (RemoveSwitchWindowInfo.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B2C2C (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01BD408 (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CBBB4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // r15d
  __int64 v4; // rbx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v12; // zf
  char v13; // al
  _DWORD *Window; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 NextQueueWindow; // rax
  __int64 v24; // rcx
  struct tagWND *v25; // r14
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r11d
  __int16 v30; // ax
  unsigned __int64 v31; // rax
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  BOOL v39; // edi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  _QWORD v48[3]; // [rsp+98h] [rbp-80h] BYREF
  _QWORD v49[7]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v50[2]; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-20h] BYREF
  struct tagWND *v52; // [rsp+100h] [rbp-18h]
  __int64 v53; // [rsp+110h] [rbp-8h] BYREF
  __int64 v54; // [rsp+118h] [rbp+0h]
  _QWORD v55[3]; // [rsp+128h] [rbp+10h] BYREF
  __int64 v56[3]; // [rsp+140h] [rbp+28h] BYREF
  struct tagSwitchWndInfo *v57; // [rsp+190h] [rbp+78h] BYREF

  v1 = a1;
  memset(v49, 0, 0x30uLL);
  result = gptiCurrent;
  v3 = 0;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 384LL);
  v4 = *(_QWORD *)(result + 88);
  if ( !v4 )
    return result;
  v48[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v48;
  v48[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  xxxCapture(gptiCurrent, v4, 4);
  v49[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    KeyState = GetKeyState(0x10u);
    inited = (__int64)InitSwitchWndInfo(&v57, (struct tagWND *)v4, KeyState < 0);
    if ( v57 )
    {
      *((_DWORD *)v57 + 27) = 1;
      v55[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v55;
      v55[1] = inited;
      if ( inited )
        ++*(_DWORD *)(inited + 8);
      PushW32ThreadLock((__int64)&v57, v56, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v8, v7)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9),
            v12 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v13 = 1,
            v12) )
      {
        v13 = 0;
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
                 v13,
                 0LL);
      if ( gspwndAltTab )
        PostMessage((__int64)gspwndAltTab, 16LL, 0LL, 0LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v50[1] = Window;
      *(_QWORD *)(ThreadWin32Thread + 16) = v56[0];
      v50[0] = &gspwndAltTab;
      HMAssignmentLock(v50);
      v16 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v51 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v51;
        v52 = v16;
        ++*((_DWORD *)v16 + 2);
        v19 = safe_cast_fnid_to_PSWITCHWND((__int64)v16);
        if ( v19 )
          *(_QWORD *)(v19 + 8) = v57;
        xxxShowSwitchWindow((struct tagWND *)v19);
        ThreadUnlock1(v21, v20);
      }
      else
      {
        RemoveSwitchWindowInfo(&v57);
      }
      inited = ThreadUnlock1(v18, v17);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v22 = GetKeyState(0x10u);
    NextQueueWindow = GetNextQueueWindow(v4, v22 < 0, 1);
    inited = NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v3 = 1;
    v4 = NextQueueWindow;
    v24 = NextQueueWindow;
    goto LABEL_38;
  }
  v25 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v26 = 0LL;
    v51 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v51;
    v52 = v25;
    ++*((_DWORD *)v25 + 2);
    while ( 1 )
    {
      v57 = Getpswi(v25);
      if ( !v57 )
        goto LABEL_31;
      v30 = GetKeyState(v29);
      v31 = xxxMoveSwitchWndHilite(v25, v57, v30 < 0);
      if ( v26 )
      {
        if ( v26 == v31 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v28, v27);
LABEL_37:
          v24 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v24, (__int64)v48);
          goto LABEL_39;
        }
      }
      else
      {
        v26 = v31;
      }
      inited = HMValidateHandleNoSecure(v31, 1);
      if ( inited )
        goto LABEL_31;
    }
  }
  v32 = GetKeyState(0x10u);
  v33 = GetNextQueueWindow(v4, v32 < 0, 0);
  inited = v33;
  if ( v33 && v33 != v4 )
  {
    if ( (*(_BYTE *)(v4 + 64) & 8) == 0 )
    {
      v53 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v53;
      v54 = v33;
      ++*(_DWORD *)(v33 + 8);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v35, v34);
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
              v36 = *(_QWORD *)v4;
            else
              v36 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((__int64)v49, 0LL, 0, 0, 2u, 0) )
              xxxWaitMessageEx(15615LL, 0, 0LL);
            v4 = HMValidateHandleNoSecure(v36, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
              ThreadLockExchange(v4, (__int64)v48);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v49, 6) )
              break;
            xxxInternalGetMessage((__int64)v49, 0LL, v49[1], v49[1], 1u, 0);
          }
          if ( LODWORD(v49[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v49[2]) == 9 || LOWORD(v49[2]) == 27 )
              goto LABEL_78;
            if ( LOWORD(v49[2]) != 16 )
              goto LABEL_53;
          }
          if ( LODWORD(v49[1]) > 0x202 )
          {
            if ( LODWORD(v49[1]) >= 0x204
              && (LODWORD(v49[1]) <= 0x205
               || LODWORD(v49[1]) > 0x206
               && (LODWORD(v49[1]) <= 0x208
                || LODWORD(v49[1]) > 0x20A && (LODWORD(v49[1]) <= 0x20C || LODWORD(v49[1]) == 786))) )
            {
              goto LABEL_53;
            }
            goto LABEL_107;
          }
          if ( LODWORD(v49[1]) >= 0x201 || LODWORD(v49[1]) == 75 )
            goto LABEL_53;
          if ( LODWORD(v49[1]) <= 0xFF )
            goto LABEL_107;
          if ( LODWORD(v49[1]) <= 0x101 )
            break;
          if ( LODWORD(v49[1]) == 260 )
          {
LABEL_78:
            LOWORD(v1) = v49[2];
            if ( LOWORD(v49[2]) != 9 && LOWORD(v49[2]) != 16 && LOWORD(v49[2]) != 27 )
              goto LABEL_55;
            if ( v4 )
              v46 = *(_QWORD *)v4;
            else
              v46 = 0LL;
            xxxInternalGetMessage((__int64)v49, 0LL, 0x104u, 0x104u, 1u, 0);
            v4 = HMValidateHandleNoSecure(v46, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
              ThreadLockExchange(v4, (__int64)v48);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v49[1]) > 0x104 && (LODWORD(v49[1]) <= 0x106 || LODWORD(v49[1]) == 512) )
              break;
LABEL_107:
            if ( v4 )
              v47 = *(_QWORD *)v4;
            else
              v47 = 0LL;
            xxxInternalGetMessage((__int64)v49, 0LL, v49[1], v49[1], 1u, 0);
            xxxTranslateMessage((__int64)v49, 0);
            xxxDispatchMessage(v49);
            v4 = HMValidateHandleNoSecure(v47, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
              v24 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v45 = *(_QWORD *)v4;
        else
          v45 = 0LL;
        xxxInternalGetMessage((__int64)v49, 0LL, v49[1], v49[1], 1u, 0);
        v4 = HMValidateHandleNoSecure(v45, 1);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
          ThreadLockExchange(v4, (__int64)v48);
        }
        if ( ((LODWORD(v49[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v49[1]) == 256 )
          goto LABEL_53;
      }
      if ( LOWORD(v49[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_54;
    }
  }
  while ( LOWORD(v49[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_53:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
    ThreadLockExchange(v4, (__int64)v48);
LABEL_54:
    v3 = 0;
    goto LABEL_55;
  }
  v3 = 1;
LABEL_55:
  xxxReleaseCapture();
  v39 = gspwndAltTab != 0LL;
  if ( v3 == 1 )
  {
    if ( gpqForeground )
    {
      v40 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v40 )
      {
        if ( v40 != v4 )
        {
          v53 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v53;
          v54 = v40;
          ++*(_DWORD *)(v40 + 8);
          xxxSetWindowPos((struct tagWND *)v40, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v42, v41);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindow((struct tagWND *)v4, 0LL, v37, v38);
    if ( (*(_BYTE *)(v4 + 71) & 0x20) != 0 && !v3 )
    {
      if ( v39 )
        PostMessage(v4, 274LL, 61728LL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v44, v43);
}
