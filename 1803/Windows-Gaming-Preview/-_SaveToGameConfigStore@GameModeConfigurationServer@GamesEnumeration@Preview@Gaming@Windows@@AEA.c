/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038ECC
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_13b4327bb98260f7a87a6660565127f3____Windows::Internal::CNoResult_::Run @ 0x180039AC0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_13b4327bb98260f.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180015460 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015C30 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // r14d
  HSTRING v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 *v21; // rdi
  __int64 *v22; // rbx
  const WCHAR *v23; // r13
  const WCHAR *v24; // r14
  const WCHAR *v25; // r12
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  const GUID *StringRawBuffer; // r8
  char v31; // al
  __int64 v32; // rcx
  const WCHAR *v33; // rdx
  __int64 v34; // rax
  const WCHAR *v35; // rcx
  const WCHAR *v36; // rcx
  const WCHAR *v37; // rcx
  unsigned __int8 v38; // r12
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 (__fastcall *v43)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 (__fastcall *v47)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  int v48; // eax
  int v49; // eax
  __int64 v50; // r10
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 **v55; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 v58; // rdx
  __int64 v59; // [rsp+38h] [rbp-D0h] BYREF
  int v60; // [rsp+40h] [rbp-C8h]
  int v61; // [rsp+44h] [rbp-C4h] BYREF
  int v62; // [rsp+48h] [rbp-C0h] BYREF
  int v63; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v64[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v65; // [rsp+68h] [rbp-A0h] BYREF
  UINT32 length; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v67; // [rsp+70h] [rbp-98h] BYREF
  __int64 v68; // [rsp+78h] [rbp-90h] BYREF
  int v69; // [rsp+80h] [rbp-88h] BYREF
  int v70; // [rsp+84h] [rbp-84h] BYREF
  int v71; // [rsp+88h] [rbp-80h] BYREF
  int v72; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v73; // [rsp+90h] [rbp-78h] BYREF
  int v74; // [rsp+94h] [rbp-74h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v76; // [rsp+A0h] [rbp-68h]
  __int64 v77; // [rsp+A8h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v78; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v80; // [rsp+D8h] [rbp-30h]
  int v81; // [rsp+E0h] [rbp-28h]
  int v82; // [rsp+E4h] [rbp-24h]
  const WCHAR *v83; // [rsp+E8h] [rbp-20h]
  int v84; // [rsp+F0h] [rbp-18h]
  int v85; // [rsp+F4h] [rbp-14h]
  const WCHAR *v86; // [rsp+F8h] [rbp-10h]
  int v87; // [rsp+100h] [rbp-8h]
  int v88; // [rsp+104h] [rbp-4h]
  const WCHAR *v89; // [rsp+108h] [rbp+0h]
  int v90; // [rsp+110h] [rbp+8h]
  int v91; // [rsp+114h] [rbp+Ch]
  int *v92; // [rsp+118h] [rbp+10h]
  __int64 v93; // [rsp+120h] [rbp+18h]
  int *v94; // [rsp+128h] [rbp+20h]
  __int64 v95; // [rsp+130h] [rbp+28h]
  __int64 *v96; // [rsp+138h] [rbp+30h]
  __int64 v97; // [rsp+140h] [rbp+38h]
  int *v98; // [rsp+148h] [rbp+40h]
  __int64 v99; // [rsp+150h] [rbp+48h]
  int *v100; // [rsp+158h] [rbp+50h]
  __int64 v101; // [rsp+160h] [rbp+58h]
  int *v102; // [rsp+168h] [rbp+60h]
  __int64 v103; // [rsp+170h] [rbp+68h]
  int *v104; // [rsp+178h] [rbp+70h]
  __int64 v105; // [rsp+180h] [rbp+78h]
  int *v106; // [rsp+188h] [rbp+80h]
  __int64 v107; // [rsp+190h] [rbp+88h]
  const GUID *v108; // [rsp+198h] [rbp+90h]
  int v109; // [rsp+1A0h] [rbp+98h]
  int v110; // [rsp+1A4h] [rbp+9Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v77 = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  v76 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v78 = v2;
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80070005LL);
    goto LABEL_14;
  }
  v61 = 0;
  v62 = 0;
  v60 = 0;
  v68 = 0LL;
  LODWORD(v67) = 0;
  v63 = 0;
  v4 = 0LL;
  string = 0LL;
  if ( !*((_QWORD *)this + 19) || *((_QWORD *)this + 18) )
  {
    v6 = *((_QWORD *)this + 14);
    v7 = *((_QWORD *)this + 15);
    if ( v6 )
    {
      if ( !v7 || !*((_QWORD *)this + 16) )
      {
LABEL_9:
        v5 = 667LL;
        goto LABEL_10;
      }
    }
    else if ( v7 || *((_QWORD *)this + 16) )
    {
      goto LABEL_9;
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v61);
      v3 = v10;
      if ( v10 < 0 )
      {
        v8 = (unsigned int)v10;
        v5 = 672LL;
        goto LABEL_12;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), &v62);
      v3 = v11;
      if ( v11 < 0 )
      {
        v8 = (unsigned int)v11;
        v5 = 673LL;
        goto LABEL_12;
      }
      if ( v62 + v61 > 100 )
      {
        v5 = 674LL;
        goto LABEL_10;
      }
      v60 = 100 - v62 - v61;
    }
    v12 = *((_QWORD *)this + 18);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v68);
      v3 = v13;
      if ( v13 < 0 )
      {
        v8 = (unsigned int)v13;
        v5 = 681LL;
        goto LABEL_12;
      }
      v14 = *((_QWORD *)this + 19);
      if ( v14 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 48LL))(v14, (char *)&v68 + 4);
        v3 = v15;
        if ( v15 < 0 )
        {
          v8 = (unsigned int)v15;
          v5 = 684LL;
          goto LABEL_12;
        }
      }
    }
    v16 = *((_QWORD *)this + 17);
    if ( v16 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &v67);
      v3 = v17;
      if ( v17 < 0 )
      {
        v8 = (unsigned int)v17;
        v5 = 690LL;
        goto LABEL_12;
      }
    }
    v18 = *((_QWORD *)this + 14);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v63);
      v3 = v19;
      if ( v19 < 0 )
      {
        v8 = (unsigned int)v19;
        v5 = 695LL;
        goto LABEL_12;
      }
    }
    v20 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 13), &string);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2BA,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)v20);
    v21 = (__int64 *)*((_QWORD *)this + 10);
    v22 = (__int64 *)*v21;
    v4 = string;
    while ( v22 != v21 )
    {
      v23 = &word_18004F460;
      v24 = &word_18004F460;
      v25 = &word_18004F460;
      v26 = v22[6];
      v27 = *(_DWORD *)(v26 + 16);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v26 + 8);
        v29 = v27;
        do
        {
          if ( *(_DWORD *)v28 )
          {
            if ( *(_DWORD *)v28 == 1 )
            {
              v25 = *(const WCHAR **)(v28 + 8);
            }
            else if ( *(_DWORD *)v28 == 2 )
            {
              v23 = *(const WCHAR **)(v28 + 8);
            }
          }
          else
          {
            v24 = *(const WCHAR **)(v28 + 8);
          }
          v28 += 16LL;
          --v29;
        }
        while ( v29 );
      }
      length = 0;
      StringRawBuffer = (const GUID *)WindowsGetStringRawBuffer(v4, &length);
      if ( (unsigned int)dword_18005D000 > 5
        && ((qword_18005D010 & 0x800000000000LL) == 0 || (qword_18005D018 & 0x800000000000LL) != qword_18005D018
          ? (v31 = 0)
          : (v31 = 1),
            v31) )
      {
        v32 = *(_QWORD *)(v22[6] + 24);
        v33 = &word_18004F460;
        LODWORD(v34) = 0;
        if ( v32 )
        {
          v33 = *(const WCHAR **)(v22[6] + 24);
          v34 = -1LL;
          do
            ++v34;
          while ( *(_WORD *)(v32 + 2 * v34) );
        }
        v80 = v33;
        v81 = 2 * v34 + 2;
        v82 = 0;
        v35 = &word_18004F460;
        LODWORD(v34) = 0;
        if ( v24 )
        {
          v35 = v24;
          v34 = -1LL;
          do
            ++v34;
          while ( v24[v34] );
        }
        v83 = v35;
        v84 = 2 * v34 + 2;
        v85 = 0;
        v36 = &word_18004F460;
        LODWORD(v34) = 0;
        if ( v25 )
        {
          v36 = v25;
          v34 = -1LL;
          do
            ++v34;
          while ( v25[v34] );
        }
        v86 = v36;
        v87 = 2 * v34 + 2;
        v88 = 0;
        v37 = &word_18004F460;
        LODWORD(v34) = 0;
        if ( v23 )
        {
          v37 = v23;
          v34 = -1LL;
          do
            ++v34;
          while ( v23[v34] );
        }
        v89 = v37;
        v90 = 2 * v34 + 2;
        v91 = 0;
        v69 = *((unsigned __int8 *)this + 96);
        v92 = &v69;
        v93 = 4LL;
        v70 = *((unsigned __int8 *)this + 160);
        v94 = &v70;
        v95 = 4LL;
        v96 = &v68;
        v97 = 8LL;
        v71 = v63;
        v98 = &v71;
        v99 = 4LL;
        v72 = v61;
        v100 = &v72;
        v101 = 4LL;
        v73 = v62;
        v102 = &v73;
        v103 = 4LL;
        v38 = v60;
        v74 = v60;
        v104 = &v74;
        v105 = 4LL;
        LOWORD(v65) = length;
        v106 = &v65;
        v107 = 2LL;
        v108 = StringRawBuffer;
        v109 = 2 * (unsigned __int16)length;
        v110 = 0;
        TlgWrite((TraceLoggingHProvider)&v65, &unk_180053951, StringRawBuffer, 0LL, 0xFu, &pData);
      }
      else
      {
        v38 = v60;
      }
      v39 = v22[6];
      if ( ((*(_DWORD *)(v39 + 32) >> 7) & 1) != *((_BYTE *)this + 96) )
      {
        LODWORD(v59) = *((unsigned __int8 *)this + 96);
        *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
        v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int))(**((_QWORD **)this + 8) + 104LL))(
                *((_QWORD *)this + 8),
                &v64[1],
                17LL,
                &v59,
                4);
        v3 = v40;
        if ( v40 < 0 )
        {
          v8 = (unsigned int)v40;
          v5 = 754LL;
          goto LABEL_12;
        }
        *(_DWORD *)(v22[6] + 32) ^= (*(_DWORD *)(v22[6] + 32) ^ (*((unsigned __int8 *)this + 96) << 7)) & 0x80;
        v39 = v22[6];
      }
      if ( ((*(_DWORD *)(v39 + 32) & 0x100) == 0) != *((_BYTE *)this + 160) )
      {
        LODWORD(v59) = *((_BYTE *)this + 160) == 0;
        *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
        v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int))(**((_QWORD **)this + 8) + 104LL))(
                *((_QWORD *)this + 8),
                &v64[1],
                21LL,
                &v59,
                4);
        v3 = v41;
        if ( v41 < 0 )
        {
          v8 = (unsigned int)v41;
          v5 = 763LL;
          goto LABEL_12;
        }
        *(_DWORD *)(v22[6] + 32) = *(_DWORD *)(v22[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 160) == 0 ? 0x100 : 0);
      }
      v42 = *((_QWORD *)this + 8);
      *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
      v43 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v42 + 72LL);
      if ( *((_QWORD *)this + 18) )
      {
        v44 = v43(v42, &v64[1], 18LL, &v68, 8);
        v3 = v44;
        if ( v44 < 0 )
        {
          v8 = (unsigned int)v44;
          v5 = 770LL;
          goto LABEL_12;
        }
      }
      else
      {
        v45 = v43(v42, &v64[1], 18LL, 0LL, 0);
        v3 = v45;
        if ( v45 < 0 )
        {
          v8 = (unsigned int)v45;
          v5 = 774LL;
          goto LABEL_12;
        }
      }
      v46 = *((_QWORD *)this + 8);
      *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
      v47 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v46 + 72LL);
      if ( *((_QWORD *)this + 17) )
      {
        v48 = v47(v46, &v64[1], 20LL, &v67, 4);
        v3 = v48;
        if ( v48 < 0 )
        {
          v8 = (unsigned int)v48;
          v5 = 780LL;
          goto LABEL_12;
        }
      }
      else
      {
        v49 = v47(v46, &v64[1], 20LL, 0LL, 0);
        v3 = v49;
        if ( v49 < 0 )
        {
          v8 = (unsigned int)v49;
          v5 = 784LL;
          goto LABEL_12;
        }
      }
      if ( *((_QWORD *)this + 14) )
      {
        v50 = *((_QWORD *)this + 8);
        LODWORD(v59) = 0;
        if ( (unsigned __int8)v61 + v38 + (unsigned __int8)v62 != 100 )
        {
          v58 = 397LL;
          goto LABEL_111;
        }
        if ( (unsigned __int8)v63 > 0x64u )
        {
          v58 = 402LL;
LABEL_111:
          v3 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v58,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)0x80070057LL);
