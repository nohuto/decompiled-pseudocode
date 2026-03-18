/*
 * XREFs of ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801C4874
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1801C4270 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1801C4450 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrInitDataFromIBitmapSource(CBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  INT *v3; // rbp
  unsigned int *v5; // r14
  signed int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 v12; // al
  __int64 v13; // rax
  signed int v14; // eax
  float v15; // xmm1_4
  double v17; // [rsp+30h] [rbp-48h] BYREF
  double v18[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (INT *)((char *)this + 172);
  v5 = (unsigned int *)((char *)this + 168);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
         a2,
         (char *)this + 168,
         (char *)this + 172);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x355u);
  if ( a3 )
  {
    *v5 = a3->Width;
    *v3 = a3->Height;
  }
  v10 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *))(*(_QWORD *)a2 + 24LL))(a2, v18);
  *((_QWORD *)this + 23) = *(_QWORD *)v10;
  *((_DWORD *)this + 48) = *(_DWORD *)(v10 + 8);
  if ( v9 >= 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
    if ( PixelFormatSize )
    {
      if ( *v5 >= 0x7FFFFFFFu / PixelFormatSize )
      {
        v9 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x36Fu);
      }
      if ( v9 >= 0 )
      {
        v12 = GetPixelFormatSize(*((_DWORD *)this + 46));
        if ( v12 && *v5 <= 0x7FFFFFF8u / v12 )
        {
          v9 = 0;
          if ( *v3 && ((((*v5 * v12 + 7) >> 3) + 3) & 0xFFFFFFFC) >= 0x7FFFFFFFu / *v3 )
          {
            v9 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x382u);
          }
          if ( v9 >= 0 )
          {
            v13 = *(_QWORD *)a2;
            v17 = 0.0;
            v18[0] = 0.0;
            v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *, double *))(v13 + 40))(a2, &v17, v18);
            v9 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x38Cu);
            v15 = v18[0];
            *((float *)this + 44) = v17;
            *((float *)this + 45) = v15;
          }
        }
        else
        {
          v9 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x37Cu);
        }
      }
    }
    else
    {
      v9 = -2003292409;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F07, 0x36Bu);
    }
  }
  return (unsigned int)v9;
}
