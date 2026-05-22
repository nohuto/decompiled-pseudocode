/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8SpatialGraphDriverClient@Holographic@Internal@Windows@@EAAXAEAVV2DevicePropertyRequest@456@J@ZPEAV3456@AEBU?$_Ph@$00@2@AEBU?$_Ph@$01@2@@std@@XAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@std@@EEAAX_N@Z @ 0x1800512B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1);
}
