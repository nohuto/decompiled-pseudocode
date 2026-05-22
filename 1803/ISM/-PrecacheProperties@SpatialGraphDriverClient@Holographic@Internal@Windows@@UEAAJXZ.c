/*
 * XREFs of ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x1800C6320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@_K@Z @ 0x1800BE350 (-PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x1800C0F0C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C538C (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::PrecacheProperties(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  char *v2; // rdi
  int DevicePropertyOfVariableSize; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  void *v9; // rdx
  char *v10; // rcx
  ULONGLONG v11; // rbx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v19; // [rsp+80h] [rbp+30h] BYREF
  char v20; // [rsp+88h] [rbp+38h] BYREF
  ULONGLONG TickCount64; // [rsp+90h] [rbp+40h]

  *((_BYTE *)this + 96) = 1;
  v15 = 0LL;
  v2 = (char *)this - 24;
  v17 = 0LL;
  TickCount64 = GetTickCount64();
  *(_OWORD *)Block = 0LL;
  DevicePropertyOfVariableSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
                                   (__int64)v2,
                                   &SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
                                   (struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v15,
                                   (__int64 (__fastcall *)(__int64, rsize_t))Windows::Internal::Holographic::ValidateProperty::Boolean,
                                   2);
  v4 = DevicePropertyOfVariableSize;
  if ( DevicePropertyOfVariableSize >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x649,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)DevicePropertyOfVariableSize);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64D,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
    v19 = 0;
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 184),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
      &v19,
      1uLL);
  }
  v5 = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
         (__int64)this - 24,
         &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
         (struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v15,
         (__int64 (__fastcall *)(__int64, rsize_t))Windows::Internal::Holographic::ValidateProperty::Boolean,
         2);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x649,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v5);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x653,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v6);
    v20 = 0;
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 184),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
      &v20,
      1uLL);
  }
  v7 = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
         (__int64)this - 24,
         &SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER,
         (struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v15,
         (__int64 (__fastcall *)(__int64, rsize_t))Windows::Internal::Holographic::ValidateProperty::Guid,
         2);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x649,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x659,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v8);
  v9 = Block[0];
  if ( Block[0] )
  {
    v10 = (char *)Block[0];
    if ( v17 - (unsigned __int64)Block[0] >= 0x1000 )
    {
      if ( ((__int64)Block[0] & 0x1F) != 0
        || (v9 = (void *)*((_QWORD *)Block[0] - 1), v9 >= Block[0])
        || (v10 = (char *)((char *)Block[0] - (char *)v9 - 8), (unsigned __int64)v10 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v10, v9);
        __debugbreak();
      }
    }
    operator delete(v9);
    v17 = 0LL;
    *(_OWORD *)Block = 0LL;
  }
  v11 = GetTickCount64() - TickCount64;
  v12 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v12 && *v12 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::PrecachePropertiesElapsedTime_(v13, 1, (__int64)(v2 + 80), v11);
  }
  return 0LL;
}
