/*
 * XREFs of ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1800213D0
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180040A10 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020958 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::EvaluateHolographicContext(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, CWinRTApplicationView **),
        struct IUnknown *a3,
        int *a4)
{
  struct IUnknown *v5; // r9
  struct Windows::Foundation::Collections::IPropertySet *v8; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v10; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  *a4 = 0;
  v10 = 0LL;
  if ( a3
    && ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v10) >= 0
    && HolographicPositioner::_IsViewContextHolographic((HolographicPositioner *)((char *)this - 120), a2, v10) )
  {
    *a4 = 1;
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **), struct IUnknown *, struct IUnknown *, __int64))(*(_QWORD *)v8 + 16LL))(
      v8,
      a2,
      a3,
      v5,
      -2LL);
  }
  return 0LL;
}
