/*
 * XREFs of ??1?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x1800C98B4
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest_::_1_::dtor$2 @ 0x1800E9942 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddDevicePropertyRequest_ea_1800E9942.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor$2 @ 0x1800E99AC (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddNodePropertyRequests_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>::~unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
