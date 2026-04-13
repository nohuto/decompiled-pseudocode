/*
 * XREFs of ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180057C60
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002EC90 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x18001AD24 (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x1800582C0 (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180058378 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        unsigned __int16 *a2)
{
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  GUID **v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  const WCHAR *StringRawBuffer; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  PCWSTR v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  const unsigned __int16 *v26; // rbx
  const unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  _WORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 (__fastcall ***v37)(_QWORD, GUID *, _QWORD *); // rcx
  char v39[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v40; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-39h] BYREF
  __int64 v42; // [rsp+48h] [rbp-31h] BYREF
  __int64 v43; // [rsp+50h] [rbp-29h] BYREF
  HSTRING v44; // [rsp+58h] [rbp-21h] BYREF
  HSTRING v45; // [rsp+60h] [rbp-19h] BYREF
  __int64 v46; // [rsp+68h] [rbp-11h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-9h] BYREF
  __int64 v48; // [rsp+78h] [rbp-1h] BYREF
  HSTRING v49; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v50; // [rsp+88h] [rbp+Fh] BYREF
  HSTRING v51; // [rsp+90h] [rbp+17h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v44 = (HSTRING)a2;
  v41 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v41);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_89;
  }
  v5 = v41;
  v43 = 0LL;
  v6 = (GUID **)Windows::Internal::StringReference::StringReference((__int64)&string, (const WCHAR **)&v44);
  v7 = (*v5)[6](v5, *v6, &v43);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v51 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v43 + 136LL))(v43, &v51);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 45LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)v9);
LABEL_85:
      if ( v51 )
        WindowsDeleteString(v51);
      goto LABEL_87;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v51, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"creative-ms", -1, 1) != 2 )
    {
      v4 = -2147024809;
      v10 = 46LL;
      v9 = 2147942487LL;
      goto LABEL_11;
    }
    v50 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v43 + 104LL))(v43, &v50);
    v4 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v12);
LABEL_83:
      if ( v50 )
        WindowsDeleteString(v50);
      goto LABEL_85;
    }
    v48 = 0LL;
    v13 = (**v41)(v41, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v48);
    v4 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
        (const char *)(unsigned int)v13);
LABEL_81:
      v35 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      goto LABEL_83;
    }
    v49 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v48 + 48LL))(v48, v50, &v49);
    v4 = v14;
    if ( v14 >= 0 )
    {
      v16 = WindowsGetStringRawBuffer(v49, 0LL);
      v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              this,
              v16,
              -1LL);
      v4 = v14;
      if ( v14 >= 0 )
      {
        v17 = *((_QWORD *)this + 1);
        if ( v17 == -1 )
        {
          if ( *(_QWORD *)this )
          {
            v17 = -1LL;
            do
              ++v17;
            while ( *(_WORD *)(*(_QWORD *)this + 2 * v17) );
          }
          else
          {
            v17 = 0LL;
          }
          *((_QWORD *)this + 1) = v17;
        }
        for ( ; v17; --v17 )
        {
          if ( !wcschr(L"/", *(_WORD *)(*(_QWORD *)this + 2 * v17 - 2)) )
            break;
        }
        if ( v17 != *((_QWORD *)this + 1) )
        {
          *(_WORD *)(*(_QWORD *)this + 2 * v17) = 0;
          *((_QWORD *)this + 1) = v17;
        }
        v47 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v43 + 120LL))(
                v43,
                &v47);
        v4 = v18;
        if ( v18 >= 0 )
        {
          v46 = 0LL;
          v19 = (**v47)(v47, &GUID_876be83b_7218_5bfb_a169_83152ef7e146, &v46);
          v4 = v19;
          if ( v19 >= 0 )
          {
            v42 = 0LL;
            v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, &v42);
            v4 = v20;
            if ( v20 >= 0 )
            {
              v23 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 56LL))(v42, v39);
              v4 = v23;
              if ( v23 >= 0 )
              {
                while ( v39[0] )
                {
                  v40 = 0LL;
                  v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, &v40);
                  v4 = v24;
                  if ( v24 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x49,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      (const char *)(unsigned int)v24);
                    goto LABEL_67;
                  }
                  v44 = 0LL;
                  v45 = 0LL;
                  v25 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v40 + 48LL))(v40, &v44);
                  v4 = v25;
                  if ( v25 < 0 )
                  {
                    v30 = 77LL;
LABEL_62:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v30,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
                      (const char *)(unsigned int)v25);
                    if ( v45 )
                      WindowsDeleteString(v45);
                    if ( v44 )
                      WindowsDeleteString(v44);
LABEL_67:
                    v31 = v40;
                    if ( v40 )
                    {
                      v40 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                    }
                    goto LABEL_73;
                  }
                  v25 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v40 + 56LL))(v40, &v45);
                  v4 = v25;
                  if ( v25 < 0 )
                  {
                    v30 = 78LL;
                    goto LABEL_62;
                  }
                  v26 = WindowsGetStringRawBuffer(v45, 0LL);
                  v27 = WindowsGetStringRawBuffer(v44, 0LL);
                  v25 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(this, v27, v26);
                  v4 = v25;
                  if ( v25 < 0 )
                  {
                    v30 = 79LL;
                    goto LABEL_62;
                  }
                  v25 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 64LL))(v42, v39);
                  v4 = v25;
                  if ( v25 < 0 )
                  {
                    v30 = 81LL;
                    goto LABEL_62;
                  }
                  if ( v45 )
                    WindowsDeleteString(v45);
                  if ( v44 )
                    WindowsDeleteString(v44);
                  v28 = v40;
                  if ( v40 )
                  {
                    v40 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                  }
                }
                if ( *(_QWORD *)this && **(_WORD **)this )
                {
                  v29 = (_WORD *)*((_QWORD *)this + 3);
                  if ( v29 && *v29 )
                  {
                    v4 = 0;
                    goto LABEL_73;
                  }
                  v22 = 86LL;
                }
                else
                {
                  v22 = 85LL;
                }
                v4 = -2147024809;
                v21 = 2147942487LL;
              }
              else
              {
                v21 = (unsigned int)v23;
                v22 = 69LL;
              }
            }
            else
            {
              v21 = (unsigned int)v20;
              v22 = 67LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)v21);
LABEL_73:
            v32 = v42;
            if ( v42 )
            {
              v42 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x40,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
              (const char *)(unsigned int)v19);
          }
          v33 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
            (const char *)(unsigned int)v18);
        }
        v34 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v34)[2])(v34);
        }
        goto LABEL_79;
      }
      v15 = 57LL;
    }
    else
    {
      v15 = 56LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
      (const char *)(unsigned int)v14);
LABEL_79:
    if ( v49 )
      WindowsDeleteString(v49);
    goto LABEL_81;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_87:
  v36 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
LABEL_89:
  v37 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v37)[2])(v37);
  }
  return v4;
}
