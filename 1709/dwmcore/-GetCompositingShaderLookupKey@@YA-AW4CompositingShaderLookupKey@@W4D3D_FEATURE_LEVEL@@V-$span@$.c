/*
 * XREFs of ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D5320
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801A7528 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXG.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18006E174 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

unsigned __int64 __fastcall GetCompositingShaderLookupKey(int a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rax
  int *v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  int ColorChannelDepth; // eax
  __int64 v11; // rdx
  __int64 v12; // r8

  v3 = *(_QWORD *)(a2 + 8);
  v4 = 0LL;
  if ( v3 == 2 )
    v4 = 32LL;
  v5 = v4 | a3 & 0x1F;
  v6 = 0LL;
  if ( a1 >= 37632 )
    v6 = 64LL;
  v7 = *(int **)a2;
  v8 = v6 | v5;
  v9 = *(_QWORD *)a2 + 12 * v3;
  while ( v7 != (int *)v9 )
  {
    ColorChannelDepth = GetColorChannelDepth(*v7);
    v8 = (ColorChannelDepth == 8) | (unsigned __int64)(2 * v11);
    v7 = (int *)(v12 + 12);
  }
  return v8;
}
