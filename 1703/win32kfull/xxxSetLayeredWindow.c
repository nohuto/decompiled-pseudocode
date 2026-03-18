/*
 * XREFs of xxxSetLayeredWindow @ 0x1C001DD44
 * Callers:
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 * Callees:
 *     GreGetSprite @ 0x1C00062E4 (GreGetSprite.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x1C001E08C (CreateSprite.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0022460 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     TrackLayeredZorder @ 0x1C0022594 (TrackLayeredZorder.c)
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     DwmAsyncTextChange @ 0x1C00436A0 (DwmAsyncTextChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     xxxUpdateThreadsWindows @ 0x1C01F87FC (xxxUpdateThreadsWindows.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // edi
  struct tagWND *TopLevelWindow; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 Sprite; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  void *v15; // rax
  unsigned int updated; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rax
  __int64 DCEx; // rdi
  __int64 RectRgnIndirect; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD v33[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+40h] BYREF
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  int v36; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
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
  if ( (*((_DWORD *)a1 + 76) & 0x20) != 0 )
  {
    Sprite = GreGetSprite(v8, *(struct PDEVOBJ **)a1);
    v14 = *((_DWORD *)a1 + 76) & 0xFFFFFF9F | 0x40;
    *((_DWORD *)a1 + 76) = v14;
    if ( a3 )
      *a3 = Sprite;
    v15 = (void *)ReferenceDwmApiPort(v14, v11, v12, v13);
    DwmAsyncChildStyleChange(v15, *(_QWORD *)a1, -268435456, *((_DWORD *)a1 + 76));
    return 0LL;
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    return 2151546883LL;
  result = CreateSprite(*(_QWORD *)(gpDispInfo + 32LL), a1, (char *)a1 + 128, a3);
  updated = result;
  if ( (int)result >= 0 )
  {
    SetOrClrWF(1, a1, 0xA08u, 1);
    TrackLayeredZorder(a1);
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      v18 = *((_QWORD *)a1 + 27);
      if ( v18 )
        GreUpdateSpriteClipRgn(v17, *(_QWORD *)a1, v18, 0LL);
    }
    v19 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    UpdateWindowSpriteDPI(a1, v19);
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      SendDwmIconChange((__int64)a1);
      v24 = (void *)ReferenceDwmApiPort(v21, v20, v22, v23);
      DwmAsyncTextChange(v24);
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v34);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
    if ( !(_BYTE)v34 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v34);
    }
    if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
    {
      if ( !a2 )
        return updated;
      DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
      if ( DCEx )
      {
        v34 = 0LL;
        UserGetRedirectedWindowOrigin(DCEx, &v34);
        v35 = *((_DWORD *)a1 + 32) - v34;
        v36 = *((_DWORD *)a1 + 33) - HIDWORD(v34);
        updated = zzzUpdateLayeredWindow(a1, DCEx, (__int64)&v35, 0, 0LL, 12, 0LL);
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
      v27 = *((_QWORD *)a1 + 13);
      v28 = RectRgnIndirect;
      if ( v27 )
      {
        v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v33;
        v33[1] = v27;
        v29 = *(_DWORD *)(v27 + 144);
        v30 = (unsigned int)-*(_DWORD *)(v27 + 148);
        ++*(_DWORD *)(v27 + 8);
        GreOffsetRgn(RectRgnIndirect, (unsigned int)-v29, v30);
      }
      xxxRedrawWindow((struct tagWND *)v27);
      if ( v27 )
        ThreadUnlock1(v32, v31);
      xxxUpdateThreadsWindows(gptiCurrent, a1, v28);
      GreDeleteObject(v28);
    }
    return updated;
  }
  return result;
}
