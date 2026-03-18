/*
 * XREFs of ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180216A50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800C5D2C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CColorKeyBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v19; // [rsp+5Ch] [rbp-15h] BYREF
  int v20; // [rsp+60h] [rbp-11h] BYREF
  int v21; // [rsp+64h] [rbp-Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v23[16]; // [rsp+70h] [rbp-1h] BYREF

  v17 = 0LL;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  Src = 0LL;
  v18 = 0;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v17);
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, a2, &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x7Au);
  }
  else
  {
    v11 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v23);
    v12 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v17 + 32LL))(v17, &v21, &v20);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x7Du);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 40LL))(v17, &v19);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x7Eu);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v17 + 48LL))(
                v17,
                &v18,
                &Src);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x80u);
        }
        else
        {
          v15 = CBitmap::CopyPixelsHelper(v11, a2[2] - *a2, a2[3] - a2[1], v19, v18, Src, a3, a4, a5);
          v10 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x8Bu);
        }
      }
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v17);
  return v10;
}
