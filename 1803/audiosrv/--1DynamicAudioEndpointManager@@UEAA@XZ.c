/*
 * XREFs of ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800FBA30
 * Callers:
 *     ??_GDynamicAudioEndpointManager@@UEAAPEAXI@Z @ 0x1800FBB2C (--_GDynamicAudioEndpointManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060AB8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800FCAF8 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x1800FCB58 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 */

void __fastcall DynamicAudioEndpointManager::~DynamicAudioEndpointManager(DynamicAudioEndpointManager *this)
{
  *(_QWORD *)this = &DynamicAudioEndpointManager::`vftable'{for `IAudioProcessNotification'};
  *((_QWORD *)this + 1) = &DynamicAudioEndpointManager::`vftable'{for `CUnknown'};
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll((char *)this + 784);
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll((char *)this + 736);
  `eh vector destructor iterator'(
    (char *)this + 64,
    48LL,
    14LL,
    (void (*)(void *))ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::~CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
