/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x180204164
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_MonitorFrame______ptr64_Microsoft::WRL::ComPtr_MonitorFrame______ptr64_std::allocator_Microsoft::WRL::ComPtr_MonitorFrame______::_1_::catch$2 @ 0x1802048F3 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_MonitorFrame______ptr64_Microsoft-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(__int64 *a1, __int64 *a2)
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
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
