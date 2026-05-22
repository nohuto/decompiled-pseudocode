/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1800B4A94
 * Callers:
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B8F50 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x1800B1E80 (-DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPH.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800B66D8 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800B6D94 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4Handle.c)
 */

__int64 Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(
        Windows::Internal::Holographic::SpatialGraphDriverClient *a1,
        int a2,
        int a3,
        ...)
{
  _BYTE *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  int SupportedDDILevelsInternal; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  try
  {
    *((_BYTE *)a1 + 152) = a3;
    v4 = (char *)a1 + 88;
    LOBYTE(a3) = 1;
    v5 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(a2, 0, a3, 0, (__int64)a1 + 88);
    v6 = v5;
    if ( v5 >= 0 )
    {
      SupportedDDILevelsInternal = Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal(
                                     a1,
                                     (struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *)va);
      if ( SupportedDDILevelsInternal < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA6,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)SupportedDDILevelsInternal);
      if ( HIDWORD(v17) && (unsigned int)v17 <= 7 )
      {
        v10 = *(_QWORD *)v4;
        *(_QWORD *)(v10 + 104) = v17;
        *(_BYTE *)(v10 + 112) = 1;
        v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v11 && *v11 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::DriverCompatibilityDetermined_(v12, 1, 0x700000001LL, v17, 1);
        }
        v13 = *(_QWORD *)v4;
        *((_BYTE *)a1 + 104) = *(_DWORD *)(*(_QWORD *)v4 + 108LL) >= 4u;
        *((_BYTE *)a1 + 105) = *(_DWORD *)(v13 + 108) >= 2u;
        *((_BYTE *)a1 + 106) = *(_DWORD *)(v13 + 108) >= 3u;
        result = 0LL;
      }
      else
      {
        v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v14 && *v14 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::DriverCompatibilityDetermined_(v15, 1, 0x700000001LL, v17, 0);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBB,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)0x80070032LL);
        result = 2147942450LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA2,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v5);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC3,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v7);
  }
  return result;
}
