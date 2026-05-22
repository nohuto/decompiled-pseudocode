/*
 * XREFs of ?GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAE@Z @ 0x1800C4800
 * Callers:
 *     ?GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAE@Z @ 0x1800D2BF0 (-GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetDynamicNodeHapticsIntensityLevels_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@H@Z @ 0x1800BD160 (-GetDynamicNodeHapticsIntensityLevels_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPA.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C56F4 (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeHapticsIntensityLevels(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        char *a3)
{
  int NodePropertyOfKnownSize; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  HolographicDriverClientTrace *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  NodePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfKnownSize(
                              (char *)this - 8,
                              a2,
                              &SPATIAL_DYNAMIC_NODE_PROPERTY_HAPTICS_INTENSITY_LEVELS,
                              a3,
                              1LL,
                              Windows::Internal::Holographic::ValidateProperty::DynamicNodeHapticsIntensityLevels,
                              0);
  v6 = NodePropertyOfKnownSize;
  if ( NodePropertyOfKnownSize >= 0 )
  {
    v7 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v7 && *v7 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::GetDynamicNodeHapticsIntensityLevels_(
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
      (void *)0x3A1,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)NodePropertyOfKnownSize);
    *a3 = 0;
  }
  return v6;
}
