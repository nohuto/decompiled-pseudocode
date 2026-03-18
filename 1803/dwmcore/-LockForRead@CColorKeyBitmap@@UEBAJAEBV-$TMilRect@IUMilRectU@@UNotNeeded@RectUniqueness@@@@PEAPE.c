/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180216DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180083960 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x180158790 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801F55C4 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 *     ?GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA?AV?$com_ptr_t@VID2DBitmapCacheSource@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180216D48 (-GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA-AV-$com_ptr_t@VID2DBitmapCacheSource@@Uerr_ret.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v4; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // r9d
  struct IBitmapDest *v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // ebx
  const struct PixelFormatInfo *v13; // rax
  int v14; // eax
  struct IBitmapDest *v15; // rbx
  _QWORD *SourceBitmapCacheSource; // rax
  unsigned int v18; // [rsp+20h] [rbp-39h]
  struct IBitmapDest *v19; // [rsp+30h] [rbp-29h] BYREF
  __int64 v20; // [rsp+38h] [rbp-21h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-15h] BYREF
  __int64 v23; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v24[4]; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v26[4]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v27[4]; // [rsp+6Ch] [rbp+13h] BYREF
  __int64 v28[2]; // [rsp+70h] [rbp+17h] BYREF

  v4 = a2[2] - *a2;
  v19 = 0LL;
  v20 = 0LL;
  v24[0] = 0;
  v24[1] = 0;
  v22 = 0;
  v23 = 0LL;
  v21 = 0;
  v25[0] = 0;
  v25[1] = 0;
  v24[2] = v4;
  v7 = a2[3] - a2[1];
  *a3 = 0LL;
  v24[3] = v7;
  (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v26, v27);
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v25, (__int64)a2) )
  {
    v8 = -2147024809;
    v18 = 167;
LABEL_3:
    v9 = v8;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v18);
    goto LABEL_22;
  }
  v10 = v19;
  v19 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = a2[3] - a2[1];
  v12 = a2[2] - *a2;
  v13 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, v28);
  v14 = HrCreateDestBitmap(v12, v11, v13, &v19);
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = 174;
    goto LABEL_20;
  }
  v15 = v19;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v20);
  v14 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)v15 + 24LL))(
          v15,
          v24,
          2LL,
          &v20);
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = 178;
    goto LABEL_20;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v22);
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = 180;
    goto LABEL_20;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v21, &v23);
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = 181;
    goto LABEL_20;
  }
  SourceBitmapCacheSource = CColorKeyBitmap::GetSourceBitmapCacheSource(a1 - 16, v28);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64))(*(_QWORD *)*SourceBitmapCacheSource + 56LL))(
         *SourceBitmapCacheSource,
         a2,
         v22,
         v21,
         v23);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v28);
  if ( v8 < 0 )
  {
    v18 = 187;
    goto LABEL_3;
  }
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v20);
  v14 = CBitmapColorKey::ApplyColorKeyToBitmap(v19, (const struct CColorKey *)(a1 + 16));
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = 191;
    goto LABEL_20;
  }
  v14 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v19 + 24LL))(
          v19,
          v24,
          1LL,
          a3);
  v8 = v14;
  if ( v14 < 0 )
  {
    v18 = 194;
LABEL_20:
    v9 = v14;
    goto LABEL_21;
  }
LABEL_22:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v19);
  return (unsigned int)v8;
}
