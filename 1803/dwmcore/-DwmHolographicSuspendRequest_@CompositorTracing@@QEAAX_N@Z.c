/*
 * XREFs of ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x1801F8538
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@QEAAX_N@Z @ 0x1800C6D58 (-ToggleSuspension@CHolographicManager@@QEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicSuspendRequest_(CompositorTracing *this, char a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  char v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( TlgKeywordOn(v2, 0x400000000000uLL) )
    {
      v7 = 0;
      v5 = &v8;
      v6 = 1;
      TlgWrite(v3, &unk_1802AB99A, 0LL, 0LL, 3u, &pData);
    }
  }
}
