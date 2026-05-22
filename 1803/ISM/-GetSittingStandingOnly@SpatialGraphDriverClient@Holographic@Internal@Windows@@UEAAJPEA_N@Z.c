/*
 * XREFs of ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800C5AA0
 * Callers:
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEA_N@Z @ 0x1800D2D20 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x1800BD4BC (-GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C4F78 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___ @ 0x1800CCF78 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1800CCF78.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSittingStandingOnly(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        bool *a2)
{
  int DevicePropertyOfKnownSize; // eax
  unsigned int v4; // ebx
  char *v5; // rsi
  _DWORD *v6; // rcx
  char *v7; // rbx
  HolographicDriverClientTrace *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v11; // [rsp+50h] [rbp+8h] BYREF
  bool *v12; // [rsp+58h] [rbp+10h]
  char *v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = a2;
  DevicePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
                                (__int64)this - 8,
                                &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
                                &v11,
                                1uLL,
                                (__int64 (__fastcall *)(void *, rsize_t))Windows::Internal::Holographic::ValidateProperty::Boolean,
                                0);
  v4 = DevicePropertyOfKnownSize;
  if ( DevicePropertyOfKnownSize == -2147024846 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x592,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070032LL);
    *v12 = 0;
  }
  else
  {
    if ( DevicePropertyOfKnownSize < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x597,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)DevicePropertyOfKnownSize);
      *v12 = 0;
      return v4;
    }
    *v12 = v11 != 0;
  }
  v5 = (char *)v12;
  v6 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v6 && *v6 )
  {
    HolographicDriverClientTrace::Instance();
    v7 = (char *)this + 72;
    HolographicDriverClientTrace::GetSittingStandingOnly_(
      v8,
      (char *)this - 8,
      (const struct _GUID *)((char *)this + 72),
      *v5);
  }
  else
  {
    v7 = (char *)this + 72;
  }
  v13 = &v11;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___(
    v7,
    &v13);
  return 0;
}
