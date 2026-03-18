/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1801C5F50
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801C5DE4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180080118 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1801C62BC (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        const struct PixelFormatInfo *a3,
        double a4)
{
  int *v7; // r15
  signed int v8; // r9d
  signed int v9; // ebx
  bool v10; // zf
  float v11; // xmm0_4
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  DWORD v16; // r9d
  unsigned __int8 v18; // [rsp+20h] [rbp-78h]
  unsigned int v19; // [rsp+20h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-60h] BYREF

  v20 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  EnterCriticalSection(v20);
  if ( a2 && IsValidPixelFormatInfo(a3) )
  {
    v7 = (int *)((char *)this + 84);
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a3;
    v8 = 0;
    *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
    if ( a4 < 0.0 || a4 > 100.0 )
      v8 = -2147024809;
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1B2u);
      goto LABEL_38;
    }
    v10 = *((_QWORD *)this + 8) == 0LL;
    v11 = a4;
    *((float *)this + 26) = v11;
    if ( !v10 )
    {
      v9 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x1BBu);
LABEL_39:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1D3u);
      goto LABEL_40;
    }
    v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v21);
    v9 = -2003292288;
    *((_QWORD *)this + 9) = *(_QWORD *)v12;
    *((_DWORD *)this + 20) = *(_DWORD *)(v12 + 8);
    v13 = *((_DWORD *)this + 18);
    if ( v13 == 2 || v13 > 9 && (v13 <= 11 || v13 == 24 || v13 == 28 || v13 == 65 || (unsigned int)(v13 - 87) <= 1) )
      v9 = 0;
    if ( v9 < 0 )
    {
      v19 = 448;
    }
    else
    {
      v14 = *v7;
      v9 = -2003292288;
      if ( *v7 == 2 || v14 > 9 && (v14 <= 11 || v14 == 24 || v14 == 28 || (unsigned int)(v14 - 87) <= 1) )
        v9 = 0;
      if ( v9 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
                a2,
                (char *)this + 96,
                (char *)this + 100);
        v9 = v15;
        if ( v15 < 0 )
        {
          v19 = 451;
        }
        else
        {
          v15 = CScanPipeline::InitializeForFormatConversion(
                  (CFormatConverter *)((char *)this + 112),
                  (CFormatConverter *)((char *)this + 84),
                  (CFormatConverter *)((char *)this + 72),
                  *((_DWORD *)this + 24),
                  v18);
          v9 = v15;
          if ( v15 >= 0 )
          {
            *((_QWORD *)this + 8) = a2;
            (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
            goto LABEL_38;
          }
          v19 = 458;
        }
        v16 = v15;
        goto LABEL_37;
      }
      v19 = 449;
    }
    v16 = v9;
  }
  else
  {
    v16 = -2147024809;
    v19 = 429;
    v9 = -2147024809;
  }
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, v19);
LABEL_38:
  if ( v9 < 0 )
    goto LABEL_39;
LABEL_40:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return (unsigned int)v9;
}
