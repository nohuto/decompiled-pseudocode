/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x180023A88
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002FC54 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18005B716 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$2 @ 0x18005B7B9 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$2.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x18005B7C5 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x18005B9BC (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x18007C7B0 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x180098C20 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}
