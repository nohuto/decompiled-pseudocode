/*
 * XREFs of _CreativeFramework::Actions::GetPositionParameters_::_1_::dtor$3 @ 0x1800BAC36
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180012E70 (--1-$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall CreativeFramework::Actions::GetPositionParameters_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>(*(__int64 **)(a2 + 64));
  }
  return result;
}
