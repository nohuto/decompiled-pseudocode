/*
 * XREFs of ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1801F8B58
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801F88C4 (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::HolographicInteropTargetCreated_(CompositorTracing *this, const struct _LUID *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  LONG *p_HighPart; // [rsp+50h] [rbp-38h]
  UINT32 v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  const struct _LUID *v10; // [rsp+60h] [rbp-28h]
  UINT32 v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( TlgKeywordOn(v3, 0x400000000000uLL) )
    {
      v9 = 0;
      v12 = 0;
      p_HighPart = &a2->HighPart;
      v8 = cData;
      v10 = a2;
      v11 = cData;
      TlgWrite(v4, &unk_1802AB9D0, 0LL, 0LL, cData, &pData);
    }
  }
}
