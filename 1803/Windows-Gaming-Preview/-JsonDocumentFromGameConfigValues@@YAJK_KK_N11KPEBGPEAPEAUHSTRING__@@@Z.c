/*
 * XREFs of ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180015FCC
 * Callers:
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003B4E4 (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BDE0 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014928 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
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
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  HRESULT v23; // eax
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  HRESULT v27; // eax
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rbx
  HRESULT v31; // eax
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rbx
  HRESULT v35; // eax
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rbx
  HRESULT v39; // eax
  _QWORD *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rbx
  HRESULT v43; // eax
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rbx
  HRESULT v47; // eax
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rbx
  HRESULT v51; // eax
  HRESULT v52; // eax
  __int64 v53; // rdx
  _QWORD *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rbx
  HRESULT v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  __int64 v62; // rcx
  HSTRING v63; // rcx
  _BYTE v65[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v66; // [rsp+40h] [rbp-61h] BYREF
  _QWORD *v67; // [rsp+48h] [rbp-59h] BYREF
  __int64 v68; // [rsp+50h] [rbp-51h] BYREF
  HSTRING v69; // [rsp+58h] [rbp-49h] BYREF
  HSTRING v70[3]; // [rsp+60h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-29h] BYREF
  HSTRING string; // [rsp+90h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]

  v70[2] = (HSTRING)-2LL;
  v70[1] = a2;
  v69 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_106;
  }
  v69 = 0LL;
  v14 = RoActivateInstance(string, v70);
  if ( v14 < 0
    || (*(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v14 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v70[0])(
                 v70[0],
                 &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
                 &v69),
         (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v70[0] + 16LL))(v70[0]),
         v15 = v69)
      : (v15 = v70[0], v69 = v70[0]),
        v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_102;
  }
  v68 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v15)(
          v15,
          &GUID_c9d9a725_786b_5113_b4b7_9b61764c220b,
          &v68);
  v14 = v16;
  if ( v16 >= 0 )
  {
    v67 = 0LL;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
    if ( v17 >= 0 )
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v67);
      v14 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25F,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)ActivationFactory);
LABEL_97:
        v61 = v67;
        if ( v67 )
        {
          v67 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v61 + 16LL))(v61);
        }
        goto LABEL_99;
      }
      v66 = 0LL;
      v65[0] = 0;
      if ( !a3 )
        goto LABEL_19;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v67 + 72LL))(v67, *v67, &v66);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 614LL;
        goto LABEL_93;
      }
      v22 = v68;
      string = 0LL;
      v23 = WindowsCreateStringReference(L"MaxCpuCount", 0xBu, &hstringHeader, &string);
      if ( v23 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v22 + 80LL))(
                v22,
                string,
                v66,
                v65);
        v14 = v20;
        if ( v20 < 0 )
        {
          v21 = 615LL;
          goto LABEL_93;
        }
LABEL_19:
        if ( a4 )
        {
          v24 = v67;
          v25 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          LOBYTE(v19) = !a5;
          v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v24 + 64LL))(v24, v19, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 620LL;
            goto LABEL_93;
          }
          v26 = v68;
          string = 0LL;
          v27 = WindowsCreateStringReference(L"AffinitizeToExclusiveCpus", 0x19u, &hstringHeader, &string);
          if ( v27 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
            __debugbreak();
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v26 + 80LL))(
                  v26,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 621LL;
            goto LABEL_93;
          }
        }
        if ( a6 )
        {
          v28 = v67;
          v29 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          LOBYTE(v19) = a6;
          v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v28 + 64LL))(v28, v19, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 626LL;
            goto LABEL_93;
          }
          v30 = v68;
          string = 0LL;
          v31 = WindowsCreateStringReference(L"AutoGameModeEnabled", 0x13u, &hstringHeader, &string);
          if ( v31 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31);
            __debugbreak();
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v30 + 80LL))(
                  v30,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 627LL;
            goto LABEL_93;
          }
        }
        if ( a1 )
        {
          v32 = v67;
          v33 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v32 + 72LL))(v32, *v32, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 632LL;
            goto LABEL_93;
          }
          v34 = v68;
          string = 0LL;
          v35 = WindowsCreateStringReference(L"PercentGpuTimeAllocatedToGame", 0x1Du, &hstringHeader, &string);
          if ( v35 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35);
            __debugbreak();
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v34 + 80LL))(
                  v34,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 633LL;
            goto LABEL_93;
          }
          v36 = v67;
          v37 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v36 + 72LL))(v36, *v36, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 635LL;
            goto LABEL_93;
          }
          v38 = v68;
          string = 0LL;
          v39 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToGame", 0x1Fu, &hstringHeader, &string);
          if ( v39 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39);
            __debugbreak();
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v38 + 80LL))(
                  v38,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 636LL;
            goto LABEL_93;
          }
          v40 = v67;
          v41 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v40 + 72LL))(v40, *v40, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 638LL;
            goto LABEL_93;
          }
          v42 = v68;
          string = 0LL;
          v43 = WindowsCreateStringReference(
                  L"PercentGpuMemoryAllocatedToSystemCompositor",
                  0x2Bu,
                  &hstringHeader,
                  &string);
          if ( v43 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v43);
            __debugbreak();
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v42 + 80LL))(
                  v42,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 639LL;
            goto LABEL_93;
          }
        }
        if ( a2 )
        {
          v44 = v67;
          v45 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v44 + 72LL))(v44, *v44, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 647LL;
            goto LABEL_93;
          }
          v46 = v68;
          string = 0LL;
          v47 = WindowsCreateStringReference(L"CpuExclusivityMaskLow", 0x15u, &hstringHeader, &string);
          if ( v47 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v47);
            __debugbreak();
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v46 + 80LL))(
                  v46,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 648LL;
            goto LABEL_93;
          }
          v48 = v67;
          v49 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v48 + 72LL))(v48, *v48, &v66);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 650LL;
            goto LABEL_93;
          }
          v50 = v68;
          string = 0LL;
          v51 = WindowsCreateStringReference(L"CpuExclusivityMaskHigh", 0x16u, &hstringHeader, &string);
          if ( v51 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v51);
            goto LABEL_115;
          }
          v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v50 + 80LL))(
                  v50,
                  string,
                  v66,
                  v65);
          v14 = v20;
          if ( v20 < 0 )
          {
            v21 = 651LL;
            goto LABEL_93;
          }
        }
        if ( !sourceString || !length )
          goto LABEL_85;
        v70[0] = 0LL;
        WindowsDeleteString(0LL);
        v70[0] = 0LL;
        v52 = WindowsCreateString(sourceString, length, v70);
        v14 = v52;
        if ( v52 < 0 )
        {
          v53 = 657LL;
LABEL_83:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v53,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)v52);
          WindowsDeleteString(v70[0]);
          goto LABEL_95;
        }
        v54 = v67;
        v55 = v66;
        if ( v66 )
        {
          v66 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        }
        v52 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, __int64 *))(*v54 + 80LL))(v54, v70[0], &v66);
        v14 = v52;
        if ( v52 < 0 )
        {
          v53 = 659LL;
          goto LABEL_83;
        }
        v56 = v68;
        string = 0LL;
        v57 = WindowsCreateStringReference(L"RelatedProcessNames", 0x13u, &hstringHeader, &string);
        if ( v57 >= 0 )
        {
          v52 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v56 + 80LL))(
                  v56,
                  string,
                  v66,
                  v65);
          v14 = v52;
          if ( v52 < 0 )
          {
            v53 = 660LL;
            goto LABEL_83;
          }
          WindowsDeleteString(v70[0]);
LABEL_85:
          v58 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
          }
          v59 = v66;
          if ( v66 )
          {
            v66 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          }
          v20 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v69)(
                  v69,
                  &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e,
                  &v66);
          v14 = v20;
          if ( v20 >= 0 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 56LL))(v66, a9);
            v14 = v20;
            if ( v20 >= 0 )
            {
              v14 = 0;
LABEL_95:
              v60 = v66;
              if ( v66 )
              {
                v66 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
              }
              goto LABEL_97;
            }
            v21 = 666LL;
          }
          else
          {
            v21 = 665LL;
          }
LABEL_93:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)v20);
          goto LABEL_95;
        }
LABEL_115:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v57);
        JUMPOUT(0x180016979LL);
      }
LABEL_107:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
      __debugbreak();
    }
LABEL_106:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    goto LABEL_107;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25B,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v16);
LABEL_99:
  v62 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  }
LABEL_102:
  v63 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v63 + 16LL))(v63);
  }
  return (unsigned int)v14;
}
