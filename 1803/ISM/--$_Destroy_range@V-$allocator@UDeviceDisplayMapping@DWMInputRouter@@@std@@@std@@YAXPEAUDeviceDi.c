/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@YAXPEAUDeviceDisplayMapping@DWMInputRouter@@0AEAV?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@0@@Z @ 0x180081D14
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_DWMInputRouter::DeviceDisplayMapping_____ptr64_DWMInputRouter::DeviceDisplayMapping_____ptr64_std::allocator_DWMInputRouter::DeviceDisplayMapping____::_1_::catch$3 @ 0x1800E7D8C (_std--_Uninitialized_move_al_unchecked_DWMInputRouter--DeviceDisplayMapping_____ptr64_DWMInputRo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<DWMInputRouter::DeviceDisplayMapping>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 2;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
