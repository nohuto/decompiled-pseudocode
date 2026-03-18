/*
 * XREFs of ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x180156090
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CCaptureRenderTarget *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  int v4; // eax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  char v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  int v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+5Ch] [rbp-3Ch]
  __int128 v20; // [rsp+60h] [rbp-38h] BYREF
  int v21; // [rsp+70h] [rbp-28h]
  __int64 *v22; // [rsp+78h] [rbp-20h]

  v1 = 0;
  v2 = (__int64 *)((char *)this + 392);
  if ( *((_QWORD *)this + 49) )
  {
    v4 = *((_DWORD *)this + 74);
    v17 = *(_QWORD *)(*((_QWORD *)this - 6) + 496LL);
    v5 = *v2;
    v18 = v4;
    v6 = *((_DWORD *)this + 75);
    v7 = *((_QWORD *)this + 53);
    v19 = v6;
    v20 = xmmword_1802ACF70;
    v21 = 16;
    v22 = &v17;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *))(*(_QWORD *)v7 + 24LL))(v7, v5, 1LL, &v20);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1C6u);
    }
    else
    {
      ++*((_QWORD *)this + 51);
      v9 = *((_QWORD *)this + 42);
      v10 = *((_QWORD *)this + 51);
      v11 = *((_QWORD *)this + 50);
      v12 = *(_QWORD *)(v9 + 184);
      *(_BYTE *)(v9 + 1052) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 152LL))(v12, v11, v10);
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1CAu);
      }
      else
      {
        v16 = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, _DWORD, _QWORD, _QWORD))(**((_QWORD **)this + 52) + 64LL))(
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 50),
                *((_QWORD *)this + 51),
                0LL,
                v16,
                0,
                0LL,
                0LL);
        v1 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1D4u);
      }
    }
  }
  if ( *v2 )
  {
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(v2);
    COffScreenRenderTarget::ReleaseRenderTargets((CCaptureRenderTarget *)((char *)this - 64));
  }
  return v1;
}
