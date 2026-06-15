/*
 * XREFs of ??0DynamicAudioEndpointManager@@IEAA@XZ @ 0x180059D60
 * Callers:
 *     ?CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z @ 0x180059BFC (-CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180056B78 (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060FA8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
DynamicAudioEndpointManager *__fastcall DynamicAudioEndpointManager::DynamicAudioEndpointManager(
        DynamicAudioEndpointManager *this)
{
  __int64 v2; // rdx

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &DynamicAudioEndpointManager::`vftable'{for `IAudioProcessNotification'};
  *((_QWORD *)this + 1) = &DynamicAudioEndpointManager::`vftable'{for `CUnknown'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  `eh vector constructor iterator'(
    (char *)this + 64,
    0x30uLL,
    0xEuLL,
    ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::`default constructor closure',
    ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::~CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>);
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 10;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (__int64)this + 784,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  *((_QWORD *)this + 107) = 1LL;
  return this;
}
