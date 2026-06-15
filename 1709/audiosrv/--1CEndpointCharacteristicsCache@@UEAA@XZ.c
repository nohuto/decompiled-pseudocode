/*
 * XREFs of ??1CEndpointCharacteristicsCache@@UEAA@XZ @ 0x1800B0000
 * Callers:
 *     ??_GCEndpointCharacteristicsCache@@UEAAPEAXI@Z @ 0x1800B1160 (--_GCEndpointCharacteristicsCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAXXZ @ 0x1800B7954 (-RemoveAll@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VC.c)
 */

void __fastcall CEndpointCharacteristicsCache::~CEndpointCharacteristicsCache(CEndpointCharacteristicsCache *this)
{
  *(_QWORD *)this = &CEndpointCharacteristicsCache::`vftable';
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveAll((char *)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
}
