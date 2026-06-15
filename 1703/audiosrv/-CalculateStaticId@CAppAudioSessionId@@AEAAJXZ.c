/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001F000
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18001EF50 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800973B4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180022C30 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x180022EE0 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180023200 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800235CC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180023600 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18003202C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800822FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x18008A4BC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18008D7D4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  const void *v2; // rbx
  __int64 v3; // rdi
  __int64 (*v4)(void); // rax
  struct ATL::IAtlStringMgr *v5; // rcx
  __int64 v6; // rdi
  OLECHAR *v7; // rbx
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rax
  unsigned int *NilString; // rax
  wchar_t *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  wchar_t *v13; // r15
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rsi
  const wchar_t *v21; // r14
  wchar_t *v22; // r13
  wchar_t *v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // rsi
  const wchar_t *v28; // r14
  const wchar_t *v29; // r13
  wchar_t *v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  ATL::CAtlStringMgr **v33; // rdx
  void (*v34)(void); // rax
  _QWORD *v35; // rdx
  int v36; // ebx
  _DWORD *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r14
  HINSTANCE StringResourceInstance; // rax
  __int64 v48; // r13
  unsigned int v49; // r13d
  __int64 v50; // rdx
  const wchar_t *v51; // r14
  const wchar_t *v52; // rax
  wchar_t *v53; // rax
  __int64 v54; // r9
  wchar_t *v55; // rcx
  size_t v56; // r8
  wchar_t *v57; // rdx
  size_t v58; // rax
  __int64 v59; // r13
  unsigned int v60; // r13d
  __int64 v61; // rdx
  const wchar_t *v62; // r14
  const wchar_t *v63; // rax
  wchar_t *v64; // rax
  wchar_t *v65; // rcx
  __int64 v66; // rdx
  size_t v67; // r8
  wchar_t *v68; // r9
  size_t v69; // rax
  int v70; // [rsp+20h] [rbp-108h]
  int v71; // [rsp+20h] [rbp-108h]
  unsigned int v72; // [rsp+20h] [rbp-108h]
  unsigned int v73; // [rsp+20h] [rbp-108h]
  int v74; // [rsp+24h] [rbp-104h]
  int v75; // [rsp+24h] [rbp-104h]
  unsigned int *v76; // [rsp+28h] [rbp-100h] BYREF
  wchar_t *v77; // [rsp+30h] [rbp-F8h]
  size_t v78; // [rsp+38h] [rbp-F0h]
  __int64 v79; // [rsp+40h] [rbp-E8h] BYREF
  size_t v80; // [rsp+48h] [rbp-E0h]
  const GUID *v81; // [rsp+50h] [rbp-D8h]
  __int64 v82; // [rsp+58h] [rbp-D0h]
  OLECHAR *v83; // [rsp+60h] [rbp-C8h]
  ATL::CAtlException *v84; // [rsp+68h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+70h] [rbp-B8h] BYREF

  v82 = -2LL;
  v81 = this;
  try
  {
    v2 = *(const void **)&this->Data1;
    v3 = *(_QWORD *)&this->Data1 - 24LL;
    v4 = *(__int64 (**)(void))(**(_QWORD **)v3 + 32LL);
    if ( (char *)v4 == (char *)ATL::CAtlStringMgr::Clone )
      v5 = ATL::CAtlStringMgr::Clone(*(ATL::CAtlStringMgr **)v3);
    else
      v5 = (struct ATL::IAtlStringMgr *)v4();
    if ( *(int *)(v3 + 16) >= 0 && v5 == *(struct ATL::IAtlStringMgr **)v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
      goto LABEL_7;
    }
    v38 = (_DWORD *)(v3 + 8);
    v39 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v5)(
            v5,
            *(unsigned int *)(v3 + 8),
            2LL);
    v3 = v39;
    if ( !v39 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v41);
    *(_DWORD *)(v39 + 8) = *v38;
    v44 = *v38 + 1;
    v45 = 2 * v44;
    v46 = 2 * v44;
    if ( 2 * v44 )
    {
      if ( v39 == -24 )
        goto LABEL_69;
      if ( v2 && v46 >= v45 )
      {
        memcpy_0((void *)(v39 + 24), v2, 2 * v44);
        goto LABEL_7;
      }
      memset((void *)(v39 + 24), 0, 2 * v44);
      if ( !v2 )
      {
LABEL_69:
        *(_DWORD *)_o__errno(v44, v40, v42, v43) = 22;
      }
      else
      {
        if ( v46 >= v45 )
          goto LABEL_7;
        *(_DWORD *)_o__errno(v44, v40, v42, v43) = 34;
      }
      invalid_parameter_noinfo();
    }
