/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00DF460 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxDWP_UpdateUIState @ 0x1C007BBB4 (xxxDWP_UpdateUIState.c)
 *     xxxEndPaint @ 0x1C007DE24 (xxxEndPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     GreRealizeDefaultPalette @ 0x1C00DF9CC (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C00DFA88 (GreGetSystemPaletteUse.c)
 *     xxxInternalPaintDesktop @ 0x1C00DFAEC (xxxInternalPaintDesktop.c)
 *     xxxSetWindowLong @ 0x1C00EF5D8 (xxxSetWindowLong.c)
 *     SetDesktopPattern @ 0x1C00F9308 (SetDesktopPattern.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01C648C (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int16 v8; // ax
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 i; // rbx
  ULONG_PTR v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 ProfileUserName; // rbx
  char v25[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v26; // [rsp+58h] [rbp-81h] BYREF
  ULONG_PTR v27; // [rsp+60h] [rbp-79h]
  _BYTE v28[32]; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v29[10]; // [rsp+90h] [rbp-49h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    return 0LL;
  v8 = *((_WORD *)a1 + 41);
  if ( v8 != 669 )
  {
    if ( v8 )
      return 0LL;
    if ( (_DWORD)a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    v10 = *(unsigned __int16 *)(gpsi + 334LL);
    v11 = *((_DWORD *)a1 + 63);
    if ( v11 + 400 >= v10 )
    {
      if ( *((_QWORD *)a1 + 49) )
        memset(*((void **)a1 + 49), 0, *((unsigned int *)a1 + 63));
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + v11 + 400 < v10 )
        return 0LL;
      v12 = v10 - 400;
      v15 = Win32AllocPoolWithQuotaZInit(v10 - 400, 1937208149LL);
      if ( !v15 )
        return 0LL;
      v16 = *((_QWORD *)a1 + 49);
      if ( v16 )
        Win32FreePool(v16, v13, v14);
      *((_DWORD *)a1 + 63) = v12;
      *((_QWORD *)a1 + 49) = v15;
    }
    *((_WORD *)a1 + 41) = 669;
  }
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( v6 != 128 )
    {
      a3 = v5;
      a2 = v6;
LABEL_67:
      a4 = v4;
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    return 0LL;
  }
  if ( v6 > 0x80 )
  {
    switch ( v6 )
    {
      case 0xA1u:
        return 0LL;
      case 0x112u:
        a3 = 61760LL;
        if ( v5 == 61760 )
        {
          a2 = 274LL;
          goto LABEL_67;
        }
        return 0LL;
      case 0x128u:
        return xxxDWP_UpdateUIState((__int64)a1, v5, v4);
      case 0x203u:
        v6 = 274;
        v5 = 61744LL;
        goto LABEL_63;
      case 0x30Fu:
        goto LABEL_61;
    }
    if ( v6 != 785 )
    {
      if ( v6 == 1025 )
      {
        if ( !gProtocolType && gMouseTrails && !gtmridMouseTrails )
          gtmridMouseTrails = SetRITTimer(0, 20, (int)HideMouseTrails, 0);
        return 0LL;
      }
      goto LABEL_63;
    }
    if ( *(_QWORD *)a1 != v5 )
LABEL_61:
      xxxRealizeDesktop(a1);
    return 0LL;
  }
  switch ( v6 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v28);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v28);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1, (__int64)v29);
      xxxEndPaint(a1, v29);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( v6 != 20 )
  {
    if ( v6 != 21 )
    {
      switch ( v6 )
      {
        case ':':
          v18 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          v26 = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = &v26;
          v27 = v18;
          if ( v18 )
            _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
          xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 2);
          ThreadUnlock1(v20, v19);
          v21 = gspwndAltTab;
          if ( gspwndAltTab )
          {
            v26 = *(_QWORD *)(gptiCurrent + 392LL);
            *(_QWORD *)(gptiCurrent + 392LL) = &v26;
            v27 = v21;
            _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u);
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((__int64 *)gspwndAltTab, 58LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
            ThreadUnlock1(v23, v22);
          }
          return 0LL;
        case 'F':
          if ( (*(_DWORD *)(v4 + 32) & 4) == 0 && !*(_QWORD *)(v4 + 8) )
          {
            xxxSetThreadDesktop(0LL, grpdeskRitInput);
            if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 48LL)) != 1 )
              GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 48LL));
            if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
            {
              xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, *(_QWORD *)a1, 0LL, 1);
              *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
            }
          }
          return 0LL;
        case 'Q':
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
          for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
            xxxSendNotifyMessage((struct tagWND *)i, 0x51u, v5, (struct _LARGE_STRING *)v4, 1);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
          return 0LL;
      }
LABEL_63:
      a4 = v4;
      a3 = v5;
      a2 = v6;
      return xxxDefWindowProc(a1, a2, a3, a4);
    }
    xxxRedrawWindow(a1, 0LL, 0LL, 133LL);
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, v5, 1LL);
  return 1LL;
}
