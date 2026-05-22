/*
 * XREFs of ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x180078E8C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18007819C (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ??$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAGW4_HIDP_REPORT_TYPE@@@Z @ 0x18007A3A0 (--$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 */

__int64 __fastcall SpatialInteractionDevices::SupportsContinousBuzz(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3,
        unsigned __int16 *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10; // ebp
  unsigned int v11; // r13d
  __int64 v12; // rdi
  int updated; // esi
  unsigned int i; // r14d
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  ULONG v19; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  if ( !this )
  {
    v7 = -2147024809;
    v8 = 884LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a2 )
  {
    v7 = -2147467261;
    v8 = 885LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = 886LL;
    goto LABEL_3;
  }
  *(_BYTE *)a2 = 0;
  v10 = (_DWORD)this + 320;
  *(_WORD *)a3 = 0;
  v11 = 0;
  if ( !*((_DWORD *)this + 56) )
    return 0LL;
  while ( 1 )
  {
    v12 = *((_QWORD *)this + 27) + 72LL * v11;
    if ( *(_WORD *)(v12 + 10) != 14 || *(_WORD *)(v12 + 8) != 16 || *(_WORD *)v12 != 10 || *(_BYTE *)(v12 + 12) )
      goto LABEL_25;
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64)this, *(_BYTE *)(v12 + 2));
    if ( updated < 0 )
      break;
    updated = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>((int)this, v10, v12, (int)&v21, v19);
    if ( updated < 0 )
    {
      v18 = 903LL;
      goto LABEL_32;
    }
    if ( (_WORD)v21 == 4100 )
    {
      for ( i = 0; i < *((_DWORD *)this + 56); ++i )
      {
        v15 = *((_QWORD *)this + 27) + 72LL * i;
        if ( *(_WORD *)(v15 + 10) == 14 && *(_WORD *)(v15 + 8) == 17 && *(_WORD *)v15 == 10 && !*(_BYTE *)(v15 + 12) )
        {
          v16 = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64)this, *(_BYTE *)(v15 + 2));
          v17 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x394,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
              (const char *)(unsigned int)v16);
            return v17;
          }
          v10 = (_DWORD)this + 320;
          updated = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned short>(
                      (int)this,
                      (int)this + 320,
                      v15,
                      (int)&v22,
                      v19);
          if ( updated < 0 )
          {
            v18 = 917LL;
            goto LABEL_32;
          }
          if ( !(_WORD)v22 )
          {
            *(_BYTE *)a2 = 1;
            *(_WORD *)a3 = *(_WORD *)(v12 + 56);
            return 0LL;
          }
        }
      }
    }
LABEL_25:
    if ( ++v11 >= *((_DWORD *)this + 56) )
      return 0LL;
  }
  v18 = 901LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
