/*
 * XREFs of ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180053360
 * Callers:
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800475B0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066940 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?ChangeActivationTimeoutDisabled@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x1800561A0 (-ChangeActivationTimeoutDisabled@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall ViewWrapperBase::SetActivationTimeoutPolicy(__int64 a1, int a2)
{
  RTL_SRWLOCK *v3; // rdi
  _BOOL8 v5; // r8
  struct IUnknown *v6; // rdx
  ViewManagerBridge *v7; // rcx
  void (__fastcall *v8)(ViewManagerBridge *__hidden, struct IUnknown *, bool); // rax
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v13; // [rsp+3Ch] [rbp-15h] BYREF
  int v14; // [rsp+40h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  int *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  v3 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 296LL);
  AcquireSRWLockExclusive(v3);
  if ( a2 != *(_DWORD *)(a1 + 320) )
  {
    *(_DWORD *)(a1 + 320) = a2;
    v6 = *(struct IUnknown **)(a1 + 168);
    if ( v6 )
    {
      LOBYTE(v5) = a2 == 1;
      v7 = *(ViewManagerBridge **)(*(_QWORD *)(a1 + 144) + 520LL);
      v8 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, bool))(*(_QWORD *)v7 + 88LL);
      if ( v8 == ViewManagerBridge::ChangeActivationTimeoutDisabled )
        ViewManagerBridge::ChangeActivationTimeoutDisabled(v7, v6, v5);
      else
        v8(v7, v6, v5);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_180438940;
        qword_180438940[0] = &LockScreenServiceLogging::`vftable';
        qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
      }
      v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v9 > 5u )
      {
        v10 = *(_DWORD *)(a1 + 124);
        v19 = 0;
        v22 = 0;
        v13 = v10;
        v17 = &v13;
        v14 = *(_DWORD *)(a1 + 320);
        v20 = &v14;
        v18 = 4;
        v21 = 4;
        TlgWrite(v9, &unk_1803970F5, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
