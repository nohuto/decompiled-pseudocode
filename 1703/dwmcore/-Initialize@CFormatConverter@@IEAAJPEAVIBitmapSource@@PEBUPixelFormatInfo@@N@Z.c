/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x1801ABA20
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x18007D9D0 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801AB864 (-HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x1801ABD7C (-InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        const struct PixelFormatInfo *a3,
        double a4)
{
  int v7; // r9d
  int v8; // ebx
  bool v9; // zf
  float v10; // xmm0_4
  int *v11; // r12
  int v12; // eax
  CFormatConverter *v13; // rcx
  int v14; // eax
  int v15; // r9d
  unsigned __int8 v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  EnterCriticalSection(v19);
  if ( a2 && IsValidPixelFormatInfo((enum DXGI_FORMAT *)a3) )
  {
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a3;
    v7 = 0;
    *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
    if ( a4 < 0.0 || a4 > 100.0 )
      v7 = -2147024809;
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1B3u);
      goto LABEL_32;
    }
    v9 = *((_QWORD *)this + 8) == 0LL;
    v10 = a4;
    *((float *)this + 26) = v10;
    if ( !v9 )
    {
      v8 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1BCu);
LABEL_33:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1D6u);
      goto LABEL_34;
    }
    v11 = (int *)((char *)this + 72);
    v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 72);
    v8 = v12;
    if ( v12 < 0 )
    {
      v18 = 447;
    }
    else
    {
      *((_DWORD *)this + 19) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
      *((_DWORD *)this + 20) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
      v8 = -2003292288;
      v14 = *v11;
      if ( *v11 == 2 || v14 > 9 && (v14 <= 11 || v14 == 24 || v14 == 28 || v14 == 65 || (unsigned int)(v14 - 87) <= 1) )
        v8 = 0;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1C3u);
        goto LABEL_32;
      }
      v12 = CFormatConverter::HrCheckDstPixelFormat(v13, *((_DWORD *)this + 21));
      v8 = v12;
      if ( v12 < 0 )
      {
        v18 = 452;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 48LL))(
                a2,
                (char *)this + 96,
                (char *)this + 100);
        v8 = v12;
        if ( v12 < 0 )
        {
          v18 = 454;
        }
        else
        {
          v12 = CScanPipeline::InitializeForFormatConversion(
                  (CFormatConverter *)((char *)this + 112),
                  (CFormatConverter *)((char *)this + 84),
                  (CFormatConverter *)((char *)this + 72),
                  *((_DWORD *)this + 24),
                  v17);
          v8 = v12;
          if ( v12 >= 0 )
          {
            *((_QWORD *)this + 8) = a2;
            (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
            goto LABEL_32;
          }
          v18 = 461;
        }
      }
    }
    v15 = v12;
  }
  else
  {
    v15 = -2147024809;
    v18 = 430;
    v8 = -2147024809;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v18);
LABEL_32:
  if ( v8 < 0 )
    goto LABEL_33;
LABEL_34:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return (unsigned int)v8;
}
