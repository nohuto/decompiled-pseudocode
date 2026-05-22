/*
 * XREFs of SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18009D928
 * Callers:
 *     ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x18009DFE4 (-GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x18009E0E8 (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x18009E370 (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x18009FDEC (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x18009FFA4 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::UpdateFeatureReportIfNeeded(__int64 *a1, __int64 a2)
{
  _BYTE *v2; // rax
  char v3; // di
  void *v5; // rcx
  size_t v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_BYTE *)a1[36];
  v3 = a2;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 296) && *v2 == (_BYTE)a2 )
      return 0LL;
  }
  else
  {
    v5 = (void *)a1[26];
    a1[36] = (__int64)v5;
    v6 = *((unsigned __int16 *)a1 + 36);
    *((_DWORD *)a1 + 70) = *((unsigned __int16 *)a1 + 36);
    memset_0(v5, 0, v6);
    *((_BYTE *)a1 + 296) = 0;
  }
  v7 = *a1;
  LOBYTE(a2) = v3;
  *((_BYTE *)a1 + 296) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 40LL))(
         v7,
         a2,
         a1[36],
         *((unsigned int *)a1 + 70));
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  *((_BYTE *)a1 + 296) = 1;
  return 0LL;
}