LABEL_112:
          v5 = 797LL;
          goto LABEL_11;
        }
        LODWORD(v59) = v38 | (((unsigned __int8)v62 | (((unsigned __int8)v61 | ((unsigned __int8)v63 << 8)) << 8)) << 8);
        *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v50 + 72LL))(
                v50,
                &v64[1],
                19LL,
                &v59,
                4);
        v3 = v51;
        if ( v51 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x197,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)v51);
        if ( v3 < 0 )
          goto LABEL_112;
      }
      else
      {
        *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
        v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)this + 8) + 72LL))(
                *((_QWORD *)this + 8),
                &v64[1],
                19LL);
        v3 = v52;
        if ( v52 < 0 )
        {
          v8 = (unsigned int)v52;
          v5 = 801LL;
          goto LABEL_12;
        }
      }
      v53 = *((_QWORD *)this + 13);
      v59 = v53;
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
      *(_OWORD *)&v64[1] = *((_OWORD *)v22 + 2);
      v54 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v64[1], &v59);
      v3 = v54;
      if ( v54 < 0 )
      {
        v8 = (unsigned int)v54;
        v5 = 805LL;
        goto LABEL_12;
      }
      if ( !*((_BYTE *)v22 + 25) )
      {
        v55 = (__int64 **)v22[2];
        if ( *((_BYTE *)v55 + 25) )
        {
          for ( i = (__int64 *)v22[1]; !*((_BYTE *)i + 25) && v22 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v22 = i;
          v22 = i;
        }
        else
        {
          v22 = (__int64 *)v22[2];
          for ( j = *v55; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v22 = j;
        }
      }
    }
    v3 = 0;
    goto LABEL_13;
  }
  v5 = 661LL;
LABEL_10:
  v3 = -2147024809;
LABEL_11:
  v8 = (unsigned int)v3;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)v8);
LABEL_13:
  WindowsDeleteString(v4);
  v2 = v76;
LABEL_14:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
