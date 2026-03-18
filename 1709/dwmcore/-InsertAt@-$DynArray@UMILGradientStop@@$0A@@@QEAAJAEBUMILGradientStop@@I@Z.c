/*
 * XREFs of ?InsertAt@?$DynArray@UMILGradientStop@@$0A@@@QEAAJAEBUMILGradientStop@@I@Z @ 0x1801D9CA4
 * Callers:
 *     ?RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_D3DCOLORVALUE@@1PEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801D9F08 (-RepositionStopsForSmallGradientSpans@CGradientTextureGenerator@@CAJPEBVCGradientSpanInfo@@PEBU_.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<MILGradientStop,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 0x14u, 1, 0, &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v7 = v6 + 20 * v5;
      do
      {
        LODWORD(v5) = v5 - 1;
        v8 = *(_DWORD *)(v6 + 20LL * (unsigned int)v5 + 16);
        *(_OWORD *)v7 = *(_OWORD *)(v6 + 20LL * (unsigned int)v5);
        *(_DWORD *)(v7 + 16) = v8;
        v7 -= 20LL;
      }
      while ( (_DWORD)v5 );
    }
    v9 = v11;
    if ( v11 >= v6 && v11 < v6 + 4 * (5LL * *(unsigned int *)(a1 + 24) - 5) )
      v9 = v11 + 20;
    *(_OWORD *)v6 = *(_OWORD *)v9;
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(v9 + 16);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1CCu);
  }
  return v4;
}
