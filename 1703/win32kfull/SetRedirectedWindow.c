/*
 * XREFs of SetRedirectedWindow @ 0x1C0022830
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     RedirectDCEs @ 0x1C0022B14 (RedirectDCEs.c)
 *     HintSpriteShape @ 0x1C0022E0C (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IncrementCompositedCount @ 0x1C01C2094 (IncrementCompositedCount.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v2; // r13d
  unsigned int v3; // r15d
  __int64 RedirectionBitmap; // r8
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
  unsigned int v18; // [rsp+68h] [rbp+38h]
  HBITMAP v19; // [rsp+70h] [rbp+40h] BYREF

  v19 = 0LL;
  v18 = 0;
  v2 = a2 & 0x10;
  v3 = a2 & 0xFFFFFFEF;
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( RedirectionBitmap )
  {
    if ( v3 == 1 )
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 32LL), a1, RedirectionBitmap, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 21);
    if ( (*(_BYTE *)(v6 + 92) & 0xC0) != 0 )
    {
      v16 = 0;
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        v16 = v3 == 1;
      if ( !(unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v6 + 92) & 0x40) == 0 && v3 == 1 )
        v16 = 1;
      if ( !v16 )
        return 2151546885LL;
    }
    v7 = CreateOrGetRedirectionBitmap(a1, 0LL, 0LL, &v19);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( (unsigned int)SetRedirectionBitmap(a1, v19, 0) )
    {
      SetOrClrWF(1, a1, 0xB20u, 1);
      v8 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
      UpdateWindowSpriteDPI(a1, v8);
    }
    else
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v19, 0);
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
      if ( (v9 || *((_QWORD *)a1 + 27)) && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)a1 + 8) )
      {
        v11 = *v10;
        v12 = _mm_cvtsi128_si32(*v10);
        v17.bottom = v11.m128i_i32[3] - v11.m128i_i32[1];
        v17.top = 0;
        v17.right = v11.m128i_i32[2] - v12;
        v17.left = 0;
        v13 = GreSelectBitmap(ghdcMem, v19);
        FillRect(ghdcMem, &v17, ghbrWhite);
        v18 = 1;
        GreSelectBitmap(ghdcMem, v13);
      }
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 32LL), a1, v19, v18);
    }
    RedirectDCEs(a1);
  }
  if ( !v2 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
    xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
    if ( !(_BYTE)v19 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v19);
    }
  }
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) |= v3;
  return 0LL;
}
