/*
 * XREFs of ??$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAE@Z @ 0x1800BBEE4
 * Callers:
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800B6210 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800B62F0 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<unsigned char>(
        __int64 a1,
        __int128 *a2,
        void *a3)
{
  bool v3; // zf
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v5; // rcx
  __int128 v6; // xmm0
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  __int128 Source; // [rsp+48h] [rbp-38h] BYREF
  __int128 InBuffer; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h]
  BOOL bAlertable; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v19[4]; // [rsp+74h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = *(_BYTE *)(a1 + 104) == 0;
  v5 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 88);
  v6 = *a2;
  if ( v3 )
  {
    v14 = 0;
    Source = v6;
    v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            v5,
            0x5B8414u,
            &Source,
            0x10u,
            &bAlertable,
            5u,
            &v14);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x14A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)(unsigned int)v12);
      goto LABEL_21;
    }
    if ( v14 == 5 )
    {
      if ( bAlertable )
      {
        memcpy_s_0(a3, 1uLL, v19, 1uLL);
        v8 = 0;
LABEL_21:
        if ( v8 >= 0 )
          return 0LL;
LABEL_22:
        v10 = 683LL;
        goto LABEL_12;
      }
      v13 = 335LL;
    }
    else
    {
      v13 = 332LL;
    }
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
    goto LABEL_22;
  }
  v14 = 0;
  v17 = 0LL;
  InBuffer = v6;
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v5,
         0x5B8430u,
         &InBuffer,
         0x18u,
         &Source,
         0xDu,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14A,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  if ( v14 != 13 )
  {
    v9 = 332LL;
LABEL_6:
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
LABEL_11:
    v10 = 670LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( (_DWORD)Source != 1 )
  {
    v9 = 335LL;
    goto LABEL_6;
  }
  memcpy_s_0(a3, 1uLL, (char *)&Source + 12, 1uLL);
  v8 = 0;
LABEL_10:
  if ( v8 < 0 )
    goto LABEL_11;
  return 0LL;
}
