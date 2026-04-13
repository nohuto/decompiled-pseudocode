/*
 * XREFs of _MobilityExperience::ActivityWrapper::SetActivityComplete_::_1_::dtor$6 @ 0x1800B73AA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180012E70 (--1-$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall MobilityExperience::ActivityWrapper::SetActivityComplete_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 48));
  }
  return result;
}
