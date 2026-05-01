/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180113D90
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801146F0 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180115CE0 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1801164CC (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180116E18 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v6; // ebx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  HRESULT v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  HRESULT v32; // eax
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  HSTRING v44; // rcx
  int v45; // ebx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  const WCHAR *v52; // rbx
  const WCHAR *StringRawBuffer; // rax
  int StringOrdinal; // ebx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 (__fastcall ***v60)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v61; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-1A0h] BYREF
  int v63; // [rsp+50h] [rbp-198h] BYREF
  int v64; // [rsp+54h] [rbp-194h]
  __int64 v65; // [rsp+58h] [rbp-190h] BYREF
  int v66; // [rsp+60h] [rbp-188h]
  HSTRING v67; // [rsp+68h] [rbp-180h] BYREF
  void ***v68; // [rsp+70h] [rbp-178h] BYREF
  _QWORD v69[3]; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v70[2]; // [rsp+90h] [rbp-158h] BYREF
  void *v71; // [rsp+A0h] [rbp-148h] BYREF
  void **v72; // [rsp+A8h] [rbp-140h] BYREF
  _BYTE v73[96]; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v74; // [rsp+110h] [rbp-D8h]
  int v75; // [rsp+118h] [rbp-D0h]
  _BYTE v76[104]; // [rsp+128h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+190h] [rbp-58h] BYREF
  HSTRING string; // [rsp+1A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v69[1] = -2LL;
  v64 = 0;
  try
  {
    *a4 = 0;
    v59 = 0LL;
    v6 = CoreQueryWindowService(
           a2,
           &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
           &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
           &v59);
    if ( v6 < 0 )
    {
      v8 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return (unsigned int)v6;
    }
    v60 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v60);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x42C,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v11);
      v13 = (__int64)v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      return v12;
    }
    v61 = 0LL;
    v15 = RoCreatePropertySetSerializer(&v61);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x430,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v15);
      v17 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = (__int64)v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      return v16;
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v61 + 56LL))(v61, v60, v59);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x431,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v20);
      v22 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = (__int64)v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      return v21;
    }
    v62 = 0LL;
    v25 = (**v60)(v60, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v62);
    v26 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x434,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v25);
      v27 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v28 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = (__int64)v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      return v26;
    }
    v65 = 0LL;
    v66 = 0;
    v31 = v62;
    v68 = (void ***)&v65;
    v69[0] = 0LL;
    string = 0LL;
    v32 = WindowsCreateStringReference(L"RunningComponentUIApplicationList", 0x21u, &hstringHeader, &string);
    if ( v32 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32);
    v33 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v31 + 48LL))(v31, string, v69);
    string = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v68);
    if ( v33 < 0 )
    {
      if ( v65 && ((v66 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v65 + 16LL))();
      v34 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v35 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = (__int64)v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      return (unsigned int)v33;
    }
    v38 = v66;
    if ( v66 < 0 )
    {
      v39 = v66;
LABEL_65:
      if ( v39 < 0 )
      {
        if ( v65 && ((v38 - 3) & 0xFFFFFFFB) == 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        v40 = v62;
        if ( v62 )
        {
          v62 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        }
        v41 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
        v42 = (__int64)v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        }
        v43 = v59;
        if ( v59 )
        {
          v59 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        }
        return (unsigned int)v39;
      }
      if ( v63 == 12 )
      {
        v67 = 0LL;
        WindowsDeleteString(0LL);
        v44 = 0LL;
        v67 = 0LL;
        if ( v66 != 7 )
        {
          v45 = -2147316576;
          if ( v66 < 0 )
            v45 = v66;
          goto LABEL_84;
        }
        v45 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v65 + 152LL))(v65, &v67);
        v44 = v67;
        if ( v45 < 0 )
        {
LABEL_84:
          WindowsDeleteString(v44);
          v67 = 0LL;
          if ( v65 && ((v66 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v65 + 16LL))();
          v46 = v62;
          if ( v62 )
          {
            v62 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
          }
          v47 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
          }
          v48 = (__int64)v60;
          if ( v60 )
          {
            v60 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
          }
          v49 = v59;
          if ( v59 )
          {
            v59 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
          }
          return (unsigned int)v45;
        }
        if ( v67 )
        {
          v70[0] = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_istream<unsigned short>'};
          v71 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
          std::basic_ios<unsigned short>::basic_ios<unsigned short>(v76);
          v64 = 1;
          std::basic_iostream<unsigned short>::basic_iostream<unsigned short>(v70, &v72, 0LL);
          *(_QWORD *)((char *)v70 + *(int *)(v70[0] + 4LL)) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
          *(_DWORD *)((char *)&v69[2] + *(int *)(v70[0] + 4LL) + 4) = *(_DWORD *)(v70[0] + 4LL) - 152;
          v68 = &v72;
          std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(&v72);
          v72 = &std::basic_stringbuf<unsigned short>::`vftable';
          v74 = 0LL;
          v75 = 0;
          v50 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(&v71, a3);
          std::operator<<<unsigned short,std::char_traits<unsigned short>>(v50, L";");
          v51 = std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
                  v70,
                  &hstringHeader);
          v52 = (const WCHAR *)v51;
          if ( *(_QWORD *)(v51 + 24) >= 8uLL )
            v52 = *(const WCHAR **)v51;
          StringRawBuffer = WindowsGetStringRawBuffer(v67, 0LL);
          StringOrdinal = FindStringOrdinal(0x400000u, StringRawBuffer, -1, v52, -1, 1);
          std::wstring::~wstring((unsigned __int64 *)&hstringHeader);
          if ( StringOrdinal != -1 )
            *a4 = 1;
          *(_QWORD *)((char *)v70 + *(int *)(v70[0] + 4LL)) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
          *(_DWORD *)((char *)&v69[2] + *(int *)(v70[0] + 4LL) + 4) = *(_DWORD *)(v70[0] + 4LL) - 152;
          std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(&v72);
          std::basic_iostream<unsigned short>::~basic_iostream<unsigned short,std::char_traits<unsigned short>>(v73);
          std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v76);
          v44 = v67;
        }
        WindowsDeleteString(v44);
        v38 = v66;
      }
      if ( v65 && ((v38 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      v55 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = (__int64)v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = v59;
      if ( v59 )
      {
        v59 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
      return 0LL;
    }
    if ( v66 )
    {
      if ( v66 == 1 || v66 == 3 )
      {
        v63 = 13;
      }
      else
      {
        v39 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v65 + 48LL))(v65, &v63);
        v38 = v66;
        if ( v39 < 0 )
          goto LABEL_65;
      }
    }
    else
    {
      v63 = 0;
    }
    v39 = 0;
    goto LABEL_65;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x44D,
                           (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                           v7);
  }
  return result;
}
