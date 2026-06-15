/*
 * XREFs of ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@PEAVWeakRef@WRL@Microsoft@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@@Z @ 0x1800A7CB4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::WeakRef_____ptr64_Microsoft::WRL::WeakRef_____ptr64_std::allocator_Microsoft::WRL::WeakRef____::_1_::catch$4 @ 0x18005BDB0 (_std--_Uninitialized_move_al_unchecked1_Microsoft--WRL--WeakRef_____ptr64_Microsoft--WRL--WeakRe.c)
 *     _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______::_1_::catch$4 @ 0x1800A7FB8 (_std--_Uninitialized_move_al_unchecked1_Microsoft--WRL--ComPtr_IDeviceGraphObjectsStore______ptr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef *>(
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
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
