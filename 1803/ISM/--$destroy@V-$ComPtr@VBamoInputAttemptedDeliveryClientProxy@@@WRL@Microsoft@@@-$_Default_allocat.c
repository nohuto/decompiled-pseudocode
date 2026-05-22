/*
 * XREFs of ??$destroy@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x18000C884
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy__std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_____::emplace_back_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy____::_1_::catch$103 @ 0x1800E3B7D (_std--vector_Microsoft--WRL--ComPtr_BamoControllerNavigationOverrideProxy__std--allocator_Micros.c)
 *     _std::vector_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__std::allocator_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_____::emplace_back_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__const_&___ptr64__::_1_::catch$103 @ 0x1800E4544 (_std--vector_Microsoft--WRL--ComPtr_BamoInputAttemptedDeliveryClientProxy__std--allocator_Micros.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>>::destroy<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
