/*
 * XREFs of ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@234@@Z @ 0x1800B63D0
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@234@@Z @ 0x1800BF4D0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU-$VariableS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x1800B1FA8 (-GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DE.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BB8C8 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BBB04 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetErrorStatuses(
        __int64 a1,
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *a2)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v2; // rax
  int v4; // ebx
  __int64 v5; // rdx
  int PropertyOfVariable; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  _DWORD *v9; // rbx
  void *v10; // rcx
  const wchar_t *StringRawBuffer; // rdi
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 80);
  if ( *((_DWORD *)v2 + 27) < 2u )
  {
    v4 = -2147024846;
    v5 = 826LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2>(
                           *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 80),
                           (__int64)a2);
    v4 = PropertyOfVariable;
    if ( PropertyOfVariable < 0 )
    {
      v7 = 729LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)PropertyOfVariable);
      goto LABEL_10;
    }
  }
  else
  {
    PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                           v2,
                           a2);
    v4 = PropertyOfVariable;
    if ( PropertyOfVariable < 0 )
    {
      v7 = 742LL;
      goto LABEL_6;
    }
  }
  v4 = 0;
LABEL_10:
  if ( v4 < 0 )
  {
    v5 = 830LL;
    goto LABEL_12;
  }
  v8 = (_DWORD *)*((_QWORD *)a2 + 2);
  v9 = v8;
  if ( v8 )
    v9 = (_DWORD *)((char *)v8 + *(_QWORD *)a2);
  if ( *v8 != 16 * *v9 + 4 )
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x343,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
LABEL_17:
    v10 = (void *)*((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = 0LL;
    if ( v10 )
      operator delete(v10);
    return (unsigned int)v4;
  }
  if ( *v9 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 80) + 32LL), 0LL);
    v12 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v12 )
    {
      if ( *v12 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::GetErrorStatuses_(v13, 1, StringRawBuffer, v9);
      }
    }
  }
  return 0;
}
