/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopDataSourceComponent@@@WRL@Microsoft@@QEAA@XZ @ 0x18025B52C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopDataSourceComponent_IUnknown__::_1_::dtor$1 @ 0x18025B3FD (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopDataSourceComponent_IUnkn_ea_18025B3FD.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18025B7C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18025B7C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopDataSourceComponent>::~ComPtr<VirtualDesktopDataSourceComponent>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
