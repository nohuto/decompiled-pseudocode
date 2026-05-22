/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_DWMInputRouter::DeviceDisplayMapping_____ptr64_DWMInputRouter::DeviceDisplayMapping_____ptr64_std::allocator_DWMInputRouter::DeviceDisplayMapping____::_1_::catch$3 @ 0x1800E7D8C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@YAXPEAUDeviceDisplayMapping@DWMInputRouter@@0AEAV?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@0@@Z @ 0x180081D14 (--$_Destroy_range@V-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@YAXPEAUDeviceDi.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_DWMInputRouter::DeviceDisplayMapping_____ptr64_DWMInputRouter::DeviceDisplayMapping_____ptr64_std::allocator_DWMInputRouter::DeviceDisplayMapping____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<DWMInputRouter::DeviceDisplayMapping>>(
    *(__int64 **)(a2 + 88),
    *(__int64 **)(a2 + 80));
  throw;
}
