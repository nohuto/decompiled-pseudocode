/*
 * XREFs of ??$GetDevicePropertyOfKnownSize@USPATIAL_NODE_ID@@@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAUSPATIAL_NODE_ID@@@Z @ 0x1800BBD10
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x1800B6120 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<SPATIAL_NODE_ID>(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  bool v3; // zf
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v5; // rcx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // [rsp+40h] [rbp-9h] BYREF
  int InBuffer[4]; // [rsp+48h] [rbp-1h] BYREF
  __int64 v15; // [rsp+58h] [rbp+Fh]
  _OWORD Source[2]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v3 = *(_BYTE *)(a1 + 104) == 0;
  v5 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 88);
  if ( v3 )
  {
    v13 = 0;
    Source[0] = SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER;
    v11 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            v5,
            0x5B8414u,
            Source,
            0x10u,
            InBuffer,
            0x14u,
            &v13);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x14A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)(unsigned int)v11);
      goto LABEL_21;
    }
    if ( v13 == 20 )
    {
      if ( InBuffer[0] == 16 )
      {
        memcpy_s_0(a3, 0x10uLL, &InBuffer[1], 0x10uLL);
        v7 = 0;
LABEL_21:
        if ( v7 >= 0 )
          return 0LL;
LABEL_22:
        v9 = 683LL;
        goto LABEL_12;
      }
      v12 = 335LL;
    }
    else
    {
      v12 = 332LL;
    }
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
    goto LABEL_22;
  }
  v13 = 0;
  v15 = 0LL;
  *(_OWORD *)InBuffer = SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER;
  v6 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v5,
         0x5B8430u,
         InBuffer,
         0x18u,
         Source,
         0x1Cu,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14A,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v6);
    goto LABEL_10;
  }
  if ( v13 != 28 )
  {
    v8 = 332LL;
LABEL_6:
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
LABEL_11:
    v9 = 670LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( LODWORD(Source[0]) != 16 )
  {
    v8 = 335LL;
    goto LABEL_6;
  }
  memcpy_s_0(a3, 0x10uLL, (char *)Source + 12, 0x10uLL);
  v7 = 0;
LABEL_10:
  if ( v7 < 0 )
    goto LABEL_11;
  return 0LL;
}
