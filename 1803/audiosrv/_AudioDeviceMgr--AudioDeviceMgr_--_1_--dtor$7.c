/*
 * XREFs of _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$7 @ 0x1800688B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtrList<WorkItemBase>::~CAutoPtrList<WorkItemBase>(*(_QWORD *)(a2 + 64) + 128LL);
}
