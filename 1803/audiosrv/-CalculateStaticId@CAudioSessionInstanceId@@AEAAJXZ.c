/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180030E30
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800052DC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180009C70 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180016648 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017720 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180030910 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030B78 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180030D38 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this, __int64 a2, __int64 a3)
{
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v5; // rdi
  __int64 *v6; // rax
  struct ATL::CStringData *(__fastcall *v7)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v8; // rax
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  wchar_t *v10; // rdi
  int v11; // esi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  wchar_t *v16; // rsi
  wchar_t *v17; // rax
  __int64 v18; // rax
  wchar_t *v19; // rbx
  int v20; // edi
  const wchar_t *v21; // rbx
  wchar_t *v22; // rsi
  wchar_t *v23; // rax
  __int64 v24; // rax
  int v25; // edi
  wchar_t *v26; // r15
  wchar_t *v27; // rbx
  wchar_t *v28; // rsi
  wchar_t *v29; // rax
  __int64 v30; // rax
  int v31; // edi
  const wchar_t *v32; // rbx
  wchar_t *v33; // rsi
  wchar_t *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  int v37; // edi
  unsigned int v38; // edx
  const wchar_t *v39; // rbx
  wchar_t *v40; // r12
  int v41; // r14d
  wchar_t *v42; // rbx
  wchar_t *v43; // rsi
  wchar_t *v44; // rax
  __int64 v45; // rax
  wchar_t *v46; // rax
  wchar_t *v47; // rsi
  __int64 v48; // rax
  int v49; // esi
  const wchar_t *v50; // rbx
  wchar_t *v51; // r14
  wchar_t *v52; // rax
  __int64 v53; // r14
  int v54; // r12d
  unsigned int v55; // edx
  const wchar_t *v56; // rbx
  wchar_t *v57; // r13
  wchar_t *v58; // rax
  __int64 v59; // r9
  wchar_t *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // r15d
  size_t v64; // r8
  const void *v65; // rdx
  __int64 v66; // rcx
  int v67; // r15d
  size_t v68; // r8
  const void *v69; // rdx
  wchar_t *v70; // rdx
  void (*v71)(void); // rax
  HANDLE *v72; // rcx
  void (*v73)(void); // rax
  wchar_t *v74; // rdx
  void (*v75)(void); // rax
  HANDLE *v76; // rcx
  wchar_t *v77; // rdx
  __int64 v79; // rsi
  int v80; // edi
  unsigned int v81; // edx
  wchar_t *v82; // r15
  const wchar_t *v83; // rbx
  wchar_t *v84; // r12
  wchar_t *v85; // rax
  __int64 v86; // r9
  wchar_t *v87; // r14
  __int64 v88; // rcx
  int v89; // r15d
  size_t v90; // r8
  const void *v91; // rdx
  __int64 v92; // rsi
  int v93; // edi
  unsigned int v94; // edx
  const wchar_t *v95; // rbx
  wchar_t *v96; // r12
  wchar_t *v97; // rax
  __int64 v98; // r9
  wchar_t *v99; // r14
  __int64 v100; // rcx
  int v101; // r15d
  size_t v102; // r8
  const void *v103; // rdx
  __int64 v104; // rsi
  int v105; // r14d
  unsigned int v106; // edx
  const wchar_t *v107; // rbx
  wchar_t *v108; // r12
  wchar_t *v109; // rax
  __int64 v110; // r9
  wchar_t *v111; // r15
  __int64 v112; // rcx
  int v113; // r13d
  size_t v114; // r8
  const void *v115; // rdx
  int v116; // edi
  __int64 v117; // rsi
  int v118; // r15d
  unsigned int v119; // edx
  wchar_t *v120; // r14
  const wchar_t *v121; // rbx
  wchar_t *v122; // r12
  wchar_t *v123; // rax
  __int64 v124; // r9
  wchar_t *v125; // rdi
  __int64 v126; // rcx
  int v127; // r14d
  size_t v128; // r8
  const void *v129; // rdx
  wchar_t *Str; // [rsp+30h] [rbp-338h] BYREF
  wchar_t *v131; // [rsp+38h] [rbp-330h] BYREF
  wchar_t *v132; // [rsp+40h] [rbp-328h] BYREF
  int v133; // [rsp+48h] [rbp-320h]
  int v134; // [rsp+4Ch] [rbp-31Ch]
  int v135; // [rsp+50h] [rbp-318h]
  int v136; // [rsp+54h] [rbp-314h]
  int v137; // [rsp+58h] [rbp-310h]
  int v138; // [rsp+5Ch] [rbp-30Ch]
  int v139; // [rsp+60h] [rbp-308h]
  int v140; // [rsp+64h] [rbp-304h]
  int v141; // [rsp+68h] [rbp-300h]
  unsigned int v142; // [rsp+6Ch] [rbp-2FCh]
  int v143; // [rsp+70h] [rbp-2F8h]
  int v144; // [rsp+74h] [rbp-2F4h]
  unsigned int v145; // [rsp+78h] [rbp-2F0h]
  int v146; // [rsp+7Ch] [rbp-2ECh]
  int v147; // [rsp+80h] [rbp-2E8h]
  void *v148; // [rsp+88h] [rbp-2E0h]
  wchar_t *v149; // [rsp+90h] [rbp-2D8h]
  void *v150; // [rsp+98h] [rbp-2D0h]
  void *v151; // [rsp+A0h] [rbp-2C8h]
  wchar_t *v152; // [rsp+A8h] [rbp-2C0h]
  wchar_t *v153; // [rsp+B0h] [rbp-2B8h]
  void *v154; // [rsp+B8h] [rbp-2B0h]
  wchar_t *v155; // [rsp+C0h] [rbp-2A8h]
  void *v156; // [rsp+C8h] [rbp-2A0h]
  wchar_t *v157; // [rsp+D0h] [rbp-298h]
  wchar_t *v158; // [rsp+D8h] [rbp-290h]
  void *v159; // [rsp+E0h] [rbp-288h]
  int v160; // [rsp+E8h] [rbp-280h]
  unsigned int v161; // [rsp+ECh] [rbp-27Ch]
  int v162; // [rsp+F0h] [rbp-278h]
  int v163; // [rsp+F4h] [rbp-274h]
  int v164; // [rsp+F8h] [rbp-270h]
  unsigned int v165; // [rsp+FCh] [rbp-26Ch]
  int v166; // [rsp+100h] [rbp-268h]
  unsigned int v167; // [rsp+104h] [rbp-264h]
  int v168; // [rsp+108h] [rbp-260h]
  int v169; // [rsp+10Ch] [rbp-25Ch]
  int v170; // [rsp+110h] [rbp-258h]
  int v171; // [rsp+114h] [rbp-254h]
  unsigned int v172; // [rsp+118h] [rbp-250h]
  int v173; // [rsp+11Ch] [rbp-24Ch]
  int v174; // [rsp+120h] [rbp-248h]
  int v175; // [rsp+124h] [rbp-244h]
  int v176; // [rsp+128h] [rbp-240h]
  unsigned int v177; // [rsp+12Ch] [rbp-23Ch]
  int v178; // [rsp+130h] [rbp-238h]
  int v179; // [rsp+134h] [rbp-234h]
  int v180; // [rsp+138h] [rbp-230h]
  int v181; // [rsp+13Ch] [rbp-22Ch]
  unsigned int v182; // [rsp+140h] [rbp-228h]
  int v183; // [rsp+144h] [rbp-224h]
  int v184; // [rsp+148h] [rbp-220h]
  int v185; // [rsp+14Ch] [rbp-21Ch]
  int v186; // [rsp+150h] [rbp-218h]
  int v187; // [rsp+154h] [rbp-214h]
  unsigned int v188; // [rsp+158h] [rbp-210h]
  int v189; // [rsp+15Ch] [rbp-20Ch]
  int v190; // [rsp+160h] [rbp-208h]
  __int64 v191; // [rsp+168h] [rbp-200h]
  wchar_t *v192; // [rsp+170h] [rbp-1F8h]
  wchar_t *v193; // [rsp+178h] [rbp-1F0h]
  wchar_t *v194; // [rsp+180h] [rbp-1E8h]
  wchar_t *v195; // [rsp+188h] [rbp-1E0h]
  wchar_t *v196; // [rsp+190h] [rbp-1D8h]
  wchar_t *v197; // [rsp+198h] [rbp-1D0h]
  size_t v198; // [rsp+1A0h] [rbp-1C8h]
  wchar_t *v199; // [rsp+1A8h] [rbp-1C0h]
  wchar_t *v200; // [rsp+1B0h] [rbp-1B8h]
  wchar_t *v201; // [rsp+1B8h] [rbp-1B0h]
  wchar_t *v202; // [rsp+1C0h] [rbp-1A8h]
  wchar_t *v203; // [rsp+1C8h] [rbp-1A0h]
  wchar_t *v204; // [rsp+1D0h] [rbp-198h]
  wchar_t *v205; // [rsp+1D8h] [rbp-190h]
  wchar_t *v206; // [rsp+1E0h] [rbp-188h]
  size_t v207; // [rsp+1E8h] [rbp-180h]
  wchar_t *v208; // [rsp+1F0h] [rbp-178h]
  wchar_t *v209; // [rsp+1F8h] [rbp-170h]
  wchar_t *v210; // [rsp+200h] [rbp-168h]
  wchar_t *v211; // [rsp+208h] [rbp-160h]
  wchar_t *v212; // [rsp+210h] [rbp-158h]
  wchar_t *v213; // [rsp+218h] [rbp-150h]
  wchar_t *v214; // [rsp+220h] [rbp-148h]
  wchar_t *v215; // [rsp+228h] [rbp-140h]
  size_t v216; // [rsp+230h] [rbp-138h]
  wchar_t *v217; // [rsp+238h] [rbp-130h]
  wchar_t *v218; // [rsp+240h] [rbp-128h]
  wchar_t *v219; // [rsp+248h] [rbp-120h]
  wchar_t *v220; // [rsp+250h] [rbp-118h]
  wchar_t *v221; // [rsp+258h] [rbp-110h]
  wchar_t *v222; // [rsp+260h] [rbp-108h]
  wchar_t *v223; // [rsp+268h] [rbp-100h]
  wchar_t *v224; // [rsp+270h] [rbp-F8h]
  size_t v225; // [rsp+278h] [rbp-F0h]
  wchar_t *v226; // [rsp+280h] [rbp-E8h]
  wchar_t *v227; // [rsp+288h] [rbp-E0h]
  wchar_t *v228; // [rsp+290h] [rbp-D8h]
  wchar_t *v229; // [rsp+298h] [rbp-D0h]
  wchar_t *v230; // [rsp+2A0h] [rbp-C8h]
  wchar_t *v231; // [rsp+2A8h] [rbp-C0h]
  wchar_t *v232; // [rsp+2B0h] [rbp-B8h]
  wchar_t *v233; // [rsp+2B8h] [rbp-B0h]
  size_t v234; // [rsp+2C0h] [rbp-A8h]
  wchar_t *v235; // [rsp+2C8h] [rbp-A0h]
  wchar_t *v236; // [rsp+2D0h] [rbp-98h]
  wchar_t *v237; // [rsp+2D8h] [rbp-90h]
  wchar_t *v238; // [rsp+2E0h] [rbp-88h]
  wchar_t *v239; // [rsp+2E8h] [rbp-80h]
  wchar_t *v240; // [rsp+2F0h] [rbp-78h]
  wchar_t *v241; // [rsp+2F8h] [rbp-70h]
  wchar_t *v242; // [rsp+300h] [rbp-68h]
  size_t v243; // [rsp+308h] [rbp-60h]
  wchar_t *v244; // [rsp+310h] [rbp-58h]
  wchar_t *v245; // [rsp+318h] [rbp-50h]
  ATL::CAtlException *v246; // [rsp+320h] [rbp-48h] BYREF

  v191 = -2LL;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_18018AA50);
    v5 = &qword_18018AA40;
    v6 = &qword_18018AA40;
  }
  else
  {
    v6 = (__int64 *)v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v5 = &qword_18018AA40;
  }
  Str = (wchar_t *)(v6 + 3);
  v7 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v7 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_18018AA50);
    v8 = &qword_18018AA40;
  }
  else
  {
    v8 = (__int64 *)v7((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v131 = (wchar_t *)(v8 + 3);
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
    _InterlockedIncrement(&dword_18018AA50);
  else
    v5 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v10 = (wchar_t *)(v5 + 3);
  v132 = v10;
  v11 = CAudioEndpointId::ToString((const void **)this, &Str, a3);
  if ( v11 < 0 )
    goto LABEL_189;
  v11 = CAppAudioSessionId::ToString((__int64)this + 8, &v131, v12, v13);
  if ( v11 < 0 )
    goto LABEL_189;
  v11 = CAppInstanceId::ToString((unsigned int *)this + 14, (__int64)&v132);
  v133 = v11;
  if ( v11 < 0 )
  {
    v10 = v132;
LABEL_189:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 0x3FAu, v11);
    goto LABEL_95;
  }
  try
  {
    v41 = 0;
    v116 = 0;
    v147 = 0;
    v82 = Str;
    v19 = Str;
    v153 = Str;
    v189 = *((_DWORD *)Str - 4);
    v16 = &Str[v189];
    v192 = v16;
    while ( v19 < v16 )
    {
      while ( 1 )
      {
        v17 = wcsstr(v19, L"%");
        v193 = v17;
        if ( !v17 )
          break;
        v147 = ++v116;
        v19 = v17 + 1;
        v153 = v17 + 1;
      }
      if ( v19 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( v19[v18] );
      }
      else
      {
        LODWORD(v18) = 0;
      }
      v19 += (int)v18 + 1;
      v153 = v19;
    }
    if ( v116 > 0 )
    {
      v79 = *((int *)v82 - 4);
      v134 = v79;
      v80 = v79 + v116;
      v190 = v80;
      if ( v80 <= (int)v79 )
        v81 = v79;
      else
        v81 = v80;
      v194 = v82 - 12;
      v160 = 1 - *((_DWORD *)v82 - 2);
      v161 = *((_DWORD *)v82 - 3) - v81;
      if ( ((v160 | v161) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&Str, v81, v14, v15);
        v82 = Str;
      }
      v195 = v82;
      v83 = v82;
      v154 = v82;
      v84 = &v82[v79];
      v196 = v84;
      while ( v83 < v84 )
      {
        while ( 1 )
        {
          v85 = wcsstr(v83, L"%");
          v87 = v85;
          v197 = v85;
          if ( !v85 )
            break;
          v88 = v85 - v82;
          v89 = v79 - v88 - 1;
          v162 = v89;
          v90 = 2LL * v89;
          v198 = v90;
          v91 = v85 + 1;
          v199 = v85 + 1;
          v83 = v85 + 2;
          v200 = v85 + 2;
          if ( v90 )
          {
            if ( v85 == (wchar_t *)-4LL || v85 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v88, v91, v90, v86) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v85 + 2, v91, v90);
          }
          *(_DWORD *)v87 = *(_DWORD *)L"%%";
          v154 = (void *)v83;
          v87[v89 + 2] = 0;
          LODWORD(v79) = v79 + 1;
          v134 = v79;
          v82 = Str;
        }
        v83 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v83) + 1);
        v154 = (void *)v83;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v80);
      v41 = 0;
    }
    v20 = 0;
    v135 = 0;
    v21 = v82;
    v155 = v82;
    v163 = *((_DWORD *)v82 - 4);
    v22 = &v82[v163];
    v201 = v22;
    while ( v21 < v22 )
    {
      while ( 1 )
      {
        v23 = wcsstr(v21, L"|");
        v202 = v23;
        if ( !v23 )
          break;
        v135 = ++v20;
        v21 = v23 + 1;
        v155 = v23 + 1;
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
      v155 = (wchar_t *)v21;
    }
    if ( v20 > 0 )
    {
      v117 = *((int *)v82 - 4);
      v136 = v117;
      v118 = v117 + v20;
      v164 = v117 + v20;
      v119 = v117;
      if ( (int)v117 + v20 > (int)v117 )
        v119 = v117 + v20;
      v165 = v119;
      v120 = Str;
      v203 = Str - 12;
      v166 = 1 - *((_DWORD *)Str - 2);
      v167 = *((_DWORD *)Str - 3) - v119;
      if ( ((v166 | v167) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&Str, v119, v14, v15);
        v120 = Str;
      }
      v204 = v120;
      v121 = v120;
      v156 = v120;
      v122 = &v120[v117];
      v205 = v122;
      while ( v121 < v122 )
      {
        while ( 1 )
        {
          v123 = wcsstr(v121, L"|");
          v125 = v123;
          v206 = v123;
          if ( !v123 )
            break;
          v126 = v123 - v120;
          v127 = v117 - v126 - 1;
          v168 = v127;
          v128 = 2LL * v127;
          v207 = v128;
          v129 = v123 + 1;
          v208 = v123 + 1;
          v121 = v123 + 2;
          v209 = v123 + 2;
          if ( v128 )
          {
            if ( v123 == (wchar_t *)-4LL || v123 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v126, v129, v128, v124) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v123 + 2, v129, v128);
          }
          *(_DWORD *)v125 = *(_DWORD *)L"%b";
          v156 = (void *)v121;
          v125[v127 + 2] = 0;
          LODWORD(v117) = v117 + 1;
          v136 = v117;
          v120 = Str;
        }
        v121 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v121) + 1);
        v156 = (void *)v121;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&Str, v118);
      v41 = 0;
    }
    v25 = 0;
    v137 = 0;
    v26 = v131;
    v27 = v131;
    v157 = v131;
    v169 = *((_DWORD *)v131 - 4);
    v28 = &v131[v169];
    v210 = v28;
    while ( v27 < v28 )
    {
      while ( 1 )
      {
        v29 = wcsstr(v27, L"%");
        v211 = v29;
        if ( !v29 )
          break;
        v137 = ++v25;
        v27 = v29 + 1;
        v157 = v29 + 1;
      }
      if ( v27 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( v27[v30] );
      }
      else
      {
        LODWORD(v30) = 0;
      }
      v27 += (int)v30 + 1;
      v157 = v27;
    }
    if ( v25 > 0 )
    {
      v92 = *((int *)v26 - 4);
      v138 = v92;
      v93 = v92 + v25;
      v170 = v93;
      if ( v93 <= (int)v92 )
        v94 = v92;
      else
        v94 = v93;
      v212 = v26 - 12;
      v171 = 1 - *((_DWORD *)v26 - 2);
      v172 = *((_DWORD *)v26 - 3) - v94;
      if ( ((v171 | v172) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v131, v94, v14, v15);
        v26 = v131;
      }
      v213 = v26;
      v95 = v26;
      v148 = v26;
      v96 = &v26[v92];
      v214 = v96;
      while ( v95 < v96 )
      {
        while ( 1 )
        {
          v97 = wcsstr(v95, L"%");
          v99 = v97;
          v215 = v97;
          if ( !v97 )
            break;
          v100 = v97 - v26;
          v101 = v92 - v100 - 1;
          v173 = v101;
          v102 = 2LL * v101;
          v216 = v102;
          v103 = v97 + 1;
          v217 = v97 + 1;
          v95 = v97 + 2;
          v218 = v97 + 2;
          if ( v102 )
          {
            if ( v97 == (wchar_t *)-4LL || v97 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v100, v103, v102, v98) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v97 + 2, v103, v102);
          }
          *(_DWORD *)v99 = *(_DWORD *)L"%%";
          v148 = (void *)v95;
          v99[v101 + 2] = 0;
          LODWORD(v92) = v92 + 1;
          v138 = v92;
          v26 = v131;
        }
        v95 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v95) + 1);
        v148 = (void *)v95;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v131, v93);
      v41 = 0;
    }
    v31 = 0;
    v139 = 0;
    v32 = v26;
    v149 = v26;
    v174 = *((_DWORD *)v26 - 4);
    v33 = &v26[v174];
    v219 = v33;
    while ( v32 < v33 )
    {
      while ( 1 )
      {
        v34 = wcsstr(v32, L"|");
        v220 = v34;
        if ( !v34 )
          break;
        v139 = ++v31;
        v32 = v34 + 1;
        v149 = v34 + 1;
      }
      if ( v32 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v32[v35] );
      }
      else
      {
        LODWORD(v35) = 0;
      }
      v32 += (int)v35 + 1;
      v149 = (wchar_t *)v32;
    }
    if ( v31 > 0 )
    {
      v36 = *((int *)v26 - 4);
      v140 = v36;
      v37 = v36 + v31;
      v175 = v37;
      if ( v37 <= (int)v36 )
        v38 = v36;
      else
        v38 = v37;
      v221 = v26 - 12;
      v176 = 1 - *((_DWORD *)v26 - 2);
      v177 = *((_DWORD *)v26 - 3) - v38;
      if ( ((v176 | v177) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v131, v38, v14, v15);
        v26 = v131;
      }
      v222 = v26;
      v39 = v26;
      v150 = v26;
      v40 = &v26[v36];
      v223 = v40;
      while ( v39 < v40 )
      {
        while ( 1 )
        {
          v46 = wcsstr(v39, L"|");
          v47 = v46;
          v224 = v46;
          if ( !v46 )
            break;
          v62 = v46 - v26;
          v63 = v36 - v62 - 1;
          v178 = v63;
          v64 = 2LL * v63;
          v225 = v64;
          v65 = v46 + 1;
          v226 = v46 + 1;
          v39 = v46 + 2;
          v227 = v46 + 2;
          if ( v64 )
          {
            if ( v46 == (wchar_t *)-4LL || v46 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v62, v65, v64, v15) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v46 + 2, v65, v64);
          }
          *(_DWORD *)v47 = *(_DWORD *)L"%b";
          v150 = (void *)v39;
          v47[v63 + 2] = 0;
          LODWORD(v36) = v36 + 1;
          v140 = v36;
          v26 = v131;
        }
        if ( v39 )
        {
          v48 = -1LL;
          do
            ++v48;
          while ( v39[v48] );
        }
        else
        {
          LODWORD(v48) = 0;
        }
        v39 += (int)v48 + 1;
        v150 = (void *)v39;
      }
      if ( v37 < 0 || v37 > *((_DWORD *)v26 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v26 - 4) = v37;
      v41 = 0;
      v26[v37] = 0;
    }
    v141 = 0;
    v10 = v132;
    v42 = v132;
    v152 = v132;
    v179 = *((_DWORD *)v132 - 4);
    v43 = &v132[v179];
    v228 = v43;
    while ( v42 < v43 )
    {
      while ( 1 )
      {
        v44 = wcsstr(v42, L"%");
        v229 = v44;
        if ( !v44 )
          break;
        v141 = ++v41;
        v42 = v44 + 1;
        v152 = v44 + 1;
      }
      if ( v42 )
      {
        v45 = -1LL;
        do
          ++v45;
        while ( v42[v45] );
      }
      else
      {
        LODWORD(v45) = 0;
      }
      v42 += (int)v45 + 1;
      v152 = v42;
    }
    if ( v41 > 0 )
    {
      v104 = *((int *)v10 - 4);
      v143 = v104;
      v105 = v104 + v41;
      v180 = v105;
      if ( v105 <= (int)v104 )
        v106 = v104;
      else
        v106 = v105;
      v142 = v106;
      v230 = v10 - 12;
      v181 = 1 - *((_DWORD *)v10 - 2);
      v182 = *((_DWORD *)v10 - 3) - v106;
      if ( ((v181 | v182) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v132, v106, v14, v15);
        v10 = v132;
      }
      v231 = v10;
      v107 = v10;
      v151 = v10;
      v108 = &v10[v104];
      v232 = v108;
      while ( v107 < v108 )
      {
        while ( 1 )
        {
          v109 = wcsstr(v107, L"%");
          v111 = v109;
          v233 = v109;
          if ( !v109 )
            break;
          v112 = v109 - v10;
          v113 = v104 - v112 - 1;
          v183 = v113;
          v114 = 2LL * v113;
          v234 = v114;
          v115 = v109 + 1;
          v235 = v109 + 1;
          v107 = v109 + 2;
          v236 = v109 + 2;
          if ( v114 )
          {
            if ( v109 == (wchar_t *)-4LL || v109 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v112, v115, v114, v110) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v109 + 2, v115, v114);
          }
          *(_DWORD *)v111 = *(_DWORD *)L"%%";
          v151 = (void *)v107;
          v111[v113 + 2] = 0;
          LODWORD(v104) = v104 + 1;
          v143 = v104;
        }
        v107 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v107) + 1);
        v151 = (void *)v107;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v132, v105);
      v26 = v131;
    }
    v49 = 0;
    v144 = 0;
    v50 = v10;
    v158 = v10;
    v184 = *((_DWORD *)v10 - 4);
    v51 = &v10[v184];
    v237 = v51;
    while ( v50 < v51 )
    {
      while ( 1 )
      {
        v52 = wcsstr(v50, L"|");
        v238 = v52;
        if ( !v52 )
          break;
        v144 = ++v49;
        v50 = v52 + 1;
        v158 = v52 + 1;
      }
      v50 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen((__int64)v50) + 1);
      v158 = (wchar_t *)v50;
    }
    if ( v49 > 0 )
    {
      v53 = *((int *)v10 - 4);
      v146 = v53;
      v54 = v53 + v49;
      v185 = v53 + v49;
      if ( (int)v53 + v49 <= (int)v53 )
        v55 = v53;
      else
        v55 = v53 + v49;
      v145 = v55;
      v239 = v10 - 12;
      v186 = 1 - *((_DWORD *)v10 - 2);
      v188 = *((_DWORD *)v10 - 3) - v55;
      if ( ((v186 | v188) & 0x80000000) != 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v132, v55, v14, v15);
        v10 = v132;
      }
      v240 = v10;
      v56 = v10;
      v159 = v10;
      v57 = &v10[v53];
      v241 = v57;
      while ( v56 < v57 )
      {
        while ( 1 )
        {
          v58 = wcsstr(v56, L"|");
          v60 = v58;
          v242 = v58;
          if ( !v58 )
            break;
          v66 = v58 - v10;
          v67 = v53 - v66 - 1;
          v187 = v67;
          v68 = 2LL * v67;
          v243 = v68;
          v69 = v58 + 1;
          v244 = v58 + 1;
          v56 = v58 + 2;
          v245 = v58 + 2;
          if ( v68 )
          {
            if ( v58 == (wchar_t *)-4LL || v58 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v66, v69, v68, v59) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove(v58 + 2, v69, v68);
          }
          *(_DWORD *)v60 = *(_DWORD *)L"%b";
          v159 = (void *)v56;
          v60[v67 + 2] = 0;
          LODWORD(v53) = v53 + 1;
          v146 = v53;
        }
        if ( v56 )
        {
          v61 = -1LL;
          do
            ++v61;
          while ( v56[v61] );
        }
        else
        {
          LODWORD(v61) = 0;
        }
        v56 += (int)v61 + 1;
        v159 = (void *)v56;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v132, v54);
      v26 = v131;
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (wchar_t **)this + 9,
      L"%s|%s|%s",
      Str,
      v26,
      v10);
  }
  catch ( ATL::CAtlException *v246 )
  {
    v133 = *(_DWORD *)v246;
    v10 = v132;
  }
  v11 = v133;
  if ( v133 < 0 )
    goto LABEL_189;
