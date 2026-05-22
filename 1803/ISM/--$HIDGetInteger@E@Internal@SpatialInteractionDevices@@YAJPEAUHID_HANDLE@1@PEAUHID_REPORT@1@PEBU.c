/*
 * XREFs of ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x18009F97C
 * Callers:
 *     ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x18009DFE4 (-GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800A1130 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::HIDGetInteger<unsigned char>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        ULONG UsageValue)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int ScaledUsageValue; // eax
  int v17; // edx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a1 )
  {
    v8 = 318LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionHIDParser.h",
      (const char *)v9);
    return v9;
  }
  if ( !a2 )
  {
    v8 = 319LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v8 = 320LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v9 = -2147467261;
    v8 = 321LL;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a3 + 12) )
  {
    v8 = 322LL;
    goto LABEL_3;
  }
  *a4 = 0;
  v11 = *(_DWORD *)(a3 + 48);
  if ( !v11 && !*(_DWORD *)(a3 + 52) )
  {
    v12 = HidP_GetUsageValue(
            HidP_Feature,
            *(_WORD *)a3,
            *(_WORD *)(a3 + 6),
            *(_WORD *)(a3 + 56),
            &UsageValue,
            *(PHIDP_PREPARSED_DATA *)(a1 + 56),
            *(PCHAR *)(a2 + 8),
            *(_DWORD *)a2);
    v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v12, v13);
    if ( v14 < 0 )
    {
      v15 = 339LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v15,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionHIDParser.h",
               (const char *)(unsigned int)v14);
    }
LABEL_23:
    *a4 = UsageValue;
    return 0LL;
  }
  if ( *(_DWORD *)(a3 + 40) != *(_DWORD *)(a3 + 44) || v11 != *(_DWORD *)(a3 + 52) )
  {
    ScaledUsageValue = HidP_GetScaledUsageValue(
                         HidP_Feature,
                         *(_WORD *)a3,
                         *(_WORD *)(a3 + 6),
                         *(_WORD *)(a3 + 56),
                         (PLONG)&UsageValue,
                         *(PHIDP_PREPARSED_DATA *)(a1 + 56),
                         *(PCHAR *)(a2 + 8),
                         *(_DWORD *)a2);
    v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ScaledUsageValue, v17);
    if ( v14 < 0 )
    {
      v15 = 360LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v15,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionHIDParser.h",
               (const char *)(unsigned int)v14);
    }
    goto LABEL_23;
  }
  *a4 = v11;
  return 0LL;
}
