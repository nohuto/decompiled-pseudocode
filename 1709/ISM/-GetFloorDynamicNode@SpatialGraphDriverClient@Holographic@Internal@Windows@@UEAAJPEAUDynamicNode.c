/*
 * XREFs of ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800B6120
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800BF530 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUDynamicN.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800B1898 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ??$GetDevicePropertyOfKnownSize@USPATIAL_NODE_ID@@@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAUSPATIAL_NODE_ID@@@Z @ 0x1800BBD10 (--$GetDevicePropertyOfKnownSize@USPATIAL_NODE_ID@@@SpatialGraphDriverClient@Holographic@Internal.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetFloorDynamicNode(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  int DevicePropertyOfKnown; // edi
  __int64 v5; // rdx
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  HolographicDriverClientTrace *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)a2 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
  *((_DWORD *)a2 + 4) = 0;
  DevicePropertyOfKnown = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<SPATIAL_NODE_ID>(
                            (char *)this - 8,
                            a2,
                            &v10);
  if ( DevicePropertyOfKnown < 0 )
  {
    v5 = 753LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)DevicePropertyOfKnown);
    return (unsigned int)DevicePropertyOfKnown;
  }
  *(_OWORD *)a2 = v10;
  DevicePropertyOfKnown = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 120LL))(
                            this,
                            a2,
                            (char *)a2 + 16);
  if ( DevicePropertyOfKnown < 0 )
  {
    v5 = 756LL;
    goto LABEL_3;
  }
  v7 = *((_QWORD *)this + 10);
  v8 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        v9,
        (char *)this - 8,
        (const struct _GUID *)(v7 + 12),
        L"FloorFinderQuery",
        a2);
    }
  }
  return 0LL;
}
