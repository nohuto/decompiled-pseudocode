/*
 * XREFs of ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x180009150 (-SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004EF60 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x180054420 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18005AC10 (-v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA-AW4NavigationLevel@ViewManagerInterop@Shell@In.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18008E184 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewWrapperBase::WindowCreated(__int64 a1, HWND a2, unsigned int a3)
{
  _DWORD *v6; // rcx
  __int64 v7; // r10
  ViewWrapperBase *v8; // r14
  HWND v9; // rdi
  HWND *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned int PropW; // eax
  HWND v14; // rcx
  HWND v15; // rdx
  unsigned int v16; // r9d
  unsigned __int64 i; // rbx
  __int64 v18; // rcx
  unsigned int v19; // edi
  const WCHAR *StringRawBuffer; // rax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64); // rax
  __int64 v23; // rcx
  int DesiredNavigationLevel; // eax
  int v25; // r12d
  __int64 v26; // rsi
  unsigned int v27; // r13d
  struct Windows::Internal::IComPoolTask *v28; // rdi
  _DWORD *v29; // rax
  _DWORD *v30; // rbx
  void (*v31)(void); // rax
  volatile int *v32; // rdx
  void (__fastcall *v33)(struct Windows::Internal::IComPoolTask *); // rax
  CPrivilegedPresentationOperations *v34; // rcx
  __int64 (__fastcall *v35)(CPrivilegedPresentationOperations *, HWND, HWND, unsigned int); // rax
  HWND Ancestor; // rax
  char v37; // [rsp+30h] [rbp-D0h]
  int pvAttribute; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v40; // [rsp+3Ch] [rbp-C4h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  DWORD WindowThreadProcessId; // [rsp+44h] [rbp-BCh] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v49; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  HWND v52; // [rsp+80h] [rbp-80h] BYREF
  HWND v53; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR v55; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h]
  _QWORD v57[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+CCh] [rbp-34h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  struct Windows::Internal::IComPoolTask *v62; // [rsp+E0h] [rbp-20h]
  struct tagRECT Rect; // [rsp+E8h] [rbp-18h] BYREF
  struct tagPOINT Points[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+110h] [rbp+10h] BYREF
  void *v66; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]
  HWND *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  int *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  int *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v76; // [rsp+170h] [rbp+70h]
  int v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+17Ch] [rbp+7Ch]
  int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  HWND *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  DWORD *p_WindowThreadProcessId; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  DWORD *p_dwProcessId; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]

  v60 = -2LL;
  if ( a2 != *(HWND *)(a1 + 256) )
  {
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
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v6 && *v6 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
      v49 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v40, &v49) && v40 )
      {
        v49 = qword_180438940;
        qword_180438940[0] = &LockScreenServiceLogging::`vftable';
        qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
      }
      v7 = *((_QWORD *)v49 + 1);
      if ( *(_DWORD *)v7 > 5u )
      {
        v41 = *(_DWORD *)(a1 + 140);
        v79 = &v41;
        v80 = 4LL;
        v52 = a2;
        v81 = &v52;
        v82 = 8LL;
        p_WindowThreadProcessId = &WindowThreadProcessId;
        v84 = 4LL;
        p_dwProcessId = &dwProcessId;
        v86 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803972F5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *(_QWORD *)(v7 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v76 = &unk_180397300;
        v77 = 62;
        v78 = 1;
        EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
    }
    *(_QWORD *)(a1 + 256) = a2;
    v8 = (ViewWrapperBase *)(a1 - 8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 8) + 160LL))(a1 - 8, a3);
    v9 = *(HWND *)(a1 + 256);
    v10 = (HWND *)(a1 + 344);
    if ( !*(_QWORD *)(a1 + 344) || (v37 = 1, *(_DWORD *)(a1 + 352)) )
      v37 = 0;
    *v10 = v9;
    LODWORD(v51) = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(a1 + 352) = v51 & 0xFFFFFFF1;
    v50 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v44, &v50) && v44 )
    {
      v50 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v12 = *((_QWORD *)v50 + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      v53 = *v10;
      v69 = &v53;
      v70 = 8LL;
      v45 = v51;
      v71 = &v45;
      v72 = 4LL;
      v46 = *(_DWORD *)(a1 + 352);
      v73 = &v46;
      v74 = 4LL;
      *(_DWORD *)&v55.Id = ((unsigned int)&unk_180397989 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&v55.Level = 5;
      v55.Keyword = 0LL;
      v65.Ptr = *(_QWORD *)(v12 + 8);
      v65.Size = *(unsigned __int16 *)v65.Ptr;
      v65.Reserved = 2;
      v66 = &unk_180397994;
      v67 = 66;
      v68 = 1;
      EventWriteTransfer(*(_QWORD *)(v12 + 32), &v55, 0LL, 0LL, 5u, &v65);
    }
    if ( v9 )
    {
      PropW = (unsigned int)GetPropW(v9, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
      *(_BYTE *)(a1 + 368) = PropW == 1;
      if ( PropW == 1 && a3 != 1 )
      {
        v47 = *(_DWORD *)(a1 + 352);
        *(_DWORD *)(a1 + 352) = v47 | 2;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          a1 + 344,
          &v47,
          a1 + 352);
      }
      Rect = 0LL;
      GetWindowRect(v9, &Rect);
      *(_DWORD *)(a1 + 372) = Rect.right - Rect.left;
      *(_DWORD *)(a1 + 376) = Rect.bottom - Rect.top;
      *(_QWORD *)(a1 + 360) = 0LL;
      v14 = *v10;
      if ( *v10 )
      {
        if ( !*(_DWORD *)(a1 + 352) )
        {
          pvAttribute = 0;
          DwmGetWindowAttribute(v14, 0xFu, &pvAttribute, 4u);
          if ( pvAttribute )
            WindowReadyState::WaitFlags::Set(a1 + 352, a1 + 344, 4LL);
        }
      }
    }
    LOBYTE(v11) = *v10 && !*(_DWORD *)(a1 + 352);
    if ( (_BYTE)v11 != v37 )
      std::_Func_class<void,bool>::operator()(a1 + 384, v11);
    if ( a3 == 1 )
    {
      GetWindowBand(a2, a1 + 208);
      GetWindowRect(a2, (LPRECT)(a1 + 192));
      Ancestor = GetAncestor(a2, 1u);
      if ( Ancestor )
      {
        *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 192);
        if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
          *(_OWORD *)(a1 + 192) = *(_OWORD *)&Points[0].x;
      }
      EnumPropsExW(a2, LightweightPropertySet::s_PropEnumCallback, a1 + 96);
    }
    else
    {
      v15 = (HWND)*((_QWORD *)v8 + 33);
      if ( v15 )
      {
        v16 = *((_DWORD *)v8 + 54);
        if ( v16 )
        {
          v34 = *(CPrivilegedPresentationOperations **)(*((_QWORD *)v8 + 21) + 464LL);
          v35 = *(__int64 (__fastcall **)(CPrivilegedPresentationOperations *, HWND, HWND, unsigned int))(*(_QWORD *)v34 + 32LL);
          if ( v35 == CPrivilegedPresentationOperations::SetWindowBand )
            CPrivilegedPresentationOperations::SetWindowBand(v34, v15, 0LL, v16);
          else
            ((void (__fastcall *)(CPrivilegedPresentationOperations *, HWND, _QWORD))v35)(v34, v15, 0LL);
        }
      }
      ViewWrapperBase::PushDesiredPositionToWindow(a1 - 8, 3);
      for ( i = 0LL; i < *(_QWORD *)(a1 + 104); ++i )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i);
        v19 = *(_DWORD *)(v18 + 16);
        StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v18 + 8), 0LL);
        SetPropW(a2, StringRawBuffer, (HANDLE)v19);
      }
    }
    if ( (*((_BYTE *)v8 + 456) & 1) == 0 )
    {
      v51 = a1 - 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 8);
      v21 = *(_QWORD *)v8;
      v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL);
      v23 = a1 - 8;
      if ( v22 == UAPViewWrapper::v_GetDesiredNavigationLevel )
      {
        DesiredNavigationLevel = UAPViewWrapper::v_GetDesiredNavigationLevel(v23);
      }
      else
      {
        DesiredNavigationLevel = v22(v23);
        v21 = *(_QWORD *)v8;
      }
      v25 = DesiredNavigationLevel;
      v56 = a1 - 8;
      v26 = a1 - 8;
      v57[0] = v8;
      (*(void (__fastcall **)(ViewWrapperBase *))(v21 + 8))(v8);
      v57[1] = a2;
      v58 = 0;
      v59 = v25;
      v27 = *((_DWORD *)v8 + 46);
      v28 = 0LL;
      v61 = 0LL;
      v29 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v30 = v29;
      if ( v29 )
      {
        *(_QWORD *)v29 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
        v29[3] = 1;
        *(_QWORD *)v29 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v31 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
          if ( (char *)v31 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
          else
            v31();
        }
        *(_QWORD *)v30 = off_18031AF70;
        *((_QWORD *)v30 + 2) = v8;
        *((_QWORD *)v30 + 3) = 0LL;
        if ( v30 + 6 != (_DWORD *)v57 )
        {
          *((_QWORD *)v30 + 3) = v8;
          v26 = 0LL;
          v57[0] = 0LL;
        }
        *((_QWORD *)v30 + 4) = a2;
        v30[10] = 0;
        v30[11] = v25;
        v28 = (struct Windows::Internal::IComPoolTask *)v30;
      }
      v62 = v28;
      Windows::Internal::ComTaskPool::RunTask(3u, 2u, v27, 0, v28, 0LL);
      if ( v28 )
      {
        v33 = *(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v28 + 16LL);
        if ( (char *)v33 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
            v28,
            v32);
        else
          v33(v28);
      }
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(v8);
  }
}
