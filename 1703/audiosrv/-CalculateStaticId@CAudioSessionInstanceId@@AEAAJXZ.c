/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18001FBF4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001ED6C (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180022EE0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180022F00 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180023200 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800235CC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023650 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800236B0 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v5; // rax
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v7; // rax
  wchar_t *v8; // rdi
  int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // r13d
  wchar_t *v13; // r14
  wchar_t *v14; // r12
  wchar_t *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // r12d
  wchar_t *v20; // r14
  wchar_t *v21; // r13
  wchar_t *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  wchar_t *v25; // r8
  __int64 v26; // r13
  int v27; // r15d
  __int64 v28; // rdx
  const wchar_t *v29; // r14
  wchar_t *v30; // rax
  wchar_t *v31; // rax
  __int64 v32; // r9
  wchar_t *v33; // r12
  __int64 v34; // rax
  wchar_t *v35; // r8
  int v36; // eax
  __int64 v37; // r13
  int v38; // r15d
  wchar_t *v39; // rbx
  wchar_t *v40; // r14
  wchar_t *v41; // rax
  __int64 v42; // r12
  __int64 v43; // r12
  unsigned int v44; // r14d
  __int64 v45; // rdx
  const wchar_t *v46; // rbx
  wchar_t *v47; // rax
  wchar_t *v48; // rax
  __int64 v49; // r9
  wchar_t *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rcx
  size_t v53; // r8
  wchar_t *v54; // rdx
  __int64 v55; // r13
  __int64 v56; // rcx
  int v57; // r12d
  size_t v58; // r8
  wchar_t *v59; // rdx
  size_t v60; // r13
  ATL::CAtlStringMgr **v61; // rdx
  void (*v62)(void); // rax
  ATL::CAtlStringMgr **v63; // rdx
  void (*v64)(void); // rax
  wchar_t *v65; // rdx
  __int64 v67; // r15
  wchar_t *v68; // r8
  __int64 v69; // r13
  unsigned int v70; // r15d
  __int64 v71; // rdx
  const wchar_t *v72; // r14
  wchar_t *v73; // rax
  wchar_t *v74; // rax
  __int64 v75; // r9
  wchar_t *v76; // r12
  __int64 v77; // rcx
  size_t v78; // r8
  wchar_t *v79; // rdx
  size_t v80; // rax
  int v81; // [rsp+30h] [rbp-78h]
  wchar_t *v82; // [rsp+38h] [rbp-70h] BYREF
  wchar_t *Str; // [rsp+40h] [rbp-68h] BYREF
  wchar_t *v84; // [rsp+48h] [rbp-60h] BYREF
  wchar_t *v85; // [rsp+50h] [rbp-58h]
  __int64 v86; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v87; // [rsp+60h] [rbp-48h] BYREF
  int v89; // [rsp+B8h] [rbp+10h]
  int v90; // [rsp+B8h] [rbp+10h]
  int v91; // [rsp+B8h] [rbp+10h]
  int v92; // [rsp+B8h] [rbp+10h]
  int v93; // [rsp+C0h] [rbp+18h]
  int v94; // [rsp+C0h] [rbp+18h]
  size_t v95; // [rsp+C0h] [rbp+18h]
  wchar_t *v96; // [rsp+C8h] [rbp+20h]
  int v97; // [rsp+C8h] [rbp+20h]
  wchar_t *v98; // [rsp+C8h] [rbp+20h]

  v86 = -2LL;
  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  Str = (wchar_t *)((char *)NilString + 24);
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    v5 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v5 = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v82 = (wchar_t *)((char *)v5 + 24);
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    v7 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v7 = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v8 = (wchar_t *)((char *)v7 + 24);
  v84 = (wchar_t *)((char *)v7 + 24);
  v9 = CAudioEndpointId::ToString(this, &Str);
  if ( v9 < 0 )
    goto LABEL_131;
  v9 = CAppAudioSessionId::ToString((__int64)this + 8, &v82);
  if ( v9 < 0 )
    goto LABEL_131;
  v9 = CAppInstanceId::ToString((char *)this + 56, &v84);
  v81 = v9;
  if ( v9 < 0 )
  {
    v8 = v84;
LABEL_131:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 0x3F6u, v9);
    goto LABEL_86;
  }
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &Str,
      L"%",
      L"%%");
    v10 = -1LL;
    do
      ++v10;
    while ( Control[v10] );
    if ( (_DWORD)v10 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( aB[v11] );
      v12 = 0;
      v89 = 0;
      v13 = Str;
      v14 = &Str[*((int *)Str - 4)];
      if ( Str < v14 )
      {
        do
        {
          v15 = wcsstr(v13, L"|");
          if ( v15 )
          {
            v67 = (int)v10;
            do
            {
              v89 = ++v12;
              v13 = &v15[v67];
              v15 = wcsstr(&v15[v67], L"|");
            }
            while ( v15 );
          }
          if ( v13 )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v13[v16] );
          }
          else
          {
            LODWORD(v16) = 0;
          }
          v13 += (int)v16 + 1;
        }
        while ( v13 < v14 );
        if ( v12 > 0 )
        {
          v68 = Str;
          v69 = *((int *)Str - 4);
          v70 = v69 + v89 * (v11 - v10);
          v71 = *((unsigned int *)Str - 4);
          if ( (int)v70 > (int)v69 )
            v71 = v70;
          if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v71)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v71);
            v68 = Str;
          }
          v72 = v68;
          v73 = &v68[v69];
          v98 = v73;
          while ( v72 < v73 )
          {
            while ( 1 )
            {
              v74 = wcsstr(v72, L"|");
              v76 = v74;
              if ( !v74 )
                break;
              v77 = v74 - Str;
              v92 = v69 - v77 - v10;
              v78 = 2LL * v92;
              v79 = &v74[(int)v10];
              v80 = 2LL * (int)v11;
              v95 = v80;
              v72 = (wchar_t *)((char *)v76 + v80);
              if ( v78 )
              {
                if ( !v72 || !v79 )
                {
                  *(_DWORD *)_o__errno(v77, v79, v78, v75) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove((char *)v76 + v80, v79, v78);
                v80 = v95;
              }
              if ( v80 )
                memcpy_0(v76, L"%b", v80);
              v76[(int)v11 + v92] = 0;
              LODWORD(v69) = v11 - v10 + v69;
            }
            v72 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v72) + 1);
            v73 = v98;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&Str, v70);
        }
      }
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v82,
      L"%",
      L"%%");
    v17 = -1LL;
    do
      ++v17;
    while ( Control[v17] );
    if ( (_DWORD)v17 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( aB[v18] );
      v19 = 0;
      v20 = v82;
      v21 = &v82[*((int *)v82 - 4)];
      if ( v82 < v21 )
      {
        do
        {
          v22 = wcsstr(v20, L"|");
          if ( v22 )
          {
            v23 = (int)v17;
            do
            {
              ++v19;
              v20 = &v22[v23];
              v22 = wcsstr(&v22[v23], L"|");
            }
            while ( v22 );
          }
          if ( v20 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( v20[v24] );
          }
          else
          {
            LODWORD(v24) = 0;
          }
          v20 += (int)v24 + 1;
        }
        while ( v20 < v21 );
        if ( v19 > 0 )
        {
          v25 = v82;
          v26 = *((int *)v82 - 4);
          v90 = v26;
          v27 = v26 + v19 * (v18 - v17);
          if ( v27 <= (int)v26 )
            v28 = (unsigned int)v26;
          else
            v28 = (unsigned int)v27;
          if ( ((1 - *((_DWORD *)v82 - 2)) | (*((_DWORD *)v82 - 3) - (int)v28)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v82, v28);
            v25 = v82;
          }
          v29 = v25;
          v30 = &v25[v26];
          v96 = v30;
          while ( v29 < v30 )
          {
            while ( 1 )
            {
              v31 = wcsstr(v29, L"|");
              v33 = v31;
              if ( !v31 )
                break;
              v52 = v31 - v82;
              v94 = v26 - v52 - v17;
              v53 = 2LL * v94;
              v54 = &v31[(int)v17];
              v55 = (int)v18;
              v29 = &v31[v55];
              if ( v53 )
              {
                if ( !v29 || !v54 )
                {
                  *(_DWORD *)_o__errno(v52, v54, v53, v32) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove(&v31[v55], v54, v53);
              }
              if ( v55 * 2 )
                memcpy_0(v33, L"%b", 2LL * (int)v18);
              v33[(int)v18 + v94] = 0;
              LODWORD(v26) = v18 - v17 + v90;
              v90 = v26;
            }
            if ( v29 )
            {
              v34 = -1LL;
              do
                ++v34;
              while ( v29[v34] );
            }
            else
            {
              LODWORD(v34) = 0;
            }
            v29 += (int)v34 + 1;
            v30 = v96;
          }
          if ( v27 < 0 || (v35 = v82, v27 > *((_DWORD *)v82 - 3)) )
            ATL::AtlThrowImpl(-2147024809);
          *((_DWORD *)v82 - 4) = v27;
          v35[v27] = 0;
        }
      }
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
      &v84,
      L"%",
      L"%%");
    v36 = ATL::ChTraitsCRT<unsigned short>::SafeStringLen(L"|");
    v37 = v36;
    v97 = v36;
    if ( v36 )
    {
      v91 = ATL::ChTraitsCRT<unsigned short>::SafeStringLen(L"%b");
      v38 = 0;
      v8 = v84;
      v39 = v84;
      v40 = &v84[*((int *)v84 - 4)];
      if ( v84 < v40 )
      {
        do
        {
          v41 = wcsstr(v39, L"|");
          if ( v41 )
          {
            v42 = v37;
            do
            {
              ++v38;
              v39 = &v41[v42];
              v41 = wcsstr(&v41[v42], L"|");
            }
            while ( v41 );
          }
          v39 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v39) + 1);
        }
        while ( v39 < v40 );
        if ( v38 > 0 )
        {
          v43 = *((int *)v8 - 4);
          v93 = v43;
          v44 = v43 + v38 * (v91 - v37);
          if ( (int)v44 <= (int)v43 )
            v45 = (unsigned int)v43;
          else
            v45 = v44;
          if ( ((1 - *((_DWORD *)v8 - 2)) | (*((_DWORD *)v8 - 3) - (int)v45)) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v84, v45);
            v8 = v84;
          }
          v46 = v8;
          v47 = &v8[v43];
          v85 = v47;
          while ( v46 < v47 )
          {
            while ( 1 )
            {
              v48 = wcsstr(v46, L"|");
              v50 = v48;
              if ( !v48 )
                break;
              v56 = v48 - v8;
              v57 = v43 - v56 - v37;
              v58 = 2LL * v57;
              v59 = &v48[(int)v37];
              v60 = v91;
              v46 = &v48[v60];
              if ( v58 )
              {
                if ( !v46 || !v59 )
                {
                  *(_DWORD *)_o__errno(v56, v59, v58, v49) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove(&v48[v60], v59, v58);
              }
              if ( v60 * 2 )
                memcpy_0(v50, L"%b", v60 * 2);
              v50[v57 + v91] = 0;
              LODWORD(v37) = v97;
              LODWORD(v43) = v91 - v97 + v93;
              v93 = v43;
            }
            if ( v46 )
            {
              v51 = -1LL;
              do
                ++v51;
              while ( v46[v51] );
            }
            else
            {
              LODWORD(v51) = 0;
            }
            v46 += (int)v51 + 1;
            v47 = v85;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&v84, v44);
        }
      }
    }
    else
    {
      v8 = v84;
    }
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (char *)this + 72,
      L"%s|%s|%s",
      Str,
      v82,
      v8);
  }
  catch ( ATL::CAtlException *v87 )
  {
    v8 = v84;
    v9 = *(_DWORD *)v87;
    goto LABEL_85;
  }
  v9 = v81;
LABEL_85:
  if ( v9 < 0 )
    goto LABEL_131;
LABEL_86:
  v61 = (ATL::CAtlStringMgr **)(v8 - 12);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF) <= 1 )
  {
    v62 = *(void (**)(void))(*(_QWORD *)*v61 + 8LL);
    if ( (char *)v62 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*v61, (struct ATL::CStringData *)v61);
    else
      v62();
  }
  v63 = (ATL::CAtlStringMgr **)(v82 - 12);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v82 - 2, 0xFFFFFFFF) <= 1 )
  {
    v64 = *(void (**)(void))(*(_QWORD *)*v63 + 8LL);
    if ( (char *)v64 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*v63, (struct ATL::CStringData *)v63);
    else
      v64();
  }
  v65 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v65 + 8LL))(*(_QWORD *)v65);
  return (unsigned int)v9;
}
