/*
 * XREFs of ??1?$CAutoPtrList@VPhoneTopology3WorkItem@@@ATL@@QEAA@XZ @ 0x1800EA784
 * Callers:
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$9 @ 0x1800E6678 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$9.c)
 *     _AudioDeviceMgr::_AudioDeviceMgr_::_1_::dtor$9 @ 0x1800E686C (_AudioDeviceMgr--_AudioDeviceMgr_--_1_--dtor$9.c)
 *     _PhoneTopology3::PhoneTopology3_::_1_::dtor$4 @ 0x1800EA6C7 (_PhoneTopology3--PhoneTopology3_--_1_--dtor$4.c)
 *     _PhoneTopology3::_PhoneTopology3_::_1_::dtor$4 @ 0x1800EA8DD (_PhoneTopology3--_PhoneTopology3_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtrList<PhoneTopology3WorkItem>::~CAutoPtrList<PhoneTopology3WorkItem>(__int64 a1)
{
  return ATL::CAtlList<ATL::CAutoPtr<PhoneTopology3WorkItem>,ATL::CAutoPtrElementTraits<PhoneTopology3WorkItem>>::RemoveAll(a1);
}
