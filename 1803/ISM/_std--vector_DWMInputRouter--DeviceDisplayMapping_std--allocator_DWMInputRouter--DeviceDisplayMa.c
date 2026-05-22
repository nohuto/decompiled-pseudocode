/*
 * XREFs of _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::emplace_back_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$107 @ 0x1800E7D48
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x1800816B0 (-deallocate@-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMappin.c)
 *     ??$destroy@UDeviceDisplayMapping@DWMInputRouter@@@?$_Default_allocator_traits@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@SAXAEAV?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@1@QEAUDeviceDisplayMapping@DWMInputRouter@@@Z @ 0x180081CF0 (--$destroy@UDeviceDisplayMapping@DWMInputRouter@@@-$_Default_allocator_traits@V-$allocator@UDevi.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::emplace_back_DWMInputRouter::DeviceDisplayMapping__::_1_::catch_107(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(a2[14] + 16 * a2[17]);
  std::_Default_allocator_traits<std::allocator<DWMInputRouter::DeviceDisplayMapping>>::destroy<DWMInputRouter::DeviceDisplayMapping>(
    v4,
    v3);
  std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v5, a2[14], a2[16]);
  throw;
}
