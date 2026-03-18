/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20
 * Callers:
 *     xxxDesktopWndProc @ 0x1C003CEB0 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     xxxEndPaint @ 0x1C003BF60 (xxxEndPaint.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C2910 (xxxDWP_UpdateUIState.c)
 *     xxxSetWindowLong @ 0x1C00DD088 (xxxSetWindowLong.c)
 *     SetDesktopPattern @ 0x1C00EC3FC (SetDesktopPattern.c)
 *     xxxInternalPaintDesktop @ 0x1C01112F4 (xxxInternalPaintDesktop.c)
 *     GreRealizeDefaultPalette @ 0x1C0112954 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C011551C (GreGetSystemPaletteUse.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01C376C (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int16 v8; // ax
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ProfileUserName; // rbx
  __int64 v22; // [rsp+50h] [rbp-D8h] BYREF
  struct tagWND *v23; // [rsp+58h] [rbp-D0h]
  _BYTE v24[24]; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v25[10]; // [rsp+80h] [rbp-A8h] BYREF

  if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    return 0LL;
  v8 = *((_WORD *)a1 + 41);
  if ( v8 != 669 )
  {
    if ( v8 )
      return 0LL;
    if ( a2 != 1 )
      return xxxDefWindowProc(a1);
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
      v13 = Win32AllocPoolWithQuotaZInit(v10 - 400, 1937208149LL);
      if ( !v13 )
        return 0LL;
      v14 = *((_QWORD *)a1 + 49);
      if ( v14 )
        Win32FreePool(v14);
      *((_DWORD *)a1 + 63) = v12;
      *((_QWORD *)a1 + 49) = v13;
    }
    *((_WORD *)a1 + 41) = 669;
  }
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          return xxxDefWindowProc(a1);
        case 0x30Fu:
          goto LABEL_56;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_56:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && gMouseTrails && !gtmridMouseTrails )
            gtmridMouseTrails = SetRITTimer(0LL, 20LL, HideMouseTrails);
          return 0LL;
        default:
          return xxxDefWindowProc(a1);
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      ProfileUserName = CreateProfileUserName(v24);
      SetDesktopPattern(ProfileUserName, 0LL);
      FreeProfileUserName(ProfileUserName, v24);
      xxxSendNotifyMessage(a1, 0x15u, 0LL, 0LL, 1);
      xxxRealizeDesktop(a1);
      PsGetCurrentProcessId();
      xxxSetWindowLong(a1, 0);
      PsGetCurrentThreadId();
      xxxSetWindowLong(a1, 0);
      return 0LL;
    case 0xFu:
      xxxBeginPaint(a1);
      xxxEndPaint(a1, v25);
      return 0LL;
    case 0x10u:
      return 0LL;
  }
  if ( a2 != 20 )
  {
    switch ( a2 )
    {
      case 0x15u:
        xxxRedrawWindow(a1);
        break;
      case 0x3Au:
        v15 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        v22 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v22;
        v23 = (struct tagWND *)v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 2);
        ThreadUnlock1(v17, v16);
        v18 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v22 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v22;
          v23 = v18;
          ++*((_DWORD *)v18 + 2);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((int)gspwndAltTab, 58, 0, 0, 0, 0, 0LL, 1, 1);
          ThreadUnlock1(v20, v19);
        }
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
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
        break;
      default:
        return xxxDefWindowProc(a1);
    }
    return 0LL;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    xxxInternalPaintDesktop(a1, a3, 1LL);
  return 1LL;
}
