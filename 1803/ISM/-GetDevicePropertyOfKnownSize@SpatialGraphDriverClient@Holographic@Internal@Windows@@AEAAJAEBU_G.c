/*
 * XREFs of ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C4F78
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800C5880 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800C59A0 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800C5AA0 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800C620C (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 * Callees:
 *     memcpy_s @ 0x180001740 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x1800BE52C (-DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x1800C0F0C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800C8EE8 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800CAEB0 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x1800CCBC0 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
        __int64 a1,
        const struct _GUID *a2,
        void *a3,
        rsize_t a4,
        __int64 (__fastcall *a5)(void *, rsize_t),
        char a6)
{
  bool v10; // al
  unsigned __int8 v11; // r15
  const void *v12; // r8
  rsize_t v13; // r9
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  int PropertyOfKnown; // ebx
  __int64 v17; // rdx
  const char *v19; // r9
  struct _GUID v20; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v21; // rbx
  _DWORD *v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  const char *v31; // r9
  unsigned __int64 v32; // rcx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v33; // rcx
  unsigned int v34; // [rsp+40h] [rbp-59h] BYREF
  void *Block; // [rsp+48h] [rbp-51h] BYREF
  int v36; // [rsp+50h] [rbp-49h]
  __int64 v37; // [rsp+58h] [rbp-41h]
  __int64 v38; // [rsp+60h] [rbp-39h] BYREF
  __int64 (__fastcall *v39)(void *, rsize_t); // [rsp+68h] [rbp-31h]
  struct _GUID InBuffer; // [rsp+70h] [rbp-29h] BYREF
  __int64 v41; // [rsp+80h] [rbp-19h]
  struct _GUID v42; // [rsp+88h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v39 = a5;
  v10 = (a6 & 1) != 0 || *(_BYTE *)(a1 + 120) && (a6 & 2) == 0;
  v11 = (a6 & 2) != 0 || *(_BYTE *)(a1 + 120) == 0;
  if ( v10 )
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 240));
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
      a1 + 248,
      &v38,
      a2);
    if ( v38 != *(_QWORD *)(a1 + 248) )
    {
      v12 = *(const void **)(v38 + 48);
      v13 = *(_QWORD *)(v38 + 56) - (_QWORD)v12;
      if ( a4 == v13 )
      {
        if ( memcpy_s(a3, a4, v12, v13) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x9A,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
            v19);
          __debugbreak();
        }
        if ( a1 != -240 )
          ReleaseSRWLockShared((PSRWLOCK)(a1 + 240));
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        (const char *)0x8007000DLL);
    }
    if ( a1 != -240 )
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 240));
    v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v14 && *v14 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DevicePropertyCacheMiss_(v15, 1, a1 + 80, (__int64)a2, v11);
    }
  }
  if ( !v11 )
  {
    PropertyOfKnown = -2147023728;
    v17 = 1138LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfKnown);
    return (unsigned int)PropertyOfKnown;
  }
  v20 = *a2;
  if ( *(_BYTE *)(a1 + 121) )
  {
    v21 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
    v41 = 0LL;
    InBuffer = v20;
    std::vector<unsigned char>::vector<unsigned char>(&Block, a4 + 12);
    v22 = Block;
    v34 = 0;
    v23 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            v21,
            0x5B8430u,
            &InBuffer,
            0x18u,
            Block,
            v36 - (int)Block,
            &v34);
    PropertyOfKnown = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)(unsigned int)v23);
      if ( v22 )
      {
        v25 = (unsigned __int64)v22;
        if ( (unsigned __int64)(v37 - (_QWORD)v22) >= 0x1000 )
        {
          if ( ((unsigned __int8)v22 & 0x1F) != 0
            || (v22 = (_DWORD *)*((_QWORD *)v22 - 1), (unsigned __int64)v22 >= v25)
            || (v25 = v25 - (_QWORD)v22 - 8, v25 > 0x1F) )
          {
            _o__invalid_parameter_noinfo_noreturn(v25, v24);
            __debugbreak();
          }
        }
        operator delete(v22);
      }
      goto LABEL_54;
    }
    if ( v34 == a4 + 12 )
    {
      if ( *v22 == a4 )
      {
        if ( memcpy_s(a3, a4, v22 + 3, a4) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x131,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
            v31);
          JUMPOUT(0x1800C5389LL);
        }
        v32 = (unsigned __int64)v22;
        if ( (unsigned __int64)(v37 - (_QWORD)v22) >= 0x1000 )
        {
          if ( ((unsigned __int8)v22 & 0x1F) != 0
            || (v22 = (_DWORD *)*((_QWORD *)v22 - 1), (unsigned __int64)v22 >= v32)
            || (v32 = v32 - (_QWORD)v22 - 8, v32 > 0x1F) )
          {
            _o__invalid_parameter_noinfo_noreturn(v32, v30);
            __debugbreak();
          }
        }
        operator delete(v22);
        PropertyOfKnown = 0;
LABEL_54:
        if ( PropertyOfKnown < 0 )
          goto LABEL_55;
        goto LABEL_58;
      }
      PropertyOfKnown = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12F,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL);
      v29 = (unsigned __int64)v22;
      if ( (unsigned __int64)(v37 - (_QWORD)v22) >= 0x1000 )
      {
        if ( ((unsigned __int8)v22 & 0x1F) != 0
          || (v22 = (_DWORD *)*((_QWORD *)v22 - 1), (unsigned __int64)v22 >= v29)
          || (v29 = v29 - (_QWORD)v22 - 8, v29 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v29, v28);
          __debugbreak();
        }
      }
    }
    else
    {
      PropertyOfKnown = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12C,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL);
      if ( !v22 )
      {
LABEL_55:
        v17 = 1152LL;
        goto LABEL_20;
      }
      v27 = (unsigned __int64)v22;
      if ( (unsigned __int64)(v37 - (_QWORD)v22) >= 0x1000 )
      {
        if ( ((unsigned __int8)v22 & 0x1F) != 0
          || (v22 = (_DWORD *)*((_QWORD *)v22 - 1), (unsigned __int64)v22 >= v27)
          || (v27 = v27 - (_QWORD)v22 - 8, v27 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v27, v26);
          __debugbreak();
        }
      }
    }
    operator delete(v22);
    goto LABEL_55;
  }
  v33 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
  v42 = *a2;
  PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                      v33,
                      0x5B8414u,
                      &v42,
                      0x10u,
                      a3,
                      a4);
  if ( PropertyOfKnown < 0 )
  {
    v17 = 1166LL;
    goto LABEL_20;
  }
LABEL_58:
  PropertyOfKnown = v39(a3, a4);
  if ( PropertyOfKnown < 0 )
  {
    v17 = 1169LL;
    goto LABEL_20;
  }
  Windows::Internal::Holographic::PropertyCache::SetValue(
    (Windows::Internal::Holographic::PropertyCache *)(a1 + 208),
    a2,
    a3,
    a4);
  return 0LL;
}
