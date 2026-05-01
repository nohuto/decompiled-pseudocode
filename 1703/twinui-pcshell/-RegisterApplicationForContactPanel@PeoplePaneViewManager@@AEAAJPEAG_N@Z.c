/*
 * XREFs of ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x1800EACE0
 * Callers:
 *     ?RegisterApplications@PeoplePaneViewManager@@UEAAJXZ @ 0x1800EAC50 (-RegisterApplications@PeoplePaneViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180081924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008A788 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x18009EF5C (--$-0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800EC13C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall PeoplePaneViewManager::RegisterApplicationForContactPanel(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        char a3)
{
  unsigned int v5; // eax
  signed int v7; // edi
  HSTRING v8; // rbx
  HSTRING_HEADER *v9; // rdi
  HRESULT StringReference; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  HSTRING v16; // rbx
  HSTRING_HEADER *v17; // rdi
  HRESULT v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  HSTRING v21; // rbx
  HSTRING_HEADER *v22; // rdi
  HRESULT v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  PCWSTR StringRawBuffer; // rax
  __int64 v32; // r8
  __int64 v33; // r8
  PCWSTR v34; // rax
  __int64 v35; // r8
  __int64 v36; // rbx
  BYTE *v37; // rax
  unsigned __int64 v38; // rcx
  HSTRING v39; // r14
  int v40; // eax
  __int64 v41; // rbx
  BYTE *v42; // rax
  unsigned __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rbx
  BYTE *v46; // rax
  unsigned __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rbx
  BYTE *v50; // rax
  unsigned __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  HSTRING v59; // rcx
  __int64 v60; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  int v63[2]; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v64; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v65; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v66; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v67; // [rsp+70h] [rbp-98h] BYREF
  HSTRING v68; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v69; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v70; // [rsp+88h] [rbp-80h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+90h] [rbp-78h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+94h] [rbp-74h] BYREF
  __int64 v73; // [rsp+98h] [rbp-70h]
  HSTRING string; // [rsp+A0h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING_HEADER v76; // [rsp+C0h] [rbp-48h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v73 = -2LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  v5 = ParseApplicationUserModelId(
         a2,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId);
  if ( v5 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x38E,
             (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
             (const char *)v5);
  v65 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.ExtensionCatalog", 0x23u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v65 = 0LL;
  v7 = RoActivateInstance(string, &v64);
  if ( v7 < 0
    || (*(_QWORD *)&GUID_07cee0d8_d555_4d61_9c37_01c194b0f208.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_07cee0d8_d555_4d61_9c37_01c194b0f208.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v7 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v64)(
                v64,
                &GUID_07cee0d8_d555_4d61_9c37_01c194b0f208,
                &v65),
         (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v64 + 16LL))(v64),
         v8 = v65)
      : (v8 = v64, v65 = v64),
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x391,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    LOBYTE(v60) = 0;
    v61 = 0LL;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v76, packageFamilyName);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    StringReference = WindowsCreateStringReference(
                        L"Windows.ContactPanel",
                        0x14u,
                        (HSTRING_HEADER *)&string,
                        (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
    if ( StringReference < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    v11 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, PVOID, __int64 *))(*(_QWORD *)v8 + 56LL))(
            v8,
            *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
            v9[1].Reserved.Reserved1,
            &v61);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 919LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_124;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 56LL))(v61, &v60);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 920LL;
      goto LABEL_17;
    }
    v63[0] = (_BYTE)v60 == 0;
    v13 = _RegSetKeyValue(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\People\\ContactPanel",
            a2,
            4u,
            (BYTE *)v63,
            4u);
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = (unsigned int)v13;
    if ( (v14 & 0x80000000) != 0LL )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x39B,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)v14);
    v15 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    LOBYTE(v62) = 0;
    v61 = 0LL;
    v16 = v65;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v76, packageFamilyName);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    v18 = WindowsCreateStringReference(
            L"Windows.PeoplePane",
            0x12u,
            (HSTRING_HEADER *)&string,
            (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
    if ( v18 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    v19 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v11 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, PVOID, __int64 *))(*(_QWORD *)v16 + 56LL))(
            v16,
            *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
            v17[1].Reserved.Reserved1,
            &v61);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 929LL;
      goto LABEL_17;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 56LL))(v61, &v62);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 930LL;
      goto LABEL_17;
    }
    v20 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( !(_BYTE)v62 )
    {
      v61 = 0LL;
      v21 = v65;
      v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v76, packageFamilyName);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
      v23 = WindowsCreateStringReference(
              L"Windows.Launch",
              0xEu,
              (HSTRING_HEADER *)&string,
              (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
      if ( v23 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
      v24 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, PVOID, __int64 *))(*(_QWORD *)v21 + 56LL))(
              v21,
              *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
              v22[1].Reserved.Reserved1,
              &v61);
      v7 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3AB,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v25);
LABEL_124:
        v57 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        }
        goto LABEL_130;
      }
      LOBYTE(v60) = 0;
      while ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 56LL))(v61, &v60) >= 0 )
      {
        if ( !(_BYTE)v60 )
          break;
        *(_QWORD *)v63 = 0LL;
        v26 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v61 + 48LL))(v61, v63);
        v7 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3B2,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v26);
          goto LABEL_122;
        }
        v64 = 0LL;
        v27 = *(_QWORD *)v63;
        WindowsDeleteString(0LL);
        v64 = 0LL;
        (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 48LL))(v27, &v64);
        string = 0LL;
        *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
        if ( a3 )
        {
          v28 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                  (__int64)&string,
                  L"SOFTWARE\\Classes\\Extensions\\ContractId\\Windows.ContactPanel\\PackageId\\",
                  0xFFFFFFFFFFFFFFFFuLL);
          v7 = v28;
          if ( v28 < 0 )
          {
            v54 = 953LL;
LABEL_117:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v54,
              (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
              (const char *)(unsigned int)v28);
            v39 = string;
            goto LABEL_118;
          }
        }
        else
        {
          v28 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                  (__int64)&string,
                  L"SOFTWARE\\Classes\\Extensions\\ContractId\\Windows.PeoplePane\\PackageId\\",
                  0xFFFFFFFFFFFFFFFFuLL);
          v7 = v28;
          if ( v28 < 0 )
          {
            v54 = 957LL;
            goto LABEL_117;
          }
        }
        v70 = 0LL;
        v29 = *(_QWORD *)v63;
        WindowsDeleteString(0LL);
        v70 = 0LL;
        v30 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 64LL))(v29, &v70);
        v7 = v30;
        if ( v30 < 0 )
        {
          v55 = 961LL;
          goto LABEL_114;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(v70, 0LL);
        if ( StringRawBuffer )
        {
          v32 = -1LL;
          do
            ++v32;
          while ( StringRawBuffer[v32] );
        }
        else
        {
          v32 = 0LL;
        }
        v30 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                &string,
                StringRawBuffer,
                v32);
        v7 = v30;
        if ( v30 < 0 )
        {
          v55 = 963LL;
          goto LABEL_114;
        }
        v33 = -1LL;
        do
          ++v33;
        while ( aActivatablecla[v33] );
        v30 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                &string,
                L"\\ActivatableClassId\\",
                v33);
        v7 = v30;
        if ( v30 < 0 )
        {
          v55 = 964LL;
          goto LABEL_114;
        }
        v34 = WindowsGetStringRawBuffer(v64, 0LL);
        if ( v34 )
        {
          v35 = -1LL;
          do
            ++v35;
          while ( v34[v35] );
        }
        else
        {
          v35 = 0LL;
        }
        v30 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                &string,
                v34,
                v35);
        v7 = v30;
        if ( v30 < 0 )
        {
          v55 = 965LL;
LABEL_114:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v55,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v30);
          v39 = string;
          goto LABEL_115;
        }
        v69 = 0LL;
        v36 = *(_QWORD *)v63;
        WindowsDeleteString(0LL);
        v69 = 0LL;
        (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v36 + 88LL))(v36, &v69);
        v37 = (BYTE *)WindowsGetStringRawBuffer(v69, 0LL);
        v38 = -1LL;
        do
          ++v38;
        while ( *(_WORD *)&v37[2 * v38] );
        v39 = string;
        if ( v38 >= 0x7FFFFFFF )
          v40 = 534;
        else
          v40 = _RegSetKeyValue(
                  HKEY_CURRENT_USER,
                  (const unsigned __int16 *)string,
                  L"Vendor",
                  1u,
                  v37,
                  2 * (int)v38 + 2);
        v7 = (unsigned __int16)v40 | 0x80070000;
        if ( v40 <= 0 )
          v7 = v40;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3CA,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v7);
LABEL_109:
          WindowsDeleteString(v69);
          v69 = 0LL;
LABEL_115:
          WindowsDeleteString(v70);
          v70 = 0LL;
LABEL_118:
          if ( v39 )
            CoTaskMemFree(v39);
          WindowsDeleteString(v64);
          v64 = 0LL;
LABEL_122:
          v56 = *(_QWORD *)v63;
          if ( *(_QWORD *)v63 )
          {
            *(_QWORD *)v63 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
          }
          goto LABEL_124;
        }
        v68 = 0LL;
        v41 = *(_QWORD *)v63;
        WindowsDeleteString(0LL);
        v68 = 0LL;
        (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 96LL))(v41, &v68);
        v42 = (BYTE *)WindowsGetStringRawBuffer(v68, 0LL);
        v43 = -1LL;
        do
          ++v43;
        while ( *(_WORD *)&v42[2 * v43] );
        if ( v43 >= 0x7FFFFFFF )
          v44 = 534;
        else
          v44 = _RegSetKeyValue(HKEY_CURRENT_USER, (const unsigned __int16 *)v39, L"Icon", 1u, v42, 2 * (int)v43 + 2);
        v7 = (unsigned __int16)v44 | 0x80070000;
        if ( v44 <= 0 )
          v7 = v44;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3CF,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v7);
          goto LABEL_107;
        }
        v67 = 0LL;
        v45 = *(_QWORD *)v63;
        WindowsDeleteString(0LL);
        v67 = 0LL;
        (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v45 + 104LL))(v45, &v67);
        v46 = (BYTE *)WindowsGetStringRawBuffer(v67, 0LL);
        v47 = -1LL;
        do
          ++v47;
        while ( *(_WORD *)&v46[2 * v47] );
        if ( v47 >= 0x7FFFFFFF )
          v48 = 534;
        else
          v48 = _RegSetKeyValue(
                  HKEY_CURRENT_USER,
                  (const unsigned __int16 *)v39,
                  L"DisplayName",
                  1u,
                  v46,
                  2 * (int)v47 + 2);
        v7 = (unsigned __int16)v48 | 0x80070000;
        if ( v48 <= 0 )
          v7 = v48;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3D4,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v7);
          goto LABEL_105;
        }
        v66 = 0LL;
        v49 = *(_QWORD *)v63;
        WindowsDeleteString(0LL);
        v66 = 0LL;
        (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v49 + 104LL))(v49, &v66);
        v50 = (BYTE *)WindowsGetStringRawBuffer(v66, 0LL);
        v51 = -1LL;
        do
          ++v51;
        while ( *(_WORD *)&v50[2 * v51] );
        if ( v51 >= 0x7FFFFFFF )
          v52 = 534;
        else
          v52 = _RegSetKeyValue(
                  HKEY_CURRENT_USER,
                  (const unsigned __int16 *)v39,
                  L"Description",
                  1u,
                  v50,
                  2 * (int)v51 + 2);
        v7 = (unsigned __int16)v52 | 0x80070000;
        if ( v52 <= 0 )
          v7 = v52;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3D9,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v7);
          WindowsDeleteString(v66);
          v66 = 0LL;
LABEL_105:
          WindowsDeleteString(v67);
          v67 = 0LL;
LABEL_107:
          WindowsDeleteString(v68);
          v68 = 0LL;
          goto LABEL_109;
        }
        WindowsDeleteString(v66);
        v66 = 0LL;
        WindowsDeleteString(v67);
        v67 = 0LL;
        WindowsDeleteString(v68);
        v68 = 0LL;
        WindowsDeleteString(v69);
        v69 = 0LL;
        WindowsDeleteString(v70);
        v70 = 0LL;
        if ( v39 )
          CoTaskMemFree(v39);
        WindowsDeleteString(v64);
        v64 = 0LL;
        v53 = *(_QWORD *)v63;
        if ( *(_QWORD *)v63 )
        {
          *(_QWORD *)v63 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 64LL))(v61, &v60);
      }
      v58 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    v7 = 0;
  }
LABEL_130:
  v59 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v59 + 16LL))(v59);
  }
  return (unsigned int)v7;
}
