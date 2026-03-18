/*
 * XREFs of xxxSetLayeredWindow @ 0x1C008BC2C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C008B524 (DwmAsyncTextChange.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x1C008BE34 (CreateSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     TrackLayeredZorder @ 0x1C0090DAC (TrackLayeredZorder.c)
 *     UpdateWindowSpriteDPI @ 0x1C009103C (UpdateWindowSpriteDPI.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00E6FFC (GreUpdateSpriteClipRgn.c)
 *     GreGetSprite @ 0x1C011B420 (GreGetSprite.c)
 *     xxxUpdateThreadsWindows @ 0x1C01DF9A4 (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // edi
  struct tagWND *TopLevelWindow; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 Sprite; // rax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 DCEx; // rdi
  __int64 RectRgnIndirect; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _BYTE v26[8]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+40h] BYREF
  int v29; // [rsp+C8h] [rbp+48h] BYREF
  int v30; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == a1 )
    {
      v3 = 1;
    }
    else if ( *((_WORD *)a1 + 162) >= 0x602u )
    {
      v3 = 1;
    }
  }
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v8) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*((_DWORD *)a1 + 76) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 32LL), a1, (char *)a1 + 128, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1, a1, 0xA08u, 1);
      TrackLayeredZorder(a1);
      if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
      {
        v12 = *((_QWORD *)a1 + 27);
        if ( v12 )
          GreUpdateSpriteClipRgn(v11, *(_QWORD *)a1, v12, 0LL);
      }
      v13 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
      UpdateWindowSpriteDPI(a1, v13);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        SendDwmIconChange((ULONG_PTR)a1);
        v15 = (void *)ReferenceDwmApiPort(v14);
        DwmAsyncTextChange(v15, *(_QWORD *)a1);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
      if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
        if ( DCEx )
        {
          v28 = 0LL;
          UserGetRedirectedWindowOrigin(DCEx, &v28);
          v29 = *((_DWORD *)a1 + 32) - v28;
          v30 = *((_DWORD *)a1 + 33) - HIDWORD(v28);
          updated = zzzUpdateLayeredWindow(a1, DCEx, (__int64)&v29, 0, 0LL, 12, 0LL);
          _ReleaseDC(DCEx);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect((char *)a1 + 128);
        v21 = *((_QWORD *)a1 + 13);
        v22 = RectRgnIndirect;
        if ( v21 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v27[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v27;
          v27[1] = v21;
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
          GreOffsetRgn(v22, (unsigned int)-*(_DWORD *)(v21 + 144), (unsigned int)-*(_DWORD *)(v21 + 148));
        }
        xxxRedrawWindow((struct tagWND *)v21, 0LL, v22, 1157LL);
        if ( v21 )
          ThreadUnlock1(v25, v24);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v22);
        GreDeleteObject(v22);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v8, *(_QWORD *)a1);
  v17 = *((_DWORD *)a1 + 76) & 0xFFFFFF9F | 0x40;
  *((_DWORD *)a1 + 76) = v17;
  if ( a3 )
    *a3 = Sprite;
  v18 = (void *)ReferenceDwmApiPort(v17);
  DwmAsyncChildStyleChange(v18, *(_QWORD *)a1, -268435456, *((_DWORD *)a1 + 76));
  return 0LL;
}
