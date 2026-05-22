/*
 * XREFs of ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x1800B5850
 * Callers:
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x1800BF3F0 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@E.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x1800B19B8 (-GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATI.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeTrackingCapabilities(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        enum SPATIAL_TRACKING_CAPABILITY_FLAGS *a3)
{
  __int128 v6; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v7; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  char *v12; // rbx
  __int64 v13; // rdi
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp-58h] BYREF
  _OWORD InBuffer[2]; // [rsp+48h] [rbp-50h] BYREF
  BOOL bAlertable; // [rsp+68h] [rbp-30h] BYREF
  _BYTE Source[4]; // [rsp+6Ch] [rbp-2Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  memset(InBuffer, 0, sizeof(InBuffer));
  v6 = *(_OWORD *)a2;
  v7 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 10);
  v16 = 0;
  InBuffer[1] = v6;
  InBuffer[0] = SPATIAL_DYNAMIC_NODE_PROPERTY_TRACKING_CAPABILITIES;
  v8 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v7,
         0x5B8418u,
         InBuffer,
         0x20u,
         &bAlertable,
         8u,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14A,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  if ( v16 != 8 )
  {
    v10 = 332LL;
LABEL_5:
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C3,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  if ( bAlertable != 4 )
  {
    v10 = 335LL;
    goto LABEL_5;
  }
  memcpy_s_0(a3, 4uLL, Source, 4uLL);
  v9 = 0;
LABEL_9:
  if ( v9 < 0 )
    goto LABEL_10;
  v9 = 0;
LABEL_12:
  if ( v9 >= 0 )
  {
    v12 = (char *)this - 8;
    v13 = *((_QWORD *)this + 10);
    v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v14 )
    {
      if ( *v14 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities_(
          v15,
          (__int64)v12,
          v13 + 12,
          (__int64)a2,
          *(_DWORD *)a3);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
}
