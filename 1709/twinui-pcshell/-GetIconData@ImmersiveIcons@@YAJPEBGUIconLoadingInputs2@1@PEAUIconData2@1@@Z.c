/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1801CBB90 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180116724 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801C1FB0 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x1801CAA50 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1801CCC88 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1801DF990 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveIcons::GetIconData(WCHAR *a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 *ppv; // rax
  HRESULT v6; // eax
  int v7; // ebx
  _QWORD *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int16 v14; // ax
  int v15; // eax
  unsigned __int16 **v16; // r8
  PROPVARIANT v17; // rcx
  char *v18; // rbx
  unsigned __int64 v19; // rsi
  char *v20; // r13
  HRESULT v21; // eax
  int v22; // eax
  unsigned __int16 **v23; // r8
  void *v24; // r14
  int PackageFullNameFromAppId; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int16 *v29; // r12
  __int64 v30; // rax
  int v31; // eax
  unsigned __int64 v32; // r9
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // r11
  __int64 v38; // r10
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  void *v43; // r12
  int v44; // eax
  int v45; // eax
  unsigned __int16 *v46; // rsi
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  unsigned __int16 *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  int v53; // eax
  unsigned __int16 *v54; // rcx
  __int64 v55; // rbx
  unsigned __int16 *v56; // rcx
  __int64 v57; // rbx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  void *v61; // rcx
  __int64 v62; // rcx
  unsigned int StagedPackagePathByFullName; // eax
  HRESULT v64; // eax
  int v65; // eax
  __int64 (__fastcall ***v66)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v67; // rcx
  __int64 (__fastcall ***v68)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 *v69; // rcx
  LPVOID v70; // rcx
  __int64 (__fastcall ***v71)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v72; // rcx
  __int64 (__fastcall ***v73)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 *v74; // rcx
  LPVOID v75; // rcx
  int v76; // eax
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  bool v80; // [rsp+40h] [rbp-C0h]
  __int64 *v81; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v82; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v83; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v85; // [rsp+68h] [rbp-98h]
  __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall ***v87)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-88h] BYREF
  LPVOID v88[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v89; // [rsp+90h] [rbp-70h]
  UINT32 pathLength; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID v91; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v92; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall ***v94)(_QWORD, GUID *, __int64 *); // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall ***v95)(_QWORD, GUID *, _QWORD); // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v96; // [rsp+D0h] [rbp-30h]
  PROPVARIANT propvarIn; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-20h]
  WCHAR path[264]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v83 = a2;
  v95 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v95);
  v6 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         a1,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)ppv);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x69,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_170;
  }
  v92 = 0LL;
  v87 = 0LL;
  v7 = (**v95)(v95, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v87);
  pathLength = 1;
  if ( v7 >= 0 )
  {
    v8 = v92;
    v9 = v87;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    }
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), void *, __int64, __int64, GUID *, _QWORD **))(*v9)[10])(
           v9,
           &unk_18023CCD0,
           3LL,
           1LL,
           &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
           &v92);
  }
  v10 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
  }
  if ( v7 >= 0 )
  {
    v12 = v92;
    LODWORD(v89) = 4;
    *(_DWORD *)(a3 + 4) = 0;
    LOWORD(propvarIn) = 0;
    v13 = *v12;
    *(_OWORD *)v88 = PKEY_Tile_Background;
    v7 = (*(__int64 (__fastcall **)(__int64 *, LPVOID *, PROPVARIANT *))(v13 + 40))(v12, v88, &propvarIn);
    v14 = (__int16)propvarIn;
    if ( v7 >= 0 )
    {
      if ( !(_WORD)propvarIn )
        v7 = -2147023728;
      if ( v7 >= 0 )
      {
        *(_DWORD *)(a3 + 4) = 0;
        if ( v14 )
          v7 = PropVariantToUInt32(&propvarIn, (ULONG *)(a3 + 4));
        else
          v7 = -2147023728;
      }
    }
    PropVariantClear(&propvarIn);
    if ( v7 < 0 )
    {
      v11 = 121LL;
      goto LABEL_20;
    }
    propvarIn = 0LL;
    *(_OWORD *)v88 = PKEY_Tile_SmallLogoPath;
    LODWORD(v89) = 2;
    v98 = -1LL;
    v15 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v92, v88, &propvarIn);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7C,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v15);
      v17 = propvarIn;
