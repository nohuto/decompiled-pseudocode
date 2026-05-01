/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x180303104
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180080350 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800F7C70 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x18027AA00 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1802FD8FC (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180302464 (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1803024A0 (--$GetFailIfEmpty@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tag.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1803024D0 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x180302D58 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x180303E14 (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x18030C530 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ImmersiveIcons::GetIconData(WCHAR *a1, unsigned __int16 *a2, __int64 a3)
{
  HRESULT v6; // eax
  signed int FailIf; // ebx
  int v8; // eax
  int v9; // eax
  unsigned __int16 **v10; // r8
  size_t *v11; // rbx
  HRESULT v12; // eax
  int v13; // eax
  const WCHAR *v14; // r15
  unsigned __int16 **v15; // r8
  int PackageFullNameFromAppId; // eax
  int v17; // eax
  LPVOID v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // r11
  __int64 v27; // r10
  int v28; // eax
  LPVOID v29; // rbx
  int v30; // eax
  int v31; // eax
  char *v32; // r9
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r12
  char *v37; // rax
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  char *v41; // rdx
  __int16 v42; // ax
  char *v43; // rax
  int v44; // eax
  __int64 v45; // rbx
  char *v46; // rdi
  int v47; // eax
  __int64 v48; // rbx
  bool v49; // si
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rbx
  int v53; // eax
  int v54; // eax
  __int64 v55; // rbx
  __int64 v56; // rbx
  char v57; // di
  __int64 v58; // rbx
  int v59; // eax
  __int64 v60; // rdx
  unsigned int StagedPackagePathByFullName; // eax
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r9
  int v65; // eax
  __int64 *v67; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 pathLength[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B0h]
  LPVOID v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+68h] [rbp-98h] BYREF
  __int64 v73; // [rsp+70h] [rbp-90h] BYREF
  __int64 v74; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h] BYREF
  void *ppv; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR packageFullName; // [rsp+98h] [rbp-68h] BYREF
  __int64 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  PROPVARIANT propvarIn; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  LPCWSTR pszPath; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v87; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-18h]
  __int64 v89; // [rsp+F0h] [rbp-10h]
  char *v90; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v91; // [rsp+100h] [rbp+0h]
  unsigned __int64 v92; // [rsp+108h] [rbp+8h]
  size_t path[66]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v6 = SHCreateItemInKnownFolder(&FOLDERID_AppsFolder, 0x4000u, a1, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  FailIf = v6;
  if ( v6 >= 0 )
  {
    v76 = 0LL;
    v8 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v76, ppv);
    FailIf = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v8);
LABEL_123:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v76);
      goto LABEL_124;
    }
    *(_DWORD *)(a3 + 4) = 0;
    v69 = PKEY_Tile_Background;
    LOWORD(propvarIn) = 0;
    LODWORD(v70) = 4;
    FailIf = wil::PropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(
               &v76,
               (__int64)&v69,
               &propvarIn);
    if ( FailIf >= 0 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      if ( (_WORD)propvarIn )
        FailIf = PropVariantToUInt32(&propvarIn, (ULONG *)(a3 + 4));
      else
        FailIf = -2147023728;
    }
    PropVariantClear(&propvarIn);
    if ( FailIf < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)FailIf);
      goto LABEL_123;
    }
    propvarIn = 0LL;
    v69 = PKEY_Tile_SmallLogoPath;
    v82 = 0LL;
    v83 = 0LL;
    LODWORD(v70) = 2;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
    v82 = -1LL;
    v83 = -1LL;
    v9 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v76, &v69, &propvarIn);
    FailIf = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v9);
LABEL_122:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&propvarIn);
      goto LABEL_123;
    }
    pszPath = 0LL;
    v85 = 0LL;
    v86 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
    v85 = -1LL;
    v86 = -1LL;
    if ( (int)TileUtils::ConvertFileUriToFilePath((LPCWSTR)propvarIn, (const unsigned __int16 *)&pszPath, v10) < 0 )
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
        &pszPath,
        (__int64 *)&propvarIn);
    v11 = (size_t *)pszPath;
    if ( !PathIsRelativeW(pszPath) )
    {
      v65 = StringCchCopyW((unsigned __int16 *)(a3 + 8), 0x104uLL, v11);
      FailIf = v65;
      if ( v65 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v65);
        goto LABEL_121;
      }
      *(_WORD *)a3 = 0;
LABEL_120:
      FailIf = 0;
      goto LABEL_121;
    }
    v71 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
    v12 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &v71);
    FailIf = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x89,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
