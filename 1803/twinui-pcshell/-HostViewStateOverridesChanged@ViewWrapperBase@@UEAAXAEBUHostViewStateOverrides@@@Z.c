/*
 * XREFs of ?HostViewStateOverridesChanged@ViewWrapperBase@@UEAAXAEBUHostViewStateOverrides@@@Z @ 0x180052A90
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 * Callees:
 *     ?PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004EF0C (-PushDesiredBoundsToView@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18005AF80 (-v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1801CB850 (-HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z.c)
 */

void __fastcall ViewWrapperBase::HostViewStateOverridesChanged(
        ViewWrapperBase *this,
        const struct HostViewStateOverrides *a2)
{
  __int64 v4; // r10
  int v5; // eax
  REGHANDLE v6; // rcx
  bool v7; // zf
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // esi
  char *v11; // rdi
  bool (__fastcall *v12)(UAPViewWrapper *__hidden, const struct APPLICATION_VIEW_DATA *, const struct APPLICATION_VIEW_DATA *); // rax
  UAPViewWrapper *v13; // rcx
  bool HasViewDataChanged; // al
  bool v15; // r15
  unsigned int v16; // edx
  ViewEventDispatcher *v17; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+78h] [rbp-90h]
  int v27; // [rsp+88h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-78h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  void *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  int *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  int *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  int *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]

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
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *((_DWORD *)this + 35);
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v19 = v5;
    v35 = &v19;
    v20 = *(_DWORD *)a2;
    v38 = &v20;
    v21 = *((_DWORD *)a2 + 1);
    v41 = &v21;
    v36 = 4;
    v39 = 4;
    v42 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039737F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v6 = *(_QWORD *)(v4 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v32 = &unk_18039738A;
    UserData.Reserved = 2;
    v33 = 82;
    v34 = 1;
    EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v7 = *((_DWORD *)this + 62) == 1;
  v8 = *(_OWORD *)((char *)this + 212);
  v9 = *(_OWORD *)((char *)this + 228);
  v30 = *((_DWORD *)this + 61);
  v28 = v8;
  v29 = v9;
  if ( v7 )
    DWORD2(v29) = *((_DWORD *)this + 63);
  v7 = *(_DWORD *)a2 == 1;
  v27 = *((_DWORD *)this + 61);
  v25 = v8;
  v26 = v9;
  if ( v7 )
  {
    v10 = *((_DWORD *)a2 + 1);
    DWORD2(v26) = v10;
  }
  else
  {
    v10 = DWORD2(v26);
  }
  v11 = (char *)this - 8;
  v12 = *(bool (__fastcall **)(UAPViewWrapper *__hidden, const struct APPLICATION_VIEW_DATA *, const struct APPLICATION_VIEW_DATA *))(*((_QWORD *)this - 1) + 128LL);
  v13 = (ViewWrapperBase *)((char *)this - 8);
  if ( v12 == UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged )
  {
    HasViewDataChanged = UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged(
                           v13,
                           (const struct APPLICATION_VIEW_DATA *)&v28,
                           (const struct APPLICATION_VIEW_DATA *)&v25);
  }
  else
  {
    HasViewDataChanged = v12(
                           v13,
                           (const struct APPLICATION_VIEW_DATA *)&v28,
                           (const struct APPLICATION_VIEW_DATA *)&v25);
    v10 = DWORD2(v26);
  }
  v15 = HasViewDataChanged;
  *((_QWORD *)this + 31) = *(_QWORD *)a2;
  if ( DWORD2(v29) != v10 )
  {
    v16 = *((_DWORD *)v11 + 37);
    v17 = (ViewEventDispatcher *)*((_QWORD *)v11 + 21);
    v23[0] = 1;
    v23[1] = v10;
    ViewEventDispatcher::HostViewStateOverridesChanged(v17, v16, (const struct HostViewStateOverrides *)v23);
  }
  if ( v15 )
  {
    if ( *((_BYTE *)this + 500) )
      ViewWrapperBase::PushDesiredBoundsToView(
        (ViewWrapperBase *)((char *)this - 8),
        (const struct APPLICATION_VIEW_DATA *)&v25);
  }
}
