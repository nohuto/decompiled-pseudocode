/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z @ 0x18017DB2C
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18017EA78 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800028C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180176490 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x18017D848 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18017E54C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x180193260 (-ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ.c)
 *     wcsstr_0 @ 0x180195100 (wcsstr_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveIcons::GetIconData(
        CallerIdentity *a1,
        __int64 (__fastcall ***a2)(__int64, GUID *, __int64 *),
        unsigned __int16 *a3,
        __int64 a4)
{
  char v4; // di
  __int64 (__fastcall ***v8)(__int64, GUID *, __int64 *); // rbx
  wchar_t *v9; // r14
  int v10; // eax
  wchar_t *v11; // rcx
  int v12; // eax
  int v13; // ebx
  unsigned __int64 v14; // rbx
  char v15; // r15
  wchar_t *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  HRESULT v20; // eax
  __int64 (__fastcall **v21)(__int64, GUID *, __int64 *); // rax
  __int64 (__fastcall *v22)(__int64, GUID *, __int64 *); // rax
  int v23; // eax
  unsigned __int16 **v24; // r8
  void *v25; // rdx
  int PackageFullNameFromAppId; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r11
  __int64 v34; // r10
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  bool v39; // si
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  wchar_t *v43; // rcx
  __int64 v44; // rbx
  wchar_t *v45; // rbx
  wchar_t *v46; // rsi
  wchar_t *v47; // rcx
  wchar_t *v48; // rcx
  wchar_t *v49; // rbx
  int v50; // eax
  __int64 v51; // rdx
  wchar_t *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 *v55; // rcx
  __int64 v56; // rcx
  LPVOID v57; // rcx
  void *v58; // rcx
  wchar_t *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 *v62; // rcx
  __int64 v63; // rcx
  LPVOID v64; // rcx
  int v65; // eax
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  wchar_t *v69; // [rsp+30h] [rbp-A9h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-A1h] BYREF
  wchar_t *v71; // [rsp+40h] [rbp-99h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-91h] BYREF
  __int64 v73; // [rsp+50h] [rbp-89h]
  __int64 v74; // [rsp+58h] [rbp-81h]
  __int64 v75; // [rsp+60h] [rbp-79h] BYREF
  LPVOID v76; // [rsp+68h] [rbp-71h] BYREF
  __int64 v77; // [rsp+70h] [rbp-69h]
  __int64 v78; // [rsp+78h] [rbp-61h]
  LPVOID v79; // [rsp+80h] [rbp-59h] BYREF
  __int64 v80; // [rsp+88h] [rbp-51h]
  __int64 v81; // [rsp+90h] [rbp-49h]
  __int64 v82; // [rsp+98h] [rbp-41h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-39h] BYREF
  int v84; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v85; // [rsp+B4h] [rbp-25h]
  __int64 v86; // [rsp+C0h] [rbp-19h]
  int v87; // [rsp+C8h] [rbp-11h]
  __int64 v88; // [rsp+CCh] [rbp-Dh]
  __int64 v89; // [rsp+D8h] [rbp-1h]
  int v90; // [rsp+E0h] [rbp+7h]
  __int64 v91; // [rsp+E4h] [rbp+Bh]
  __int64 v92; // [rsp+F0h] [rbp+17h]
  __int64 (__fastcall ***v93)(__int64, GUID *, __int64 *); // [rsp+F8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  __int64 *v96; // [rsp+148h] [rbp+6Fh] BYREF

  v4 = 0;
  v85 = 31LL;
  v84 = 0;
  v86 = 0LL;
  v87 = 0;
  v88 = 31LL;
  v89 = 0LL;
  v90 = 0;
  v91 = 31LL;
  v92 = 0LL;
  v93 = a2;
  if ( a2 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a2)[1])(a2);
  TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables((TileDataLayerItemWrappers::TDLTileInfoHelper *)&v84);
  v8 = v93;
  pv = 0LL;
  v73 = -1LL;
  v74 = -1LL;
  v9 = 0LL;
  v10 = (*v93)[16]((__int64)v93, (GUID *)6553603, (__int64 *)&pv);
  v11 = (wchar_t *)pv;
  if ( v10 >= 0 )
  {
    if ( !pv )
      goto LABEL_8;
    if ( *(_WORD *)pv )
    {
LABEL_13:
      v9 = v11;
      v13 = 0;
      goto LABEL_14;
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
LABEL_8:
  v73 = -1LL;
  v74 = -1LL;
  v12 = (*v8)[16]((__int64)v8, (GUID *)68091905, (__int64 *)&pv);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v11 = (wchar_t *)pv;
    if ( !pv || !*(_WORD *)pv )
    {
      v13 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FF,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)0x80070490LL);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_141;
    }
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2FE,
    (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v12);
  if ( pv )
    CoTaskMemFree(pv);
LABEL_14:
  if ( v13 < 0 )
  {
LABEL_141:
    v66 = (unsigned int)v13;
    v67 = 117LL;
    goto LABEL_142;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( v9[v14] );
  if ( v14 < 2 )
  {
    v13 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_143;
  }
  v15 = 1;
  if ( *v9 == 64 && v9[1] == 123 && v9[v14 - 1] == 125 )
    v4 = 1;
  v16 = wcsstr_0(v9, L"?");
  if ( !v4 || !v16 )
  {
    v65 = StringCchCopyW((char *)(a4 + 2), 260LL, (char *)v9);
    v13 = v65;
    if ( v65 >= 0 )
    {
      *(_WORD *)a4 = 0;
      goto LABEL_138;
    }
    v66 = (unsigned int)v65;
    v67 = 212LL;
LABEL_142:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v67,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)v66);
    goto LABEL_143;
  }
  v17 = v14 - 1;
  v71 = v16 + 1;
  v18 = -1LL;
  v19 = 1LL;
  do
    ++v18;
  while ( v9[v18] );
  if ( v17 < v18 )
  {
    if ( v18 - v17 > 1 || (v19 = v18 - v17, v18 != v17) )
    {
      v18 -= v19;
      memmove(&v9[v17], &v9[v19 + v17], 2 * (v18 - v17));
    }
    v9[v18] = 0;
  }
  ppv = 0LL;
  v20 = CoCreateInstance(
          &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
          0LL,
          1u,
          &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
          &ppv);
  v13 = v20;
  if ( v20 >= 0 )
  {
    v21 = *a2;
    v76 = 0LL;
    v77 = 0LL;
    v78 = 0LL;
    v22 = *v21;
    v83 = 0LL;
    v23 = v22((__int64)a2, &GUID_e0cae81b_625e_400d_9ded_4e4956f6fb9d, &v83);
    if ( v23 >= 0 )
    {
      v28 = v83;
      if ( v76 )
      {
        CoTaskMemFree(v76);
        v76 = 0LL;
      }
      v77 = -1LL;
      v78 = -1LL;
      if ( (*(int (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v28 + 40LL))(v28, 983286LL, &v76) >= 0 )
      {
        v25 = v76;
        if ( !v76 )
          goto LABEL_39;
        if ( *(_WORD *)v76 )
          goto LABEL_46;
LABEL_37:
        if ( v25 )
        {
          CoTaskMemFree(v25);
          v76 = 0LL;
        }
LABEL_39:
        v77 = -1LL;
        v78 = -1LL;
        PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a1, &v76, v24);
        v13 = PackageFullNameFromAppId;
        if ( PackageFullNameFromAppId < 0 )
        {
          v27 = 152LL;
LABEL_48:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v27,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)PackageFullNameFromAppId);
LABEL_110:
          v56 = v83;
          if ( v83 )
          {
            v83 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
          }
          if ( v76 )
          {
            CoTaskMemFree(v76);
            v76 = 0LL;
          }
          v77 = 0LL;
          v78 = 0LL;
          goto LABEL_115;
        }
LABEL_46:
        PackageFullNameFromAppId = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 40LL))(ppv);
        v13 = PackageFullNameFromAppId;
        if ( PackageFullNameFromAppId < 0 )
        {
          v27 = 155LL;
          goto LABEL_48;
        }
        v96 = 0LL;
        v29 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64 **))(*(_QWORD *)ppv + 72LL))(
                ppv,
                &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
                &v96);
        v13 = v29;
        if ( v29 < 0 )
        {
          v30 = 158LL;
LABEL_62:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v30,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v29);
LABEL_108:
          v55 = v96;
          if ( v96 )
          {
            v96 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v55 + 16))(v55);
          }
          goto LABEL_110;
        }
        v31 = *v96;
        if ( *((_DWORD *)a3 + 5) )
        {
          v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v31 + 112))(v96, a3[4]);
          v13 = v29;
          if ( v29 < 0 )
          {
            v30 = 169LL;
            goto LABEL_62;
          }
        }
        else
        {
          v29 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *))(v31 + 136))(v96, L"unplated");
          v13 = v29;
          if ( v29 < 0 )
          {
            v30 = 164LL;
            goto LABEL_62;
          }
          v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v96 + 112))(v96, *a3);
          v13 = v29;
          if ( v29 < 0 )
          {
            v30 = 165LL;
            goto LABEL_62;
          }
        }
        v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v96 + 128))(v96, *((unsigned int *)a3 + 5));
        v13 = v29;
        if ( v29 < 0 )
        {
          v30 = 172LL;
          goto LABEL_62;
        }
        v32 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)a3 + 4));
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v33 + 120))(v34, v32);
        v13 = v29;
        if ( v29 < 0 )
        {
          v30 = 173LL;
          goto LABEL_62;
        }
        v82 = 0LL;
        v35 = (*(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)ppv + 56LL))(
                ppv,
                &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
                &v82);
        v13 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB0,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v35);
