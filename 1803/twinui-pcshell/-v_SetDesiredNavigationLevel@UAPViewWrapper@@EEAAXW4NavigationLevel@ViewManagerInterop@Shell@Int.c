/*
 * XREFs of ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18005AFF0
 * Callers:
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800EFD10 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___ @ 0x1801E2BEC (Windows--Internal--ComTaskPool--QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___.c)
 *     _lambda_5eeb3274d8dd6409222f94091fb661d1_::_lambda_5eeb3274d8dd6409222f94091fb661d1_ @ 0x1801E2CE0 (_lambda_5eeb3274d8dd6409222f94091fb661d1_--_lambda_5eeb3274d8dd6409222f94091fb661d1_.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall UAPViewWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  PCWSTR StringRawBuffer; // rsi
  __int64 v5; // rax
  __int64 v6; // r10
  const WCHAR *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  UAPViewWrapper *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  UAPViewWrapper *v16; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-99h] BYREF
  int v19; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v20; // [rsp+40h] [rbp-91h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-89h] BYREF
  UAPViewWrapper *v22; // [rsp+50h] [rbp-81h] BYREF
  PCWSTR v23; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-69h] BYREF
  __int64 v26; // [rsp+78h] [rbp-59h]
  UAPViewWrapper *v27; // [rsp+80h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-29h] BYREF
  void *v29; // [rsp+B8h] [rbp-19h]
  int v30; // [rsp+C0h] [rbp-11h]
  int v31; // [rsp+C4h] [rbp-Dh]
  const WCHAR *v32; // [rsp+C8h] [rbp-9h]
  int v33; // [rsp+D0h] [rbp-1h]
  int v34; // [rsp+D4h] [rbp+3h]
  int *v35; // [rsp+D8h] [rbp+7h]
  __int64 v36; // [rsp+E0h] [rbp+Fh]
  __int64 *v37; // [rsp+E8h] [rbp+17h]
  __int64 v38; // [rsp+F0h] [rbp+1Fh]

  v26 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 152), 0LL);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  LODWORD(v5) = (_DWORD)Context;
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0 )
  {
    v5 = *(_QWORD *)(v6 + 24) & 0x200000000000LL;
    if ( v5 == *(_QWORD *)(v6 + 24) )
    {
      v7 = &word_18035ABCC;
      LODWORD(v8) = 0;
      if ( StringRawBuffer )
      {
        v7 = StringRawBuffer;
        v8 = -1LL;
        do
          ++v8;
        while ( StringRawBuffer[v8] );
      }
      v32 = v7;
      v33 = 2 * v8 + 2;
      v34 = 0;
      v19 = *(_DWORD *)(a1 + 148);
      v35 = &v19;
      v36 = 4LL;
      LODWORD(v20) = 1;
      v37 = &v20;
      v38 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039706E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v29 = &unk_180397079;
      v30 = 62;
      v31 = 1;
      LODWORD(v5) = EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  *(_DWORD *)(a1 + 552) = a2;
  if ( a2
    || (LODWORD(v5) = CoreIsWindowServiceSupported(*(_QWORD *)(a1 + 264), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc),
        (int)v5 < 0) )
  {
    if ( a2 != *(_DWORD *)(a1 + 284) )
    {
      *(_DWORD *)(a1 + 284) = a2;
      if ( !*(_DWORD *)(a1 + 336) )
        LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 520LL)
                                                                        + 32LL))(
                        *(_QWORD *)(*(_QWORD *)(a1 + 168) + 520LL),
                        *(unsigned int *)(a1 + 148),
                        a2);
    }
  }
  else
  {
    ViewWrapperBase::NavigateInternal(a1, 3LL);
    v9 = a1 - 8;
    v10 = (UAPViewWrapper *)(a1 - 8);
    v22 = (UAPViewWrapper *)(a1 - 8);
    if ( a1 != 8 )
    {
      v11 = *(_QWORD *)(v9 + 552);
      while ( v11 >= 0 )
      {
        if ( (_DWORD)v11 != 0x7FFFFFFF )
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 552), v11 + 1, v11);
          if ( v12 != v11 )
            continue;
        }
        goto LABEL_20;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
LABEL_20:
      v10 = v22;
    }
    v24 = *(_QWORD *)(a1 + 264);
    v23 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 152), 0LL);
    v13 = lambda_5eeb3274d8dd6409222f94091fb661d1_::_lambda_5eeb3274d8dd6409222f94091fb661d1_(
            (unsigned int)&v27,
            (unsigned int)&v22,
            (int)a1 - 8,
            (unsigned int)&v24,
            (__int64)&v23);
    LODWORD(v5) = Windows::Internal::ComTaskPool::QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___(
                    v15,
                    v14,
                    *(unsigned int *)(a1 + 184),
                    v13);
    v16 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      LODWORD(v5) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v16);
    }
    if ( v10 )
      LODWORD(v5) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v10);
  }
  return v5;
}