LABEL_166:
      if ( v17 )
        CoTaskMemFree(v17);
      goto LABEL_168;
    }
    v18 = (char *)propvarIn;
    pv = 0LL;
    v85 = -1LL;
    v86 = -1LL;
    v96 = propvarIn;
    if ( (int)TileUtils::ConvertFileUriToFilePath((TileUtils *)propvarIn, (const unsigned __int16 *)&pv, v16) >= 0 )
    {
      v19 = v85;
      v20 = (char *)pv;
    }
    else
    {
      if ( pv )
        CoTaskMemFree(pv);
      v19 = v98;
      v96 = 0LL;
      v20 = v18;
    }
    if ( !PathIsRelativeW((LPCWSTR)v20) )
    {
      v76 = StringCchCopyW((char *)(a3 + 8), 260LL, v20);
      v7 = v76;
      if ( v76 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xE8,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v76);
LABEL_163:
        if ( v20 )
          CoTaskMemFree(v20);
        v17 = v96;
        goto LABEL_166;
      }
      *(_WORD *)a3 = 0;
LABEL_162:
      v7 = 0;
      goto LABEL_163;
    }
    v91 = 0LL;
    v21 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &v91);
    v7 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8B,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v21);
LABEL_142:
      v70 = v91;
      if ( v91 )
      {
        v91 = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v70 + 16LL))(v70);
      }
      goto LABEL_163;
    }
    LODWORD(v89) = 21;
    *(_OWORD *)v88 = PKEY_AppUserModel_PackageFullName;
    v85 = -1LL;
    v86 = -1LL;
    pv = 0LL;
    v22 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v92, v88, &pv);
    v24 = pv;
    if ( v22 >= 0 )
    {
      if ( !pv )
      {
LABEL_37:
        v85 = -1LL;
        v86 = -1LL;
        PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId((CallerIdentity *)a1, &pv, v23);
        v7 = PackageFullNameFromAppId;
        if ( PackageFullNameFromAppId < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x93,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)PackageFullNameFromAppId);
          v24 = pv;
          goto LABEL_140;
        }
        v24 = pv;
LABEL_40:
        v26 = (*(__int64 (__fastcall **)(LPVOID, void *))(*(_QWORD *)v91 + 40LL))(v91, v24);
        v7 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x96,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v26);
LABEL_140:
          if ( v24 )
            CoTaskMemFree(v24);
          goto LABEL_142;
        }
        v81 = 0LL;
        v27 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64 **))(*(_QWORD *)v91 + 72LL))(
                v91,
                &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
                &v81);
        v7 = v27;
        if ( v27 < 0 )
        {
          v28 = 153LL;
LABEL_55:
          v32 = (unsigned int)v27;
          goto LABEL_56;
        }
        v29 = v83;
        v30 = *v81;
        if ( *((_DWORD *)v83 + 5) )
        {
          v34 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v30 + 112))(v81, v83[4]);
          v7 = v34;
          if ( v34 < 0 )
          {
            v32 = (unsigned int)v34;
            v28 = 164LL;
            goto LABEL_56;
          }
        }
        else
        {
          v31 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *))(v30 + 136))(v81, L"unplated");
          v7 = v31;
          if ( v31 < 0 )
          {
            v32 = (unsigned int)v31;
            v28 = 159LL;
LABEL_56:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v28,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)v32);
LABEL_138:
            v69 = v81;
            if ( v81 )
            {
              v81 = 0LL;
              (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
            }
            goto LABEL_140;
          }
          v33 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v81 + 112))(v81, *v29);
          v7 = v33;
          if ( v33 < 0 )
          {
            v32 = (unsigned int)v33;
            v28 = 160LL;
            goto LABEL_56;
          }
        }
        v35 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v81 + 128))(v81, *((unsigned int *)v29 + 5));
        v7 = v35;
        if ( v35 < 0 )
        {
          v32 = (unsigned int)v35;
          v28 = 167LL;
          goto LABEL_56;
        }
        v36 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)v29 + 4));
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v37 + 120))(v38, v36);
        v7 = v27;
        if ( v27 < 0 )
        {
          v28 = 168LL;
          goto LABEL_55;
        }
        v87 = 0LL;
        v39 = (*(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD))(*(_QWORD *)v91 + 56LL))(
                v91,
                &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
                &v87);
        v7 = v39;
        if ( v39 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xAB,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v39);
