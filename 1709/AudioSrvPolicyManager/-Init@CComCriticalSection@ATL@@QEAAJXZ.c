/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180020700
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800012C0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001340 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ??0CVolumeLimitTrackerImpl@@QEAA@XZ @ 0x180021DA0 (--0CVolumeLimitTrackerImpl@@QEAA@XZ.c)
 *     ??0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z @ 0x180023888 (--0CTrackedEndpoint@@QEAA@PEAUIVolumeLimitTracker@@M@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
