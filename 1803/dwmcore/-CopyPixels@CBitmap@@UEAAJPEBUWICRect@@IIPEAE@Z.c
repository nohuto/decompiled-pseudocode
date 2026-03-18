/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180082150
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800DD730 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180081E6C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800C5D2C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800C7D28 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-71h]
  unsigned int v18; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  int v21; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  LPCRITICAL_SECTION v24; // [rsp+70h] [rbp-21h] BYREF
  __int64 v25; // [rsp+78h] [rbp-19h] BYREF
  int v26; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+84h] [rbp-Dh]
  struct tagRECT v28; // [rsp+88h] [rbp-9h] BYREF

  v20 = 0LL;
  v21 = 0;
  v19 = 0;
  Src = 0LL;
  v18 = 0;
  v24 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 104) & -(__int64)(this != (CBitmap *)16));
  EnterCriticalSection(v24);
  if ( !a5 )
  {
    v10 = -2147024809;
    v17 = 175;
LABEL_13:
    v12 = v10;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v17);
    goto LABEL_10;
  }
  if ( a2 )
    goto LABEL_3;
  v13 = *((_DWORD *)this + 38);
  v14 = -1;
  v25 = 0LL;
  v15 = -1;
  if ( v13 <= 0x7FFFFFFF )
    v15 = v13;
  v26 = v15;
  v10 = v13 > 0x7FFFFFFF ? 0x80070216 : 0;
  if ( v13 > 0x7FFFFFFF )
  {
    v17 = 183;
    goto LABEL_13;
  }
  v16 = *((_DWORD *)this + 39);
  if ( v16 <= 0x7FFFFFFF )
    v14 = *((_DWORD *)this + 39);
  v27 = v14;
  v10 = v16 > 0x7FFFFFFF ? 0x80070216 : 0;
  if ( v16 > 0x7FFFFFFF )
  {
    v17 = 184;
    goto LABEL_13;
  }
  a2 = (const struct WICRect *)&v25;
LABEL_3:
  v9 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 189;
    goto LABEL_29;
  }
  v9 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 42), a3, a2, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 194;
    goto LABEL_29;
  }
  v9 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
         (char *)this + 8,
         a2,
         1LL,
         &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 196;
    goto LABEL_29;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v20 + 32LL))(v20, &v21, &v19);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 198;
    goto LABEL_29;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 199;
    goto LABEL_29;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v20 + 48LL))(v20, &v18, &Src);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 201;
    goto LABEL_29;
  }
  v9 = CBitmap::CopyPixelsHelper((enum DXGI_FORMAT)*((_DWORD *)this + 42), a2->Width, v19, v22, v18, Src, a3, a4, a5);
  v10 = v9;
  if ( v9 < 0 )
  {
    v17 = 214;
LABEL_29:
    v12 = v9;
    goto LABEL_30;
  }
LABEL_10:
  ReleaseInterfaceNoNULL<IWICBitmap>(v20);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v10;
}
