/*
 * XREFs of ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800B62F0
 * Callers:
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEA_N@Z @ 0x1800BF540 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x1800B1D1C (-GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z.c)
 *     ??$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAE@Z @ 0x1800BBEE4 (--$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAE.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___ @ 0x1800BC148 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800BC148.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSittingStandingOnly(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        bool *a2)
{
  int DevicePropertyOfKnown; // eax
  unsigned int v5; // ebx
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  HolographicDriverClientTrace *v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF
  char *v13; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  DevicePropertyOfKnown = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize<unsigned char>(
                            (char *)this - 8,
                            &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
                            &v12);
  v5 = DevicePropertyOfKnown;
  if ( DevicePropertyOfKnown == -2147024846 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x323,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070032LL);
  }
  else
  {
    if ( DevicePropertyOfKnown < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x327,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)DevicePropertyOfKnown);
      return v5;
    }
    *a2 = v12 != 0;
  }
  v7 = *((_QWORD *)this + 10);
  v8 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::GetSittingStandingOnly_(v9, (char *)this - 8, (const struct _GUID *)(v7 + 12), *a2);
    }
  }
  v10 = *((_QWORD *)this + 10) + 12LL;
  v13 = &v12;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___(
    v10,
    &v13);
  return 0LL;
}
