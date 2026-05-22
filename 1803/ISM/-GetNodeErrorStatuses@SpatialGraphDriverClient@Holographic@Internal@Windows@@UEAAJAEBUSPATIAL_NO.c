/*
 * XREFs of ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x1800C5C80
 * Callers:
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x1800D2D30 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL.c)
 * Callees:
 *     memcpy_s @ 0x180001740 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ @ 0x18009CA90 (--1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800BAB98 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x1800BE644 (-NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x1800C1284 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800C8EE8 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800CCD1C (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodeErrorStatuses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        struct HOLOGRAPHIC_DEVICE_ERROR_STATUS **a3,
        unsigned __int64 *a4)
{
  char v5; // al
  char v7; // r13
  bool v8; // r12
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  const char *v12; // r9
  int v13; // esi
  const char *v14; // r9
  _DWORD *v15; // rcx
  HolographicDriverClientTrace *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v19; // rcx
  __int128 v20; // xmm1
  int PropertyOfVariable; // eax
  const char *v22; // r9
  _DWORD *v23; // r9
  size_t v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int *v27; // rbx
  SIZE_T v28; // rsi
  char *v29; // rax
  char *v30; // rdi
  char *v31; // rax
  char *i; // rcx
  unsigned __int64 v33; // rcx
  int v37[2]; // [rsp+48h] [rbp-41h] BYREF
  __int128 v38; // [rsp+50h] [rbp-39h]
  __int64 v39; // [rsp+60h] [rbp-29h]
  __int64 v40; // [rsp+68h] [rbp-21h] BYREF
  __int64 v41; // [rsp+70h] [rbp-19h] BYREF
  _OWORD InBuffer[2]; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *(_QWORD *)v37 = 0LL;
  v39 = 0LL;
  v5 = *((_BYTE *)this + 112);
  v38 = 0LL;
  v7 = 1;
  v8 = *((_BYTE *)this + 112) == 0;
  if ( v5 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 34);
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
      (char *)this + 280,
      &v40,
      a2);
    if ( v40 == *((_QWORD *)this + 35) )
      v9 = 0LL;
    else
      v9 = (_QWORD *)(v40 + 48);
    if ( !v9
      || (std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
            v9,
            &v41,
            &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES),
          v10 = v41,
          v41 == *v9) )
    {
      if ( this != (Windows::Internal::Holographic::SpatialGraphDriverClient *)-272LL )
        ReleaseSRWLockShared((PSRWLOCK)this + 34);
      *((_QWORD *)&v38 + 1) = v38;
    }
    else
    {
      v11 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)v37);
      v13 = v11;
      if ( v11 >= 0 )
      {
        if ( *((_QWORD *)&v38 + 1) - (_QWORD)v38 < *(_QWORD *)v37 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x34,
            (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
            v12);
          __debugbreak();
        }
        if ( memcpy_s(
               (void *const)(v38 + *(_QWORD *)v37),
               *((_QWORD *)&v38 + 1) - v38 - *(_QWORD *)v37,
               *(const void *const *)(v10 + 48),
               *(_QWORD *)(v10 + 56) - *(_QWORD *)(v10 + 48)) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1DD,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
            v14);
          __debugbreak();
        }
        if ( this != (Windows::Internal::Holographic::SpatialGraphDriverClient *)-272LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 34);
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D8,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          (const char *)(unsigned int)v11);
        if ( this != (Windows::Internal::Holographic::SpatialGraphDriverClient *)-272LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 34);
        *((_QWORD *)&v38 + 1) = v38;
      }
      if ( v13 >= 0 )
        goto LABEL_37;
    }
    v15 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v15 && *v15 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::NodePropertyCacheMiss_(
        v16,
        (const struct _GUID *)((char *)this + 72),
        a2,
        &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES,
        v8);
    }
  }
  if ( !v8 )
  {
    v17 = -2147023728;
    v18 = 1319LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v17);
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v17);
    goto LABEL_47;
  }
  memset_0(InBuffer, 0, sizeof(InBuffer));
  v19 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 12);
  v20 = *(_OWORD *)a2;
  InBuffer[0] = SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES;
  InBuffer[1] = v20;
  PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                         v19,
                         0x5B8418u,
                         InBuffer,
                         0x20u,
                         (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)v37);
  v17 = PropertyOfVariable;
  if ( PropertyOfVariable < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x535,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfVariable);
    goto LABEL_35;
  }
  if ( *((_QWORD *)&v38 + 1) - (_QWORD)v38 < *(_QWORD *)v37 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
      v22);
    JUMPOUT(0x1800C607BLL);
  }
  v23 = (_DWORD *)(v38 + *(_QWORD *)v37);
  v24 = *((_QWORD *)&v38 + 1) - v38 - *(_QWORD *)v37;
  if ( v24 < 4 )
  {
    v25 = 100LL;
LABEL_33:
    v17 = -2147024883;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\validateproperty.h",
      (const char *)0x8007000DLL);
    v18 = 1338LL;
    goto LABEL_25;
  }
  if ( v24 != 16 * *v23 + 4 )
  {
    v25 = 103LL;
    goto LABEL_33;
  }
  Windows::Internal::Holographic::NodePropertyCache::SetValue(
    (struct _GUID *)this + 16,
    a2,
    &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES,
    v23,
    v24);
  v17 = 0;
LABEL_35:
  if ( (v17 & 0x80000000) != 0 )
    goto LABEL_36;
LABEL_37:
  v27 = (unsigned int *)v38;
  if ( (_QWORD)v38 )
    v27 = (unsigned int *)(*(_QWORD *)v37 + v38);
  v28 = 16LL * *v27;
  v29 = (char *)CoTaskMemAlloc(v28);
  v30 = v29;
  if ( v29 )
  {
    v31 = &v29[v28];
    for ( i = v30; i != v31; i += 16 )
    {
      *(_QWORD *)i = 0LL;
      *((_QWORD *)i + 1) = 0LL;
    }
    if ( *v27 )
      memmove(v30, v27 + 1, 16LL * *v27);
    v7 = 0;
    *a3 = (struct HOLOGRAPHIC_DEVICE_ERROR_STATUS *)v30;
    v33 = *v27;
    v17 = 0;
    *a4 = v33;
  }
  else
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8007000ELL);
  }
  CoTaskMemFree(0LL);
LABEL_47:
  Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase(
    (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)v37,
    v26);
  if ( v7 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return v17;
}
