/*
 * XREFs of ??0CPolicyConfig@@QEAA@XZ @ 0x180060C4C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180033188 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180060C00 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
CPolicyConfig *__fastcall CPolicyConfig::CPolicyConfig(CPolicyConfig *this)
{
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &CPolicyConfig::`vftable'{for `IPolicyConfig'};
  *((_QWORD *)this + 1) = &CPolicyConfig::`vftable'{for `CRefCountedObject'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 3);
  `eh vector constructor iterator'(
    (char *)this + 160,
    72LL,
    7LL,
    ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::`default constructor closure');
  `eh vector constructor iterator'(
    (char *)this + 664,
    72LL,
    7LL,
    ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::`default constructor closure');
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
