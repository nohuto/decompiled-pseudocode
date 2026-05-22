/*
 * XREFs of ??1?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x1800C8868
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$4 @ 0x1800E9BC0 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800E9BC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall std::pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>::~pair<Microsoft::WRL::Wrappers::HString,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  HRESULT result; // eax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  result = WindowsDeleteString(*(HSTRING *)a1);
  *(_QWORD *)a1 = 0LL;
  return result;
}
