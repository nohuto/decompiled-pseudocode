/*
 * XREFs of ??$GetDevicePropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800BC1EC
 * Callers:
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800B66D8 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS>(
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
  unsigned int v13; // [rsp+40h] [rbp-40h] BYREF
  int InBuffer[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int128 Source; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = *(_BYTE *)(a1 + 104) == 0;
  v5 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 88);
  if ( v3 )
  {
    v13 = 0;
    Source = SPATIAL_GRAPH_DEVICE_PROPERTY_SUPPORTED_DDI_LEVELS;
    v11 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            v5,
            0x5B8414u,
            &Source,
            0x10u,
            InBuffer,
            0xCu,
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
    if ( v13 == 12 )
    {
      if ( InBuffer[0] == 8 )
      {
        memcpy_s_0(a3, 8uLL, &InBuffer[1], 8uLL);
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
  *(_OWORD *)InBuffer = SPATIAL_GRAPH_DEVICE_PROPERTY_SUPPORTED_DDI_LEVELS;
  v6 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v5,
         0x5B8430u,
         InBuffer,
         0x18u,
         &Source,
         0x14u,
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
  if ( v13 != 20 )
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
  if ( (_DWORD)Source != 8 )
  {
    v8 = 335LL;
    goto LABEL_6;
  }
  memcpy_s_0(a3, 8uLL, (char *)&Source + 12, 8uLL);
  v7 = 0;
LABEL_10:
  if ( v7 < 0 )
    goto LABEL_11;
  return 0LL;
}
