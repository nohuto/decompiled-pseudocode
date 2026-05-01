/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004CC30
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x18004CDD0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_18004CDD0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18004CE10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_18004CE10.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x18004CE40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_18004CE40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 116));
}
