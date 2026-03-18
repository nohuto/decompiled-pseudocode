/*
 * XREFs of ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18017E928
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1802172C0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017EB44 (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ColorConversion::GetConversionShader(
        enum DXGI_COLOR_SPACE_TYPE a1,
        char a2,
        int a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ColorConversion::Shader *a5,
        bool *a6)
{
  enum DXGI_COLOR_SPACE_TYPE v6; // r10d
  int v10; // r11d
  bool v11; // si
  int v12; // ecx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  unsigned int v19; // eax
  __int32 v20; // r10d
  __int32 v21; // r10d
  bool v22; // zf
  __int32 v23; // r10d
  __int64 v24; // rcx

  v6 = a4;
  v10 = -2003292288;
  if ( a6 )
  {
    v11 = 1;
    if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || ColorConversion::IsHDRColorSpace(a1) )
      v11 = 0;
    *a6 = v11;
  }
  v12 = 0;
  if ( a1 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    if ( v6 )
    {
      if ( v6 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_64;
      v12 = 6;
    }
    goto LABEL_63;
  }
  v13 = a1 - 1;
  if ( !v13 )
  {
    if ( v6 )
    {
      v23 = v6 - 1;
      if ( v23 )
      {
        if ( v23 != 11 )
          goto LABEL_64;
        v12 = 4;
        goto LABEL_63;
      }
      v12 = 40;
      goto LABEL_22;
    }
    v12 = 2;
    goto LABEL_63;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( v6 )
    {
      if ( v6 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_64;
      if ( a3 == 8 )
      {
        v12 = 16;
        goto LABEL_22;
      }
      v22 = a3 == 10;
LABEL_43:
      if ( !v22 )
        goto LABEL_64;
      v12 = 24;
      goto LABEL_63;
    }
    if ( a3 == 8 )
    {
      v12 = 14;
      goto LABEL_22;
    }
    if ( a3 != 10 )
      goto LABEL_64;
LABEL_53:
    v12 = 22;
    goto LABEL_63;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( v6 )
    {
      v22 = v6 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
      goto LABEL_43;
    }
    goto LABEL_53;
  }
  v16 = v15 - 9;
  if ( !v16 )
  {
    if ( v6 )
    {
      v21 = v6 - 1;
      if ( v21 )
      {
        if ( v21 != 11 )
          goto LABEL_64;
        goto LABEL_63;
      }
      v12 = 12;
      goto LABEL_22;
    }
    v12 = 10;
    goto LABEL_63;
  }
  v17 = v16 - 2;
  if ( !v17 )
  {
    if ( v6 )
    {
      v20 = v6 - 1;
      if ( v20 )
      {
        if ( v20 != 11 )
          goto LABEL_64;
        v12 = 38;
        goto LABEL_63;
      }
      v12 = 36;
      goto LABEL_22;
    }
    v12 = 34;
LABEL_63:
    v10 = 0;
LABEL_64:
    v19 = v12;
    if ( v10 < 0 )
      return (unsigned int)v10;
    goto LABEL_65;
  }
  v18 = v17 - 6;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_64;
    if ( v6 )
    {
      if ( v6 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_64;
      v12 = 32;
    }
    else
    {
      v12 = 30;
    }
    goto LABEL_63;
  }
  if ( v6 )
  {
    if ( v6 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
      goto LABEL_64;
    if ( a3 != 8 )
    {
      if ( a3 != 10 )
        goto LABEL_64;
      v12 = 28;
      goto LABEL_63;
    }
    v12 = 20;
  }
  else
  {
    if ( a3 != 8 )
    {
      if ( a3 != 10 )
        goto LABEL_64;
      v12 = 26;
      goto LABEL_63;
    }
    v12 = 18;
  }
LABEL_22:
  v10 = 0;
  v19 = v12;
LABEL_65:
  v24 = (unsigned int)(v12 + 1);
  if ( !a2 )
    v24 = v19;
  *(_OWORD *)a5 = *((_OWORD *)&ColorConversion::g_rgShaders + v24);
  return (unsigned int)v10;
}
