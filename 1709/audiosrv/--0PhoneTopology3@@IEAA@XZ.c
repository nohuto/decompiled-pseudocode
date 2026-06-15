/*
 * XREFs of ??0PhoneTopology3@@IEAA@XZ @ 0x1800EA5AC
 * Callers:
 *     ?CreateInstance@PhoneTopology3@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x1800EADA4 (-CreateInstance@PhoneTopology3@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopolog.c)
 * Callees:
 *     ??0?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAA@IMMMI@Z @ 0x180014EB8 (--0-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180060C00 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
PhoneTopology3 *__fastcall PhoneTopology3::PhoneTopology3(PhoneTopology3 *this)
{
  __int64 v2; // rdx

  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *(_QWORD *)this = &PhoneTopology3::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology3::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 152));
  *((_DWORD *)this + 48) = 0;
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>(
    (__int64)this + 200,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  memset((char *)this + 272, 0, 0x418uLL);
  return this;
}
