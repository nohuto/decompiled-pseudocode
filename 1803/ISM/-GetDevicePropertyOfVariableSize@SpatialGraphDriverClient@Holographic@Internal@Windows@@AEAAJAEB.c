/*
 * XREFs of ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C538C
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x1800C5BA0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x1800C6320 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B9954 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800BAB98 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x1800BE52C (-DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x1800C0F0C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x1800C1018 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrap.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800CCD1C (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
        __int64 a1,
        const struct _GUID *a2,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a3,
        __int64 (__fastcall *a4)(__int64, rsize_t),
        char a5)
{
  __int64 (__fastcall *v5)(__int64, rsize_t); // r15
  bool v9; // al
  unsigned __int8 v10; // bl
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  int PropertyOfVariable; // ebx
  __int64 v14; // rdx
  struct _GUID v16; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v17; // r13
  DWORD v18; // r14d
  int v19; // r15d
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r9
  const char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  const void *v29; // r14
  rsize_t v30; // rbx
  int v31; // eax
  unsigned int v32; // edi
  const char *v33; // [rsp+28h] [rbp-79h]
  unsigned int *v34; // [rsp+30h] [rbp-71h]
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v35; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v36; // [rsp+58h] [rbp-49h] BYREF
  __int64 (__fastcall *v37)(__int64, rsize_t); // [rsp+60h] [rbp-41h]
  __int64 v38; // [rsp+68h] [rbp-39h]
  Windows::Internal::Holographic::VariableSizeStructWrapperBase **v39; // [rsp+70h] [rbp-31h]
  char v40; // [rsp+78h] [rbp-29h]
  struct _GUID InBuffer; // [rsp+80h] [rbp-21h] BYREF
  __int64 v42; // [rsp+90h] [rbp-11h]
  struct _GUID v43; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v38 = -2LL;
  v5 = a4;
  v37 = a4;
  v9 = (a5 & 1) != 0 || *(_BYTE *)(a1 + 120) && (a5 & 2) == 0;
  v10 = (a5 & 2) != 0 || *(_BYTE *)(a1 + 120) == 0;
  if ( v9 )
  {
    if ( (int)Windows::Internal::Holographic::PropertyCache::GetValue((RTL_SRWLOCK *)(a1 + 208), a2, a3) >= 0 )
      return 0LL;
    v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v11 && *v11 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DevicePropertyCacheMiss_(v12, 1, a1 + 80, (__int64)a2, v10);
    }
  }
  if ( !v10 )
  {
    PropertyOfVariable = -2147023728;
    v14 = 1201LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfVariable);
    return (unsigned int)PropertyOfVariable;
  }
  v16 = *a2;
  if ( *(_BYTE *)(a1 + 121) )
  {
    v42 = 0LL;
    InBuffer = v16;
    v17 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
    v35 = a3;
    v39 = &v35;
    v40 = 1;
    *((_QWORD *)a3 + 2) = *((_QWORD *)a3 + 1);
    *(_QWORD *)a3 = 12LL;
    v36 = 0;
    v18 = 12;
    v19 = 0;
    v20 = v35;
    while ( 1 )
    {
      v21 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v20);
      PropertyOfVariable = v21;
      if ( v21 < 0 )
        break;
      v22 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
              v17,
              0x5B8430u,
              &InBuffer,
              0x18u,
              *((LPVOID *)v35 + 1),
              v18,
              &v36);
      PropertyOfVariable = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x154,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)(unsigned int)v22);
        goto LABEL_35;
      }
      v20 = v35;
      if ( v36 < 0xC )
      {
        v25 = 347LL;
LABEL_33:
        PropertyOfVariable = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL);
        *((_QWORD *)v35 + 2) = *((_QWORD *)v35 + 1);
        goto LABEL_38;
      }
      v23 = **((unsigned int **)v35 + 1);
      v18 = v23 + 12;
      if ( v36 == v23 + 12 )
        goto LABEL_28;
      if ( v36 != 12 )
      {
        v25 = 354LL;
        goto LABEL_33;
      }
      if ( !**((_DWORD **)v35 + 1) )
      {
LABEL_28:
        Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v35);
LABEL_29:
        v5 = v37;
        goto LABEL_30;
      }
      if ( (unsigned int)++v19 >= 0xA )
      {
        LODWORD(v34) = 12;
        LODWORD(v33) = 10;
        PropertyOfVariable = -2147418113;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x171,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL,
          (unsigned __int16 *)"failed to read variable-size property after %u tries: bytesReturned = %u, propertySize = %"
                              "u, requiredSize = %zu, ioctlCode = 0x%x",
          v33,
          v34,
          v23,
          v23 + 12,
          5997616);
LABEL_35:
        *((_QWORD *)v35 + 2) = *((_QWORD *)v35 + 1);
        goto LABEL_37;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v21);
    *((_QWORD *)v35 + 2) = *((_QWORD *)v35 + 1);
LABEL_37:
    if ( PropertyOfVariable >= 0 )
      goto LABEL_29;
LABEL_38:
    v14 = 1214LL;
    goto LABEL_16;
  }
  v43 = *a2;
  PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                         *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104),
                         0x5B8414u,
                         &v43,
                         0x10u,
                         a3);
  if ( PropertyOfVariable < 0 )
  {
    v14 = 1227LL;
    goto LABEL_16;
  }
LABEL_30:
  v26 = *((_QWORD *)a3 + 1);
  v27 = *((_QWORD *)a3 + 2) - v26;
  v28 = *(_QWORD *)a3;
  if ( v27 < *(_QWORD *)a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
      v24);
    __debugbreak();
  }
  v29 = (const void *)(v28 + v26);
  v30 = v27 - v28;
  v31 = v5(v28 + v26, v30);
  v32 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D1,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v31);
    return v32;
  }
  Windows::Internal::Holographic::PropertyCache::SetValue(
    (Windows::Internal::Holographic::PropertyCache *)(a1 + 208),
    a2,
    v29,
    v30);
  return 0LL;
}
