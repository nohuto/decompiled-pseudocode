/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1800C25C8
 * Callers:
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800C88D0 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x1800BD624 (-DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPH.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800C620C (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800C6AB4 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(
        Windows::Internal::Holographic::SpatialGraphDriverClient *a1,
        __int64 a2,
        char a3,
        int *a4)
{
  int *v4; // rbx
  _BYTE *v6; // r14
  int v7; // eax
  unsigned int v8; // esi
  const char *v9; // r9
  __int64 result; // rax
  int SupportedDDILevelsInternal; // eax
  int v12; // eax
  __int64 v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  try
  {
    *((_BYTE *)a1 + 96) = a3;
    if ( a4 )
      *a4 = 3;
    v6 = (char *)a1 + 104;
    LOBYTE(a4) = 1;
    v7 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(
           (char *)a1 + 80,
           a2,
           0LL,
           a4,
           0LL,
           (char *)a1 + 104,
           -2LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    SupportedDDILevelsInternal = Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal(
                                   a1,
                                   (struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *)&v21);
    if ( SupportedDDILevelsInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)SupportedDDILevelsInternal);
    if ( !HIDWORD(v21) )
    {
      v12 = 1;
LABEL_12:
      if ( v4 )
        *v4 = v12;
      v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( v14 && *v14 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::DriverCompatibilityDetermined_(v15, 1, 0x700000001LL, v21, 0);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF6,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x80070032LL);
      return 2147942450LL;
    }
    v13 = v21;
    if ( (unsigned int)v21 > 7 )
    {
      v12 = 2;
      goto LABEL_12;
    }
    if ( v4 )
      *v4 = 4;
    v16 = *(_QWORD *)v6;
    *(_QWORD *)(v16 + 152) = v13;
    *(_BYTE *)(v16 + 160) = 1;
    v17 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v17 && *v17 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DriverCompatibilityDetermined_(v18, 1, 0x700000001LL, v21, 1);
    }
    v19 = *(_QWORD *)v6;
    *((_BYTE *)a1 + 121) = *(_DWORD *)(*(_QWORD *)v6 + 156LL) >= 4u;
    *((_BYTE *)a1 + 122) = *(_DWORD *)(v19 + 156) >= 2u;
    *((_BYTE *)a1 + 123) = *(_DWORD *)(v19 + 156) >= 3u;
    *((_BYTE *)a1 + 124) = *(_DWORD *)(v19 + 156) >= 8u;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFF,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v9);
  }
  return result;
}