LABEL_95:
  v70 = v10 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 - 2, 0xFFFFFFFF) <= 1 )
  {
    v71 = *(void (**)(void))(**(_QWORD **)v70 + 8LL);
    if ( (char *)v71 == (char *)ATL::CAtlStringMgr::Free )
    {
      v72 = *(HANDLE **)(*(_QWORD *)v70 + 8LL);
      v73 = (void (*)(void))*((_QWORD *)*v72 + 1);
      if ( (char *)v73 == (char *)ATL::CWin32Heap::Free )
        HeapFree(v72[1], 0, v70);
      else
        v73();
    }
    else
    {
      v71();
    }
  }
  v74 = v131 - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v131 - 2, 0xFFFFFFFF) <= 1 )
  {
    v75 = *(void (**)(void))(**(_QWORD **)v74 + 8LL);
    if ( (char *)v75 == (char *)ATL::CAtlStringMgr::Free
      && (v76 = *(HANDLE **)(*(_QWORD *)v74 + 8LL),
          v75 = (void (*)(void))*((_QWORD *)*v76 + 1),
          (char *)v75 == (char *)ATL::CWin32Heap::Free) )
    {
      HeapFree(v76[1], 0, v74);
    }
    else
    {
      v75();
    }
  }
  v77 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v77 + 8LL))(*(_QWORD *)v77);
  return (unsigned int)v11;
}
