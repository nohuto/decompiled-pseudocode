/*
 * XREFs of _lambda_426bb45a896c97a0e7f03d36232edfea_::__lambda_426bb45a896c97a0e7f03d36232edfea_ @ 0x1801F783C
 * Callers:
 *     _XamlExplorerHostShellComponent::PerformDelayedInitialization_::_1_::dtor$1 @ 0x1801F8F2D (_XamlExplorerHostShellComponent--PerformDelayedInitialization_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009FFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18009FFC0.c)
 */

__int64 __fastcall lambda_426bb45a896c97a0e7f03d36232edfea_::__lambda_426bb45a896c97a0e7f03d36232edfea_(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