LABEL_106:
          v54 = v82;
          if ( v82 )
          {
            v82 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
          }
          goto LABEL_108;
        }
        v75 = 0LL;
        v36 = (*(__int64 (__fastcall **)(__int64, wchar_t *, GUID *, __int64 *))(*(_QWORD *)v82 + 88LL))(
                v82,
                v71,
                &GUID_c2ac6f97_54f2_445a_8f62_d87b9537f9b2,
                &v75);
        v13 = v36;
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB3,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v36);
LABEL_104:
          v53 = v75;
          if ( v75 )
          {
            v75 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
          }
          goto LABEL_106;
        }
        v69 = 0LL;
        v37 = (*(__int64 (__fastcall **)(__int64, __int64 *, wchar_t **))(*(_QWORD *)v75 + 56LL))(v75, v96, &v69);
        v13 = v37;
        if ( v37 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB6,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v37);
LABEL_102:
          v52 = v69;
          if ( v69 )
          {
            v69 = 0LL;
            (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v52 + 16LL))(v52);
          }
          goto LABEL_104;
        }
        v79 = 0LL;
        v80 = -1LL;
        v81 = -1LL;
        v38 = (*(__int64 (__fastcall **)(wchar_t *, const wchar_t *, LPVOID *))(*(_QWORD *)v69 + 64LL))(
                v69,
                L"AlternateForm",
                &v79);
        v39 = v38 >= 0;
        if ( v38 >= 0 )
        {
LABEL_88:
          if ( !*((_DWORD *)a3 + 5) )
          {
LABEL_92:
            v15 = 0;
LABEL_93:
            pv = 0LL;
            v73 = -1LL;
            v74 = -1LL;
            v50 = (*(__int64 (__fastcall **)(wchar_t *, LPVOID *))(*(_QWORD *)v69 + 32LL))(v69, &pv);
            v13 = v50;
            if ( v50 < 0 )
            {
              v51 = 203LL;
LABEL_97:
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)v51,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v50);
              if ( pv )
              {
                CoTaskMemFree(pv);
                pv = 0LL;
              }
              v73 = 0LL;
              v74 = 0LL;
              if ( v79 )
              {
                CoTaskMemFree(v79);
                v79 = 0LL;
              }
              v80 = 0LL;
              v81 = 0LL;
              goto LABEL_102;
            }
            v50 = StringCchCopyW((char *)(a4 + 2), 260LL, (char *)pv);
            v13 = v50;
            if ( v50 < 0 )
            {
              v51 = 204LL;
              goto LABEL_97;
            }
            v58 = pv;
            *(_BYTE *)a4 = v39;
            *(_BYTE *)(a4 + 1) = v15;
            if ( v58 )
            {
              CoTaskMemFree(v58);
              pv = 0LL;
            }
            v73 = 0LL;
            v74 = 0LL;
            if ( v79 )
            {
              CoTaskMemFree(v79);
              v79 = 0LL;
            }
            v59 = v69;
            v80 = 0LL;
            v81 = 0LL;
            if ( v69 )
            {
              v69 = 0LL;
              (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v59 + 16LL))(v59);
            }
            v60 = v75;
            if ( v75 )
            {
              v75 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            }
            v61 = v82;
            if ( v82 )
            {
              v82 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
            }
            v62 = v96;
            if ( v96 )
            {
              v96 = 0LL;
              (*(void (__fastcall **)(__int64 *))(*v62 + 16))(v62);
            }
            v63 = v83;
            if ( v83 )
            {
              v83 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
            }
            if ( v76 )
            {
              CoTaskMemFree(v76);
              v76 = 0LL;
            }
            v64 = ppv;
            v77 = 0LL;
            v78 = 0LL;
            if ( ppv )
            {
              ppv = 0LL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v64 + 16LL))(v64);
            }
