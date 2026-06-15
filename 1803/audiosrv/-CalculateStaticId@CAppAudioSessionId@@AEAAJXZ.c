/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180009E80
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800053C8 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800B6DB8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180030910 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180030B4C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030B78 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180030D38 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180042ED8 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800A885C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800AB130 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const void **this)
{
  const void **v1; // r12
  int v2; // r13d
  const void *v3; // rsi
  __int64 v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, __int64); // rcx
  __int64 (*v6)(void); // rax
  __int64 v7; // rdi
  BSTR v8; // rax
  wchar_t *v9; // rdx
  __int64 v10; // r9
  OLECHAR *v11; // rbx
  struct ATL::CStringData *(__fastcall *v12)(ATL::CAtlStringMgr *__hidden); // rax
  unsigned int *v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  size_t v19; // r8
  int v20; // r14d
  const wchar_t *v21; // rbx
  const wchar_t *v22; // rdi
  wchar_t *v23; // rax
  __int64 v24; // rax
  int v25; // edi
  const wchar_t *v26; // rbx
  const wchar_t *v27; // r14
  wchar_t *v28; // rax
  __int64 v29; // rax
  const void **v30; // rcx
  _QWORD *v31; // rcx
  void (*v32)(void); // rax
  HANDLE *v33; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  void *v38; // rcx
  size_t v39; // r8
  HINSTANCE StringResourceInstance; // rax
  __int64 v41; // rdi
  unsigned int v42; // r12d
  __int64 v43; // rdx
  const wchar_t *v44; // rbx
  const wchar_t *v45; // rax
  wchar_t *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  wchar_t *v49; // r14
  int v50; // r13d
  size_t v51; // r8
  const void *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r14
  unsigned int v55; // r12d
  __int64 v56; // rdx
  const wchar_t *v57; // rbx
  const wchar_t *v58; // rax
  wchar_t *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r9
  wchar_t *v62; // rdi
  int v63; // r13d
  size_t v64; // r8
  const void *v65; // rdx
  __int64 v66; // rcx
  char v67; // [rsp+20h] [rbp-298h]
  unsigned int *v68; // [rsp+28h] [rbp-290h] BYREF
  int v69; // [rsp+30h] [rbp-288h]
  int v70; // [rsp+34h] [rbp-284h]
  int v71; // [rsp+38h] [rbp-280h]
  int v72; // [rsp+3Ch] [rbp-27Ch]
  int v73; // [rsp+40h] [rbp-278h]
  __int64 v74; // [rsp+48h] [rbp-270h]
  const void **v75; // [rsp+50h] [rbp-268h]
  __int64 v76; // [rsp+58h] [rbp-260h] BYREF
  const wchar_t *v77; // [rsp+60h] [rbp-258h]
  const wchar_t *v78; // [rsp+68h] [rbp-250h]
  const wchar_t *v79; // [rsp+70h] [rbp-248h]
  const wchar_t *v80; // [rsp+78h] [rbp-240h]
  int v81; // [rsp+80h] [rbp-238h]
  int v82; // [rsp+84h] [rbp-234h]
  int v83; // [rsp+88h] [rbp-230h]
  int v84; // [rsp+8Ch] [rbp-22Ch]
  int v85; // [rsp+90h] [rbp-228h]
  int v86; // [rsp+94h] [rbp-224h]
  int v87; // [rsp+98h] [rbp-220h]
  unsigned int v88; // [rsp+9Ch] [rbp-21Ch]
  unsigned int v89; // [rsp+A0h] [rbp-218h]
  int v90; // [rsp+A4h] [rbp-214h]
  int v91; // [rsp+A8h] [rbp-210h]
  int v92; // [rsp+ACh] [rbp-20Ch]
  int v93; // [rsp+B0h] [rbp-208h]
  int v94; // [rsp+B4h] [rbp-204h]
  int v95; // [rsp+B8h] [rbp-200h]
  void *Src; // [rsp+C0h] [rbp-1F8h]
  const wchar_t *v97; // [rsp+C8h] [rbp-1F0h]
  const wchar_t *v98; // [rsp+D0h] [rbp-1E8h]
  LPVOID lpMem; // [rsp+D8h] [rbp-1E0h]
  _QWORD *v100; // [rsp+E0h] [rbp-1D8h]
  __int64 v101; // [rsp+E8h] [rbp-1D0h]
  __int64 v102; // [rsp+F0h] [rbp-1C8h]
  __int64 (__fastcall ***v103)(_QWORD, _QWORD, __int64); // [rsp+F8h] [rbp-1C0h]
  __int64 (__fastcall ***v104)(_QWORD, _QWORD, __int64); // [rsp+100h] [rbp-1B8h]
  const void *v105; // [rsp+108h] [rbp-1B0h]
  __int64 v106; // [rsp+110h] [rbp-1A8h]
  size_t v107; // [rsp+118h] [rbp-1A0h]
  size_t v108; // [rsp+120h] [rbp-198h]
  BSTR v109; // [rsp+128h] [rbp-190h]
  unsigned int *v110; // [rsp+130h] [rbp-188h]
  HINSTANCE v111; // [rsp+138h] [rbp-180h]
  unsigned __int64 v112; // [rsp+140h] [rbp-178h]
  unsigned int *v113; // [rsp+148h] [rbp-170h]
  wchar_t *v114; // [rsp+150h] [rbp-168h]
  __int64 v115; // [rsp+158h] [rbp-160h]
  __int64 v116; // [rsp+160h] [rbp-158h]
  const wchar_t *v117; // [rsp+168h] [rbp-150h]
  wchar_t *v118; // [rsp+170h] [rbp-148h]
  wchar_t *v119; // [rsp+178h] [rbp-140h]
  wchar_t *v120; // [rsp+180h] [rbp-138h]
  wchar_t *v121; // [rsp+188h] [rbp-130h]
  size_t v122; // [rsp+190h] [rbp-128h]
  wchar_t *v123; // [rsp+198h] [rbp-120h]
  wchar_t *v124; // [rsp+1A0h] [rbp-118h]
  const wchar_t *v125; // [rsp+1A8h] [rbp-110h]
  wchar_t *v126; // [rsp+1B0h] [rbp-108h]
  wchar_t *v127; // [rsp+1B8h] [rbp-100h]
  wchar_t *v128; // [rsp+1C0h] [rbp-F8h]
  wchar_t *v129; // [rsp+1C8h] [rbp-F0h]
  size_t v130; // [rsp+1D0h] [rbp-E8h]
  wchar_t *v131; // [rsp+1D8h] [rbp-E0h]
  wchar_t *v132; // [rsp+1E0h] [rbp-D8h]
  _QWORD *v133; // [rsp+1E8h] [rbp-D0h]
  HANDLE *v134; // [rsp+1F0h] [rbp-C8h]
  ATL::CAtlException *v135; // [rsp+1F8h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+200h] [rbp-B8h] BYREF

  v101 = -2LL;
  v1 = this;
  v75 = this;
  v2 = 0;
  try
  {
    v3 = *this;
    v4 = (__int64)*this - 24;
    v102 = v4;
    v74 = 0LL;
    v103 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4;
    v5 = v103;
    v6 = (__int64 (*)(void))(*v103)[4];
    if ( (char *)v6 != (char *)ATL::CAtlStringMgr::Clone )
      v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))v6();
    v104 = v5;
    if ( *(int *)(v4 + 16) >= 0 && v5 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
    {
      v74 = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
      v7 = v4;
      goto LABEL_7;
    }
    v35 = (**v5)(v5, *(unsigned int *)(v4 + 8), 2LL);
    v7 = v35;
    v74 = v35;
    if ( !v35 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v35 + 8) = *(_DWORD *)(v4 + 8);
    v105 = v3;
    v38 = (void *)(v35 + 24);
    v106 = v35 + 24;
    v39 = 2LL * (*(_DWORD *)(v4 + 8) + 1);
    v107 = v39;
    v108 = v39;
    if ( v39 )
    {
      if ( v35 != -24 )
      {
        if ( v3 )
        {
          memcpy_0(v38, v3, v39);
          goto LABEL_7;
        }
        memset_0(v38, 0, v39);
      }
      *(_DWORD *)_o__errno(v38, v36, v39, v37) = 22;
      invalid_parameter_noinfo();
    }
LABEL_7:
    v76 = v7 + 24;
    if ( !*((_DWORD *)v1 + 10) )
      CAudioIdentifier::EscapeIdentifierString(&v76);
    StringFromGUID2((const GUID *const)v1 + 1, sz, 64);
    v8 = SysAllocString(sz);
    v11 = v8;
    Src = v8;
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v109 = v8;
    v12 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
    if ( v12 == ATL::CAtlStringMgr::GetNilString )
    {
      _InterlockedIncrement(&dword_18018AA50);
      v13 = (unsigned int *)&qword_18018AA40;
      v11 = (OLECHAR *)Src;
    }
    else
    {
      v13 = (unsigned int *)v12((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    }
    v110 = v13;
    v14 = (wchar_t *)(v13 + 6);
    v68 = v13 + 6;
    v67 = 0;
    if ( (unsigned __int64)v11 < 0x10000 )
    {
      v69 = (unsigned __int16)v11;
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v11, (unsigned __int16)v9);
      v111 = StringResourceInstance;
      if ( StringResourceInstance )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v68,
          StringResourceInstance,
          (unsigned __int16)v11);
        v14 = (wchar_t *)v68;
      }
      v67 = 1;
      goto LABEL_25;
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v11[v15] );
    if ( !(_DWORD)v15 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v68);
      v14 = (wchar_t *)v68;
