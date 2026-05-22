/*
 * XREFs of ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8
 * Callers:
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x18007BFEC (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x1800780D8 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x18007BD0C (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D130 (std--_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::InitializeValueCaps(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  void *v3; // rax
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  void *v8; // rax
  void *v9; // rcx
  void *v10; // rax
  void *v11; // rcx
  struct _HIDP_PREPARSED_DATA *v12; // r9
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  void *v17; // rax
  void *v18; // rcx
  struct _HIDP_VALUE_CAPS *v19; // rdx
  unsigned int v20; // eax
  struct _HIDP_PREPARSED_DATA *v21; // r9
  unsigned int ButtonCaps; // eax
  unsigned __int64 v23; // rax
  void *v24; // rax
  void *v25; // rcx
  struct _HIDP_BUTTON_CAPS *v26; // rdx
  unsigned int v27; // eax
  struct _HIDP_PREPARSED_DATA *v28; // r9
  unsigned int ValueCaps; // eax
  unsigned __int64 v30; // rax
  void *v31; // rax
  void *v32; // rcx
  struct _HIDP_VALUE_CAPS *v33; // rdx
  unsigned int v34; // eax
  struct _HIDP_PREPARSED_DATA *v35; // r9
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  void *v38; // rax
  void *v39; // rcx
  struct _HIDP_BUTTON_CAPS *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  struct _HIDP_PREPARSED_DATA *v43; // r9
  unsigned int v44; // eax
  unsigned __int64 v45; // rax
  void *v46; // rax
  void *v47; // rcx
  struct _HIDP_VALUE_CAPS *v48; // rdx
  unsigned int v49; // eax
  char v50; // di
  RegistryHelpers *v51; // rcx
  bool v52; // zf
  char v53; // al
  RegistryHelpers *v54; // rcx
  int DwordWithDefault; // eax
  struct SpatialInteractionDevices::HID_HANDLE *v56; // rdx
  int v57; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  USHORT ValueCapsLength; // [rsp+60h] [rbp+40h] BYREF
  USHORT ButtonCapsLength; // [rsp+68h] [rbp+48h] BYREF

  v3 = operator new[](*((unsigned __int16 *)this + 56) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (void *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = v3;
  if ( v4 )
    operator delete(v4);
  if ( !*((_QWORD *)this + 31) )
  {
    v5 = 212LL;
LABEL_5:
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)0x8007000ELL);
    return v6;
  }
  v8 = operator new[](*((unsigned __int16 *)this + 54) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = v8;
  if ( v9 )
    operator delete(v9);
  if ( !*((_QWORD *)this + 32) )
  {
    v5 = 215LL;
    goto LABEL_5;
  }
  v10 = operator new[](*((unsigned __int16 *)this + 55) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = v10;
  if ( v11 )
    operator delete(v11);
  if ( !*((_QWORD *)this + 33) )
  {
    v5 = 218LL;
    goto LABEL_5;
  }
  if ( !*((_WORD *)this + 54) )
    goto LABEL_44;
  if ( !*((_WORD *)this + 76) )
  {
LABEL_30:
    if ( *((_WORD *)this + 54) && *((_WORD *)this + 75) )
    {
      v21 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
      ValueCapsLength = 0;
      ButtonCaps = HidP_GetButtonCaps(HidP_Input, 0LL, &ValueCapsLength, v21);
      if ( ButtonCaps != -1072627705 )
      {
        v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ButtonCaps);
        if ( v14 < 0 )
        {
          v15 = 243LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        return 0LL;
      }
      v23 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v23 = -1LL;
      v24 = operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
      v25 = (void *)*((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = v24;
      if ( v25 )
        operator delete(v25);
      v26 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 23);
      if ( !v26 )
      {
        v5 = 247LL;
        goto LABEL_5;
      }
      v27 = HidP_GetButtonCaps(HidP_Input, v26, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
      v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v27);
      if ( v14 < 0 )
      {
        v15 = 249LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v15,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v14);
      }
      *((_DWORD *)this + 48) = ValueCapsLength;
    }
LABEL_44:
    if ( *((_WORD *)this + 56) )
    {
      if ( *((_WORD *)this + 82) )
      {
        v28 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
        ValueCapsLength = 0;
        ValueCaps = HidP_GetValueCaps(HidP_Feature, 0LL, &ValueCapsLength, v28);
        if ( ValueCaps != -1072627705 )
        {
          v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ValueCaps);
          if ( v14 < 0 )
          {
            v15 = 261LL;
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v15,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                     (const char *)(unsigned int)v14);
          }
          return 0LL;
        }
        v30 = 72LL * ValueCapsLength;
        if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
          v30 = -1LL;
        v31 = operator new[](v30, (const struct std::nothrow_t *)&std::nothrow);
        v32 = (void *)*((_QWORD *)this + 27);
        *((_QWORD *)this + 27) = v31;
        if ( v32 )
          operator delete(v32);
        v33 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 27);
        if ( !v33 )
        {
          v5 = 265LL;
          goto LABEL_5;
        }
        v34 = HidP_GetValueCaps(HidP_Feature, v33, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
        v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v34);
        if ( v14 < 0 )
        {
          v15 = 267LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        *((_DWORD *)this + 56) = ValueCapsLength;
      }
      if ( *((_WORD *)this + 56) && *((_WORD *)this + 81) )
      {
        v35 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
        ButtonCapsLength = 0;
        v36 = HidP_GetButtonCaps(HidP_Feature, 0LL, &ButtonCapsLength, v35);
        if ( v36 != -1072627705 )
        {
          v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v36);
          if ( v14 < 0 )
          {
            v15 = 278LL;
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v15,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                     (const char *)(unsigned int)v14);
          }
          return 0LL;
        }
        v37 = 72LL * ButtonCapsLength;
        if ( !is_mul_ok(ButtonCapsLength, 0x48uLL) )
          v37 = -1LL;
        v38 = operator new[](v37, (const struct std::nothrow_t *)&std::nothrow);
        v39 = (void *)*((_QWORD *)this + 29);
        *((_QWORD *)this + 29) = v38;
        if ( v39 )
          operator delete(v39);
        v40 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 29);
        if ( !v40 )
        {
          v5 = 282LL;
          goto LABEL_5;
        }
        v41 = HidP_GetButtonCaps(HidP_Feature, v40, &ButtonCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
        v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v41);
        if ( v14 < 0 )
        {
          v15 = 284LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        v42 = *((_QWORD *)this + 29);
        LOBYTE(ValueCapsLength) = 0;
        std::_Sort_unchecked1__HIDP_BUTTON_CAPS_____ptr64___int64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
          v42,
          72LL * ButtonCapsLength + v42,
          72LL * ButtonCapsLength / 72,
          &ValueCapsLength);
        *((_DWORD *)this + 60) = ButtonCapsLength;
      }
    }
    if ( *((_WORD *)this + 55) && *((_WORD *)this + 79) )
    {
      v43 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
      ValueCapsLength = 0;
      v44 = HidP_GetValueCaps(HidP_Output, 0LL, &ValueCapsLength, v43);
      if ( v44 != -1072627705 )
      {
        v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v44);
        if ( v14 < 0 )
        {
          v15 = 303LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v15,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v14);
        }
        return 0LL;
      }
      v45 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v45 = -1LL;
      v46 = operator new[](v45, (const struct std::nothrow_t *)&std::nothrow);
      v47 = (void *)*((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = v46;
      if ( v47 )
        operator delete(v47);
      v48 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 25);
      if ( !v48 )
      {
        v5 = 307LL;
        goto LABEL_5;
      }
      v49 = HidP_GetValueCaps(HidP_Output, v48, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
      v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v49);
      if ( v14 < 0 )
      {
        v15 = 309LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v15,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v14);
      }
      *((_DWORD *)this + 52) = ValueCapsLength;
    }
    if ( *((_WORD *)this + 44) != 11036
      || *((_WORD *)this + 45) != 3
      || *((_WORD *)this + 46) != 256
      || *((_WORD *)this + 52) != 1
      || (v50 = 1, *((_WORD *)this + 53) != 0xFF0A) )
    {
      v50 = 0;
    }
    *((_BYTE *)this + 275) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                             (RegistryHelpers *)v11,
                                             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                                             L"InverseThumbstickX",
                                             0LL) == 1;
    if ( v50
      || (v52 = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                v51,
                                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                                L"InverseThumbstickY",
                                0LL) == 1,
          v53 = 0,
          v52) )
    {
      v53 = 1;
    }
    *((_BYTE *)this + 276) = v53;
    *((_BYTE *)this + 273) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                             v51,
                                             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                                             L"InverseTouchpadX",
                                             0LL) == 1;
    DwordWithDefault = RegistryHelpers::GetDwordWithDefault(
                         v54,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
                         L"InverseTouchpadY",
                         0LL);
    *((_DWORD *)this + 80) = 0;
    *((_QWORD *)this + 41) = 0LL;
    *((_BYTE *)this + 274) = DwordWithDefault == 1;
    v57 = SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(this, v56);
    v6 = v57;
    if ( v57 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x14B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
        (const char *)(unsigned int)v57);
      return v6;
    }
    return 0LL;
  }
  v12 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
  ValueCapsLength = 0;
  v13 = HidP_GetValueCaps(HidP_Input, 0LL, &ValueCapsLength, v12);
  if ( v13 == -1072627705 )
  {
    v16 = 72LL * ValueCapsLength;
    if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
      v16 = -1LL;
    v17 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
    v18 = (void *)*((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = v17;
    if ( v18 )
      operator delete(v18);
    v19 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 21);
    if ( !v19 )
    {
      v5 = 230LL;
      goto LABEL_5;
    }
    v20 = HidP_GetValueCaps(HidP_Input, v19, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 12));
    v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v20);
    if ( v14 < 0 )
    {
      v15 = 232LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v15,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
               (const char *)(unsigned int)v14);
    }
    *((_DWORD *)this + 44) = ValueCapsLength;
    goto LABEL_30;
  }
  v14 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v13);
  if ( v14 < 0 )
  {
    v15 = 226LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v15,
             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
             (const char *)(unsigned int)v14);
  }
  return 0LL;
}
