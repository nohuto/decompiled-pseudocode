/*
 * XREFs of ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x1800B7340
 * Callers:
 *     ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@AEAU_GUID@@AEAW4HandleWrapperDesiredAccess@234@AEA_NAEAPEAX@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@AEAPEAUHSTRING__@@AEAU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1800BC3C0 (--$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002C88 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009B58 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x18001EA44 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800B3EC0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper(
        __int64 a1,
        HSTRING a2,
        _OWORD *a3,
        int a4,
        char a5,
        __int64 a6)
{
  char v8; // cl
  HSTRING *v9; // rbx
  HRESULT v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)a1 = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  v8 = 1;
  *(_DWORD *)(a1 + 8) = 1;
  *(_OWORD *)(a1 + 12) = *a3;
  v9 = (HSTRING *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = -2147024890;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_BYTE *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 113) = a5;
  if ( !a6 || a5 )
    v8 = 0;
  if ( v8 )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1D7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v10 = 0;
  if ( !a2 || a2 != *v9 )
  {
    WindowsDeleteString(*v9);
    *v9 = 0LL;
    v10 = WindowsDuplicateString(a2, (HSTRING *)(a1 + 32));
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1D9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a1);
  if ( v11 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v11);
  *(_QWORD *)a1 = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 120), 0, 0);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 160) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  return a1;
}
