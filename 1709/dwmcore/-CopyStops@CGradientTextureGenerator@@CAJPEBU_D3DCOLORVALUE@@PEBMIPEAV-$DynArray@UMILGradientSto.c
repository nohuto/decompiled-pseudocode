/*
 * XREFs of ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x1801D9B68
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x1801D91C8 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x180176B80 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::CopyStops(__int128 *a1, int *a2, unsigned int a3, __int64 a4)
{
  signed int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // xmm0_4
  signed int v13; // eax
  int v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+34h] [rbp-54h]

  v8 = DynArrayImpl<0>::Grow(a4, 0x14u, a3 + 4, 0, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(5LL, 0LL, 0, v8, 0x2C3u);
  }
  else
  {
    v11 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        v12 = *a2;
        v16 = *a1;
        v15 = v12;
        v13 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(a4, (__int64)&v15, v9);
        v10 = v13;
        if ( v13 < 0 )
          break;
        ++v11;
        ++a2;
        ++a1;
        if ( v11 >= a3 )
          return v10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(5LL, 0LL, 0, v13, 0x2CFu);
    }
  }
  return v10;
}
