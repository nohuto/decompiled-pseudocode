/*
 * XREFs of ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A1630
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18009D864 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x18009E954 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800A1130 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800A222C (std--_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::InitializeValueCaps(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  void *v3; // rax
  void *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  void *v8; // rax
  void *v9; // rcx
  void *v10; // rax
  void *v11; // rcx
  __int16 v12; // ax
  struct _HIDP_PREPARSED_DATA *v13; // r9
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  struct _HIDP_VALUE_CAPS *v18; // rax
  void *v19; // rcx
  unsigned int v20; // eax
  struct _HIDP_PREPARSED_DATA *v21; // r9
  unsigned int ButtonCaps; // eax
  unsigned __int64 v23; // rax
  struct _HIDP_BUTTON_CAPS *v24; // rax
  void *v25; // rcx
  unsigned int v26; // eax
  __int16 v27; // ax
  struct _HIDP_PREPARSED_DATA *v28; // r9
  unsigned int ValueCaps; // eax
  unsigned __int64 v30; // rax
  struct _HIDP_VALUE_CAPS *v31; // rax
  void *v32; // rcx
  unsigned int v33; // eax
  struct _HIDP_PREPARSED_DATA *v34; // r9
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  struct _HIDP_BUTTON_CAPS *v37; // rax
  void *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rdx
  struct _HIDP_PREPARSED_DATA *v44; // r9
  unsigned int v45; // eax
  unsigned __int64 v46; // rax
  struct _HIDP_VALUE_CAPS *v47; // rax
  void *v48; // rcx
  unsigned int v49; // eax
  char v50; // di
  RegistryHelpers *v51; // rcx
  bool v52; // zf
  char v53; // al
  RegistryHelpers *v54; // rcx
  int DwordWithDefault; // eax
  struct SpatialInteractionDevices::HID_HANDLE *v56; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  USHORT ValueCapsLength; // [rsp+50h] [rbp+30h] BYREF

  v3 = operator new[](*((unsigned __int16 *)this + 36) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (void *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = v3;
  if ( v4 )
  {
    operator delete(v4);
    v3 = (void *)*((_QWORD *)this + 26);
  }
  if ( !v3 )
  {
    v5 = 361LL;
LABEL_5:
    v6 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = operator new[](*((unsigned __int16 *)this + 34) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v8;
  if ( v9 )
  {
    operator delete(v9);
    v8 = (void *)*((_QWORD *)this + 27);
  }
  if ( !v8 )
  {
    v5 = 364LL;
    goto LABEL_5;
  }
  v10 = operator new[](*((unsigned __int16 *)this + 35) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = v10;
  if ( v11 )
  {
    operator delete(v11);
    v10 = (void *)*((_QWORD *)this + 28);
  }
  if ( !v10 )
  {
    v5 = 367LL;
    goto LABEL_5;
  }
  v12 = *((_WORD *)this + 34);
  if ( !v12 )
    goto LABEL_44;
  if ( !*((_WORD *)this + 56) )
  {
LABEL_30:
    if ( v12 && *((_WORD *)this + 55) )
    {
      v21 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
      ValueCapsLength = 0;
      ButtonCaps = HidP_GetButtonCaps(HidP_Input, 0LL, &ValueCapsLength, v21);
      if ( ButtonCaps != -1072627705 )
      {
        v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ButtonCaps);
        if ( v15 < 0 )
        {
          v16 = 392LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v16,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v15);
        }
        return 0LL;
      }
      v23 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v23 = -1LL;
      v24 = (struct _HIDP_BUTTON_CAPS *)operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
      v25 = (void *)*((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v24;
      if ( v25 )
      {
        operator delete(v25);
        v24 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 18);
      }
      if ( !v24 )
      {
        v5 = 396LL;
        goto LABEL_5;
      }
      v26 = HidP_GetButtonCaps(HidP_Input, v24, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
      v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v26);
      if ( v15 < 0 )
      {
        v16 = 398LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v16,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v15);
      }
      *((_DWORD *)this + 38) = ValueCapsLength;
    }
LABEL_44:
    v27 = *((_WORD *)this + 36);
    if ( v27 )
    {
      if ( *((_WORD *)this + 62) )
      {
        v28 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
        ValueCapsLength = 0;
        ValueCaps = HidP_GetValueCaps(HidP_Feature, 0LL, &ValueCapsLength, v28);
        if ( ValueCaps != -1072627705 )
        {
          v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ValueCaps);
          if ( v15 < 0 )
          {
            v16 = 410LL;
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v16,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                     (const char *)(unsigned int)v15);
          }
          return 0LL;
        }
        v30 = 72LL * ValueCapsLength;
        if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
          v30 = -1LL;
        v31 = (struct _HIDP_VALUE_CAPS *)operator new[](v30, (const struct std::nothrow_t *)&std::nothrow);
        v32 = (void *)*((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = v31;
        if ( v32 )
        {
          operator delete(v32);
          v31 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 22);
        }
        if ( !v31 )
        {
          v5 = 414LL;
          goto LABEL_5;
        }
        v33 = HidP_GetValueCaps(HidP_Feature, v31, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
        v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v33);
        if ( v15 < 0 )
        {
          v16 = 416LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v16,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v15);
        }
        *((_DWORD *)this + 46) = ValueCapsLength;
        v27 = *((_WORD *)this + 36);
      }
      if ( v27 && *((_WORD *)this + 61) )
      {
        v34 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
        ValueCapsLength = 0;
        v35 = HidP_GetButtonCaps(HidP_Feature, 0LL, &ValueCapsLength, v34);
        if ( v35 != -1072627705 )
        {
          v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v35);
          if ( v15 < 0 )
          {
            v16 = 427LL;
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v16,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                     (const char *)(unsigned int)v15);
          }
          return 0LL;
        }
        v36 = 72LL * ValueCapsLength;
        if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
          v36 = -1LL;
        v37 = (struct _HIDP_BUTTON_CAPS *)operator new[](v36, (const struct std::nothrow_t *)&std::nothrow);
        v38 = (void *)*((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = v37;
        if ( v38 )
        {
          operator delete(v38);
          v37 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 24);
        }
        if ( !v37 )
        {
          v5 = 431LL;
          goto LABEL_5;
        }
        v39 = HidP_GetButtonCaps(HidP_Feature, v37, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
        v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v39);
        if ( v15 < 0 )
        {
          v16 = 433LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v16,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v15);
        }
        v40 = *((_QWORD *)this + 24);
        v41 = 72LL * ValueCapsLength;
        v42 = (unsigned __int128)(v41 * (__int128)0xE38E38E38E38E39LL) >> 64;
        v43 = v41 + v40;
        LOBYTE(v41) = ValueCapsLength;
        std::_Sort_unchecked__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
          v40,
          v43,
          ((unsigned __int64)v42 >> 63) + (v42 >> 2),
          v41);
        *((_DWORD *)this + 50) = ValueCapsLength;
      }
    }
    if ( *((_WORD *)this + 35) && *((_WORD *)this + 59) )
    {
      v44 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
      ValueCapsLength = 0;
      v45 = HidP_GetValueCaps(HidP_Output, 0LL, &ValueCapsLength, v44);
      if ( v45 != -1072627705 )
      {
        v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v45);
        if ( v15 < 0 )
        {
          v16 = 452LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v16,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v15);
        }
        return 0LL;
      }
      v46 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v46 = -1LL;
      v47 = (struct _HIDP_VALUE_CAPS *)operator new[](v46, (const struct std::nothrow_t *)&std::nothrow);
      v48 = (void *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v47;
      if ( v48 )
      {
        operator delete(v48);
        v47 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 20);
      }
      if ( !v47 )
      {
        v5 = 456LL;
        goto LABEL_5;
      }
      v49 = HidP_GetValueCaps(HidP_Output, v47, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
      v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v49);
      if ( v15 < 0 )
      {
        v16 = 458LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v16,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v15);
      }
      *((_DWORD *)this + 42) = ValueCapsLength;
    }
    if ( *((_WORD *)this + 22) != 11036
      || *((_WORD *)this + 23) != 3
      || *((_WORD *)this + 24) != 256
      || *((_WORD *)this + 32) != 1
      || (v50 = 1, *((_WORD *)this + 33) != 0xFF0A) )
    {
      v50 = 0;
    }
    *((_BYTE *)this + 235) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                             (RegistryHelpers *)v11,
                                             (const WCHAR *)&stru_1800FE650,
                                             L"InverseThumbstickX",
                                             0LL) == 1;
    if ( v50
      || (v52 = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                v51,
                                (const WCHAR *)&stru_1800FE650,
                                L"InverseThumbstickY",
                                0LL) == 1,
          v53 = 0,
          v52) )
    {
      v53 = 1;
    }
    *((_BYTE *)this + 236) = v53;
    *((_BYTE *)this + 233) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                             v51,
                                             (const WCHAR *)&stru_1800FE650,
                                             L"InverseTouchpadX",
                                             0LL) == 1;
    DwordWithDefault = RegistryHelpers::GetDwordWithDefault(
                         v54,
                         (const WCHAR *)&stru_1800FE650,
                         L"InverseTouchpadY",
                         0LL);
    *((_DWORD *)this + 70) = 0;
    *((_QWORD *)this + 36) = 0LL;
    *((_BYTE *)this + 234) = DwordWithDefault == 1;
    v6 = SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(this, v56);
    if ( v6 < 0 )
    {
      v5 = 480LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v13 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
  ValueCapsLength = 0;
  v14 = HidP_GetValueCaps(HidP_Input, 0LL, &ValueCapsLength, v13);
  if ( v14 == -1072627705 )
  {
    v17 = 72LL * ValueCapsLength;
    if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
      v17 = -1LL;
    v18 = (struct _HIDP_VALUE_CAPS *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    v19 = (void *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v18;
    if ( v19 )
    {
      operator delete(v19);
      v18 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 16);
    }
    if ( !v18 )
    {
      v5 = 379LL;
      goto LABEL_5;
    }
    v20 = HidP_GetValueCaps(HidP_Input, v18, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
    v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v20);
    if ( v15 < 0 )
    {
      v16 = 381LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v16,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
               (const char *)(unsigned int)v15);
    }
    *((_DWORD *)this + 34) = ValueCapsLength;
    v12 = *((_WORD *)this + 34);
    goto LABEL_30;
  }
  v15 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v14);
  if ( v15 < 0 )
  {
    v16 = 375LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v16,
             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
             (const char *)(unsigned int)v15);
  }
  return 0LL;
}
