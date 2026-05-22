/*
 * XREFs of ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800B66D8
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x1800B4A94 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ??$GetDevicePropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800BC1EC (--$GetDevicePropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@SpatialGraphDriverCli.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevelsInternal(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper **this,
        struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int DevicePropertyOfKnown; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v9; // [rsp+50h] [rbp+8h] BYREF
  struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *v10; // [rsp+58h] [rbp+10h]

  v10 = a2;
  v9 = 0;
  v3 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         this[11],
         0x5B8450u,
         0LL,
         0,
         a2,
         8u,
         &v9);
  if ( v3 >= 0 )
  {
    if ( v9 != 8 )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x387,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_6;
    }
    return 0;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x381,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v3);
  DevicePropertyOfKnown = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS>(
                            this,
                            v4,
                            v10);
  v6 = DevicePropertyOfKnown;
  if ( DevicePropertyOfKnown >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x383,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)DevicePropertyOfKnown);
LABEL_6:
  *(_QWORD *)v10 = 0x100000001LL;
  return v6;
}
