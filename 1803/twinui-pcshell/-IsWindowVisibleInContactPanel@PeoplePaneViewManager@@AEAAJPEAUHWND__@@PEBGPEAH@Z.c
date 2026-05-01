/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1801C2E50
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801C2C40 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18016EB4C (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1801BF014 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x1801C0394 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1801C07E4 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1801C5ECC (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rbx
  int v19; // edi
  WCHAR *v20; // rbx
  HSTRING v21; // rcx
  int v22; // ebx
  int v23; // ebx
  HSTRING v24; // rcx
  __int64 v25; // rax
  const WCHAR *p_lpStringValue; // rbx
  const WCHAR *StringRawBuffer; // rax
  bool v28; // bl
  __int64 v29; // [rsp+30h] [rbp-1C8h] BYREF
  int v30; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-1A8h] BYREF
  HSTRING string; // [rsp+58h] [rbp-1A0h] BYREF
  int v35; // [rsp+60h] [rbp-198h]
  const WCHAR *v36; // [rsp+68h] [rbp-190h] BYREF
  int v37; // [rsp+70h] [rbp-188h]
  __int64 v38; // [rsp+78h] [rbp-180h]
  _BYTE v39[16]; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v40[8]; // [rsp+90h] [rbp-168h] BYREF
  _BYTE v41[128]; // [rsp+98h] [rbp-160h] BYREF
  _BYTE v42[104]; // [rsp+118h] [rbp-E0h] BYREF
  LPCWSTR lpStringValue; // [rsp+180h] [rbp-78h] BYREF
  struct IInspectable *v44[3]; // [rsp+188h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+1B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v38 = -2LL;
  try
  {
    *a4 = 0;
    v29 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
    v7 = CoreQueryWindowService(
           a2,
           &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
           &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
           &v29);
    if ( v7 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
      return (unsigned int)v7;
    }
    v31 = 0LL;
    v46 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v46,
            &v31);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x419,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
      return v11;
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    v12 = RoCreatePropertySetSerializer(&v32);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41D,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
      return v13;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v32 + 56LL))(v32, v31, v29);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41E,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
      return v15;
    }
    v33 = 0LL;
    v16 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            &v31,
            &v33);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x421,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
      return v17;
    }
    v36 = 0LL;
    v37 = 0;
    v18 = v33;
    lpStringValue = (LPCWSTR)&v36;
    v44[0] = 0LL;
    v46 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"RunningComponentUIApplicationList",
      0x22u,
      0x21u);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v18 + 48LL))(v18, v46, v44);
    v46 = 0LL;
    v20 = (WCHAR *)lpStringValue;
    RoVariant::RoVariant((RoVariant *)&string, v44[0]);
    v21 = *(HSTRING *)v20;
    *(_QWORD *)v20 = string;
    string = v21;
    LODWORD(v21) = *((_DWORD *)v20 + 2);
    *((_DWORD *)v20 + 2) = v35;
    v35 = (int)v21;
    RoVariant::~RoVariant((RoVariant *)&string);
    if ( v19 < 0 )
    {
      RoVariant::~RoVariant((RoVariant *)&v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
      return (unsigned int)v19;
    }
    v22 = v37;
    if ( v37 < 0 )
      goto LABEL_24;
    if ( v37 )
    {
      if ( v37 == 1 || v37 == 3 )
      {
        v30 = 13;
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v36 + 48LL))(v36, &v30);
        if ( v22 < 0 )
        {
LABEL_23:
          if ( v22 < 0 )
          {
LABEL_24:
            RoVariant::~RoVariant((RoVariant *)&v36);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
            return (unsigned int)v22;
          }
          if ( v30 == 12 )
          {
            string = 0LL;
            WindowsDeleteString(0LL);
            string = 0LL;
            lpStringValue = v36;
            LODWORD(v44[0]) = v37;
            v23 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&lpStringValue, &string);
            if ( v23 < 0 )
            {
              WindowsDeleteString(string);
              string = 0LL;
              RoVariant::~RoVariant((RoVariant *)&v36);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
              Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
              return (unsigned int)v23;
            }
            v24 = string;
            if ( string )
            {
              std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v39);
              v25 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v40, (__int64)a3);
              std::operator<<<unsigned short,std::char_traits<unsigned short>>(v25, (__int64)L";");
              std::basic_stringbuf<unsigned short>::str(v41, &lpStringValue);
              p_lpStringValue = (const WCHAR *)&lpStringValue;
              if ( v44[2] >= (struct IInspectable *)8 )
                p_lpStringValue = lpStringValue;
              StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
              v28 = FindStringOrdinal(0x400000u, StringRawBuffer, -1, p_lpStringValue, -1, 1) != -1;
              std::wstring::_Tidy_deallocate((__int64)&lpStringValue);
              if ( v28 )
                *a4 = 1;
              std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v42);
              std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v42);
              v24 = string;
            }
            WindowsDeleteString(v24);
          }
          RoVariant::~RoVariant((RoVariant *)&v36);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v29);
          return 0LL;
        }
      }
    }
    else
    {
      v30 = 0;
    }
    v22 = 0;
    goto LABEL_23;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x43A,
                           (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                           v8);
  }
  return result;
}
