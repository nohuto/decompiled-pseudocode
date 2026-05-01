/*
 * XREFs of ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1800514D0
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18004ED1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7878 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800FAB54 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x1800FAE84 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewWrapperBase::SetRegistration(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  int v6; // edx
  __int16 v7; // cx
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // r13d
  _BYTE *v10; // r9
  unsigned __int16 *v11; // r14
  unsigned int v12; // ebx
  void (__fastcall *v13)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  const wchar_t *v14; // rax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // r10
  unsigned __int16 v20; // cx
  const WCHAR *StringRawBuffer; // rbx
  __int64 v22; // r15
  HWND v23; // r12
  __int64 v24; // rbx
  _QWORD *v25; // rax
  void *v26; // rbx
  unsigned __int64 v27; // rax
  HRESULT v28; // edi
  HSTRING v29; // rcx
  void *v30; // rdi
  unsigned __int64 v31; // r9
  __int64 v32; // r8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  char *v36; // r13
  void **v37; // rdx
  __int64 (__fastcall *v38)(volatile signed __int32 *); // rax
  void *v39; // rbx
  HSTRING v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  int v44; // r8d
  const WCHAR *v45; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  ULONG UserDataCounta; // [rsp+20h] [rbp-E0h]
  __int16 v48; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v49; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v50; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v51; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v52; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v53; // [rsp+3Ah] [rbp-C6h] BYREF
  int v54; // [rsp+3Ch] [rbp-C4h] BYREF
  void *v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h] BYREF
  HWND v58; // [rsp+58h] [rbp-A8h]
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v60; // [rsp+64h] [rbp-9Ch] BYREF
  WINBOOL v61; // [rsp+68h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v63; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v64; // [rsp+80h] [rbp-80h] BYREF
  HSTRING string; // [rsp+88h] [rbp-78h] BYREF
  LPMALLOC ppMalloc; // [rsp+90h] [rbp-70h] BYREF
  void *v67; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v68; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-58h]
  char *v70; // [rsp+B0h] [rbp-50h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v72; // [rsp+C8h] [rbp-38h] BYREF
  const wchar_t *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v78; // [rsp+100h] [rbp+0h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  int *v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  __int64 v85; // [rsp+130h] [rbp+30h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  __int16 *v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+148h] [rbp+48h]
  __int16 *v89; // [rsp+150h] [rbp+50h]
  __int64 v90; // [rsp+158h] [rbp+58h]
  __int16 *v91; // [rsp+160h] [rbp+60h]
  __int64 v92; // [rsp+168h] [rbp+68h]
  __int16 *v93; // [rsp+170h] [rbp+70h]
  __int64 v94; // [rsp+178h] [rbp+78h]
  __int16 *v95; // [rsp+180h] [rbp+80h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  __int16 *v97; // [rsp+190h] [rbp+90h]
  __int64 v98; // [rsp+198h] [rbp+98h]
  __int64 v99; // [rsp+1A0h] [rbp+A0h]
  __int64 v100; // [rsp+1A8h] [rbp+A8h]
  WCHAR sourceString[256]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  v74 = -2LL;
  *(_DWORD *)(a1 + 448) = *(_DWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 && a3 == 1 )
  {
    v41 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 520LL) + 256LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL),
            v5,
            &v54);
    if ( v41 >= 0 )
    {
      v42 = v54;
      if ( v54 )
      {
        v43 = *(_DWORD *)(a1 + 276);
        v44 = v43;
        if ( v54 != *(_DWORD *)(a1 + 272) )
        {
          *(_DWORD *)(a1 + 272) = v54;
          ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(a1 - 8));
          v44 = *(_DWORD *)(a1 + 276);
          v42 = v54;
        }
        if ( v43 == v44 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 520LL) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL),
            *(unsigned int *)(a1 + 140));
          v42 = v54;
        }
        if ( (unsigned int)(v42 - 4) <= 1 )
        {
          WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
          WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x87,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v41,
        UserDataCount);
    }
  }
  v6 = *(_DWORD *)(a1 + 448);
  if ( (v6 & 4) == 0 )
  {
    v7 = 4;
    if ( (unsigned int)(*(_DWORD *)(a1 + 272) - 4) <= 1 )
      v7 = 8;
    *(_WORD *)(a1 + 340) &= 0xFFF1u;
    *(_WORD *)(a1 + 340) |= v7 | 1;
  }
  if ( (v6 & 8) == 0 )
  {
    *(_WORD *)(a1 + 340) &= ~0x10u;
    *(_WORD *)(a1 + 340) |= 0x21u;
  }
  v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 184);
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_BYTE **)(*(_QWORD *)(a1 + 160) + 520LL);
    v11 = (unsigned __int16 *)(a1 + 340);
    v12 = *(_DWORD *)(a1 + 340);
    v13 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v10 + 72LL);
    if ( v13 == ViewManagerBridge::SetImportanceVectorForView )
    {
      if ( !v10[145] )
      {
        v57 = 0LL;
        (**v8)(v8, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v57);
        v14 = L"ResourceImportanceVector";
        v73 = L"ResourceImportanceVector";
        v15 = 0;
        do
        {
          ++v14;
          ++v15;
        }
        while ( *v14 );
        v72 = v15 | 0x80000000;
        v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v57 + 688LL))(v57, &v72, v12);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFF,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v16,
            UserDataCount);
        v17 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    else
    {
      v13(*(ViewManagerBridge **)(*(_QWORD *)(a1 + 160) + 520LL), *(struct IUnknown **)(a1 + 184), v12);
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_180438968;
      qword_180438968 = &IamTraceLogging::`vftable';
      atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
    }
    v18 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v18 && *v18 )
    {
      v64 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v60, &v64) && v60 )
      {
        v64 = &qword_180438968;
        qword_180438968 = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
      }
      v56 = *(_DWORD *)(a1 + 140);
      v63 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v61, &v63) && v61 )
      {
        v63 = qword_180438940;
        qword_180438940[0] = &LockScreenServiceLogging::`vftable';
        qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
      }
      v19 = *((_QWORD *)v63 + 1);
      if ( *(_DWORD *)v19 > 5u )
      {
        v81 = &v56;
        v82 = 4LL;
        v83 = a1 + 340;
        v84 = 4LL;
        v85 = a1 + 343;
        v86 = 1LL;
        v20 = *v11;
        v48 = (*v11 >> 1) & 7;
        v87 = &v48;
        v88 = 2LL;
        v49 = (v20 >> 4) & 3;
        v89 = &v49;
        v90 = 2LL;
        v50 = (v20 >> 6) & 1;
        v91 = &v50;
        v92 = 2LL;
        v51 = (v20 >> 7) & 1;
        v93 = &v51;
        v94 = 2LL;
        v52 = v20 & 1;
        v95 = &v52;
        v96 = 2LL;
        v53 = HIBYTE(v20) & 1;
        v97 = &v53;
        v98 = 2LL;
        v99 = a1 + 342;
        v100 = 1LL;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039747E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *(_QWORD *)(v19 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v78 = &unk_180397489;
        v79 = 175;
        v80 = 1;
        EventWriteTransfer(*(_QWORD *)(v19 + 32), &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
      }
    }
  }
  if ( WindowsIsStringEmpty(*(HSTRING *)a2) && !WindowsIsStringEmpty(*(HSTRING *)(a2 + 8)) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 8), 0LL);
    v22 = 1LL;
    while ( CompareStringOrdinal(StringRawBuffer, -1, off_180322D20[v22], -1, 1) != 2 )
    {
      if ( (unsigned __int64)++v22 >= 4 )
        return;
    }
    if ( v22 )
    {
      v23 = *(HWND *)(a1 + 256);
      v58 = v23;
      v55 = 0LL;
      v24 = 0LL;
      if ( *(_QWORD *)(a1 + 104) )
      {
        while ( !LightweightPropertySet::LightweightProperty::IsName(
                   (LightweightPropertySet::LightweightProperty *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v24) + 8LL),
                   L"ExperienceId") )
        {
          if ( (unsigned __int64)++v24 >= *(_QWORD *)(a1 + 104) )
            goto LABEL_37;
        }
        v26 = *(void **)(*(_QWORD *)(a1 + 96) + 8 * v24);
        if ( v26 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
          v55 = v26;
LABEL_71:
          *((_DWORD *)v26 + 4) = v22;
          if ( v23 )
          {
            v45 = WindowsGetStringRawBuffer(*((HSTRING *)v26 + 1), 0LL);
            SetPropW(v23, v45, (HANDLE)(unsigned int)v22);
          }
          v38 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL);
          if ( v38 == CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 6, 0xFFFFFFFF) == 1 )
            {
              v39 = v55;
              v40 = (HSTRING)*((_QWORD *)v55 + 1);
              if ( v40 )
                WindowsDeleteString(v40);
              operator delete(v39, (const struct std::nothrow_t *)0x20);
            }
          }
          else
          {
            v38((volatile signed __int32 *)v26);
          }
          return;
        }
      }
LABEL_37:
      v25 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v26 = v25;
      if ( v25 )
      {
        v25[2] = 0LL;
        v25[1] = 0LL;
        *((_DWORD *)v25 + 4) = 0;
        *v25 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
        *((_DWORD *)v25 + 6) = 0;
        ((void (__fastcall *)(_QWORD *))CRefCountedObject<ViewEventDispatcher::PerApplicationData>::AddRef)(v25);
      }
      else
      {
        v26 = 0LL;
      }
      v55 = v26;
      if ( !v26 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)0x8007000ELL,
          UserDataCounta);
        Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v55);
        return;
      }
      _o_wcscpy_s(sourceString, 256LL, L"LightweightProperty_");
      _o_wcscat_s(sourceString, 256LL, L"ExperienceId");
      string = 0LL;
      v27 = -1LL;
      do
        ++v27;
      while ( sourceString[v27] );
      if ( v27 > 0xFFFFFFFF )
      {
        v28 = -2147024362;
      }
      else
      {
        v28 = WindowsCreateString(sourceString, v27, &string);
        if ( v28 >= 0 )
        {
          v29 = (HSTRING)*((_QWORD *)v26 + 1);
          *((_QWORD *)v26 + 1) = string;
          WindowsDeleteString(v29);
          goto LABEL_45;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)(unsigned int)v28,
        UserDataCounta);
LABEL_45:
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)(unsigned int)v28,
          UserDataCounta);
        Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v55);
        return;
      }
      v30 = v26;
      v67 = v26;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
      v31 = *(_QWORD *)(a1 + 120);
      v32 = *(_QWORD *)(a1 + 104);
      if ( v32 == v31 )
      {
        v33 = v32 + 1;
        v9 = -2147024774;
        if ( v33 <= 0xFFFFFFFE )
        {
          v9 = 0;
          if ( v33 > v31 )
          {
            v75 = (v31 * (unsigned __int128)2uLL) >> 64;
            v34 = 2 * v31;
            if ( !is_mul_ok(v31, 2uLL) )
            {
              v9 = -2147024362;
              v23 = v58;
              goto LABEL_68;
            }
            if ( v31 > 0x1000 )
              v34 = v31 + 4096;
            if ( v33 <= v34 )
              v35 = v34;
            else
              v35 = v33;
            if ( v35 > 0xFFFFFFFE )
            {
              v34 = 4294967294LL;
            }
            else if ( v33 > v34 )
            {
              v34 = v33;
            }
            v76 = (v34 * (unsigned __int128)8uLL) >> 64;
            v68 = 8 * v34;
            if ( is_mul_ok(v34, 8uLL) )
            {
              v36 = (char *)CoTaskMemRealloc(*(LPVOID *)(a1 + 96), 8 * v34);
              v70 = v36;
              if ( !v36 )
              {
                v9 = -2147024882;
                v23 = v58;
                goto LABEL_68;
              }
              if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
              {
                v69 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v36);
                ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
                if ( v69 > v68 )
                  memset_0(&v36[v68], 0, v69 - v68);
              }
              v9 = 0;
              *(_QWORD *)(a1 + 120) = v34;
              *(_QWORD *)(a1 + 96) = v70;
            }
            else
            {
              v9 = -2147024362;
            }
            v23 = v58;
          }
        }
        if ( v9 < 0 )
          goto LABEL_68;
      }
      v37 = (void **)(*(_QWORD *)(a1 + 96) + 8 * (*(_QWORD *)(a1 + 104))++);
      if ( v37 )
      {
        *v37 = 0LL;
        if ( v37 != &v67 )
        {
          *v37 = v26;
          v30 = 0LL;
          v67 = 0LL;
        }
      }
LABEL_68:
      if ( v30 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)(unsigned int)v9,
          UserDataCounta);
        Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v55);
        return;
      }
      goto LABEL_71;
    }
  }
}
