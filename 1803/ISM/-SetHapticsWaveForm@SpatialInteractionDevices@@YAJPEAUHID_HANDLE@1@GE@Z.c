/*
 * XREFs of ?SetHapticsWaveForm@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@GE@Z @ 0x18009E578
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x1800DAB90 (std--_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x1800A1EA8 (-HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInteractionDevices::SetHapticsWaveForm(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        unsigned __int8 a3)
{
  unsigned __int16 v4; // di
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r10
  CHAR *v12; // r9
  struct _HIDP_PREPARSED_DATA *v13; // r8
  UCHAR v14; // dl
  struct SpatialInteractionDevices::HID_REPORT *v15; // r8
  int v16; // edi
  struct SpatialInteractionDevices::HID_REPORT *v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // [rsp+28h] [rbp-20h]
  unsigned int v20; // [rsp+28h] [rbp-20h]
  ULONG ReportLength; // [rsp+30h] [rbp-18h] BYREF
  CHAR *v22; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned __int16)a2;
  if ( a3 > 0x64u )
  {
    v6 = -2147024809;
    v7 = 997LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((unsigned __int16 *)this + 59);
  v10 = 0LL;
  if ( !*((_WORD *)this + 59) )
    return 0LL;
  v11 = *((_QWORD *)this + 20);
  while ( *(_WORD *)(v11 + 72 * v10) != 14 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      return 0LL;
  }
  v12 = (CHAR *)*((_QWORD *)this + 28);
  v13 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
  v14 = *(_BYTE *)(v11 + 72 * v10 + 2);
  ReportLength = *((unsigned __int16 *)this + 35);
  v22 = v12;
  HidP_InitializeReportForID(HidP_Output, v14, v13, v12, ReportLength);
  v16 = SpatialInteractionDevices::Internal::HIDSetInteger(
          this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&ReportLength,
          v15,
          0x21u,
          v4,
          v19);
  if ( v16 >= 0 )
  {
    v16 = SpatialInteractionDevices::Internal::HIDSetInteger(
            this,
            (struct SpatialInteractionDevices::HID_HANDLE *)&ReportLength,
            v17,
            0x23u,
            a3,
            v20);
    if ( v16 < 0 )
    {
      v18 = 1009LL;
      goto LABEL_11;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, CHAR *, _QWORD))(**(_QWORD **)this + 48LL))(
           *(_QWORD *)this,
           v22,
           ReportLength);
    if ( v6 < 0 )
    {
      v7 = 1011LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  v18 = 1008LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
