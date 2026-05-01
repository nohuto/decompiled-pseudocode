/*
 * XREFs of _VirtualDesktopDataSource::Uninitialize_::_1_::dtor$0 @ 0x18025EEAE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopDataSource::Uninitialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 64));
}
