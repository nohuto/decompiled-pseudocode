/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800100B8
 * Callers:
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$2 @ 0x1800365F8 (_CDuckingManager--OnStateChanged_--_1_--dtor$2.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$3 @ 0x180036604 (_CDuckingManager--OnStateChanged_--_1_--dtor$3.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x180036F9D (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x1800370BD (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x18003774F (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$2 @ 0x1800377AC (_TsSessionCreate_--_1_--dtor$2.c)
 *     _TsSessionCreate_::_1_::dtor$4 @ 0x1800377B8 (_TsSessionCreate_--_1_--dtor$4.c)
 *     _TsSessionCreate_::_1_::dtor$6 @ 0x1800377C4 (_TsSessionCreate_--_1_--dtor$6.c)
 *     _TsSessionCreate_::_1_::dtor$8 @ 0x1800377D0 (_TsSessionCreate_--_1_--dtor$8.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x1800377DC (_TsSessionCreate_--_1_--dtor$10.c)
 *     _TsSessionCreate_::_1_::dtor$12 @ 0x1800377E8 (_TsSessionCreate_--_1_--dtor$12.c)
 *     _TsSessionCreate_::_1_::dtor$14 @ 0x1800377F4 (_TsSessionCreate_--_1_--dtor$14.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$0 @ 0x180037FB8 (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey_::_1_::dtor$1 @ 0x180037FC4 (_ApplicationSpecificEndpointInfo--ReadEndpointDataFromKey_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber_::_1_::dtor$0 @ 0x180037FD0 (_ApplicationSpecificEndpointInfo--DoesStringRepresentAPositiveNumber_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$0 @ 0x180038078 (_ATL--CSid--CSid_--_1_--dtor$0.c)
 *     _ATL::CSid::CSid_::_1_::dtor$1 @ 0x180038088 (_ATL--CSid--CSid_--_1_--dtor$1.c)
 *     _ATL::CSid::CSid_::_1_::dtor$2 @ 0x180038098 (_ATL--CSid--CSid_--_1_--dtor$2.c)
 *     _ATL::CSid::CSid_::_1_::dtor$3 @ 0x1800380A8 (_ATL--CSid--CSid_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$2 @ 0x180038187 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$2.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$3 @ 0x180038197 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$3.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$4 @ 0x1800381A7 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$4.c)
 *     _ATL::CDacl::CAccessAce::CAccessAce_::_1_::dtor$5 @ 0x1800381B7 (_ATL--CDacl--CAccessAce--CAccessAce_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(*a1 - 24LL);
  v2 = _InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  return result;
}
