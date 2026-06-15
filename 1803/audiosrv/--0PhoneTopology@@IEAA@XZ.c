/*
 * XREFs of ??0PhoneTopology@@IEAA@XZ @ 0x1800575CC
 * Callers:
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180056A1C (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 * Callees:
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180056B78 (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800576D4 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
PhoneTopology *__fastcall PhoneTopology::PhoneTopology(PhoneTopology *this)
{
  __int64 v2; // rdx

  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneTopology *)((char *)this + 56));
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneTopology *)((char *)this + 144));
  *((_DWORD *)this + 46) = 0;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (__int64)this + 192,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  memset_0((char *)this + 264, 0, 0x418uLL);
  return this;
}
