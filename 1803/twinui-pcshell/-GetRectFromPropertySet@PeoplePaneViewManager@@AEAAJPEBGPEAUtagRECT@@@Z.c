/*
 * XREFs of ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1801C230C
 * Callers:
 *     ?GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z @ 0x1801C2280 (-GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x1801C22D0 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x1801C2230 (-GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall PeoplePaneViewManager::GetRectFromPropertySet(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // di
  const WCHAR **Reserved1; // rbx
  const WCHAR *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  const WCHAR **v18; // rbx
  const WCHAR *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  BOOL WindowRect; // eax
  float v24; // xmm2_4
  float v25; // xmm0_4
  const WCHAR *v26; // [rsp+28h] [rbp-79h] BYREF
  int v27; // [rsp+30h] [rbp-71h]
  __int64 v28; // [rsp+38h] [rbp-69h] BYREF
  __int64 v29; // [rsp+40h] [rbp-61h] BYREF
  __int64 v30; // [rsp+48h] [rbp-59h] BYREF
  __int64 v31; // [rsp+50h] [rbp-51h] BYREF
  void *v32; // [rsp+58h] [rbp-49h] BYREF
  int v33; // [rsp+60h] [rbp-41h]
  __int64 v34; // [rsp+68h] [rbp-39h]
  float v35; // [rsp+70h] [rbp-31h] BYREF
  float v36; // [rsp+74h] [rbp-2Dh]
  float v37; // [rsp+78h] [rbp-29h]
  float v38; // [rsp+7Ch] [rbp-25h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-21h] BYREF
  __int64 v40; // [rsp+98h] [rbp-9h]
  struct tagRECT Rect; // [rsp+A0h] [rbp-1h] BYREF
  _BYTE v42[24]; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v43; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v34 = -2LL;
  v26 = a2;
  SetRectEmpty(a3);
  if ( !*((_QWORD *)this + 71) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v31 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v31);
  v6 = CoreQueryWindowService(
         *((_QWORD *)this + 71),
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v31);
  if ( v6 >= 0 )
  {
    v30 = 0LL;
    v40 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v40,
           &v30);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_27;
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v8 = RoCreatePropertySetSerializer(&v29);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 360LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      goto LABEL_26;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v29 + 56LL))(v29, v30, v31);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 361LL;
      goto LABEL_10;
    }
    v28 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            &v30,
            &v28);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_25;
    }
    v32 = 0LL;
    v33 = 0;
    v11 = v28;
    hstringHeader.Reserved.Reserved1 = &v32;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v42, &v26);
    v13 = (*(int (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v11 + 48LL))(
            v11,
            *(_QWORD *)(v12 + 24),
            &hstringHeader.Reserved.Reserved2[8]) < 0;
    v43 = 0LL;
    Reserved1 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v26, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    v15 = *Reserved1;
    *Reserved1 = v26;
    v26 = v15;
    LODWORD(v15) = *((_DWORD *)Reserved1 + 2);
    *((_DWORD *)Reserved1 + 2) = v27;
    v27 = (int)v15;
    RoVariant::~RoVariant((RoVariant *)&v26);
    if ( !v13 )
      goto LABEL_16;
    v16 = v28;
    hstringHeader.Reserved.Reserved1 = &v32;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v42, (const WCHAR **)off_18034C648);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 48LL))(
           v16,
           *(_QWORD *)(v17 + 24),
           &hstringHeader.Reserved.Reserved2[8]);
    v43 = 0LL;
    v18 = (const WCHAR **)hstringHeader.Reserved.Reserved1;
    RoVariant::RoVariant((RoVariant *)&v26, *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    v19 = *v18;
    *v18 = v26;
    v26 = v19;
    LODWORD(v19) = *((_DWORD *)v18 + 2);
    *((_DWORD *)v18 + 2) = v27;
    v27 = (int)v19;
    RoVariant::~RoVariant((RoVariant *)&v26);
    if ( v6 < 0 )
    {
      v20 = (unsigned int)v6;
      v21 = 373LL;
    }
    else
    {
LABEL_16:
      hstringHeader.Reserved.Reserved1 = v32;
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v33;
      v22 = RoVariant::Accessor::GetRect(
              (RoVariant::Accessor *)&hstringHeader,
              (struct Windows::Foundation::Rect *)&v35);
      v6 = v22;
      if ( v22 >= 0 )
      {
        WindowRect = GetWindowRect(*((HWND *)this + 71), &Rect);
        v24 = v35;
        if ( WindowRect )
        {
          v24 = v35 + (float)Rect.left;
          v35 = v24;
          v25 = v36 + (float)Rect.top;
          v36 = v25;
        }
        else
        {
          v25 = v36;
        }
        a3->left = (int)v24;
        a3->top = (int)v25;
        a3->right = (int)v24 + (int)v37;
        a3->bottom = (int)v25 + (int)v38;
        v6 = 0;
        goto LABEL_23;
      }
      v20 = (unsigned int)v22;
      v21 = 375LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v20);
LABEL_23:
    RoVariant::~RoVariant((RoVariant *)&v32);
    goto LABEL_24;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v31);
  return (unsigned int)v6;
}
