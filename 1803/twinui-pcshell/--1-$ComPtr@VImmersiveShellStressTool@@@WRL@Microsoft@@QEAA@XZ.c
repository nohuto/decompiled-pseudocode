/*
 * XREFs of ??1?$ComPtr@VImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ @ 0x18018D1C4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveShellStressTool_IUnknown__::_1_::dtor$1 @ 0x18018CC6F (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveShellStressTool_IUnknown__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSwitchController_IUnknown__::_1_::dtor$1 @ 0x1802B19FA (_Microsoft--WRL--Details--MakeAndInitialize_CSwitchController_IUnknown__--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800286A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800286A0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveShellStressTool>::~ComPtr<ImmersiveShellStressTool>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::Release(
             result,
             a2);
  }
  return result;
}
