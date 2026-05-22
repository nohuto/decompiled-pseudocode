/*
 * XREFs of ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x180078C0C
 * Callers:
 *     ?GetHandedness@SpatialInteractionDevice@@UEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z @ 0x180074FD0 (-GetHandedness@SpatialInteractionDevice@@UEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18007819C (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::GetHandedness(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        enum SpatialInteractionDevices::Handedness *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  USHORT *v9; // rbx
  unsigned int i; // r13d
  __int64 v11; // r14
  int updated; // eax
  int v13; // edi
  USHORT v14; // di
  USAGE v15; // r15
  NTSTATUS Usages; // eax
  int v17; // edx
  __int16 v18; // r10
  _WORD *v19; // rcx
  unsigned int v20; // r8d
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int UsageLength; // [rsp+20h] [rbp-68h]
  ULONG v24[18]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v26; // [rsp+90h] [rbp+8h]
  USAGE v27; // [rsp+A0h] [rbp+18h]
  USHORT v28; // [rsp+A8h] [rbp+20h]

  if ( !this )
  {
    v5 = -2147024809;
    v6 = 826LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 827LL;
    goto LABEL_3;
  }
  *(_DWORD *)a2 = 0;
  v27 = 0;
  v26 = 1;
  v24[0] = *((unsigned __int16 *)this + 81);
  v8 = 2LL * *((unsigned __int16 *)this + 81);
  v28 = 0;
  if ( !is_mul_ok(*((unsigned __int16 *)this + 81), 2uLL) )
    v8 = -1LL;
  v9 = (USHORT *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  for ( i = 0; i < *((_DWORD *)this + 60); ++i )
  {
    v11 = *((_QWORD *)this + 29);
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64)this, *(_BYTE *)(v11 + 72LL * i + 2));
    v13 = updated;
    if ( updated < 0 )
    {
      v21 = (unsigned int)updated;
      v22 = 855LL;
      goto LABEL_37;
    }
    v14 = *(_WORD *)(v11 + 72LL * i + 6);
    v15 = *(_WORD *)(v11 + 72LL * i);
    if ( v26 || v27 != v15 || v28 != v14 )
    {
      v24[0] = *((unsigned __int16 *)this + 81);
      Usages = HidP_GetUsages(
                 HidP_Feature,
                 v15,
                 v14,
                 v9,
                 v24,
                 *((PHIDP_PREPARSED_DATA *)this + 12),
                 *((PCHAR *)this + 41),
                 *((_DWORD *)this + 80));
      if ( Usages < 0 )
      {
        v13 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x34C,
                (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                (const char *)(unsigned int)Usages,
                UsageLength);
        goto LABEL_17;
      }
      v27 = v15;
      v26 = 0;
      v28 = v14;
    }
    v13 = 0;
LABEL_17:
    if ( v13 < 0 )
    {
      v21 = (unsigned int)v13;
      v22 = 856LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)v21);
      goto LABEL_31;
    }
    v17 = 0;
    if ( v24[0] )
    {
      v18 = *(_WORD *)(v11 + 72LL * i + 56);
      while ( v9[v17] != v18 )
      {
LABEL_28:
        if ( ++v17 >= v24[0] )
          goto LABEL_29;
      }
      v19 = &unk_1800D9C74;
      v20 = 0;
      while ( *(v19 - 2) != *(_WORD *)(v11 + 72LL * i + 10)
           || *(v19 - 1) != *(_WORD *)(v11 + 72LL * i + 8)
           || *v19 != *(_WORD *)(v11 + 72LL * i)
           || *(_BYTE *)(v11 + 72LL * i + 12)
           || v19[1] != v18 )
      {
        ++v20;
        v19 += 12;
        if ( v20 >= 4 )
          goto LABEL_28;
      }
      *(_DWORD *)a2 = *((_DWORD *)v19 + 1);
      break;
    }
LABEL_29:
    ;
  }
  v13 = 0;
LABEL_31:
  if ( v9 )
    operator delete(v9);
  return (unsigned int)v13;
}
