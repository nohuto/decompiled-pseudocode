/*
 * XREFs of ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x1800E6854
 * Callers:
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1800E6AE0 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetJpegQuantizationTableOptions(__int64 a1, __int64 a2)
{
  HRESULT v3; // ebx
  SAFEARRAY *v4; // rax
  SAFEARRAY *v5; // rax
  SAFEARRAY *v6; // rcx
  __int64 v7; // rcx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int64 v12; // rcx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  void *ppvData; // [rsp+30h] [rbp-69h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+38h] [rbp-61h] BYREF
  SAFEARRAYBOUND v20; // [rsp+40h] [rbp-59h] BYREF
  SAFEARRAY *v21[7]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v22[10]; // [rsp+80h] [rbp-19h] BYREF

  if ( (_DWORD)JpegQuantizationTables )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    memset(v22, 0, sizeof(v22));
    v22[2] = L"Luminance";
    WORD2(v22[0]) = 8195;
    v22[7] = L"Chrominance";
    WORD2(v22[5]) = 8195;
    memset(v21, 0, 0x30uLL);
    rgsabound.lLbound = 0;
    rgsabound.cElements = 64;
    v4 = SafeArrayCreate(3u, 1u, &rgsabound);
    v20.lLbound = 0;
    v21[1] = v4;
    LOWORD(v21[0]) = 8195;
    v20.cElements = 64;
    v5 = SafeArrayCreate(3u, 1u, &v20);
    v6 = v21[1];
    v21[4] = v5;
    LOWORD(v21[3]) = 8195;
    if ( v21[1] && v5 )
    {
      v3 = SafeArrayAccessData(v21[1], &ppvData);
      if ( v3 >= 0 )
      {
        v8 = ppvData;
        if ( ppvData )
        {
          v9 = &unk_1802B9054;
          v10 = 2LL;
          do
          {
            *v8 = *v9;
            v8[1] = v9[1];
            v8[2] = v9[2];
            v8[3] = v9[3];
            v8[4] = v9[4];
            v8[5] = v9[5];
            v8[6] = v9[6];
            v8 += 8;
            v11 = v9[7];
            v9 += 8;
            *(v8 - 1) = v11;
            --v10;
          }
          while ( v10 );
        }
        else
        {
          *(_DWORD *)_o__errno(v7) = 22;
          invalid_parameter_noinfo();
        }
        v3 = SafeArrayUnaccessData(v21[1]);
        if ( v3 >= 0 )
        {
          v3 = SafeArrayAccessData(v21[4], &ppvData);
          if ( v3 >= 0 )
          {
            v13 = ppvData;
            if ( ppvData )
            {
              v14 = &unk_1802B9154;
              v15 = 2LL;
              do
              {
                *v13 = *v14;
                v13[1] = v14[1];
                v13[2] = v14[2];
                v13[3] = v14[3];
                v13[4] = v14[4];
                v13[5] = v14[5];
                v13[6] = v14[6];
                v13 += 8;
                v16 = v14[7];
                v14 += 8;
                *(v13 - 1) = v16;
                --v15;
              }
              while ( v15 );
            }
            else
            {
              *(_DWORD *)_o__errno(v12) = 22;
              invalid_parameter_noinfo();
            }
            v3 = SafeArrayUnaccessData(v21[4]);
            if ( v3 >= 0 )
              v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, SAFEARRAY **))(*(_QWORD *)a2 + 32LL))(
                     a2,
                     2LL,
                     v22,
                     v21);
          }
        }
      }
      v5 = v21[4];
      v6 = v21[1];
    }
    else
    {
      v3 = -2147024882;
    }
    if ( v6 )
    {
      SafeArrayDestroy(v6);
      v5 = v21[4];
    }
    if ( v5 )
      SafeArrayDestroy(v5);
  }
  return (unsigned int)v3;
}