LABEL_25:
      SysFreeString(v11);
      v20 = 0;
      v70 = 0;
      v21 = v14;
      v77 = v14;
      v91 = *((_DWORD *)v14 - 4);
      v22 = &v14[v91];
      v117 = v22;
      while ( v21 < v22 )
      {
        while ( 1 )
        {
          v23 = wcsstr(v21, L"%");
          v118 = v23;
          if ( !v23 )
            break;
          v70 = ++v20;
          v21 = v23 + 1;
          v77 = v23 + 1;
        }
        if ( v21 )
        {
          v24 = -1LL;
          do
            ++v24;
          while ( v21[v24] );
        }
        else
        {
          LODWORD(v24) = 0;
        }
        v21 += (int)v24 + 1;
        v77 = v21;
      }
      if ( v20 > 0 )
      {
        v41 = *((int *)v14 - 4);
        v71 = v41;
        v42 = v41 + v20;
        v92 = v41 + v20;
        v43 = (unsigned int)v41;
        if ( (int)v41 + v20 > (int)v41 )
          v43 = v42;
        v93 = v43;
        v119 = v14 - 12;
        v94 = 1 - *((_DWORD *)v14 - 2);
        v95 = *((_DWORD *)v14 - 3) - v43;
        if ( (v94 | v95) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v68, v43);
          v14 = (wchar_t *)v68;
        }
        v120 = v14;
        v44 = v14;
        v78 = v14;
        v45 = &v14[v41];
        v97 = v45;
        while ( v44 < v45 )
        {
          while ( 1 )
          {
            v46 = wcsstr(v44, L"%");
            v49 = v46;
            v121 = v46;
            if ( !v46 )
              break;
            v50 = v41 - (v46 - v14) - 1;
            v81 = v50;
            v51 = 2LL * v50;
            v122 = v51;
            v52 = v46 + 1;
            v123 = v46 + 1;
            v44 = v46 + 2;
            v124 = v46 + 2;
            if ( v51 )
            {
              if ( v46 == (wchar_t *)-4LL || v46 == (wchar_t *)-2LL )
              {
                *(_DWORD *)_o__errno(v47, v52, v51, v48) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v46 + 2, v52, v51);
            }
            *(_DWORD *)v49 = *(_DWORD *)L"%%";
            v78 = v49 + 2;
            v53 = v50 + 2;
            v2 = 0;
            v49[v53] = 0;
            LODWORD(v41) = v41 + 1;
            v71 = v41;
          }
          v44 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v44) + 1);
          v78 = v44;
          v45 = v97;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v68, v42);
        v1 = v75;
      }
      v25 = 0;
      v72 = 0;
      v26 = v14;
      v79 = v14;
      v82 = *((_DWORD *)v14 - 4);
      v27 = &v14[v82];
      v125 = v27;
      while ( v26 < v27 )
      {
        while ( 1 )
        {
          v28 = wcsstr(v26, L"|");
          v126 = v28;
          if ( !v28 )
            break;
          v72 = ++v25;
          v26 = v28 + 1;
          v79 = v28 + 1;
        }
        if ( v26 )
        {
          v29 = -1LL;
          do
            ++v29;
          while ( v26[v29] );
        }
        else
        {
          LODWORD(v29) = 0;
        }
        v26 += (int)v29 + 1;
        v79 = v26;
      }
      if ( v25 > 0 )
      {
        v54 = *((int *)v14 - 4);
        v73 = v54;
        v55 = v54 + v25;
        v83 = v54 + v25;
        v56 = (unsigned int)v54;
        if ( (int)v54 + v25 > (int)v54 )
          v56 = v55;
        v84 = v56;
        v127 = v14 - 12;
        v85 = 1 - *((_DWORD *)v14 - 2);
        v86 = *((_DWORD *)v14 - 3) - v56;
        if ( (v85 | v86) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v68, v56);
          v14 = (wchar_t *)v68;
        }
        v128 = v14;
        v57 = v14;
        v80 = v14;
        v58 = &v14[v54];
        v98 = v58;
        while ( v57 < v58 )
        {
          while ( 1 )
          {
            v59 = wcsstr(v57, L"|");
            v62 = v59;
            v129 = v59;
            if ( !v59 )
              break;
            v63 = v54 - (v59 - v14) - 1;
            v87 = v63;
            v64 = 2LL * v63;
            v130 = v64;
            v65 = v59 + 1;
            v131 = v59 + 1;
            v57 = v59 + 2;
            v132 = v59 + 2;
            if ( v64 )
            {
              if ( v59 == (wchar_t *)-4LL || v59 == (wchar_t *)-2LL )
              {
                *(_DWORD *)_o__errno(v60, v65, v64, v61) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove(v59 + 2, v65, v64);
            }
            *(_DWORD *)v62 = *(_DWORD *)L"%b";
            v80 = v62 + 2;
            v66 = v63 + 2;
            v2 = 0;
            v62[v66] = 0;
            LODWORD(v54) = v54 + 1;
            v73 = v54;
          }
          v57 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v57) + 1);
          v80 = v57;
          v58 = v98;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v68, v55);
        v1 = v75;
      }
      v30 = v1 + 4;
      if ( *((_DWORD *)v1 + 10) )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v30,
          ATL::Sids::SecurityNTAuthority.SubAuthority,
          v14);
      else
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v30,
          L"%s|%s",
          v76,
          v14,
          v67);
      lpMem = v14 - 12;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 - 2, 0xFFFFFFFF) <= 1 )
      {
        v31 = *(_QWORD **)lpMem;
        v133 = v31;
        v32 = *(void (**)(void))(*v31 + 8LL);
        if ( (char *)v32 == (char *)ATL::CAtlStringMgr::Free
          && (v33 = (HANDLE *)v31[1],
              v134 = v33,
              v32 = (void (*)(void))*((_QWORD *)*v33 + 1),
              (char *)v32 == (char *)ATL::CWin32Heap::Free) )
        {
          HeapFree(v33[1], 0, lpMem);
        }
        else
        {
          v32();
        }
      }
      v100 = (_QWORD *)(v76 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v100 + 8LL))(*v100);
      goto LABEL_111;
    }
    v16 = v13[2];
    v88 = v13[2];
    v17 = v11 - v14;
    v112 = v17;
    v113 = v13;
    v89 = 1 - v13[4];
    v18 = v89;
    v90 = v13[3] - v15;
    if ( ((v89 | v90) & 0x80000000) != 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v68, (unsigned int)v15);
      v14 = (wchar_t *)v68;
    }
    v19 = 2LL * (int)v15;
    if ( v17 <= v16 )
    {
      v9 = &v14[v17];
      v114 = v9;
      v115 = 2LL * (int)v15;
      if ( !v19 )
        goto LABEL_22;
      if ( v14 && v9 )
      {
        memmove(v14, v9, v19);
        goto LABEL_22;
      }
    }
    else
    {
      v116 = 2LL * (int)v15;
      if ( !v19 )
        goto LABEL_22;
      if ( v14 )
      {
        memcpy_0(v14, v11, v19);
        goto LABEL_22;
      }
    }
    *(_DWORD *)_o__errno(v18, v9, v19, v10) = 22;
    invalid_parameter_noinfo();
LABEL_22:
    if ( (int)v15 < 0 || (int)v15 > *((_DWORD *)v14 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v14 - 4) = v15;
    v14[(int)v15] = 0;
    v1 = v75;
    goto LABEL_25;
  }
  catch ( ATL::CAtlException *v135 )
  {
    v69 = *(_DWORD *)v135;
    v2 = v69;
  }
LABEL_111:
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 0x14Bu, v2);
  return (unsigned int)v2;
}
