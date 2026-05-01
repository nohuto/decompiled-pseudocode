/*
 * XREFs of ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026930
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026F70 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014338 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180022BB4 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     atexit @ 0x1800415CC (atexit.c)
 *     _Init_thread_footer @ 0x1800417D8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180041838 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT v7; // eax
  int ActivationFactory; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  HRESULT v12; // eax
  int v13; // eax
  int v14; // eax
  HRESULT v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _BYTE v33[8]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v34; // [rsp+50h] [rbp-41h] BYREF
  __int64 v35; // [rsp+58h] [rbp-39h] BYREF
  __int64 v36; // [rsp+60h] [rbp-31h] BYREF
  __int64 v37; // [rsp+68h] [rbp-29h] BYREF
  __int64 v38; // [rsp+70h] [rbp-21h] BYREF
  __int64 v39; // [rsp+78h] [rbp-19h] BYREF
  __int64 v40; // [rsp+80h] [rbp-11h] BYREF
  __int64 v41; // [rsp+88h] [rbp-9h] BYREF
  HSTRING v42; // [rsp+90h] [rbp-1h] BYREF
  int v43; // [rsp+98h] [rbp+7h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+17h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v44 = -2LL;
  v2 = 0LL;
  v41 = 0LL;
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 104LL))(v3, &v41);
    v2 = v41;
    if ( v4 >= 0 )
    {
      if ( v41 )
      {
        v42 = 0LL;
        WindowsDeleteString(0LL);
        v42 = 0LL;
        v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v2 + 56LL))(v2, &v42);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x12B,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v5);
LABEL_65:
          WindowsDeleteString(v42);
          v2 = v41;
          goto LABEL_67;
        }
        v36 = 0LL;
        string = 0LL;
        v7 = WindowsCreateStringReference(
               L"Windows.Internal.StateRepository.Application",
               0x2Cu,
               &hstringHeader,
               &string);
        if ( v7 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
          __debugbreak();
        }
        ActivationFactory = RoGetActivationFactory(string, &GUID_3748acc0_bb39_41b4_9ec8_3254b13ea6e2, &v36);
        v6 = ActivationFactory;
        if ( ActivationFactory < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x134,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)ActivationFactory);
LABEL_63:
          v31 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          goto LABEL_65;
        }
        v37 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v36 + 264LL))(v36, v42, &v37);
        v6 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x139,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v9);
          goto LABEL_61;
        }
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 56LL))(v37, &v43) < 0 || !v43 )
        {
          v6 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13C,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)0x8000FFFFLL);
LABEL_61:
          v30 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          goto LABEL_63;
        }
        v40 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, 0LL, &v40);
        v6 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x141,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v10);
LABEL_41:
          v22 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_61;
        }
        v39 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 96LL))(v40, &v39);
        v6 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x144,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v11);
LABEL_39:
          v21 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          goto LABEL_41;
        }
        v35 = 0LL;
        string = 0LL;
        v12 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
        if ( v12 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
          __debugbreak();
        }
        v13 = RoGetActivationFactory(string, &GUID_b07904dd_31f6_452c_a738_fa5a2fda337b, &v35);
        v6 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x14D,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v13);
LABEL_37:
          v20 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          goto LABEL_39;
        }
        v38 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 112LL))(v35, &v38);
        v6 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x150,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v14);
LABEL_35:
          v19 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          goto LABEL_37;
        }
        v34 = 0LL;
        string = 0LL;
        v15 = WindowsCreateStringReference(
                L"Windows.Internal.StateRepository.PackagePolicy",
                0x2Eu,
                &hstringHeader,
                &string);
        if ( v15 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
          __debugbreak();
        }
        v16 = RoGetActivationFactory(string, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v34);
        v6 = v16;
        if ( v16 < 0 )
        {
          v17 = 341LL;
          goto LABEL_33;
        }
        if ( dword_18005BF00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                           + (unsigned int)tls_index)
                                         + 4LL) )
        {
          Init_thread_header(&dword_18005BF00);
          if ( dword_18005BF00 == -1 )
          {
            Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&unk_18005BF08,
              (const WCHAR **)&off_18004AFA8);
            atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__appCategoryString__);
            Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&unk_18005BF28,
              (const WCHAR **)off_18004AFA0);
            atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__gameString__);
            Init_thread_footer(&dword_18005BF00);
          }
        }
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v34 + 264LL))(
                v34,
                v38,
                v39,
                qword_18005BF20,
                *(_QWORD *)&qword_18005BF40,
                v33);
        v6 = v16;
        if ( v16 < 0 )
        {
          v17 = 352LL;
LABEL_33:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v17,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v16);
          v18 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          goto LABEL_35;
        }
        if ( v33[0] )
          *((_DWORD *)this + 38) = 1;
        v23 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v24 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        v25 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        v26 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v27 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v28 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        v29 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        WindowsDeleteString(v42);
        v2 = v41;
      }
    }
  }
  v6 = 0;
LABEL_67:
  if ( v2 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v6;
}
