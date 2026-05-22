/*
 * XREFs of ??$destroy@UDeviceDisplayMapping@DWMInputRouter@@@?$_Default_allocator_traits@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@SAXAEAV?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@1@QEAUDeviceDisplayMapping@DWMInputRouter@@@Z @ 0x180081CF0
 * Callers:
 *     _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::emplace_back_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$107 @ 0x1800E7D48 (_std--vector_DWMInputRouter--DeviceDisplayMapping_std--allocator_DWMInputRouter--DeviceDisplayMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<DWMInputRouter::DeviceDisplayMapping>>::destroy<DWMInputRouter::DeviceDisplayMapping>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
