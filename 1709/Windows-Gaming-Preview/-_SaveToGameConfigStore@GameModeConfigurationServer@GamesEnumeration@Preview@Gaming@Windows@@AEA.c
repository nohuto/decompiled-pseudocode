/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038084
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_13b4327bb98260f7a87a6660565127f3____Windows::Internal::CNoResult_::Run @ 0x180038C60 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_13b4327bb98260f.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180014D4C (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015504 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // r14d
  HSTRING v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  const WCHAR *v17; // r13
  const WCHAR *v18; // r14
  const WCHAR *v19; // r12
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  const GUID *StringRawBuffer; // r8
  char v25; // al
  __int64 v26; // rcx
  const WCHAR *v27; // rdx
  __int64 v28; // rax
  const WCHAR *v29; // rcx
  const WCHAR *v30; // rcx
  const WCHAR *v31; // rcx
  unsigned __int8 v32; // r12
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 *i; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // r9
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  int v46; // [rsp+40h] [rbp-C8h]
  int v47; // [rsp+44h] [rbp-C4h] BYREF
  int v48; // [rsp+48h] [rbp-C0h] BYREF
  int v49; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v50[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v51; // [rsp+68h] [rbp-A0h] BYREF
  UINT32 length; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  int v55; // [rsp+80h] [rbp-88h] BYREF
  int v56; // [rsp+84h] [rbp-84h] BYREF
  int v57; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  int v60; // [rsp+94h] [rbp-74h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v62; // [rsp+A0h] [rbp-68h]
  __int64 v63; // [rsp+A8h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v64; // [rsp+B0h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v66; // [rsp+D8h] [rbp-30h]
  int v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E4h] [rbp-24h]
  const WCHAR *v69; // [rsp+E8h] [rbp-20h]
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]
  const WCHAR *v72; // [rsp+F8h] [rbp-10h]
  int v73; // [rsp+100h] [rbp-8h]
  int v74; // [rsp+104h] [rbp-4h]
  const WCHAR *v75; // [rsp+108h] [rbp+0h]
  int v76; // [rsp+110h] [rbp+8h]
  int v77; // [rsp+114h] [rbp+Ch]
  int *v78; // [rsp+118h] [rbp+10h]
  __int64 v79; // [rsp+120h] [rbp+18h]
  int *v80; // [rsp+128h] [rbp+20h]
  __int64 v81; // [rsp+130h] [rbp+28h]
  __int64 *v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  int *v84; // [rsp+148h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+48h]
  int *v86; // [rsp+158h] [rbp+50h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  int *v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  int *v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  int *v92; // [rsp+188h] [rbp+80h]
  __int64 v93; // [rsp+190h] [rbp+88h]
  const GUID *v94; // [rsp+198h] [rbp+90h]
  int v95; // [rsp+1A0h] [rbp+98h]
  int v96; // [rsp+1A4h] [rbp+9Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v63 = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v62 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v64 = v2;
  if ( !*((_QWORD *)this + 12) )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80070005LL);
    goto LABEL_112;
  }
  v47 = 0;
  v48 = 0;
  v46 = 0;
  v54 = 0LL;
  LODWORD(v53) = 0;
  v49 = 0;
  v4 = 0LL;
  string = 0LL;
  if ( !*((_QWORD *)this + 20) || *((_QWORD *)this + 19) )
  {
    v6 = *((_QWORD *)this + 15);
    v7 = *((_QWORD *)this + 16);
    if ( (v6 != 0) != (v7 != 0) )
    {
      v5 = 668LL;
      goto LABEL_15;
    }
    if ( v6 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v7 + 48LL))(*((_QWORD *)this + 16), &v47);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 672LL;
        goto LABEL_108;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17), &v48);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 673LL;
        goto LABEL_108;
      }
      if ( v48 + v47 > 100 )
      {
        v5 = 674LL;
        goto LABEL_15;
      }
      v46 = 100 - v48 - v47;
    }
    v10 = *((_QWORD *)this + 19);
    if ( v10 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v54);
      v3 = v8;
      if ( v8 < 0 )
      {
        v9 = 681LL;
        goto LABEL_108;
      }
      v11 = *((_QWORD *)this + 20);
      if ( v11 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, (char *)&v54 + 4);
        v3 = v8;
        if ( v8 < 0 )
        {
          v9 = 684LL;
LABEL_108:
          v43 = (unsigned int)v8;
LABEL_109:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v9,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
            (const char *)v43);
          goto LABEL_111;
        }
      }
    }
    v12 = *((_QWORD *)this + 18);
    if ( v12
      && (v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v53), v3 = v8, v8 < 0) )
    {
      v9 = 690LL;
    }
    else
    {
      v13 = *((_QWORD *)this + 15);
      if ( !v13
        || (v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v49), v3 = v8, v8 >= 0) )
      {
        v14 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 14), &string);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2BA,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
            (const char *)(unsigned int)v14);
        v15 = (__int64 *)*((_QWORD *)this + 11);
        v16 = (__int64 *)*v15;
        v4 = string;
        while ( v16 != v15 )
        {
          v17 = &word_18004E380;
          v18 = &word_18004E380;
          v19 = &word_18004E380;
          v20 = v16[6];
          v21 = *(_DWORD *)(v20 + 16);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v20 + 8);
            v23 = v21;
            do
            {
              if ( *(_DWORD *)v22 )
              {
                if ( *(_DWORD *)v22 == 1 )
                {
                  v19 = *(const WCHAR **)(v22 + 8);
                }
                else if ( *(_DWORD *)v22 == 2 )
                {
                  v17 = *(const WCHAR **)(v22 + 8);
                }
              }
              else
              {
                v18 = *(const WCHAR **)(v22 + 8);
              }
              v22 += 16LL;
              --v23;
            }
            while ( v23 );
          }
          length = 0;
          StringRawBuffer = (const GUID *)WindowsGetStringRawBuffer(v4, &length);
          if ( (unsigned int)dword_18005B000 > 5
            && ((qword_18005B010 & 0x800000000000LL) == 0 || (qword_18005B018 & 0x800000000000LL) != qword_18005B018
              ? (v25 = 0)
              : (v25 = 1),
                v25) )
          {
            v26 = *(_QWORD *)(v16[6] + 24);
            v27 = &word_18004E380;
            LODWORD(v28) = 0;
            if ( v26 )
            {
              v27 = *(const WCHAR **)(v16[6] + 24);
              v28 = -1LL;
              do
                ++v28;
              while ( *(_WORD *)(v26 + 2 * v28) );
            }
            v66 = v27;
            v67 = 2 * v28 + 2;
            v68 = 0;
            v29 = &word_18004E380;
            LODWORD(v28) = 0;
            if ( v18 )
            {
              v29 = v18;
              v28 = -1LL;
              do
                ++v28;
              while ( v18[v28] );
            }
            v69 = v29;
            v70 = 2 * v28 + 2;
            v71 = 0;
            v30 = &word_18004E380;
            LODWORD(v28) = 0;
            if ( v19 )
            {
              v30 = v19;
              v28 = -1LL;
              do
                ++v28;
              while ( v19[v28] );
            }
            v72 = v30;
            v73 = 2 * v28 + 2;
            v74 = 0;
            v31 = &word_18004E380;
            LODWORD(v28) = 0;
            if ( v17 )
            {
              v31 = v17;
              v28 = -1LL;
              do
                ++v28;
              while ( v17[v28] );
            }
            v75 = v31;
            v76 = 2 * v28 + 2;
            v77 = 0;
            v55 = *((unsigned __int8 *)this + 104);
            v78 = &v55;
            v79 = 4LL;
            v56 = *((unsigned __int8 *)this + 168);
            v80 = &v56;
            v81 = 4LL;
            v82 = &v54;
            v83 = 8LL;
            v57 = v49;
            v84 = &v57;
            v85 = 4LL;
            v58 = v47;
            v86 = &v58;
            v87 = 4LL;
            v59 = v48;
            v88 = &v59;
            v89 = 4LL;
            v32 = v46;
            v60 = v46;
            v90 = &v60;
            v91 = 4LL;
            LOWORD(v51) = length;
            v92 = &v51;
            v93 = 2LL;
            v94 = StringRawBuffer;
            v95 = 2 * (unsigned __int16)length;
            v96 = 0;
            TlgWrite((TraceLoggingHProvider)&v51, &unk_180051E31, StringRawBuffer, 0LL, 0xFu, &pData);
          }
          else
          {
            v32 = v46;
          }
          if ( ((*(_DWORD *)(v16[6] + 32) >> 7) & 1) != *((_BYTE *)this + 104) )
          {
            LODWORD(v45) = *((unsigned __int8 *)this + 104);
            *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
            v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int))(**((_QWORD **)this + 9) + 104LL))(
                   *((_QWORD *)this + 9),
                   &v50[1],
                   17LL,
                   &v45,
                   4);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 754LL;
              goto LABEL_108;
            }
            *(_DWORD *)(v16[6] + 32) ^= (*(_DWORD *)(v16[6] + 32) ^ (*((unsigned __int8 *)this + 104) << 7)) & 0x80;
          }
          if ( ((*(_DWORD *)(v16[6] + 32) & 0x100) == 0) != *((_BYTE *)this + 168) )
          {
            LODWORD(v45) = *((unsigned __int8 *)this + 104);
            *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
            v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int))(**((_QWORD **)this + 9) + 104LL))(
                   *((_QWORD *)this + 9),
                   &v50[1],
                   21LL,
                   &v45,
                   4);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 763LL;
              goto LABEL_108;
            }
            *(_DWORD *)(v16[6] + 32) = *(_DWORD *)(v16[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 168) == 0 ? 0x100 : 0);
          }
          v33 = *((_QWORD *)this + 9);
          *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
          v34 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v33 + 72LL);
          if ( *((_QWORD *)this + 19) )
          {
            v8 = v34(v33, &v50[1], 18LL, &v54, 8);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 770LL;
              goto LABEL_108;
            }
          }
          else
          {
            v8 = v34(v33, &v50[1], 18LL, 0LL, 0);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 774LL;
              goto LABEL_108;
            }
          }
          v35 = *((_QWORD *)this + 9);
          *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
          v36 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v35 + 72LL);
          if ( *((_QWORD *)this + 18) )
          {
            v8 = v36(v35, &v50[1], 20LL, &v53, 4);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 780LL;
              goto LABEL_108;
            }
          }
          else
          {
            v8 = v36(v35, &v50[1], 20LL, 0LL, 0);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 784LL;
              goto LABEL_108;
            }
          }
          if ( *((_QWORD *)this + 15) )
          {
            v37 = *((_QWORD *)this + 9);
            LODWORD(v45) = 0;
            if ( v32 + (unsigned __int8)v48 + (unsigned __int8)v47 != 100 )
            {
              v42 = 388LL;
              goto LABEL_102;
            }
            if ( (unsigned __int8)v49 > 0x64u )
            {
              v42 = 393LL;
LABEL_102:
              v3 = -2147024809;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v42,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)0x80070057LL);
