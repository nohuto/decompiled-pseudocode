/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@@Z @ 0x1800CD560
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest________ptr64_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest________ptr64_std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest________::_1_::catch$15 @ 0x1800EA027 (_std--_Uninitialized_move_al_unchecked_std--unique_ptr_Windows--Internal--Holographic--V2Propert.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 8LL))(*v3, 1LL);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
