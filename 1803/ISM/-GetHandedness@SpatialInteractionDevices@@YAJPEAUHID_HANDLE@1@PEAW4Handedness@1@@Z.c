/*
 * XREFs of ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x18009E0E8
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::UpdateFeatureReportIfNeeded @ 0x18009D928 (SpatialInteractionDevices--UpdateFeatureReportIfNeeded.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::GetHandedness(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        enum SpatialInteractionDevices::Handedness *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  USHORT *v10; // rbx
  unsigned int i; // r13d
  __int64 v12; // r14
  int updated; // eax
  int v14; // edi
  USHORT v15; // di
  USAGE v16; // r15
  NTSTATUS Usages; // eax
  __int16 v18; // r10
  unsigned int v19; // r8d
  _WORD *v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  ULONG UsageLength; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  USHORT *v25; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char v27; // [rsp+A0h] [rbp+8h]
  USAGE v28; // [rsp+B0h] [rbp+18h]
  USHORT v29; // [rsp+B8h] [rbp+20h]

  v24 = -2LL;
  if ( !this )
  {
    v5 = -2147024809;
    v6 = 824LL;
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
    v6 = 825LL;
    goto LABEL_3;
  }
  *(_DWORD *)a2 = 0;
  v27 = 1;
  v28 = 0;
  v29 = 0;
  UsageLength = *((unsigned __int16 *)this + 61);
  v8 = 2LL * *((unsigned __int16 *)this + 61);
  if ( !is_mul_ok(*((unsigned __int16 *)this + 61), 2uLL) )
    v8 = -1LL;
  v10 = (USHORT *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v10;
  for ( i = 0; i < *((_DWORD *)this + 50); ++i )
  {
    v12 = *((_QWORD *)this + 24);
    LOBYTE(v9) = *(_BYTE *)(v12 + 72LL * i + 2);
    updated = SpatialInteractionDevices::UpdateFeatureReportIfNeeded((__int64 *)this, v9);
    v14 = updated;
    if ( updated < 0 )
    {
      v21 = (unsigned int)updated;
      v22 = 853LL;
      goto LABEL_37;
    }
    v15 = *(_WORD *)(v12 + 72LL * i + 6);
    v16 = *(_WORD *)(v12 + 72LL * i);
    if ( v27 || v28 != v16 || v29 != v15 )
    {
      UsageLength = *((unsigned __int16 *)this + 61);
      Usages = HidP_GetUsages(
                 HidP_Feature,
                 v16,
                 v15,
                 v10,
                 &UsageLength,
                 *((PHIDP_PREPARSED_DATA *)this + 7),
                 *((PCHAR *)this + 36),
                 *((_DWORD *)this + 70));
      if ( Usages < 0 )
      {
        v14 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x34A,
                (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                (const char *)(unsigned int)Usages);
        goto LABEL_17;
      }
      v27 = 0;
      v28 = v16;
      v29 = v15;
    }
    v14 = 0;
LABEL_17:
    if ( v14 < 0 )
    {
      v21 = (unsigned int)v14;
      v22 = 854LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)v21);
      goto LABEL_31;
    }
    v9 = 0LL;
    if ( UsageLength )
    {
      v18 = *(_WORD *)(v12 + 72LL * i + 56);
      while ( v10[(unsigned int)v9] != v18 )
      {
LABEL_28:
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= UsageLength )
          goto LABEL_29;
      }
      v19 = 0;
      v20 = &unk_1800F4334;
      while ( *(v20 - 2) != *(_WORD *)(v12 + 72LL * i + 10)
           || *(v20 - 1) != *(_WORD *)(v12 + 72LL * i + 8)
           || *v20 != *(_WORD *)(v12 + 72LL * i)
           || *(_BYTE *)(v12 + 72LL * i + 12)
           || v20[1] != v18 )
      {
        ++v19;
        v20 += 12;
        if ( v19 >= 4 )
          goto LABEL_28;
      }
      *(_DWORD *)a2 = *((_DWORD *)v20 + 1);
      break;
    }
LABEL_29:
    ;
  }
  v14 = 0;
LABEL_31:
  if ( v10 )
    operator delete(v10);
  return (unsigned int)v14;
}
