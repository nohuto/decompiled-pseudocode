/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x18000C8CC
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______ptr64_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy______::_1_::catch$2 @ 0x1800E3C6E (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_BamoControllerNavigationOverridePr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
