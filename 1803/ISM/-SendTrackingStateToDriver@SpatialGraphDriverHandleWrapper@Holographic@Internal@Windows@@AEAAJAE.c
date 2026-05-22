/*
 * XREFs of ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C76FC
 * Callers:
 *     ?OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x1800C6FC0 (-OnDriverHandleOpened@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1800C7798 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SendTrackingStateToDriver(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        __int128 *a2,
        int a3)
{
  __int128 v3; // xmm0
  int v4; // ebx
  __int64 v5; // rdx
  DWORD v7; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v7 = 0;
  v8 = v3;
  v9 = a3;
  v4 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         a1,
         0x5B4404u,
         &v8,
         0x14u,
         0LL,
         0,
         &v7);
  if ( v4 < 0 )
  {
    v5 = 1838LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v7 )
  {
    v4 = -2147418113;
    v5 = 1840LL;
    goto LABEL_3;
  }
  return 0LL;
}
