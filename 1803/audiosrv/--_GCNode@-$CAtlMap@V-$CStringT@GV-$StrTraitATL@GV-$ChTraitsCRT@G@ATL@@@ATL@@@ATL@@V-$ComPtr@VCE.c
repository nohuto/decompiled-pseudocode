/*
 * XREFs of ??_GCNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAXI@Z @ 0x1800E98A4
 * Callers:
 *     ?FreeNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EACD0 (-FreeNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CNode::`scalar deleting destructor'(
        _QWORD *a1)
{
  __int64 v2; // rcx
  unsigned int (__fastcall *v3)(__int64); // rax

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    v3 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL);
    if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v2);
    else
      v3(v2);
  }
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
  return a1;
}
