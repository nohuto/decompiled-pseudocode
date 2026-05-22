/*
 * XREFs of ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800C4EB0
 * Callers:
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800D2CF0 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800BD324 (-TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::SetStaticNodeDurability(
        __int64 a1,
        __int128 *a2,
        int a3)
{
  __int128 v3; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v14 = a3;
  v7 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v13 = v3;
  v8 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v7,
         0x5B8428u,
         &v13,
         0x14u,
         0LL,
         0,
         0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v11 )
    {
      if ( *v11 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::TelemetrySetStaticNodeDurability_(v12, a1 - 8, a1 + 72, (__int64)a2, a3);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
