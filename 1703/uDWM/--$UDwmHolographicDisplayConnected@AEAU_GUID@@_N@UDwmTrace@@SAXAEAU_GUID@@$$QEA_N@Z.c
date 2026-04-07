/*
 * XREFs of ??$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z @ 0x180072BF8
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     ?UDwmHolographicDisplayConnected_@UDwmTrace@@QEAAXU_GUID@@H@Z @ 0x1800746C8 (-UDwmHolographicDisplayConnected_@UDwmTrace@@QEAAXU_GUID@@H@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180074B68 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmHolographicDisplayConnected<_GUID &,bool>(struct _GUID *a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // r8
  UDwmTrace *v6; // rcx
  struct _GUID v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get(
                      a1,
                      lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v5 )
  {
    if ( *v5 )
    {
      v7 = *a1;
      wil::details::static_lazy<UDwmTrace>::get(v4, lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
      UDwmTrace::UDwmHolographicDisplayConnected_(v6, &v7, *a2);
    }
  }
}
