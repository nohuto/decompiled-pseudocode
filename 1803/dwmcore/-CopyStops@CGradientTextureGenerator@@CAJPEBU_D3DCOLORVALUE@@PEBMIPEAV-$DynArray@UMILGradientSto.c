/*
 * XREFs of ?CopyStops@CGradientTextureGenerator@@CAJPEBU_D3DCOLORVALUE@@PEBMIPEAV?$DynArray@UMILGradientStop@@$0A@@@@Z @ 0x180221004
 * Callers:
 *     ??$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBVCGradientSpanInfo@@IPEAI@Z @ 0x180220648 (--$GenerateGradientTexture@I@CGradientTextureGenerator@@SAJPEBU_D3DCOLORVALUE@@PEBMIW4Enum@MilGr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CGradientTextureGenerator::CopyStops(__int128 *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int128 v13; // xmm1
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v19; // [rsp+30h] [rbp-68h]
  _BYTE v20[20]; // [rsp+38h] [rbp-60h] BYREF

  v8 = DynArrayImpl<0>::Grow(a4, 0x14u, a3 + 4, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(5u, 0LL, 0, v8, 0x2C3u);
  }
  else
  {
    v10 = 0;
    if ( a3 )
    {
      v11 = v19;
      while ( 1 )
      {
        v12 = *(unsigned int *)(a4 + 24);
        v13 = *a1;
        v14 = v12 + 1;
        *(_DWORD *)v20 = *a2;
        *(_OWORD *)&v20[4] = v13;
        if ( (int)v12 + 1 >= (unsigned int)v12 )
          v11 = v12 + 1;
        v9 = v14 < (unsigned int)v12 ? 0x80070216 : 0;
        if ( v14 < (unsigned int)v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
        }
        else if ( v11 > *(_DWORD *)(a4 + 20) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x14u, 1, v20);
          v9 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          v15 = 5 * v12;
          v16 = *(_QWORD *)a4;
          *(_OWORD *)(v16 + 4 * v15) = *(_OWORD *)v20;
          *(_DWORD *)(v16 + 4 * v15 + 16) = *(_DWORD *)&v20[16];
          *(_DWORD *)(a4 + 24) = v11;
        }
        if ( v9 < 0 )
          break;
        ++v10;
        ++a2;
        ++a1;
        if ( v10 >= a3 )
          return (unsigned int)v9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(5u, 0LL, 0, v9, 0x2CFu);
    }
  }
  return (unsigned int)v9;
}