LABEL_7:
    v6 = v3 + 24;
    v79 = v6;
    if ( !*(_DWORD *)this[2].Data4 )
    {
      CAudioIdentifier::EscapeIdentifierString(&v79);
      v6 = v79;
    }
    StringFromGUID2(this + 1, sz, 64);
    v7 = SysAllocString(sz);
    v83 = v7;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
    if ( v8 == ATL::CAtlStringMgr::GetNilString )
      NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      NilString = (unsigned int *)v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v13 = (wchar_t *)(NilString + 6);
    v76 = NilString + 6;
    if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v7, (unsigned __int16)v10);
      if ( StringResourceInstance )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
          &v76,
          StringResourceInstance,
          (unsigned __int16)v7);
        v13 = (wchar_t *)v76;
      }
      goto LABEL_25;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v7[v14] );
    if ( !(_DWORD)v14 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v76);
      v13 = (wchar_t *)v76;
LABEL_25:
      SysFreeString(v7);
      v19 = -1LL;
      do
        ++v19;
      while ( SubStr[v19] );
      if ( (_DWORD)v19 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( asc_1800EAE78[v20] );
        v70 = 0;
        v21 = v13;
        v22 = &v13[*((int *)v13 - 4)];
        v77 = v22;
        if ( v13 < v22 )
        {
          do
          {
            v23 = wcsstr(v21, L"%");
            if ( v23 )
            {
              v48 = (int)v19;
              do
              {
                ++v70;
                v21 = &v23[v48];
                v23 = wcsstr(&v23[v48], L"%");
              }
              while ( v23 );
              v22 = v77;
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
          }
          while ( v21 < v22 );
          v25 = v70;
          if ( v70 > 0 )
          {
            v72 = *((_DWORD *)v13 - 4);
            v49 = v72 + v25 * (v20 - v19);
            v50 = v72;
            if ( (int)v49 > (int)v72 )
              v50 = v49;
            if ( ((1 - *((_DWORD *)v13 - 2)) | (*((_DWORD *)v13 - 3) - (int)v50)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v76, v50);
              v13 = (wchar_t *)v76;
            }
            v51 = v13;
            v52 = &v13[v72];
            v78 = (size_t)v52;
            while ( v51 < v52 )
            {
              while ( 1 )
              {
                v53 = wcsstr(v51, L"%");
                v55 = v53;
                v77 = v53;
                if ( !v53 )
                  break;
                v74 = v72 - (v53 - v13) - v19;
                v56 = 2LL * v74;
                v57 = &v53[(int)v19];
                v58 = 2LL * (int)v20;
                v80 = v58;
                v51 = (wchar_t *)((char *)v55 + v58);
                if ( v56 )
                {
                  if ( !v51 || !v57 )
                  {
                    *(_DWORD *)_o__errno(v55, v57, v56, v54) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove((char *)v55 + v58, v57, v56);
                  v55 = v77;
                  v58 = v80;
                }
                if ( v58 )
                  memcpy_0(v55, L"%%", v58);
                v77[(int)v20 + v74] = 0;
                v72 += v20 - v19;
              }
              v51 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v51) + 1);
              v52 = (const wchar_t *)v78;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength(&v76, v49);
          }
        }
      }
      v26 = -1LL;
      do
        ++v26;
      while ( Control[v26] );
      if ( (_DWORD)v26 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( aB[v27] );
        v71 = 0;
        v28 = v13;
        v29 = &v13[*((int *)v13 - 4)];
        v78 = (size_t)v29;
        if ( v13 < v29 )
        {
          do
          {
            v30 = wcsstr(v28, L"|");
            if ( v30 )
            {
              v59 = (int)v26;
              do
              {
                ++v71;
                v28 = &v30[v59];
                v30 = wcsstr(&v30[v59], L"|");
              }
              while ( v30 );
              v29 = (const wchar_t *)v78;
            }
            if ( v28 )
            {
              v31 = -1LL;
              do
                ++v31;
              while ( v28[v31] );
            }
            else
            {
              LODWORD(v31) = 0;
            }
            v28 += (int)v31 + 1;
          }
          while ( v28 < v29 );
          v32 = v71;
          if ( v71 > 0 )
          {
            v73 = *((_DWORD *)v13 - 4);
            v60 = v73 + v32 * (v27 - v26);
            v61 = v73;
            if ( (int)v60 > (int)v73 )
              v61 = v60;
            if ( ((1 - *((_DWORD *)v13 - 2)) | (*((_DWORD *)v13 - 3) - (int)v61)) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v76, v61);
              v13 = (wchar_t *)v76;
            }
            v62 = v13;
            v63 = &v13[v73];
            v80 = (size_t)v63;
            while ( v62 < v63 )
            {
              while ( 1 )
              {
                v64 = wcsstr(v62, L"|");
                v65 = v64;
                v77 = v64;
                if ( !v64 )
                  break;
                v66 = v73 - (unsigned int)(v64 - v13) - (unsigned int)v26;
                v75 = v66;
                v67 = 2LL * (int)v66;
                v68 = &v64[(int)v26];
                v69 = 2LL * (int)v27;
                v78 = v69;
                v62 = (wchar_t *)((char *)v65 + v69);
                if ( v67 )
                {
                  if ( !v62 || !v68 )
                  {
                    *(_DWORD *)_o__errno(v65, v66, v67, v68) = 22;
                    invalid_parameter_noinfo();
                    ATL::AtlThrowImpl(-2147024809);
                  }
                  memmove((char *)v65 + v69, &v65[(int)v26], v67);
                  v65 = v77;
                  v69 = v78;
                  LODWORD(v66) = v75;
                }
                if ( v69 )
                {
                  memcpy_0(v65, L"%b", v69);
                  LODWORD(v66) = v75;
                }
                v77[(int)v66 + (int)v27] = 0;
                v73 += v27 - v26;
              }
              v62 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v62) + 1);
              v63 = (const wchar_t *)v80;
            }
            ATL::CSimpleStringT<unsigned short,0>::SetLength(&v76, v60);
          }
        }
      }
      if ( *(_DWORD *)v81[2].Data4 )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          &v81[2],
          L"#|%s",
          v13);
      else
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          &v81[2],
          L"%s|%s",
          v6,
          v13);
      v33 = (ATL::CAtlStringMgr **)(v13 - 12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 - 2, 0xFFFFFFFF) <= 1 )
      {
        v34 = *(void (**)(void))(*(_QWORD *)*v33 + 8LL);
        if ( (char *)v34 == (char *)ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(*v33, (struct ATL::CStringData *)v33);
        else
          v34();
      }
      v35 = (_QWORD *)(v79 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v79 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v35 + 8LL))(*v35);
      goto LABEL_132;
    }
    v15 = NilString[2];
    v16 = v7 - v13;
    v17 = 1 - NilString[4];
    if ( (int)(v17 | (NilString[3] - v14)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v76, (unsigned int)v14);
      v13 = (wchar_t *)v76;
    }
    if ( v16 <= v15 )
    {
      v10 = &v13[v16];
      v18 = (int)v14;
      if ( !(v18 * 2) )
        goto LABEL_22;
      if ( v13 && v10 )
      {
        memmove(v13, v10, 2LL * (int)v14);
        goto LABEL_22;
      }
    }
    else
    {
      v18 = (int)v14;
      if ( !(v18 * 2) )
        goto LABEL_22;
      if ( v13 )
      {
        memcpy_0(v13, v7, 2LL * (int)v14);
        goto LABEL_22;
      }
    }
    *(_DWORD *)_o__errno(v17, v10, v11, v12) = 22;
    invalid_parameter_noinfo();
LABEL_22:
    if ( (int)v14 < 0 || (int)v14 > *((_DWORD *)v13 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v13 - 4) = v14;
    v13[v18] = 0;
    goto LABEL_25;
  }
  catch ( ATL::CAtlException *v84 )
  {
    v36 = *(_DWORD *)v84;
    goto LABEL_57;
  }
LABEL_132:
  v36 = 0;
LABEL_57:
  if ( v36 < 0 )
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 0x14Bu, v36);
  return (unsigned int)v36;
}
