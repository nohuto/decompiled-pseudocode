/*
 * XREFs of ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x180114810
 * Callers:
 *     ?RegisterApplications@PeoplePaneViewManager@@UEAAJXZ @ 0x180114780 (-RegisterApplications@PeoplePaneViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180116724 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x180116FEC (--$-0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall PeoplePaneViewManager::RegisterApplicationForContactPanel(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        char a3)
{
  unsigned int v5; // eax
  signed int v7; // ebx
  HRESULT StringReference; // eax
  int ActivationFactory; // eax
  HSTRING v10; // rbx
  HRESULT v11; // eax
  HSTRING v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  HSTRING v18; // rbx
  int v19; // eax
  const WCHAR *StringRawBuffer; // rax
  HSTRING v21; // rcx
  HSTRING v22; // rcx
  HSTRING v23; // rcx
  HSTRING v24; // rcx
  HSTRING v25; // rcx
  HSTRING v26; // rbx
  __int64 v27; // rdi
  HRESULT v28; // eax
  HSTRING v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  HSTRING v32; // rcx
  HSTRING v33; // rcx
  HSTRING v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // r9
  HSTRING v37; // rcx
  HSTRING v38; // rcx
  HSTRING v39; // rbx
  __int64 v40; // rsi
  HRESULT v41; // eax
  HSTRING v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  HSTRING v45; // rcx
  HSTRING v46; // rcx
  HSTRING v47; // rbx
  __int64 v48; // rsi
  HRESULT v49; // eax
  HSTRING v50; // rcx
  int v51; // eax
  int v52; // eax
  HSTRING v53; // rbx
  HSTRING v54; // rsi
  const WCHAR *v55; // rax
  int v56; // eax
  HSTRING v57; // rbx
  int v58; // eax
  PCWSTR v59; // rax
  __int64 v60; // r8
  __int64 v61; // r8
  PCWSTR v62; // rax
  __int64 v63; // r8
  HSTRING v64; // rbx
  BYTE *v65; // rax
  unsigned __int64 v66; // rcx
  int v67; // eax
  HSTRING v68; // rbx
  BYTE *v69; // rax
  unsigned __int64 v70; // rcx
  int v71; // eax
  HSTRING v72; // rbx
  BYTE *v73; // rax
  unsigned __int64 v74; // rcx
  int v75; // eax
  HSTRING v76; // rbx
  BYTE *v77; // rax
  unsigned __int64 v78; // rcx
  int v79; // eax
  HSTRING v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  HSTRING v83; // rcx
  HSTRING v84; // rcx
  HSTRING v85; // rcx
  __int64 v86; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING v87; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v88; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v89; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v90; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v91; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v92; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v93; // [rsp+70h] [rbp-98h] BYREF
  HSTRING v94; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v95; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v96; // [rsp+88h] [rbp-80h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+90h] [rbp-78h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+94h] [rbp-74h] BYREF
  __int64 v99; // [rsp+98h] [rbp-70h]
  HSTRING string; // [rsp+A0h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING_HEADER v102; // [rsp+C0h] [rbp-48h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR String2[72]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v99 = -2LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  v5 = ParseApplicationUserModelId(
         a2,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         String2);
  if ( v5 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x474,
             (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
             (const char *)v5);
  v95 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.ExtensionCatalog", 0x23u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v95 = 0LL;
  v7 = RoActivateInstance(string, &v94);
  if ( v7 < 0 )
    goto LABEL_181;
  if ( *(_QWORD *)&GUID_07cee0d8_d555_4d61_9c37_01c194b0f208.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_07cee0d8_d555_4d61_9c37_01c194b0f208.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v95 = v94;
  }
  else
  {
    v7 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v94)(
           v94,
           &GUID_07cee0d8_d555_4d61_9c37_01c194b0f208,
           &v95);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v94 + 16LL))(v94);
  }
  if ( v7 < 0 )
  {
LABEL_181:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x477,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_182;
  }
  LOBYTE(v86) = 0;
  v87 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  StringReference = WindowsCreateStringReference(
                      L"Windows.Internal.StateRepository.ApplicationExtension",
                      0x35u,
                      (HSTRING_HEADER *)&string,
                      (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(
                        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
                        &GUID_78662bbb_1464_4279_b5ff_ffccb2bc6529,
                        &v87);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x480,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_79;
  }
  v91 = 0LL;
  v10 = v87;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.ContactPanel",
          0x14u,
          (HSTRING_HEADER *)&string,
          (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v12 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD, HSTRING *))(*(_QWORD *)v10 + 160LL))(
          v10,
          0LL,
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
          &v91);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = 1158LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_57:
    v33 = v91;
    if ( v91 )
    {
      v91 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_79;
  }
  LODWORD(v93) = 0;
  v13 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v91 + 56LL))(v91, &v93);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = 1161LL;
    goto LABEL_23;
  }
  v15 = 0;
  if ( (_DWORD)v93 )
  {
    while ( 1 )
    {
      v88 = 0LL;
      v16 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, HSTRING *))(*(_QWORD *)v91 + 48LL))(v91, v15, &v88);
      v7 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x48D,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_55;
      }
      v92 = 0LL;
      v17 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v88 + 96LL))(v88, &v92);
      v7 = v17;
      if ( v17 < 0 )
        break;
      v90 = 0LL;
      v18 = v92;
      WindowsDeleteString(0LL);
      v90 = 0LL;
      v19 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v18 + 176LL))(v18, &v90);
      v7 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x493,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v19);
        WindowsDeleteString(v90);
        v90 = 0LL;
        goto LABEL_41;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(v90, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, a2, -1, 1) == 2 )
      {
        LOBYTE(v86) = 1;
        WindowsDeleteString(v90);
        v90 = 0LL;
        v23 = v92;
        if ( v92 )
        {
          v92 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v24 = v88;
        if ( v88 )
        {
          v88 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v24 + 16LL))(v24);
        }
        goto LABEL_45;
      }
      WindowsDeleteString(v90);
      v90 = 0LL;
      v21 = v92;
      if ( v92 )
      {
        v92 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = v88;
      if ( v88 )
      {
        v88 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
      }
      if ( ++v15 >= (unsigned int)v93 )
        goto LABEL_45;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x490,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_41:
    v25 = v92;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_55;
  }
LABEL_45:
  if ( !(_BYTE)v86 )
  {
    v88 = 0LL;
    v26 = v95;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v102, packageFamilyName);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    v28 = WindowsCreateStringReference(
            L"Windows.ContactPanel",
            0x14u,
            (HSTRING_HEADER *)&string,
            (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
    if ( v28 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28);
    v29 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD, HSTRING *))(*(_QWORD *)v26 + 56LL))(
            v26,
            *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
            *(_QWORD *)(v27 + 24),
            &v88);
    v7 = v30;
    if ( v30 < 0 )
    {
      v31 = 1184LL;
LABEL_54:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v31,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v30);
LABEL_55:
      v32 = v88;
      if ( v88 )
      {
        v88 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_57;
    }
    v30 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v88 + 56LL))(v88, &v86);
    v7 = v30;
    if ( v30 < 0 )
    {
      v31 = 1185LL;
      goto LABEL_54;
    }
    v34 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v34 + 16LL))(v34);
    }
  }
  LODWORD(v90) = (_BYTE)v86 == 0;
  v35 = _RegSetKeyValue(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\People\\ContactPanel",
          a2,
          4u,
          (BYTE *)&v90,
          4u);
  v36 = (unsigned __int16)v35 | 0x80070000;
  if ( v35 <= 0 )
    v36 = (unsigned int)v35;
  if ( (v36 & 0x80000000) != 0LL )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4A5,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v36);
  v37 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v38 + 16LL))(v38);
  }
  LOBYTE(v89) = 0;
  v87 = 0LL;
  v39 = v95;
  v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v102, packageFamilyName);
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v41 = WindowsCreateStringReference(
          L"Windows.PeoplePane",
          0x12u,
          (HSTRING_HEADER *)&string,
          (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( v41 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41);
  v42 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD, HSTRING *))(*(_QWORD *)v39 + 56LL))(
          v39,
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
          *(_QWORD *)(v40 + 24),
          &v87);
  v7 = v43;
  if ( v43 >= 0 )
  {
    v43 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v87 + 56LL))(v87, &v89);
    v7 = v43;
    if ( v43 >= 0 )
    {
      v46 = v87;
      if ( v87 )
      {
        v87 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v46 + 16LL))(v46);
      }
      if ( !(_BYTE)v89 )
      {
        v93 = 0LL;
        v47 = v95;
        v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v102, packageFamilyName);
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
        v49 = WindowsCreateStringReference(
                L"Windows.Launch",
                0xEu,
                (HSTRING_HEADER *)&string,
                (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
        if ( v49 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v49);
        v50 = v93;
        if ( v93 )
        {
          v93 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v50 + 16LL))(v50);
        }
        v51 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD, HSTRING *))(*(_QWORD *)v47 + 56LL))(
                v47,
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
                *(_QWORD *)(v48 + 24),
                &v93);
        v7 = v51;
        if ( v51 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x4B5,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v51);
LABEL_175:
          v45 = v93;
          if ( !v93 )
            goto LABEL_182;
          v93 = 0LL;
          goto LABEL_177;
        }
        LOBYTE(v86) = 0;
        while ( (*(int (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v93 + 56LL))(v93, &v86) >= 0 && (_BYTE)v86 )
        {
          v90 = 0LL;
          v52 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v93 + 48LL))(v93, &v90);
          v7 = v52;
          if ( v52 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x4BC,
              (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
              (const char *)(unsigned int)v52);
            goto LABEL_173;
          }
          v87 = 0LL;
          v53 = v90;
          WindowsDeleteString(0LL);
          v87 = 0LL;
          (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v53 + 48LL))(v53, &v87);
          v54 = 0LL;
          string = 0LL;
          *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
          v55 = WindowsGetStringRawBuffer(v87, 0LL);
          if ( CompareStringOrdinal(v55, -1, String2, -1, 0) == 2 )
          {
            if ( a3 )
            {
              v56 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                      (__int64)&string,
                      (__int64)L"SOFTWARE\\Classes\\Extensions\\ContractId\\Windows.ContactPanel\\PackageId\\",
                      0xFFFFFFFFFFFFFFFFuLL);
              v7 = v56;
              if ( v56 < 0 )
              {
                v81 = 1222LL;
LABEL_168:
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)v81,
                  (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                  (const char *)(unsigned int)v56);
                v54 = string;
                goto LABEL_169;
              }
            }
            else
            {
              v56 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                      (__int64)&string,
                      (__int64)L"SOFTWARE\\Classes\\Extensions\\ContractId\\Windows.PeoplePane\\PackageId\\",
                      0xFFFFFFFFFFFFFFFFuLL);
              v7 = v56;
              if ( v56 < 0 )
              {
                v81 = 1226LL;
                goto LABEL_168;
              }
            }
            v94 = 0LL;
            v57 = v90;
            WindowsDeleteString(0LL);
            v94 = 0LL;
            v58 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v57 + 64LL))(v57, &v94);
            v7 = v58;
            if ( v58 < 0 )
            {
              v82 = 1230LL;
              goto LABEL_165;
            }
            v59 = WindowsGetStringRawBuffer(v94, 0LL);
            if ( v59 )
            {
              v60 = -1LL;
              do
                ++v60;
              while ( v59[v60] );
            }
            else
            {
              v60 = 0LL;
            }
            v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                    &string,
                    v59,
                    v60);
            v7 = v58;
            if ( v58 < 0 )
            {
              v82 = 1232LL;
              goto LABEL_165;
            }
            v61 = -1LL;
            do
              ++v61;
            while ( aActivatablecla[v61] );
            v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                    &string,
                    L"\\ActivatableClassId\\",
                    v61);
            v7 = v58;
            if ( v58 < 0 )
            {
              v82 = 1233LL;
              goto LABEL_165;
            }
            v62 = WindowsGetStringRawBuffer(v87, 0LL);
            if ( v62 )
            {
              v63 = -1LL;
              do
                ++v63;
              while ( v62[v63] );
            }
            else
            {
              v63 = 0LL;
            }
            v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                    &string,
                    v62,
                    v63);
            v7 = v58;
            if ( v58 < 0 )
            {
              v82 = 1234LL;
LABEL_165:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v82,
                (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                (const char *)(unsigned int)v58);
              v54 = string;
              goto LABEL_166;
            }
            v96 = 0LL;
            v64 = v90;
            WindowsDeleteString(0LL);
            v96 = 0LL;
            (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v64 + 88LL))(v64, &v96);
            v65 = (BYTE *)WindowsGetStringRawBuffer(v96, 0LL);
            v66 = -1LL;
            do
              ++v66;
            while ( *(_WORD *)&v65[2 * v66] );
            v54 = string;
            if ( v66 >= 0x7FFFFFFF )
              v67 = 534;
            else
              v67 = _RegSetKeyValue(
                      HKEY_CURRENT_USER,
                      (const unsigned __int16 *)string,
                      L"Vendor",
                      1u,
                      v65,
                      2 * (int)v66 + 2);
            v7 = (unsigned __int16)v67 | 0x80070000;
            if ( v67 <= 0 )
              v7 = v67;
            if ( v7 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x4D7,
                (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                (const char *)(unsigned int)v7);
LABEL_160:
              WindowsDeleteString(v96);
              v96 = 0LL;
LABEL_166:
              WindowsDeleteString(v94);
              v94 = 0LL;
LABEL_169:
              if ( v54 )
                CoTaskMemFree(v54);
              WindowsDeleteString(v87);
              v87 = 0LL;
LABEL_173:
              v83 = v90;
              if ( v90 )
              {
                v90 = 0LL;
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v83 + 16LL))(v83);
              }
              goto LABEL_175;
            }
            v91 = 0LL;
            v68 = v90;
            WindowsDeleteString(0LL);
            v91 = 0LL;
            (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v68 + 96LL))(v68, &v91);
            v69 = (BYTE *)WindowsGetStringRawBuffer(v91, 0LL);
            v70 = -1LL;
            do
              ++v70;
            while ( *(_WORD *)&v69[2 * v70] );
            if ( v70 >= 0x7FFFFFFF )
              v71 = 534;
            else
              v71 = _RegSetKeyValue(
                      HKEY_CURRENT_USER,
                      (const unsigned __int16 *)v54,
                      L"Icon",
                      1u,
                      v69,
                      2 * (int)v70 + 2);
            v7 = (unsigned __int16)v71 | 0x80070000;
            if ( v71 <= 0 )
              v7 = v71;
            if ( v7 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x4DC,
                (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                (const char *)(unsigned int)v7);
              goto LABEL_158;
            }
            v92 = 0LL;
            v72 = v90;
            WindowsDeleteString(0LL);
            v92 = 0LL;
            (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v72 + 104LL))(v72, &v92);
            v73 = (BYTE *)WindowsGetStringRawBuffer(v92, 0LL);
            v74 = -1LL;
            do
              ++v74;
            while ( *(_WORD *)&v73[2 * v74] );
            if ( v74 >= 0x7FFFFFFF )
              v75 = 534;
            else
              v75 = _RegSetKeyValue(
                      HKEY_CURRENT_USER,
                      (const unsigned __int16 *)v54,
                      L"DisplayName",
                      1u,
                      v73,
                      2 * (int)v74 + 2);
            v7 = (unsigned __int16)v75 | 0x80070000;
            if ( v75 <= 0 )
              v7 = v75;
            if ( v7 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x4E1,
                (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                (const char *)(unsigned int)v7);
              goto LABEL_156;
            }
            v88 = 0LL;
            v76 = v90;
            WindowsDeleteString(0LL);
            v88 = 0LL;
            (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v76 + 104LL))(v76, &v88);
            v77 = (BYTE *)WindowsGetStringRawBuffer(v88, 0LL);
            v78 = -1LL;
            do
              ++v78;
            while ( *(_WORD *)&v77[2 * v78] );
            if ( v78 >= 0x7FFFFFFF )
              v79 = 534;
            else
              v79 = _RegSetKeyValue(
                      HKEY_CURRENT_USER,
                      (const unsigned __int16 *)v54,
                      L"Description",
                      1u,
                      v77,
                      2 * (int)v78 + 2);
            v7 = (unsigned __int16)v79 | 0x80070000;
            if ( v79 <= 0 )
              v7 = v79;
            if ( v7 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x4E6,
                (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                (const char *)(unsigned int)v7);
              WindowsDeleteString(v88);
              v88 = 0LL;
LABEL_156:
              WindowsDeleteString(v92);
              v92 = 0LL;
LABEL_158:
              WindowsDeleteString(v91);
              v91 = 0LL;
              goto LABEL_160;
            }
            WindowsDeleteString(v88);
            v88 = 0LL;
            WindowsDeleteString(v92);
            v92 = 0LL;
            WindowsDeleteString(v91);
            v91 = 0LL;
            WindowsDeleteString(v96);
            v96 = 0LL;
            WindowsDeleteString(v94);
            v94 = 0LL;
          }
          if ( v54 )
            CoTaskMemFree(v54);
          WindowsDeleteString(v87);
          v87 = 0LL;
          v80 = v90;
          if ( v90 )
          {
            v90 = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v80 + 16LL))(v80);
          }
          (*(void (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v93 + 64LL))(v93, &v86);
        }
        v84 = v93;
        if ( v93 )
        {
          v93 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v84 + 16LL))(v84);
        }
      }
      v7 = 0;
      goto LABEL_182;
    }
    v44 = 1196LL;
  }
  else
  {
    v44 = 1195LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v44,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v43);
LABEL_79:
  v45 = v87;
  if ( v87 )
  {
    v87 = 0LL;
LABEL_177:
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v45 + 16LL))(v45);
  }
LABEL_182:
  v85 = v95;
  if ( v95 )
  {
    v95 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v85 + 16LL))(v85);
  }
  return (unsigned int)v7;
}
