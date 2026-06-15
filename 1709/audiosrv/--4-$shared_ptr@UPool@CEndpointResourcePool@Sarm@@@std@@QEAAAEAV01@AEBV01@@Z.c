/*
 * XREFs of ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800BF820
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUISaDeviceProxy@@AEBVCEndpointResourcePool@Sarm@@@Z @ 0x1800C228C (-SetAt@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDevic.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800C4104 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Reset0@?$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base@2@@Z @ 0x18005AFA0 (-_Reset0@-$_Ptr_base@VWorkItem@CWorkFifo@@@std@@QEAAXPEAVWorkItem@CWorkFifo@@PEAV_Ref_count_base.c)
 */

__int64 __fastcall std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  std::_Ref_count_base *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  v3 = *a2;
  v7 = 0LL;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  std::_Ptr_base<CWorkFifo::WorkItem>::_Reset0(&v7, v3, v2);
  v5 = *(std::_Ref_count_base **)(a1 + 8);
  *(_OWORD *)a1 = v7;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
