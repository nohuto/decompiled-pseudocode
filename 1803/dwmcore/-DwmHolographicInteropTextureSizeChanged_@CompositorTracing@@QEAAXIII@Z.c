/*
 * XREFs of ?DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z @ 0x1801FAD70
 * Callers:
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1801FA4A4 (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicInteropTextureSizeChanged_(
        CompositorTracing *this,
        int a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v7; // [rsp+58h] [rbp+17h]
  __int64 v8; // [rsp+60h] [rbp+1Fh]
  int *v9; // [rsp+68h] [rbp+27h]
  __int64 v10; // [rsp+70h] [rbp+2Fh]
  int *v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+B0h] [rbp+6Fh] BYREF
  int v14; // [rsp+B8h] [rbp+77h] BYREF
  int v15; // [rsp+C0h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v8 = 4LL;
      v7 = &v13;
      v9 = &v14;
      v11 = &v15;
      v10 = 4LL;
      v12 = 4LL;
      TlgWrite(v5, &unk_1802ABC47, 0LL, 0LL, 5u, &pData);
    }
  }
}
