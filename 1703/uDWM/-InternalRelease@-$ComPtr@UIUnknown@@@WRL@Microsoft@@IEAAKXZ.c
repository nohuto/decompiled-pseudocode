/*
 * XREFs of ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18004CBA4 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800729B4 (--$ActivateInstance@V-$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@W.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x180072CB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$01.c)
 *     _lambda_1fb07860902cf0495ca2b3e5f54263f5_::operator() @ 0x180072E0C (_lambda_1fb07860902cf0495ca2b3e5f54263f5_--operator().c)
 *     _lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator() @ 0x180072F1C (_lambda_f22d5cbf612beadeeb19a63fa8ca3a96_--operator().c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@23@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180073240 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$0.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180073528 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _anonymous_namespace_::FodWaiter @ 0x180073570 (_anonymous_namespace_--FodWaiter.c)
 *     _anonymous_namespace_::GetCbsSession @ 0x180073610 (_anonymous_namespace_--GetCbsSession.c)
 *     _anonymous_namespace_::IsFodInstalled @ 0x1800738A4 (_anonymous_namespace_--IsFodInstalled.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180073A60 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ @ 0x180073F64 (-ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?ValidateHardwareAdapters@CAnalogCompositorManager@@AEAAJXZ @ 0x1800747D8 (-ValidateHardwareAdapters@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800795A0 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800796FC (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x180079A40 (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
