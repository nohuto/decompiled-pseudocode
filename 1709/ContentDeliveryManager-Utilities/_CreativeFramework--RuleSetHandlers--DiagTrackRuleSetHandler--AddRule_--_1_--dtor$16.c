/*
 * XREFs of _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$16 @ 0x1800B933D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180012E70 (--1-$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 0x10;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~0x10u;
    return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 64));
  }
  return result;
}
