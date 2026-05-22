/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8SpatialGraphDriverClient@Holographic@Internal@Windows@@EAAXAEAVV2DevicePropertyRequest@456@J@ZPEAV3456@AEBU?$_Ph@$00@2@AEBU?$_Ph@$01@2@@std@@XAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@std@@EEBAPEAV?$_Func_base@XAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@2@PEAX@Z @ 0x1800CE240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
