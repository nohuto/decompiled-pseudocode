/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C009DE40
 * Callers:
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC (zzzUpdateWindowsAfterModeChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0021674 (ChangeRedirectionParentInDCEs.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     HintSpriteShape @ 0x1C0022E0C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C009C794 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C009CFC4 (GreNotifyDirtySprite.c)
 *     GetRedirectionFlags @ 0x1C009E94C (GetRedirectionFlags.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, HSURF *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rcx
  __int64 RedirectionBitmap; // rax
  __int64 v12; // rdx
  HSURF v13; // rsi
  __int64 v14; // rax
  int v15; // ebx
  int v17; // eax
  HSURF v18; // rbx
  int v19; // r12d
  struct _RECTL *v20; // r9
  bool v21; // zf
  int v22; // r13d
  HWND v23; // rdx
  LONG x; // r14d
  struct _POINTL v26; // [rsp+48h] [rbp-71h] BYREF
  int v27; // [rsp+50h] [rbp-69h]
  unsigned int v28; // [rsp+54h] [rbp-65h]
  struct _POINTL v29; // [rsp+58h] [rbp-61h] BYREF
  __int64 v30; // [rsp+60h] [rbp-59h]
  LONG bmWidth; // [rsp+68h] [rbp-51h]
  LONG bmHeight; // [rsp+6Ch] [rbp-4Dh]
  tagBITMAP v33; // [rsp+70h] [rbp-49h] BYREF
  struct tagBITMAP v34; // [rsp+90h] [rbp-29h] BYREF
  struct _RECTL v35; // [rsp+B0h] [rbp-9h] BYREF

  v26.x = a2;
  v29 = 0LL;
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v27 = 0;
  v28 = 0;
  RedirectionBitmap = GetRedirectionBitmap(v10);
  LOBYTE(v12) = 5;
  v13 = (HSURF)RedirectionBitmap;
  v14 = HmgShareLockCheck(RedirectionBitmap, v12);
  *(_QWORD *)&v35.left = v14;
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
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v35);
  }
  v17 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (HSURF *)&v29);
  v18 = (HSURF)v29;
  v19 = v17;
  if ( v17 < 0 )
    goto LABEL_28;
  if ( !(unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v29, 0) )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, v18, 1);
    v19 = -1073741801;
  }
  if ( v19 < 0 )
  {
LABEL_28:
    SetRedirectionBitmap(a1, 0LL, 0);
    v28 = 1;
  }
  if ( v18 && !v9 )
  {
    if ( v13 )
    {
      GreExtGetObjectW((HBRUSH)v13, 32LL, (unsigned __int16 *)&v34);
      v27 = 1;
    }
    GreExtGetObjectW((HBRUSH)v18, 32LL, (unsigned __int16 *)&v33);
  }
  if ( (GetRedirectionFlags(a1) & 1) == 0
    || (HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, 0LL, v9 == 0 ? 2 : 0), !v18) )
  {
    v22 = a3;
    goto LABEL_26;
  }
  HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, (HBITMAP)v18, v9 == 0 ? 2 : 0);
  v21 = v9 == 0;
  v22 = a3;
  if ( !v21 )
  {
LABEL_26:
    x = v26.x;
    goto LABEL_21;
  }
  v23 = *(HWND *)a1;
  v29 = (struct _POINTL)*((_QWORD *)a1 + 16);
  v35.right = v33.bmWidth;
  v35.bottom = v33.bmHeight;
  bmWidth = v34.bmWidth;
  bmHeight = v34.bmHeight;
  *(_QWORD *)&v35.left = 0LL;
  v30 = 0LL;
  x = v26.x;
  v26.x = -v26.x;
  v26.y = -a3;
  GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 32LL), v23, &v35, v20, &v26, &v29);
LABEL_21:
  if ( v27 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)v13, (HBITMAP)v18, &v34, &v33, x, v22);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs(a1, v28);
  if ( a6 )
  {
    *a6 = v13;
  }
  else if ( v13 )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, v13, 1);
  }
  return (unsigned int)v19;
}
