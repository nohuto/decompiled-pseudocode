/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800026C4
 * Callers:
 *     _XamlTaskbarProxy::GetStuckRect_::_1_::dtor$0 @ 0x18019B2B7 (_XamlTaskbarProxy--GetStuckRect_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::UpdateWindowPosition_::_1_::dtor$0 @ 0x18019B47F (_XamlTaskbarProxy--UpdateWindowPosition_--_1_--dtor$0.c)
 *     _XamlTaskbarManager::GetTaskbar_::_1_::dtor$0 @ 0x18019FF72 (_XamlTaskbarManager--GetTaskbar_--_1_--dtor$0.c)
 *     _XamlTaskbarManager::GetAllTaskbars_::_1_::dtor$0 @ 0x18019FF8A (_XamlTaskbarManager--GetAllTaskbars_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::GetStartButtonRect_::_1_::dtor$0 @ 0x1801A075F (_XamlTaskbarProxy--GetStartButtonRect_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::GetMonitorHandle_::_1_::dtor$0 @ 0x1801A076B (_XamlTaskbarProxy--GetMonitorHandle_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::AsyncDestroy_::_1_::dtor$0 @ 0x1801A07AC (_XamlTaskbarProxy--AsyncDestroy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
