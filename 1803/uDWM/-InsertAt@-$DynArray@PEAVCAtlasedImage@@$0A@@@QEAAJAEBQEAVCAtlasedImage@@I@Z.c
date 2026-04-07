/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800336B8
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180003460 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x1800246E4 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CAtlasedImage *,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // r9
  _QWORD *v12; // r9
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *(_DWORD *)(a1 + 24) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  else
  {
    v13 = (_QWORD *)a2;
    v5 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1CDu);
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 24);
      v8 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v7 + 1;
      if ( (unsigned int)v7 > (unsigned int)v4 )
      {
        v12 = (_QWORD *)(v8 + 8 * v7);
        do
        {
          v7 = (unsigned int)(v7 - 1);
          *v12-- = *(_QWORD *)(v8 + 8 * v7);
        }
        while ( (unsigned int)v7 > (unsigned int)v4 );
      }
      v9 = v13;
      v10 = (_QWORD *)(v8 + 8 * v4);
      if ( v13 >= v10 && (unsigned __int64)v13 < v8 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 24) - 1) )
        v9 = v13 + 1;
      *v10 = *v9;
    }
  }
  return v6;
}
