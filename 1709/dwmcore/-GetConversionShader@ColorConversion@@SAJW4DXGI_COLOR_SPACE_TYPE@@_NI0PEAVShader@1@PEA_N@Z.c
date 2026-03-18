/*
 * XREFs of ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18006E0F8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x1801D4B40 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorConversion::GetConversionShader(
        enum DXGI_COLOR_SPACE_TYPE a1,
        char a2,
        int a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ColorConversion::Shader *a5,
        bool *a6)
{
  int v7; // r10d
  bool v8; // cl
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rcx
  const unsigned __int16 *v13; // rax
  int v14; // r11d
  int v15; // r11d
  int v16; // r11d
  int v17; // r11d
  int v18; // r11d
  int v19; // r11d
  int v20; // r9d
  int v21; // r9d
  bool v22; // zf
  int v23; // r9d

  v7 = -2003292288;
  if ( a6 )
  {
    v8 = 1;
    if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
      goto LABEL_3;
    v13 = (const unsigned __int16 *)&unk_180202490;
    do
    {
      if ( *(_DWORD *)v13 == a1 )
        break;
      v13 += 2;
    }
    while ( v13 != L"DwmExpression_SetValue_%d" );
    if ( v13 != L"DwmExpression_SetValue_%d" )
LABEL_3:
      v8 = 0;
    *a6 = v8;
  }
  v9 = 0;
  if ( a1 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
LABEL_7:
      v7 = 0;
      goto LABEL_8;
    }
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v9 = 6;
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  v14 = a1 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 9;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            v19 = v18 - 6;
            if ( v19 )
            {
              if ( v19 == 1 )
              {
                if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
                {
                  v9 = 30;
                  goto LABEL_7;
                }
                if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
                {
                  v9 = 32;
                  goto LABEL_7;
                }
              }
LABEL_8:
              v10 = v9;
              if ( v7 < 0 )
                return (unsigned int)v7;
              goto LABEL_9;
            }
            if ( a4 )
            {
              if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
                goto LABEL_8;
              if ( a3 != 8 )
              {
                if ( a3 == 10 )
                {
                  v9 = 28;
                  goto LABEL_7;
                }
                goto LABEL_8;
              }
              v9 = 20;
            }
            else
            {
              if ( a3 != 8 )
              {
                if ( a3 == 10 )
                {
                  v9 = 26;
                  goto LABEL_7;
                }
                goto LABEL_8;
              }
              v9 = 18;
            }
          }
          else
          {
            if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
            {
              v9 = 34;
              goto LABEL_7;
            }
            v20 = a4 - 1;
            if ( v20 )
            {
              if ( v20 == 11 )
              {
                v9 = 38;
                goto LABEL_7;
              }
              goto LABEL_8;
            }
            v9 = 36;
          }
        }
        else
        {
          if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
          {
            v9 = 10;
            goto LABEL_7;
          }
          v21 = a4 - 1;
          if ( v21 )
          {
            if ( v21 == 11 )
              goto LABEL_7;
            goto LABEL_8;
          }
          v9 = 12;
        }
        goto LABEL_34;
      }
      if ( a4 )
      {
        v22 = a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
        goto LABEL_56;
      }
LABEL_64:
      v9 = 22;
      goto LABEL_7;
    }
    if ( a4 )
    {
      if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_8;
      if ( a3 != 8 )
      {
        v22 = a3 == 10;
LABEL_56:
        if ( v22 )
        {
          v9 = 24;
          goto LABEL_7;
        }
        goto LABEL_8;
      }
      v9 = 16;
    }
    else
    {
      if ( a3 != 8 )
      {
        if ( a3 != 10 )
          goto LABEL_8;
        goto LABEL_64;
      }
      v9 = 14;
    }
LABEL_34:
    v7 = 0;
    v10 = v9;
    goto LABEL_9;
  }
  if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    v9 = 2;
    goto LABEL_7;
  }
  v23 = a4 - 1;
  if ( v23 )
  {
    if ( v23 == 11 )
    {
      v9 = 4;
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  v7 = 0;
  v10 = 0;
LABEL_9:
  v11 = (unsigned int)(v9 + 1);
  if ( !a2 )
    v11 = v10;
  *(_OWORD *)a5 = *((_OWORD *)&ColorConversion::g_rgShaders + v11);
  return (unsigned int)v7;
}
