/*
 * XREFs of ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x180217064
 * Callers:
 *     ?ReadTexture@CColorKeyBitmapRealization@@UEAAXXZ @ 0x180213A20 (-ReadTexture@CColorKeyBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801C60D8 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CColorKeyBitmap::ReadTexture(CColorKeyBitmap *this)
{
  char *v1; // rbx
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  enum DXGI_FORMAT v5; // esi
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  void *v9; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v10[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+5Ch] [rbp-24h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-20h] BYREF

  v8 = 0LL;
  v1 = (char *)this + 16;
  v9 = 0LL;
  *(_QWORD *)v10 = 0LL;
  (*(void (__fastcall **)(char *, int *, int *))(*(_QWORD *)v1 + 32LL))(v1, &v13, &v14);
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v8);
  v2 = (*(__int64 (__fastcall **)(char *, _DWORD *, __int64 *))(*(_QWORD *)v1 + 64LL))(v1, v12, &v8);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x59u);
  }
  else
  {
    v3 = v13 - v12[0];
    v4 = v14 - v12[1];
    v5 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(v8, v15);
    v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *, void **))(*(_QWORD *)v8 + 48LL))(v8, v11, &v9);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x60u);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 40LL))(v8, v10);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x62u);
      else
        DebugInspectSysMemSurface(v9, v3, v4, v5, v10[0]);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v8);
}
