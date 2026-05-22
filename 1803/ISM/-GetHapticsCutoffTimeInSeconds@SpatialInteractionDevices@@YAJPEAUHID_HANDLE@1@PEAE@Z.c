/*
 * XREFs of ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x18009DFE4
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18009D928 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x18009F97C (--$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 */

__int64 __fastcall SpatialInteractionDevices::GetHapticsCutoffTimeInSeconds(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        unsigned __int8 *a3)
{
  int v3; // r14d
  int v4; // ebx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rdi
  int updated; // eax
  unsigned int v12; // esi
  ULONG v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (int)a2;
  v4 = (int)this;
  if ( !this )
  {
    v5 = -2147024809;
    v6 = 798LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 799LL;
    goto LABEL_3;
  }
  *(_BYTE *)a2 = 0;
  v8 = 0LL;
  v9 = *((_DWORD *)this + 46);
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 22) + 72 * v8;
    if ( *(_WORD *)v10 == 14 && !*(_BYTE *)(v10 + 12) && *(_WORD *)(v10 + 56) == 40 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v9 )
      return 0LL;
  }
  LOBYTE(v8) = *(_BYTE *)(v10 + 2);
  updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)this, v8);
  v12 = updated;
  if ( updated >= 0 )
  {
    v5 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned char>(v4, v4 + 280, v10, v3, v13);
    if ( v5 < 0 )
    {
      v6 = 810LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x329,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)updated);
  return v12;
}
