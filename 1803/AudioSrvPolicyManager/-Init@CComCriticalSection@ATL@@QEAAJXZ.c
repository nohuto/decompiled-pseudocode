/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A1F4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001450 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800014E0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ??0CVolumeLimitTrackerImpl@@QEAA@XZ @ 0x18002B5B0 (--0CVolumeLimitTrackerImpl@@QEAA@XZ.c)
 *     ??0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z @ 0x18002C9E8 (--0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
