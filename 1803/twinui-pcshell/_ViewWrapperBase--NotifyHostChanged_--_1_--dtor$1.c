/*
 * XREFs of _ViewWrapperBase::NotifyHostChanged_::_1_::dtor$1 @ 0x1800B4750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::NotifyHostChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ViewEventDispatcher::PendingViewData::~PendingViewData((ViewEventDispatcher::PendingViewData *)(a2 + 40));
}