LABEL_121:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&pszPath);
      goto LABEL_122;
    }
    packageFullName = 0LL;
    v69 = PKEY_AppUserModel_PackageFullName;
    v79 = 0LL;
    v80 = 0LL;
    LODWORD(v70) = 21;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&packageFullName);
    v79 = -1LL;
    v80 = -1LL;
    v13 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v76, &v69, &packageFullName);
    if ( v13 >= 0 )
    {
      v14 = packageFullName;
      if ( packageFullName && *packageFullName )
        goto LABEL_25;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        141LL,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v13);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&packageFullName);
    v79 = -1LL;
    v80 = -1LL;
    PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(
                                 (CallerIdentity *)a1,
                                 (void **)&packageFullName,
                                 v15);
    FailIf = PackageFullNameFromAppId;
    if ( PackageFullNameFromAppId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)PackageFullNameFromAppId);
LABEL_61:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&packageFullName);
      goto LABEL_62;
    }
    v14 = packageFullName;
LABEL_25:
    v17 = (*(__int64 (__fastcall **)(LPVOID, const WCHAR *))(*(_QWORD *)v71 + 40LL))(v71, v14);
    FailIf = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_61;
    }
    v18 = v71;
    v67 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
    v19 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64 **))(*(_QWORD *)v18 + 72LL))(
            v18,
            &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
            &v67);
    FailIf = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v19);
LABEL_60:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
      goto LABEL_61;
    }
    v20 = *v67;
    if ( *((_DWORD *)a2 + 5) )
    {
      v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v20 + 112))(v67, a2[4]);
      FailIf = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA2,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v23);
        goto LABEL_60;
      }
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *))(v20 + 136))(v67, L"unplated");
      FailIf = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9D,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v21);
        goto LABEL_60;
      }
      v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v67 + 112))(v67, *a2);
      FailIf = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v22);
        goto LABEL_60;
      }
    }
    v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v67 + 128))(v67, *((unsigned int *)a2 + 5));
    FailIf = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v24);
      goto LABEL_60;
    }
    v25 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)a2 + 4));
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v26 + 120))(v27, v25);
    FailIf = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v28);
      goto LABEL_60;
    }
    v29 = v71;
    v75 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
    v30 = (*(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD))(*(_QWORD *)v29 + 56LL))(
            v29,
            &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
            &v75);
    FailIf = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v30);
LABEL_59:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
      goto LABEL_60;
    }
    v72 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
    v31 = (**v75)(v75, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v72);
    FailIf = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v31);
LABEL_58:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
      goto LABEL_59;
    }
    v90 = 0LL;
    v91 = 0LL;
    v92 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v33 = 6LL;
    v34 = v85 + 7;
    if ( v85 == -8 )
    {
      v34 = 6LL;
    }
    else if ( v34 < 6 )
    {
      v33 = v85 + 7;
    }
    v35 = v34 + 1;
    v36 = -1LL;
    if ( v34 + 1 >= v34 )
      v36 = v34 + 1;
    FailIf = v34 + 1 < v34 ? 0x80070216 : 0;
    if ( v35 >= v34 )
    {
      if ( !is_mul_ok(v36, 2uLL) )
      {
        FailIf = -2147024362;
        goto LABEL_55;
      }
      FailIf = 0;
      v37 = (char *)CoTaskMemAlloc(2 * v36);
      v32 = v37;
      if ( !v37 )
      {
        FailIf = -2147024882;
        goto LABEL_55;
      }
      v92 = v36;
      *(_WORD *)v37 = 0;
      v90 = v37;
    }
    if ( FailIf >= 0 )
    {
      if ( v35 - 1 > 0x7FFFFFFE )
      {
        if ( !v35 )
          goto LABEL_76;
      }
      else if ( v33 <= 0x7FFFFFFE )
      {
        v40 = v33 - v35;
        v41 = (char *)((char *)L"Files\\" - v32);
        do
        {
          if ( !(v35 + v40) )
            break;
          v42 = *(_WORD *)&v41[(_QWORD)v32];
          if ( !v42 )
            break;
          *(_WORD *)v32 = v42;
          v32 += 2;
          --v35;
        }
        while ( v35 );
        v43 = v32 - 2;
        if ( v35 )
          v43 = v32;
        *(_WORD *)v43 = 0;
LABEL_76:
        v91 = v33;
        v44 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                (__int64)&v90,
                (__int64 *)&pszPath);
        FailIf = v44;
        if ( v44 < 0 )
        {
          v38 = (unsigned int)v44;
          v39 = 176LL;
          goto LABEL_56;
        }
        v45 = v72;
        v74 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
        v46 = v90;
        if ( (*(int (__fastcall **)(__int64, __int64 *, char *, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, v67, v90, &v74) >= 0 )
        {
          *(_QWORD *)pathLength = 0LL;
          v47 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v74, (__int64 *)pathLength);
          FailIf = v47;
          if ( v47 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB6,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v47);
LABEL_102:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pathLength);
LABEL_114:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
            goto LABEL_57;
          }
          v48 = *(_QWORD *)pathLength;
          v69 = 0uLL;
          v70 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v69);
          *((_QWORD *)&v69 + 1) = -1LL;
          v70 = -1LL;
          if ( (*(int (__fastcall **)(__int64, const wchar_t *, __int128 *))(*(_QWORD *)v48 + 64LL))(
                 v48,
                 L"AlternateForm",
                 &v69) < 0 )
          {
            v49 = 0;
            if ( *((_DWORD *)a2 + 5) )
            {
LABEL_93:
              v56 = *(_QWORD *)pathLength;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v69);
              *((_QWORD *)&v69 + 1) = -1LL;
              v70 = -1LL;
              if ( (*(int (__fastcall **)(__int64, const wchar_t *, __int128 *))(*(_QWORD *)v56 + 64LL))(
                     v56,
                     L"Contrast",
                     &v69) >= 0 )
              {
                v57 = 1;
LABEL_96:
                v58 = *(_QWORD *)pathLength;
                v87 = 0LL;
                v88 = 0LL;
                v89 = 0LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v87);
                v88 = -1LL;
                v89 = -1LL;
                v59 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v58 + 32LL))(v58, &v87);
                FailIf = v59;
                if ( v59 < 0 )
                {
                  v60 = 203LL;
LABEL_100:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v60,
                    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                    (const char *)(unsigned int)v59);
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v87);
                  goto LABEL_101;
                }
                v59 = StringCchCopyW((unsigned __int16 *)(a3 + 8), 0x104uLL, (size_t *)v87);
                FailIf = v59;
                if ( v59 < 0 )
                {
                  v60 = 204LL;
                  goto LABEL_100;
                }
                *(_BYTE *)a3 = v49;
                *(_BYTE *)(a3 + 1) = v57;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v87);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v69);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pathLength);
                goto LABEL_116;
              }