LABEL_138:
            v13 = 0;
            goto LABEL_143;
          }
LABEL_89:
          v49 = v69;
          if ( v79 )
          {
            CoTaskMemFree(v79);
            v79 = 0LL;
          }
          v80 = -1LL;
          v81 = -1LL;
          if ( (*(int (__fastcall **)(wchar_t *, const wchar_t *, LPVOID *))(*(_QWORD *)v49 + 64LL))(
                 v49,
                 L"Contrast",
                 &v79) >= 0 )
            goto LABEL_93;
          goto LABEL_92;
        }
        if ( *((_DWORD *)a3 + 5) )
          goto LABEL_89;
        v40 = a3[4];
        v71 = 0LL;
        v41 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v96 + 112))(v96, v40);
        if ( v41 >= 0 )
        {
          v43 = v71;
          v44 = v75;
          if ( v71 )
          {
            v71 = 0LL;
            (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v43 + 16LL))(v43);
          }
          v41 = (*(__int64 (__fastcall **)(__int64, __int64 *, wchar_t **))(*(_QWORD *)v44 + 56LL))(v44, v96, &v71);
          if ( v41 >= 0 )
          {
            v45 = v69;
            v46 = v71;
            if ( v69 != v71 )
            {
              if ( v71 )
              {
                (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v71 + 8LL))(v71);
                v45 = v69;
              }
              v47 = v45;
              v45 = v46;
              v69 = v46;
              if ( v47 )
              {
                (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v47 + 16LL))(v47);
                v45 = v69;
              }
            }
            if ( v79 )
            {
              CoTaskMemFree(v79);
              v79 = 0LL;
            }
            v80 = -1LL;
            v81 = -1LL;
            v39 = (*(int (__fastcall **)(wchar_t *, const wchar_t *, LPVOID *))(*(_QWORD *)v45 + 64LL))(
                    v45,
                    L"AlternateForm",
                    &v79) >= 0;
            goto LABEL_86;
          }
          v42 = 193LL;
        }
        else
        {
          v42 = 192LL;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v42,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v41);
LABEL_86:
        v48 = v71;
        if ( v71 )
        {
          v71 = 0LL;
          (*(void (__fastcall **)(wchar_t *))(*(_QWORD *)v48 + 16LL))(v48);
        }
        goto LABEL_88;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v23);
    }
    v25 = v76;
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x8E,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v20);
LABEL_115:
  v57 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v57 + 16LL))(v57);
  }
LABEL_143:
  if ( v9 )
    CoTaskMemFree(v9);
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)&v84);
  return (unsigned int)v13;
}
