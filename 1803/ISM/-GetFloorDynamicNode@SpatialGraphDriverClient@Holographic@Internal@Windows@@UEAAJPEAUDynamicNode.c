/*
 * XREFs of ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800C5880
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800D2D00 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUDynamicN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800BCDD0 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C4F78 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetFloorDynamicNode(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  int DevicePropertyOfKnownSize; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  HolographicDriverClientTrace *v7; // rcx
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  DevicePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
                                (__int64)this - 8,
                                &SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER,
                                &v10,
                                0x10uLL,
                                (__int64 (__fastcall *)(void *, rsize_t))Windows::Internal::Holographic::ValidateProperty::NodeId,
                                3);
  v4 = DevicePropertyOfKnownSize;
  if ( DevicePropertyOfKnownSize < 0 )
  {
    v5 = 1358LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)DevicePropertyOfKnownSize);
    *(_OWORD *)a2 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
    *((_DWORD *)a2 + 4) = 0;
    return v4;
  }
  *(_OWORD *)a2 = v10;
  DevicePropertyOfKnownSize = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 128LL))(
                                this,
                                a2,
                                (char *)a2 + 16);
  v4 = DevicePropertyOfKnownSize;
  if ( DevicePropertyOfKnownSize < 0 )
  {
    v5 = 1361LL;
    goto LABEL_5;
  }
  v6 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v6 && *v6 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::GetDynamicNodeForDevice_(
      v7,
      (char *)this - 8,
      (const struct _GUID *)((char *)this + 72),
      L"FloorFinderQuery",
      a2);
  }
  return 0;
}
