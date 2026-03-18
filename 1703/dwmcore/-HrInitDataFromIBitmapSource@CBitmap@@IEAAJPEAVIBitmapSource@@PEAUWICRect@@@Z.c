/*
 * XREFs of ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801A96C0
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1801A915C (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1801A9340 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrInitDataFromIBitmapSource(CBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  INT *v3; // rbp
  unsigned int *v5; // r14
  int v8; // eax
  int *v9; // r15
  int v10; // eax
  int v11; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 v13; // al
  __int64 v14; // rax
  int v15; // eax
  float v16; // xmm1_4
  double v18; // [rsp+70h] [rbp+8h] BYREF
  double v19; // [rsp+78h] [rbp+10h] BYREF

  v3 = (INT *)((char *)this + 172);
  v5 = (unsigned int *)((char *)this + 168);
  v8 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 48LL))(
         a2,
         (char *)this + 168,
         (char *)this + 172);
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x36Cu);
  if ( a3 )
  {
    *v5 = a3->Width;
    *v3 = a3->Height;
  }
  v9 = (int *)((char *)this + 184);
  v10 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 184);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x37Bu);
  *((_DWORD *)this + 47) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)this + 48) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
  if ( v11 >= 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*v9);
    if ( PixelFormatSize )
    {
      if ( *v5 >= 0x7FFFFFFFu / PixelFormatSize )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x388u);
      }
      if ( v11 >= 0 )
      {
        v13 = GetPixelFormatSize(*v9);
        if ( v13 && *v5 <= 0x7FFFFFF8u / v13 )
        {
          v11 = 0;
          if ( *v3 && ((((*v5 * v13 + 7) >> 3) + 3) & 0xFFFFFFFC) >= 0x7FFFFFFFu / *v3 )
          {
            v11 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x39Bu);
          }
          if ( v11 >= 0 )
          {
            v14 = *(_QWORD *)a2;
            v18 = 0.0;
            v19 = 0.0;
            v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *, double *))(v14 + 56))(a2, &v18, &v19);
            v11 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x3A5u);
            v16 = v19;
            *((float *)this + 44) = v18;
            *((float *)this + 45) = v16;
          }
        }
        else
        {
          v11 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x395u);
        }
      }
    }
    else
    {
      v11 = -2003292409;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292409, 0x384u);
    }
  }
  return (unsigned int)v11;
}
