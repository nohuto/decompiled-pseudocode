/*
 * XREFs of ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694
 * Callers:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004F360 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 *     ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x18004FAF0 (-EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18003A320 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005A704 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180087740 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall WindowReadyState::PosChanged(WindowReadyState *this, unsigned int a2, unsigned int a3)
{
  int *v3; // rsi
  _QWORD *v5; // r14
  char v8; // r13
  char v9; // di
  int v10; // r14d
  __int64 v11; // r10
  REGHANDLE v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, char *); // rax
  char v15[8]; // [rsp+30h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-71h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-69h] BYREF
  int v18; // [rsp+44h] [rbp-65h] BYREF
  int v19; // [rsp+48h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v23; // [rsp+80h] [rbp-29h]
  int v24; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int *v28; // [rsp+A0h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp-1h]
  int *v30; // [rsp+B0h] [rbp+7h]
  __int64 v31; // [rsp+B8h] [rbp+Fh]

  v3 = (int *)((char *)this + 8);
  v5 = (_QWORD *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
    {
      WindowReadyState::WaitFlags::Set((int *)this + 2, (__int64 *)this, 2);
      BeginLayoutUpdate(*(_QWORD *)this);
    }
    Context = (LPVOID)__PAIR64__(a3, a2);
    *v5 = __PAIR64__(a3, a2);
  }
  v9 = 1;
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    this,
    (char *)this + 16,
    v5,
    (char *)this + 32);
  v10 = *v3;
  *v3 |= 8u;
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
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    v20 = *(_QWORD *)this;
    v26 = &v20;
    v28 = &v18;
    v19 = *v3;
    v30 = &v19;
    v27 = 8LL;
    v18 = v10;
    v29 = 4LL;
    v31 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v11 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180397989 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v12 = *(_QWORD *)(v11 + 32);
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_180397994;
    UserData.Reserved = 2;
    v24 = 66;
    v25 = 1;
    EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  if ( !*(_QWORD *)this || *v3 )
    v9 = 0;
  if ( v8 != v9 )
  {
    v13 = *((_QWORD *)this + 12);
    v15[0] = v9;
    if ( !v13 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800D2A20LL);
    }
    v14 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 16LL);
    if ( v14 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call )
      std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call(v13, v15);
    else
      v14(v13, v15);
  }
}
