/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00E6938
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01E7930 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C008A1E8 (--1EPALOBJ@@QEAA@XZ.c)
 *     GetRedirectionFlags @ 0x1C008DA7C (GetRedirectionFlags.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C008FF10 (ChangeRedirectionParentInDCEs.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E61EC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreNotifyDirtySprite @ 0x1C00E6BC0 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00E7988 (GreAdjustSpriteDirtyAccum.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, HBRUSH *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rcx
  __int64 RedirectionBitmap; // rax
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  __int64 v14; // rax
  int v15; // ebx
  int v17; // eax
  HBRUSH v18; // rbx
  int v19; // r12d
  LONG x; // r14d
  bool v21; // zf
  int v22; // r13d
  LONG v23; // eax
  HWND v24; // rdx
  struct _POINTL v26; // [rsp+48h] [rbp-61h] BYREF
  int v27; // [rsp+50h] [rbp-59h]
  unsigned int v28; // [rsp+54h] [rbp-55h]
  struct _POINTL v29; // [rsp+58h] [rbp-51h] BYREF
  tagBITMAP v30; // [rsp+60h] [rbp-49h] BYREF
  struct tagBITMAP v31; // [rsp+80h] [rbp-29h] BYREF
  struct _RECTL v32; // [rsp+A0h] [rbp-9h] BYREF

  v26.x = a2;
  v29 = 0LL;
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v27 = 0;
  v28 = 0;
  RedirectionBitmap = GetRedirectionBitmap(v10);
  LOBYTE(v12) = 5;
  v13 = (HBRUSH)RedirectionBitmap;
  v14 = HmgShareLockCheck(RedirectionBitmap, v12);
  *(_QWORD *)&v32.left = v14;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 112);
    DEC_SHARE_REF_CNT(v14);
    if ( (v15 & 0x800000) != 0 && a4 && !v9 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v32);
  }
  v17 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (__int64 *)&v29);
  v18 = (HBRUSH)v29;
  v19 = v17;
  if ( v17 < 0 )
    goto LABEL_27;
  if ( !(unsigned int)SetRedirectionBitmap((void **)a1, *(HBITMAP *)&v29, 0) )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v18, 1);
    v19 = -1073741801;
  }
  if ( v19 < 0 )
  {
LABEL_27:
    SetRedirectionBitmap((void **)a1, 0LL, 0);
    v28 = 1;
  }
  if ( v18 && !v9 )
  {
    if ( v13 )
    {
      GreExtGetObjectW(v13, 32LL, (char *)&v31);
      v27 = 1;
    }
    GreExtGetObjectW(v18, 32LL, (char *)&v30);
  }
  if ( (GetRedirectionFlags((__int64)a1) & 1) != 0
    && (HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, 0LL, v9 == 0 ? 2 : 0), v18) )
  {
    HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, (HBITMAP)v18, v9 == 0 ? 2 : 0);
    x = v26.x;
    v21 = v9 == 0;
    v22 = a3;
    if ( v21 )
    {
      v23 = *((_DWORD *)a1 + 32);
      v32.left = 0;
      v32.top = 0;
      v24 = *(HWND *)a1;
      v29.x = v23;
      v29.y = *((_DWORD *)a1 + 33);
      v32.right = v30.bmWidth;
      v32.bottom = v30.bmHeight;
      v26.x = -v26.x;
      v26.y = -a3;
      GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 32LL), v24, &v32, &v26, &v29);
    }
  }
  else
  {
    v22 = a3;
    x = v26.x;
  }
  if ( v27 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)v13, (HBITMAP)v18, &v31, &v30, x, v22);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs(a1, v28);
  if ( a6 )
  {
    *a6 = v13;
  }
  else if ( v13 )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v13, 1);
  }
  return (unsigned int)v19;
}
