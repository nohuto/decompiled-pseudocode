/*
 * XREFs of ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180015874
 * Callers:
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A79C (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003F090 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014338 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall JsonDocumentFromGameConfigValues(
        int a1,
        HSTRING a2,
        int a3,
        char a4,
        bool a5,
        bool a6,
        UINT32 length,
        PCNZWCH sourceString,
        HSTRING *a9)
{
  HRESULT v13; // eax
  int v14; // ebx
  HSTRING v15; // rcx
  int v16; // eax
  HRESULT v17; // eax
  int ActivationFactory; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  HRESULT v24; // eax
  _QWORD *v25; // rbx
  __int64 v26; // rbx
  HRESULT v27; // eax
  _QWORD *v28; // rdi
  __int64 v29; // rbx
  HRESULT v30; // eax
  _QWORD *v31; // rbx
  __int64 v32; // rbx
  HRESULT v33; // eax
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  HRESULT v37; // eax
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rbx
  HRESULT v41; // eax
  _QWORD *v42; // rbx
  __int64 v43; // rbx
  HRESULT v44; // eax
  _QWORD *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rbx
  HRESULT v48; // eax
  HRESULT v49; // eax
  __int64 v50; // rdx
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rbx
  HRESULT v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rcx
  __int64 v58; // rcx
  HSTRING v59; // rcx
  _BYTE v61[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v62; // [rsp+40h] [rbp-61h] BYREF
  _QWORD *v63; // [rsp+48h] [rbp-59h] BYREF
  __int64 v64; // [rsp+50h] [rbp-51h] BYREF
  HSTRING v65; // [rsp+58h] [rbp-49h] BYREF
  HSTRING v66[3]; // [rsp+60h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-29h] BYREF
  HSTRING string; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]

  v66[2] = (HSTRING)-2LL;
  v66[1] = a2;
  v65 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    __debugbreak();
  }
  v65 = 0LL;
  v14 = RoActivateInstance(string, v66);
  if ( v14 < 0
    || (*(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v14 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v66[0])(
                 v66[0],
                 &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
                 &v65),
         (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v66[0] + 16LL))(v66[0]),
         v15 = v65)
      : (v15 = v66[0], v65 = v66[0]),
        v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x253,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_117;
  }
  v64 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v15)(
          v15,
          &GUID_c9d9a725_786b_5113_b4b7_9b61764c220b,
          &v64);
  v14 = v16;
  if ( v16 >= 0 )
  {
    v63 = 0LL;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
    if ( v17 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      __debugbreak();
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v63);
    v14 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x25A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_112:
      v57 = v63;
      if ( v63 )
      {
        v63 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v57 + 16LL))(v57);
      }
      goto LABEL_114;
    }
    v20 = 0LL;
    v62 = 0LL;
    v61[0] = 0;
    if ( a3 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v63 + 72LL))(v63, *v63, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 609LL;
        goto LABEL_108;
      }
      v23 = v64;
      string = 0LL;
      v24 = WindowsCreateStringReference(L"MaxCpuCount", 0xBu, &hstringHeader, &string);
      if ( v24 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v23 + 80LL))(
              v23,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 610LL;
        goto LABEL_108;
      }
      v20 = v62;
    }
    if ( a4 )
    {
      v25 = v63;
      if ( v20 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      LOBYTE(v19) = !a5;
      v21 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v25 + 64LL))(v25, v19, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 615LL;
        goto LABEL_108;
      }
      v26 = v64;
      string = 0LL;
      v27 = WindowsCreateStringReference(L"AffinitizeToExclusiveCpus", 0x19u, &hstringHeader, &string);
      if ( v27 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v26 + 80LL))(
              v26,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 616LL;
        goto LABEL_108;
      }
      v20 = v62;
    }
    if ( a6 )
    {
      v28 = v63;
      if ( v20 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      LOBYTE(v19) = a6;
      v21 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v28 + 64LL))(v28, v19, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 621LL;
        goto LABEL_108;
      }
      v29 = v64;
      string = 0LL;
      v30 = WindowsCreateStringReference(L"AutoGameModeEnabled", 0x13u, &hstringHeader, &string);
      if ( v30 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v29 + 80LL))(
              v29,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 622LL;
        goto LABEL_108;
      }
      v20 = v62;
    }
    if ( a1 )
    {
      v31 = v63;
      if ( v20 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v31 + 72LL))(v31, *v31, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 627LL;
        goto LABEL_108;
      }
      v32 = v64;
      string = 0LL;
      v33 = WindowsCreateStringReference(L"PercentGpuTimeAllocatedToGame", 0x1Du, &hstringHeader, &string);
      if ( v33 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v32 + 80LL))(
              v32,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 628LL;
        goto LABEL_108;
      }
      v34 = v63;
      v35 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v34 + 72LL))(v34, *v34, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 630LL;
        goto LABEL_108;
      }
      v36 = v64;
      string = 0LL;
      v37 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToGame", 0x1Fu, &hstringHeader, &string);
      if ( v37 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v36 + 80LL))(
              v36,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 631LL;
        goto LABEL_108;
      }
      v38 = v63;
      v39 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v38 + 72LL))(v38, *v38, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 633LL;
        goto LABEL_108;
      }
      v40 = v64;
      string = 0LL;
      v41 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToSystemCompositor", 0x2Bu, &hstringHeader, &string);
      if ( v41 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v40 + 80LL))(
              v40,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 634LL;
        goto LABEL_108;
      }
      v20 = v62;
    }
    if ( a2 )
    {
      v42 = v63;
      if ( v20 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v42 + 72LL))(v42, *v42, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 642LL;
        goto LABEL_108;
      }
      v43 = v64;
      string = 0LL;
      v44 = WindowsCreateStringReference(L"CpuExclusivityMaskLow", 0x15u, &hstringHeader, &string);
      if ( v44 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v44);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v43 + 80LL))(
              v43,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 643LL;
        goto LABEL_108;
      }
      v45 = v63;
      v46 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v45 + 72LL))(v45, *v45, &v62);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 645LL;
        goto LABEL_108;
      }
      v47 = v64;
      string = 0LL;
      v48 = WindowsCreateStringReference(L"CpuExclusivityMaskHigh", 0x16u, &hstringHeader, &string);
      if ( v48 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v48);
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v47 + 80LL))(
              v47,
              string,
              v62,
              v61);
      v14 = v21;
      if ( v21 < 0 )
      {
        v22 = 646LL;
        goto LABEL_108;
      }
      v20 = v62;
    }
    if ( sourceString && length )
    {
      v66[0] = 0LL;
      WindowsDeleteString(0LL);
      v66[0] = 0LL;
      v49 = WindowsCreateString(sourceString, length, v66);
      v14 = v49;
      if ( v49 < 0 )
      {
        v50 = 652LL;
LABEL_99:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v50,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v49);
        WindowsDeleteString(v66[0]);
        goto LABEL_110;
      }
      v51 = v63;
      v52 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      v49 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64 *))(*v51 + 80LL))(v51, v66[0], &v62);
      v14 = v49;
      if ( v49 < 0 )
      {
        v50 = 654LL;
        goto LABEL_99;
      }
      v53 = v64;
      string = 0LL;
      v54 = WindowsCreateStringReference(L"RelatedProcessNames", 0x13u, &hstringHeader, &string);
      if ( v54 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v54);
      v49 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v53 + 80LL))(
              v53,
              string,
              v62,
              v61);
      v14 = v49;
      if ( v49 < 0 )
      {
        v50 = 655LL;
        goto LABEL_99;
      }
      WindowsDeleteString(v66[0]);
      v20 = v62;
    }
    if ( v20 )
    {
      v62 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v55 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v21 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v65)(
            v65,
            &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e,
            &v62);
    v14 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v62 + 56LL))(v62, a9);
      v14 = v21;
      if ( v21 >= 0 )
      {
        v14 = 0;
LABEL_110:
        v56 = v62;
        if ( v62 )
        {
          v62 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
        }
        goto LABEL_112;
      }
      v22 = 661LL;
    }
    else
    {
      v22 = 660LL;
    }
LABEL_108:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v22,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_110;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x256,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v16);
LABEL_114:
  v58 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
LABEL_117:
  v59 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v59 + 16LL))(v59);
  }
  return (unsigned int)v14;
}
