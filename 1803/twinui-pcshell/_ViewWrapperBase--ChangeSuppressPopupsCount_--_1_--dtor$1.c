/*
 * XREFs of _ViewWrapperBase::ChangeSuppressPopupsCount_::_1_::dtor$1 @ 0x1801E4F04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::ChangeSuppressPopupsCount_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ViewEventDispatcher::PendingViewData::~PendingViewData((CWinRTApplicationView **)(a2 + 40));
}
