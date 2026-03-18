/*
 * XREFs of ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180217E58
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E006C (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180071BBC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

unsigned __int64 __fastcall GetCompositingShaderLookupKey(int a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  int ColorChannelDepth; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v3 = 0LL;
  v4 = a2;
  if ( *a2 == 2LL )
    v3 = 32LL;
  v5 = v3 | a3 & 0x1F;
  v6 = 0LL;
  if ( a1 >= 37632 )
    v6 = 64LL;
  v7 = 0LL;
  v8 = v6 | v5;
  v9 = 0LL;
  while ( v7 != *v4 )
  {
    ColorChannelDepth = GetColorChannelDepth(*(_DWORD *)(v9 + v4[1]));
    v8 = (ColorChannelDepth == 8) | (unsigned __int64)(2 * v11);
    v7 = v12 + 1;
    v9 = v13 + 12;
  }
  return v8;
}
