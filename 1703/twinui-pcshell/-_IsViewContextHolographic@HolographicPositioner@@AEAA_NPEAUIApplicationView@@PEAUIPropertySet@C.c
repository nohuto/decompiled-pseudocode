/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9A50
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800D83F0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D9AA0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foun.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  bool result; // al
  __int64 v5; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF

  result = 1;
  if ( !HolographicPositioner::_IsPropertySetContextHolographic(this, a3) )
  {
    v5 = *(_QWORD *)a2;
    v6 = 6;
    if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(v5 + 376))(a2, &v6) < 0 || (unsigned int)(v6 - 1) > 3 )
      return 0;
  }
  return result;
}