LABEL_103:
              v43 = (unsigned int)v3;
              v9 = 797LL;
              goto LABEL_109;
            }
            LODWORD(v45) = v32 | (((unsigned __int8)v48 | (((unsigned __int8)v47 | ((unsigned __int8)v49 << 8)) << 8)) << 8);
            *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
            v38 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v37 + 72LL))(
                    v37,
                    &v50[1],
                    19LL,
                    &v45,
                    4);
            v3 = v38;
            if ( v38 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x192,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v38);
            if ( v3 < 0 )
              goto LABEL_103;
          }
          else
          {
            *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
            v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)this + 9) + 72LL))(
                   *((_QWORD *)this + 9),
                   &v50[1],
                   19LL);
            v3 = v8;
            if ( v8 < 0 )
            {
              v9 = 801LL;
              goto LABEL_108;
            }
          }
          v39 = *((_QWORD *)this + 14);
          v45 = v39;
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
          *(_OWORD *)&v50[1] = *((_OWORD *)v16 + 2);
          v8 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 9), (__int128 *)&v50[1], &v45);
          v3 = v8;
          if ( v8 < 0 )
          {
            v9 = 805LL;
            goto LABEL_108;
          }
          if ( !*((_BYTE *)v16 + 25) )
          {
            v40 = (__int64 *)v16[2];
            if ( *((_BYTE *)v40 + 25) )
            {
              for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)i[2]; i = (__int64 *)i[1] )
                v16 = i;
              v16 = i;
            }
            else
            {
              do
              {
                v16 = v40;
                v40 = (__int64 *)*v40;
              }
              while ( !*((_BYTE *)v40 + 25) );
            }
          }
        }
        v3 = 0;
        goto LABEL_111;
      }
      v9 = 695LL;
    }
    goto LABEL_108;
  }
  v5 = 665LL;
LABEL_15:
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)0x80070057LL);
LABEL_111:
  WindowsDeleteString(v4);
  v2 = v62;
LABEL_112:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
