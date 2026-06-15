/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______::_1_::catch$4 @ 0x180095C60
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800959A4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAV-$.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
