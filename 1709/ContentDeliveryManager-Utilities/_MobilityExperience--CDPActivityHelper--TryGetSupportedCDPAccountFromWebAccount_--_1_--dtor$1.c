/*
 * XREFs of _MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount_::_1_::dtor$1 @ 0x1800B729C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