LABEL_95:
              v57 = 0;
              goto LABEL_96;
            }
            v50 = a2[4];
            v73 = 0LL;
            v51 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v67 + 112))(v67, v50);
            if ( v51 >= 0 )
            {
              v52 = v72;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v73);
              v53 = (*(__int64 (__fastcall **)(__int64, __int64 *, char *, __int64 *))(*(_QWORD *)v52 + 48LL))(
                      v52,
                      v67,
                      v46,
                      &v73);
              if ( v53 >= 0 )
              {
                v54 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v73, (__int64 *)pathLength);
                FailIf = v54;
                if ( v54 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xC3,
                    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                    (const char *)(unsigned int)v54);
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v73);
LABEL_101:
                  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v69);
                  goto LABEL_102;
                }
                v55 = *(_QWORD *)pathLength;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v69);
                *((_QWORD *)&v69 + 1) = -1LL;
                v70 = -1LL;
                v49 = (*(int (__fastcall **)(__int64, const wchar_t *, __int128 *))(*(_QWORD *)v55 + 64LL))(
                        v55,
                        L"AlternateForm",
                        &v69) >= 0;
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  193LL,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v53);
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                192LL,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v51);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v73);
          }
          else
          {
            v49 = 1;
          }
          if ( !*((_DWORD *)a2 + 5) )
            goto LABEL_95;
          goto LABEL_93;
        }
        pathLength[0] = 260;
        StagedPackagePathByFullName = GetStagedPackagePathByFullName(v14, pathLength, (PWSTR)path);
        if ( StagedPackagePathByFullName )
        {
          FailIf = wil::details::in1diag3::Return_Win32(
                     retaddr,
                     215LL,
                     (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                     (const char *)StagedPackagePathByFullName);
          goto LABEL_114;
        }
        v62 = PathCchCombine((PWSTR)path, 0x104uLL, (PCWSTR)path, pszPath);
        FailIf = v62;
        if ( v62 >= 0 )
        {
          if ( !PathFileExistsW((LPCWSTR)path) )
          {
            FailIf = -2147024893;
            v63 = 217LL;
            v64 = 2147942403LL;
LABEL_113:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v63,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)v64);
            goto LABEL_114;
          }
          v62 = StringCchCopyW((unsigned __int16 *)(a3 + 8), 0x104uLL, path);
          FailIf = v62;
          if ( v62 >= 0 )
          {
            *(_WORD *)a3 = 0;
LABEL_116:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v74);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v90);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v75);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&packageFullName);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
            goto LABEL_120;
          }
          v63 = 219LL;
        }
        else
        {
          v63 = 216LL;
        }
        v64 = (unsigned int)v62;
        goto LABEL_113;
      }
      *(_WORD *)v32 = 0;
      goto LABEL_76;
    }
LABEL_55:
    v38 = (unsigned int)FailIf;
    v39 = 175LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)v38);
LABEL_57:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v90);
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x67,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v6);
LABEL_124:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)FailIf;
}
