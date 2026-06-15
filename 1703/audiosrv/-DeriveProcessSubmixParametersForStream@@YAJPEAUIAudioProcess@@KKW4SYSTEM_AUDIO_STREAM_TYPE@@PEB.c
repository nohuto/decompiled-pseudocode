/*
 * XREFs of ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18002ABF0
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DeriveProcessSubmixParametersForStream(
        __int64 a1,
        __int64 a2,
        WINBOOL a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  const WCHAR *v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  _WORD *v15; // r9
  int v16; // eax
  unsigned __int64 v17; // rcx
  _WORD *v18; // rdx
  int v19; // r10d
  __int64 v20; // r8
  unsigned __int64 v21; // rsi
  signed __int64 v22; // rdi
  __int16 v23; // ax
  unsigned __int64 v24; // r14
  __int64 v25; // r14
  _QWORD *v26; // rsi
  void *v27; // r13
  bool v28; // al
  _QWORD *v29; // rdi
  __int64 v30; // r10
  _QWORD *v31; // rcx
  unsigned int v33; // ebx
  DWORD LastError; // edi
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  int v38; // [rsp+28h] [rbp-99h]
  int v39; // [rsp+38h] [rbp-89h] BYREF
  char v40; // [rsp+3Ch] [rbp-85h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-79h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-71h] BYREF
  _DWORD v44[2]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v45; // [rsp+60h] [rbp-61h]
  _QWORD v46[2]; // [rsp+68h] [rbp-59h] BYREF
  char v47; // [rsp+78h] [rbp-49h]
  __int64 v48; // [rsp+80h] [rbp-41h]
  unsigned __int16 *v49; // [rsp+88h] [rbp-39h]
  int v50; // [rsp+90h] [rbp-31h]
  int v51; // [rsp+94h] [rbp-2Dh]
  void *v52; // [rsp+98h] [rbp-29h]
  int v53; // [rsp+A0h] [rbp-21h]
  int v54; // [rsp+A4h] [rbp-1Dh]
  int *v55; // [rsp+A8h] [rbp-19h]
  __int64 v56; // [rsp+B0h] [rbp-11h]
  char *v57; // [rsp+B8h] [rbp-9h]
  __int64 v58; // [rsp+C0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+4Fh]

  v48 = -2LL;
  fPending = a3;
  if ( a4 || *(_BYTE *)(a5 + 48) )
  {
LABEL_35:
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = qword_18012BF30;
      qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
    }
    v30 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v30 > 5u )
    {
      v31 = (_QWORD *)*a6;
      if ( *a6 )
        v39 = *(_DWORD *)v31;
      else
        v39 = 0;
      v55 = &v39;
      v56 = 4LL;
      if ( v31 )
        v40 = *((_BYTE *)v31 + 20);
      else
        v40 = 0;
      v57 = &v40;
      v58 = 1LL;
      v44[0] = ((unsigned int)&unk_1800FA334 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v44[1] = 5;
      v45 = 0LL;
      v49 = *(unsigned __int16 **)(v30 + 8);
      v50 = *v49;
      v51 = 2;
      v52 = &unk_1800FA33F;
      v53 = 39;
      v54 = 1;
      EtwEventWriteTransfer(*(_QWORD *)(v30 + 32), v44, 0LL, 0LL);
    }
    return 0LL;
  }
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    memset(v7, 0, 0x20uLL);
    v8[1] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  v43 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    *((_DWORD *)v8 + 4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    v10 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v46, (__int64)(v8 + 1));
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
    v12 = (const WCHAR *)v11;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v11 + 2 * v13) );
    *(_QWORD *)(v10 + 8) = 0LL;
    v14 = v13 + 1;
    if ( v13 + 1 >= v13 && (*(_QWORD *)(v10 + 8) = 0LL, is_mul_ok(v14, 2uLL)) )
    {
      v15 = CoTaskMemAlloc(2 * v14);
      *(_QWORD *)(v10 + 8) = v15;
      if ( v15 )
      {
        v16 = 0;
        v39 = 0;
        if ( v14 > 0x7FFFFFFF || v13 >= 0x7FFFFFFF )
        {
          if ( v13 != -1LL )
            *v15 = 0;
        }
        else
        {
          if ( !v12 )
          {
            v12 = &word_1800EAD74;
            v13 = 0LL;
          }
          if ( v14 )
          {
            v17 = v14;
            v18 = v15;
            v19 = 0;
            v20 = 0LL;
            v21 = v13 - v14;
            v22 = (char *)v12 - (char *)v15;
            while ( v21 + v17 )
            {
              v23 = *(_WORD *)((char *)v18 + v22);
              if ( !v23 )
                break;
              *v18++ = v23;
              ++v20;
              if ( !--v17 )
              {
                --v18;
                --v20;
                v19 = -2147024774;
                break;
              }
            }
            *v18 = 0;
            v24 = v14 - v20;
            if ( v19 >= 0 && v24 > 1 && 2 * v24 > 2 )
              memset(&v15[v20 + 1], 0, 2 * v24 - 2);
            v16 = 0;
          }
        }
      }
      else
      {
        v16 = -2147024882;
        v39 = -2147024882;
      }
    }
    else
    {
      v16 = -2147024362;
      v39 = -2147024362;
    }
    if ( v47 )
    {
      v25 = v46[1];
      v26 = (_QWORD *)v46[0];
      v27 = *(void **)v46[0];
      if ( *(_QWORD *)v46[0] )
      {
        LastError = GetLastError();
        CoTaskMemFree(v27);
        SetLastError(LastError);
        v16 = v39;
      }
      *v26 = v25;
    }
    if ( v16 >= 0 )
    {
      v28 = fPending != 3 && fPending != 8;
      *((_BYTE *)v8 + 20) = v28;
      v8[3] = a5;
      if ( a6 != &v43 )
      {
        v9 = 0LL;
        v29 = (_QWORD *)*a6;
        *a6 = v8;
        if ( v29 )
        {
          v36 = (void *)v29[1];
          if ( v36 )
            CoTaskMemFree(v36);
          operator delete(v29, (const struct std::nothrow_t *)0x20);
        }
      }
      if ( v9 )
      {
        v37 = (void *)v9[1];
        if ( v37 )
          CoTaskMemFree(v37);
        operator delete(v9, (const struct std::nothrow_t *)0x20);
      }
      goto LABEL_35;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x371,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v16,
      v38);
    v33 = v39;
  }
  else
  {
    v33 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x8007000ELL,
      v38);
  }
  if ( v8 )
  {
    v35 = (void *)v8[1];
    if ( v35 )
      CoTaskMemFree(v35);
    operator delete(v8, (const struct std::nothrow_t *)0x20);
  }
  return v33;
}
