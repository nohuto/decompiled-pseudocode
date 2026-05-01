/*
 * XREFs of ??1PendingViewData@ViewEventDispatcher@@QEAA@XZ @ 0x1800FA8CC
 * Callers:
 *     _ViewEventDispatcher::_QueuePendingActivationNodeForDestruction_::_1_::dtor$1 @ 0x1800B2934 (_ViewEventDispatcher--_QueuePendingActivationNodeForDestruction_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$6 @ 0x1800B2994 (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$6.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$11 @ 0x1800B2BBC (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$11.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$10 @ 0x1800B2DE0 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$10.c)
 *     _ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange_::_1_::dtor$1 @ 0x1800B459A (_ViewWrapperBase--NotifyGlobalComponentsForWindowStateChange_--_1_--dtor$1.c)
 *     _ViewWrapperBase::Navigate_::_1_::dtor$9 @ 0x1800B4678 (_ViewWrapperBase--Navigate_--_1_--dtor$9.c)
 *     _ViewWrapperBase::WindowCreated_::_1_::dtor$7 @ 0x1800B46AC (_ViewWrapperBase--WindowCreated_--_1_--dtor$7.c)
 *     _ViewWrapperBase::NotifyHostChanged_::_1_::dtor$1 @ 0x1800B4750 (_ViewWrapperBase--NotifyHostChanged_--_1_--dtor$1.c)
 *     _ViewWrapperBase::ViewDestroyed_::_1_::dtor$2 @ 0x1800B4780 (_ViewWrapperBase--ViewDestroyed_--_1_--dtor$2.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$3 @ 0x1801819F9 (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$3.c)
 *     _WindowEventDispatcher::QueuePendingActivationForDestruction_::_1_::dtor$2 @ 0x1801D76CF (_WindowEventDispatcher--QueuePendingActivationForDestruction_--_1_--dtor$2.c)
 *     _ViewWrapperBase::ChangeSuppressPopupsCount_::_1_::dtor$1 @ 0x1801E4F04 (_ViewWrapperBase--ChangeSuppressPopupsCount_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::PendingViewData::~PendingViewData(CWinRTApplicationView **this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 1);
}
