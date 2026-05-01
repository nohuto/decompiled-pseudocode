/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800D19E8
 * Callers:
 *     _CStartSizingFrame::HandleWindowPositionChanging_::_1_::dtor$0 @ 0x1801EBD1A (_CStartSizingFrame--HandleWindowPositionChanging_--_1_--dtor$0.c)
 *     _CStartSizingFrame::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1801EBD7A (_CStartSizingFrame--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
