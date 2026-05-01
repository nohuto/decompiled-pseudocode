/*
 * XREFs of ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18004CEDC
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004BE70 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?Add@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@PEA_K@Z @ 0x18004DC40 (-Add@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 */

__int64 __fastcall CApplicationFrameService::_TransferFromPoolToActive(
        CApplicationFrameService *this,
        unsigned __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::Add(
         (char *)this + 120,
         *((_QWORD *)this + 11) + 8 * a2);
  if ( v4 >= 0 && a2 < *((_QWORD *)this + 12) )
  {
    v5 = *((_QWORD *)this + 11);
    v6 = *(_QWORD *)(v5 + 8 * a2);
    if ( v6 )
    {
      *(_QWORD *)(v5 + 8 * a2) = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
    }
    v7 = *((_QWORD *)this + 12);
    if ( a2 != v7 - 1 )
      memmove(
        (void *)(*((_QWORD *)this + 11) + 8 * a2),
        (const void *)(*((_QWORD *)this + 11) + 8 * a2 + 8),
        8 * (v7 - a2) - 8);
    --*((_QWORD *)this + 12);
  }
  return (unsigned int)v4;
}
