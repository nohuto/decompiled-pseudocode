/*
 * XREFs of ??1?$ComPtr@VSpatialInputControllerHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18006742C
 * Callers:
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$2 @ 0x1800CF8CA (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$2.c)
 *     _MPCRawInputProvider::Create_::_1_::dtor$2 @ 0x1800CF948 (_MPCRawInputProvider--Create_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x1800CFA25 (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_-___.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$2 @ 0x1800D0C72 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$10 @ 0x1800D0D0A (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$10.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$11 @ 0x1800D0D1D (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$11.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DisplayChangedHandler_DisplayChangedHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_SpatialInputControllerCollection_____ptr64_bool__::_1_::dtor$1 @ 0x1800D11F5 (_Microsoft--WRL--Details--MakeAndInitialize_DisplayChangedHandler_DisplayChangedHan_ea_1800D11F5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialInputControllerHeadEventHandler>::~ComPtr<SpatialInputControllerHeadEventHandler>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
