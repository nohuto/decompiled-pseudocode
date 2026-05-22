/*
 * XREFs of ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x1800C5BA0
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x1800D2CC0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU-$VariableS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x1800BD74C (-GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DE.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C538C (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetErrorStatuses(
        __int64 a1,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  int DevicePropertyOfVariableSize; // eax
  _DWORD *v7; // rbx
  const WCHAR *StringRawBuffer; // rdi
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 156LL) < 2u )
  {
    v3 = -2147024846;
    v4 = 1453LL;
    v5 = 2147942450LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v5);
    *((_QWORD *)a2 + 2) = *((_QWORD *)a2 + 1);
    return v3;
  }
  DevicePropertyOfVariableSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
                                   a1 - 8,
                                   (const struct _GUID *)&SPATIAL_GRAPH_DEVICE_PROPERTY_ERROR_STATUSES,
                                   a2,
                                   (__int64 (__fastcall *)(__int64, rsize_t))Windows::Internal::Holographic::ValidateProperty::ErrorStatuses,
                                   0);
  v3 = DevicePropertyOfVariableSize;
  if ( DevicePropertyOfVariableSize < 0 )
  {
    v5 = (unsigned int)DevicePropertyOfVariableSize;
    v4 = 1460LL;
    goto LABEL_5;
  }
  v7 = (_DWORD *)*((_QWORD *)a2 + 1);
  if ( v7 )
    v7 = (_DWORD *)((char *)v7 + *(_QWORD *)a2);
  if ( *v7 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 32LL), 0LL);
    v9 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v9 )
    {
      if ( *v9 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::GetErrorStatuses_(v10, 1, StringRawBuffer, v7);
      }
    }
  }
  return 0;
}
