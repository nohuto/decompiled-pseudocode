/*
 * XREFs of _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______::_1_::catch$4 @ 0x1800A7FB8
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@PEAVWeakRef@WRL@Microsoft@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@@Z @ 0x1800A7CB4 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@PEAVWeakRef@WRL@Microsoft@@@std@@YA.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
