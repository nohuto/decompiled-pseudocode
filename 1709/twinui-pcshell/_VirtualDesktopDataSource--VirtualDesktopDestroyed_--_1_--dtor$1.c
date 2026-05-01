/*
 * XREFs of _VirtualDesktopDataSource::VirtualDesktopDestroyed_::_1_::dtor$1 @ 0x1801F6F52
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopDataSource::VirtualDesktopDestroyed_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 48));
}
