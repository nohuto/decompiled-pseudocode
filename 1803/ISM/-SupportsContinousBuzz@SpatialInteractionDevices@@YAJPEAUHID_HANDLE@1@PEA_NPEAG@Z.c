/*
 * XREFs of ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x18009E370
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18009D928 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ??$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAGW4_HIDP_REPORT_TYPE@@@Z @ 0x18009FAD0 (--$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 */

__int64 __fastcall SpatialInteractionDevices::SupportsContinousBuzz(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3,
        unsigned __int16 *a4)
{
  __int64 v6; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // rdi
  int updated; // esi
  int v15; // eax
  unsigned int i; // r14d
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // ebp
  int v20; // eax
  __int64 v21; // rdx
  ULONG v22; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( !this )
  {
    v8 = -2147024809;
    v9 = 882LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 883LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 884LL;
    goto LABEL_3;
  }
  *(_BYTE *)a2 = 0;
  v11 = (_DWORD)this + 280;
  *(_WORD *)a3 = 0;
  v12 = 0;
  if ( !*((_DWORD *)this + 46) )
    return 0LL;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 22) + 72LL * v12;
    if ( *(_WORD *)(v13 + 10) != 14 || *(_WORD *)(v13 + 8) != 16 || *(_WORD *)v13 != 10 || *(_BYTE *)(v13 + 12) )
      goto LABEL_25;
    LOBYTE(v6) = *(_BYTE *)(v13 + 2);
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)this, v6);
    if ( updated < 0 )
      break;
    v15 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>((int)this, v11, v13, (int)&v24, v22);
    v6 = 0LL;
    updated = v15;
    if ( v15 < 0 )
    {
      v21 = 901LL;
      goto LABEL_32;
    }
    if ( (_WORD)v24 == 4100 )
    {
      for ( i = 0; i < *((_DWORD *)this + 46); ++i )
      {
        v17 = *((_QWORD *)this + 22) + 72LL * i;
        if ( *(_WORD *)(v17 + 10) == 14 && *(_WORD *)(v17 + 8) == 17 && *(_WORD *)v17 == 10 && !*(_BYTE *)(v17 + 12) )
        {
          LOBYTE(v6) = *(_BYTE *)(v17 + 2);
          v18 = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)this, v6);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x392,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
              (const char *)(unsigned int)v18);
            return v19;
          }
          v11 = (_DWORD)this + 280;
          v20 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>(
                  (int)this,
                  (int)this + 280,
                  v17,
                  (int)&v25,
                  v22);
          v6 = 0LL;
          updated = v20;
          if ( v20 < 0 )
          {
            v21 = 915LL;
            goto LABEL_32;
          }
          if ( !(_WORD)v25 )
          {
            *(_BYTE *)a2 = 1;
            *(_WORD *)a3 = *(_WORD *)(v13 + 56);
            return 0LL;
          }
        }
      }
    }
LABEL_25:
    if ( ++v12 >= *((_DWORD *)this + 46) )
      return 0LL;
  }
  v21 = 899LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
