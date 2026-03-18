/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C009E550
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 *     zzzUpdateShadowAlpha @ 0x1C011E960 (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01C18F0 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C020B8D0 (zzzMoveShadow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C009E7C4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C009E94C (GetRedirectionFlags.c)
 *     OffsetChildren @ 0x1C009E97C (OffsetChildren.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C1844 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        __m128i *a1,
        HDC a2,
        struct tagPOINT *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct tagRECT *a10)
{
  HBITMAP v10; // rdi
  __m128i v11; // xmm6
  __m128i v14; // xmm7
  __int64 RedirectionBitmap; // rsi
  unsigned int v17; // r14d
  int v18; // ebp
  unsigned int v19; // edx
  int updated; // esi
  int v21; // ecx
  int v23; // eax
  int v24; // [rsp+60h] [rbp-58h] BYREF
  HBITMAP v25; // [rsp+68h] [rbp-50h] BYREF
  int v26; // [rsp+C0h] [rbp+8h] BYREF
  HDC v27; // [rsp+C8h] [rbp+10h]

  v27 = a2;
  v10 = 0LL;
  v11 = a1[8];
  v25 = 0LL;
  v14 = a1[9];
  if ( (unsigned int)IsWindowDesktopComposed(a1) && (a1[19].m128i_i32[0] & 0x40) != 0 )
  {
    if ( (a1[4].m128i_i8[3] & 0x20) != 0 )
      UnsetRedirectedWindow((struct tagWND *)a1);
    a1[19].m128i_i32[0] &= ~0x40u;
  }
  if ( (a1[4].m128i_i8[2] & 8) == 0 )
    return 3221225485LL;
  if ( (a1[19].m128i_i32[0] & 0x20) != 0 )
    return 3221225485LL;
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
  if ( RedirectionBitmap )
  {
    if ( (GetRedirectionFlags(a1) & 8) == 0 )
      return 3221225485LL;
  }
  v17 = a9;
  if ( (a9 & 8) != 0 )
  {
    if ( a4 && (a4->cx != a1[8].m128i_i32[2] - a1[8].m128i_i32[0] || a4->cy != a1[8].m128i_i32[3] - a1[8].m128i_i32[1]) )
    {
      UserSetLastError(1462LL);
      return 2151546881LL;
    }
    v17 = a9 & 0xFFFFFFF7;
  }
  UpdateWindowRects((struct tagWND *)a1, a3, a4, &v26, &v24);
  if ( RedirectionBitmap )
  {
    if ( v26 )
    {
      v23 = RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, (HSURF *)&v25);
      v10 = v25;
      updated = v23;
      if ( v23 < 0 )
        goto LABEL_40;
    }
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v18 = v24;
  if ( v26 || v24 )
  {
    if ( gcountPWO )
    {
      InvalidateGDIWindows(a1);
      GreClientRgnUpdated(1);
    }
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), 0);
  }
  v19 = v17 | 0x20000000;
  if ( !a5 )
    v19 = v17;
  updated = UpdateSprite(
              *(HDEV *)(gpDispInfo + 32LL),
              (struct tagWND *)a1,
              (__int64)a5,
              v27,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              v19,
              a10);
  if ( updated >= 0 && v18 )
    OffsetChildren(
      (_DWORD)a1,
      a1[8].m128i_i32[0] - _mm_cvtsi128_si32(v11),
      a1[8].m128i_i32[1] - _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)),
      0,
      1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( updated < 0 )
  {
LABEL_40:
    a1[8] = v11;
    a1[9] = v14;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)a1, v10) )
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v10, 1);
  }
  else
  {
    if ( v10 )
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v10, 1);
    if ( v26 || v18 )
      zzzSetFMouseMoved();
    v21 = 3;
    if ( !gdwDeferWinEvent )
      v21 = 1;
    xxxWindowEvent(0x800Bu, a1->m128i_i64, 0, 0, v21);
  }
  return (unsigned int)updated;
}
