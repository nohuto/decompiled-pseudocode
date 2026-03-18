/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C008D65C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008D2D0 (NtUserUpdateLayeredWindow.c)
 *     zzzUpdateShadowAlpha @ 0x1C012AEE8 (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012B000 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C013DFA4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C020CDE0 (zzzMoveShadow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C0072A88 (GreClientRgnUpdated.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C008D8F0 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C008DA7C (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     OffsetChildren @ 0x1C00FDC68 (OffsetChildren.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C5084 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01C5894 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        __m128i *a1,
        __int64 a2,
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
  __int64 v16; // rdx
  __int64 RedirectionBitmap; // rsi
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ebp
  unsigned int v22; // edx
  int updated; // esi
  int v24; // ecx
  int v26; // eax
  int v27; // [rsp+60h] [rbp-58h] BYREF
  HBITMAP v28; // [rsp+68h] [rbp-50h] BYREF
  int v29; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+10h]

  v30 = a2;
  v10 = 0LL;
  v11 = a1[8];
  v28 = 0LL;
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
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( RedirectionBitmap )
  {
    if ( (GetRedirectionFlags(a1) & 8) == 0 )
      return 3221225485LL;
  }
  v18 = a9;
  if ( (a9 & 8) != 0 )
  {
    if ( a4 && (a4->cx != a1[8].m128i_i32[2] - a1[8].m128i_i32[0] || a4->cy != a1[8].m128i_i32[3] - a1[8].m128i_i32[1]) )
    {
      UserSetLastError(1462LL, v16);
      return 2151546881LL;
    }
    v18 = a9 & 0xFFFFFFF7;
  }
  UpdateWindowRects((struct tagWND *)a1, a3, a4, &v29, &v27);
  if ( RedirectionBitmap )
  {
    if ( v29 )
    {
      v26 = RecreateRedirectionBitmap((struct tagWND *)a1, 0, (__int64)&v28);
      v10 = v28;
      updated = v26;
      if ( v26 < 0 )
        goto LABEL_40;
    }
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v21 = v27;
  if ( v29 || v27 )
  {
    if ( gcountPWO )
    {
      InvalidateGDIWindows(a1, v19, v20);
      GreClientRgnUpdated(1);
    }
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 32LL), 0);
  }
  v22 = v18 | 0x20000000;
  if ( !a5 )
    v22 = v18;
  updated = UpdateSprite(*(HDEV *)(gpDispInfo + 32LL), (struct tagWND *)a1, a3, a4, a5, a6, a7, a8, v22, a10);
  if ( updated >= 0 && v21 )
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
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
  }
  else
  {
    if ( v10 )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
    if ( v29 || v21 )
      GenerateMouseMove(0LL);
    v24 = 3;
    if ( !gdwDeferWinEvent )
      v24 = 1;
    xxxWindowEvent(0x800Bu, a1->m128i_i32, 0LL, 0LL, v24);
  }
  return (unsigned int)updated;
}
