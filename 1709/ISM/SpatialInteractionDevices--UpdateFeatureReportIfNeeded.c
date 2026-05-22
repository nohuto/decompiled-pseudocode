/*
 * XREFs of SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18007819C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x180078C0C (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x180078E8C (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x18007A7A0 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x18007A93C (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall SpatialInteractionDevices::UpdateFeatureReportIfNeeded(__int64 a1, char a2)
{
  void *v4; // rcx
  size_t v5; // r8
  void *v6; // rcx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 328) )
  {
    v4 = *(void **)(a1 + 248);
    *(_QWORD *)(a1 + 328) = v4;
    v5 = *(unsigned __int16 *)(a1 + 112);
    *(_DWORD *)(a1 + 320) = *(unsigned __int16 *)(a1 + 112);
    memset(v4, 0, v5);
    *(_BYTE *)(a1 + 336) = 0;
  }
  if ( !*(_BYTE *)(a1 + 336) || **(_BYTE **)(a1 + 328) != a2 )
  {
    **(_BYTE **)(a1 + 328) = a2;
    v6 = *(void **)(a1 + 8);
    *(_BYTE *)(a1 + 336) = 0;
    if ( !HidD_GetFeature(v6, *(PVOID *)(a1 + 328), *(_DWORD *)(a1 + 320)) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x153,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
               v7);
    *(_BYTE *)(a1 + 336) = 1;
  }
  return 0LL;
}
