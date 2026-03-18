/*
 * XREFs of SetRedirectedWindow @ 0x1C008FCF8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C008F848 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     RedirectDCEs @ 0x1C0090070 (RedirectDCEs.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C009103C (UpdateWindowSpriteDPI.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     IncrementCompositedCount @ 0x1C01C5274 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v2; // r13d
  unsigned int v3; // r15d
  HBITMAP RedirectionBitmap; // r8
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i *v10; // rdx
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rbx
  __int64 Prop; // rax
  BOOL v16; // ebx
  RECT v17; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+68h] [rbp+38h]
  HBITMAP v19; // [rsp+70h] [rbp+40h] BYREF

  v19 = 0LL;
  v18 = 0;
  v2 = a2 & 0x10;
  v3 = a2 & 0xFFFFFFEF;
  RedirectionBitmap = (HBITMAP)GetRedirectionBitmap(a1);
  if ( RedirectionBitmap )
  {
    if ( v3 == 1 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, RedirectionBitmap, 0);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 21);
    if ( (*(_BYTE *)(v6 + 100) & 0xC0) != 0 )
    {
      v16 = 0;
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
        v16 = v3 == 1;
      if ( !(unsigned int)IsTopLevelWindow((__int64)a1) && (*(_BYTE *)(v6 + 100) & 0x40) == 0 && v3 == 1 )
        v16 = 1;
      if ( !v16 )
        return 2151546885LL;
    }
    v7 = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0, (__int64 *)&v19);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( (unsigned int)SetRedirectionBitmap((void **)a1, v19, 0) )
    {
      SetOrClrWF(1, a1, 0xB20u, 1);
      v8 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
      UpdateWindowSpriteDPI(a1, v8);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v19, 0LL);
      v7 = -1073741801;
    }
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v3 == 2 )
      IncrementCompositedCount(a1);
    if ( v3 == 1 )
    {
      v9 = *((_QWORD *)a1 + 16) - *((_QWORD *)a1 + 18);
      if ( !v9 )
        v9 = *((_QWORD *)a1 + 17) - *((_QWORD *)a1 + 19);
      if ( (v9 || *((_QWORD *)a1 + 27)) && !IsRectEmptyInl((const struct tagRECT *)a1 + 8) )
      {
        v11 = *v10;
        v12 = _mm_cvtsi128_si32(*v10);
        v17.bottom = v11.m128i_i32[3] - v11.m128i_i32[1];
        v17.top = 0;
        v17.right = v11.m128i_i32[2] - v12;
        v17.left = 0;
        v13 = GreSelectBitmap(*(_QWORD *)ghdcMem, v19);
        FillRect(*(HDC *)ghdcMem, &v17, ghbrWhite);
        v18 = 1;
        GreSelectBitmap(*(_QWORD *)ghdcMem, v13);
      }
      HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, v19, v18);
    }
    RedirectDCEs(a1);
  }
  if ( !v2 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
    xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  }
  Prop = GetProp((__int64)a1, atomLayer, 1);
  *(_DWORD *)(Prop + 32) |= v3;
  return 0LL;
}