LABEL_136:
          v68 = v87;
          if ( v87 )
          {
            v87 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v68)[2])(v68);
          }
          goto LABEL_138;
        }
        v93 = 0LL;
        v40 = (**v87)(v87, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v93);
        v7 = v40;
        if ( v40 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xAE,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v40);
LABEL_134:
          v67 = v93;
          if ( v93 )
          {
            v93 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
          }
          goto LABEL_136;
        }
        pv = 0LL;
        v85 = 0LL;
        v86 = 0LL;
        if ( v19 == -1LL )
        {
          if ( v20 )
          {
            do
              ++v19;
            while ( *(_WORD *)&v20[2 * v19] );
          }
          else
          {
            v19 = 0LL;
          }
        }
        v41 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)&pv,
                (__int64)L"Files\\",
                v19 + 7);
        v7 = v41;
        if ( v41 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB1,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v41);
LABEL_75:
          v43 = pv;
LABEL_132:
          if ( v43 )
            CoTaskMemFree(v43);
          goto LABEL_134;
        }
        if ( v19 == -1LL )
        {
          if ( v20 )
          {
            do
              ++v19;
            while ( *(_WORD *)&v20[2 * v19] );
          }
          else
          {
            v19 = 0LL;
          }
        }
        v42 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                (__int64 *)&pv,
                (__int64)v20,
                v19);
        v7 = v42;
        if ( v42 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB2,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v42);
          goto LABEL_75;
        }
        v43 = pv;
        v94 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *, LPVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v93 + 48LL))(
               v93,
               v81,
               pv,
               &v94) < 0 )
        {
          pathLength = 260;
          StagedPackagePathByFullName = GetStagedPackagePathByFullName((PCWSTR)v24, &pathLength, path);
          if ( StagedPackagePathByFullName )
          {
            v7 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xD9,
                   (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                   (const char *)StagedPackagePathByFullName);
          }
          else
          {
            v64 = PathCchCombine(path, 0x104uLL, path, (PCWSTR)v20);
            v7 = v64;
            if ( v64 >= 0 )
            {
              if ( PathFileExistsW(path) )
              {
                v65 = StringCchCopyW((char *)(a3 + 8), 260LL, (char *)path);
                v7 = v65;
                if ( v65 >= 0 )
                {
                  *(_WORD *)a3 = 0;
LABEL_145:
                  v71 = v94;
                  if ( v94 )
                  {
                    v94 = 0LL;
                    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v71)[2])(v71);
                  }
                  if ( v43 )
                    CoTaskMemFree(v43);
                  v72 = v93;
                  if ( v93 )
                  {
                    v93 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                  }
                  v73 = v87;
                  if ( v87 )
                  {
                    v87 = 0LL;
                    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v73)[2])(v73);
                  }
                  v74 = v81;
                  if ( v81 )
                  {
                    v81 = 0LL;
                    (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                  }
                  if ( v24 )
                    CoTaskMemFree(v24);
                  v75 = v91;
                  if ( v91 )
                  {
                    v91 = 0LL;
                    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v75 + 16LL))(v75);
                  }
                  goto LABEL_162;
                }
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0xDD,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v65);
              }
              else
              {
                v7 = -2147024893;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xDB,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)0x80070003LL);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xDA,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v64);
            }
          }
LABEL_130:
          v66 = v94;
          if ( v94 )
          {
            v94 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v66)[2])(v66);
          }
          goto LABEL_132;
        }
        v82 = 0LL;
        v44 = (**v94)(v94, &GUID_f98ce1cb_901b_41f4_bf42_83d51895e1e2, &v82);
        v7 = v44;
        if ( v44 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB8,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v44);
LABEL_113:
          v60 = v82;
          if ( v82 )
          {
            v82 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
          }
          goto LABEL_130;
        }
        v88[0] = 0LL;
        v88[1] = (LPVOID)-1LL;
        v89 = -1LL;
        v45 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, LPVOID *))(*(_QWORD *)v82 + 64LL))(
                v82,
                L"AlternateForm",
                v88);
        v46 = v83;
        v80 = v45 >= 0;
        if ( v45 >= 0 )
        {
LABEL_98:
          if ( !*((_DWORD *)v46 + 5) )
          {
LABEL_102:
            LOBYTE(pathLength) = 0;
LABEL_103:
            pv = 0LL;
            v85 = -1LL;
            v86 = -1LL;
            v58 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v82 + 32LL))(v82, &pv);
            v7 = v58;
            if ( v58 < 0 )
            {
              v59 = 205LL;
LABEL_107:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v59,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v58);
              if ( pv )
              {
                CoTaskMemFree(pv);
                pv = 0LL;
              }
              v85 = 0LL;
              v86 = 0LL;
