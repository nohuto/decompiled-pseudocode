/*
 * XREFs of ?GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAI@Z @ 0x1800C4740
 * Callers:
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAI@Z @ 0x1800D2BC0 (-GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic_ea_1800D2BC0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@H@Z @ 0x1800BD094 (-GetDynamicNodeHapticsOutputPeriodMicroseconds_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C56F4 (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeHapticsOutputPeriodMicroseconds(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int *a3)
{
  int NodePropertyOfKnownSize; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  HolographicDriverClientTrace *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  NodePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfKnownSize(
                              (char *)this - 8,
                              a2,
                              &SPATIAL_DYNAMIC_NODE_PROPERTY_HAPTICS_OUTPUT_PERIOD_MICROSECONDS,
                              a3,
                              4LL,
                              Windows::Internal::Holographic::ValidateProperty::DynamicNodeHapticsOutputPeriod,
                              0);
  v6 = NodePropertyOfKnownSize;
  if ( NodePropertyOfKnownSize >= 0 )
  {
    v7 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v7 && *v7 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::GetDynamicNodeHapticsOutputPeriodMicroseconds_(
        v8,
        (char *)this - 8,
        (const struct _GUID *)((char *)this + 72),
        a2,
        *a3);
    }
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x388,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)NodePropertyOfKnownSize);
    *a3 = 0;
  }
  return v6;
}