LABEL_110:
              if ( v88[0] )
              {
                CoTaskMemFree(v88[0]);
                v88[0] = 0LL;
              }
              v88[1] = 0LL;
              v89 = 0LL;
              goto LABEL_113;
            }
            v58 = StringCchCopyW((char *)(a3 + 8), 260LL, (char *)pv);
            v7 = v58;
            if ( v58 < 0 )
            {
              v59 = 206LL;
              goto LABEL_107;
            }
            v61 = pv;
            *(_BYTE *)a3 = v80;
            *(_BYTE *)(a3 + 1) = pathLength;
            if ( v61 )
            {
              CoTaskMemFree(v61);
              pv = 0LL;
            }
            v85 = 0LL;
            v86 = 0LL;
            if ( v88[0] )
            {
              CoTaskMemFree(v88[0]);
              v88[0] = 0LL;
            }
            v62 = v82;
            v88[1] = 0LL;
            v89 = 0LL;
            if ( v82 )
            {
              v82 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            }
            goto LABEL_145;
          }
LABEL_99:
          v57 = v82;
          if ( v88[0] )
          {
            CoTaskMemFree(v88[0]);
            v88[0] = 0LL;
          }
          v88[1] = (LPVOID)-1LL;
          v89 = -1LL;
          if ( (*(int (__fastcall **)(__int64, const wchar_t *, LPVOID *))(*(_QWORD *)v57 + 64LL))(
                 v57,
                 L"Contrast",
                 v88) >= 0 )
            goto LABEL_103;
          goto LABEL_102;
        }
        if ( *((_DWORD *)v83 + 5) )
          goto LABEL_99;
        v47 = v83[4];
        v83 = 0LL;
        v48 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v81 + 112))(v81, v47);
        if ( v48 >= 0 )
        {
          v50 = v83;
          v51 = v93;
          if ( v83 )
          {
            v83 = 0LL;
            (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v50 + 16LL))(v50);
          }
          v48 = (*(__int64 (__fastcall **)(__int64, __int64 *, void *, unsigned __int16 **))(*(_QWORD *)v51 + 48LL))(
                  v51,
                  v81,
                  v43,
                  &v83);
          if ( v48 >= 0 )
          {
            v52 = v82;
            if ( v82 )
            {
              v82 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
            }
            v53 = (**(__int64 (__fastcall ***)(unsigned __int16 *, GUID *, __int64 *))v83)(
                    v83,
                    &GUID_f98ce1cb_901b_41f4_bf42_83d51895e1e2,
                    &v82);
            v7 = v53;
            if ( v53 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xC5,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v53);
              v54 = v83;
              if ( v83 )
              {
                v83 = 0LL;
                (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v54 + 16LL))(v54);
              }
              goto LABEL_110;
            }
            v55 = v82;
            if ( v88[0] )
            {
              CoTaskMemFree(v88[0]);
              v88[0] = 0LL;
            }
            v88[1] = (LPVOID)-1LL;
            v89 = -1LL;
            v80 = (*(int (__fastcall **)(__int64, const wchar_t *, LPVOID *))(*(_QWORD *)v55 + 64LL))(
                    v55,
                    L"AlternateForm",
                    v88) >= 0;
            goto LABEL_96;
          }
          v49 = 195LL;
        }
        else
        {
          v49 = 194LL;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v49,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v48);
LABEL_96:
        v56 = v83;
        if ( v83 )
        {
          v83 = 0LL;
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v56 + 16LL))(v56);
        }
        goto LABEL_98;
      }
      if ( *(_WORD *)pv )
        goto LABEL_40;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v22);
    }
    if ( v24 )
    {
      CoTaskMemFree(v24);
      pv = 0LL;
    }
    goto LABEL_37;
  }
  v11 = 119LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v7);
LABEL_168:
  v77 = v92;
  if ( v92 )
  {
    v92 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v77 + 16LL))(v77);
  }
LABEL_170:
  v78 = (__int64)v95;
  if ( v95 )
  {
    v95 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
  }
  return (unsigned int)v7;
}
