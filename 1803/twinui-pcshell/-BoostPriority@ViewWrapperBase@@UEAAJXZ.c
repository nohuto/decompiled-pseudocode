/*
 * XREFs of ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1800535E0
 * Callers:
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066AA0 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z @ 0x1800316A0 (-BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z.c)
 *     ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x180055DE0 (-SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180087F90 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::BoostPriority(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // r14
  bool v3; // al
  int v4; // ebx
  __int64 v5; // r10
  REGHANDLE v6; // rcx
  __int16 v7; // cx
  int v8; // esi
  struct IUnknown *v10; // rdx
  ViewManagerBridge *v11; // rcx
  void (__fastcall *v12)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  __int64 v13; // r8
  _DWORD *v14; // rcx
  ViewManagerInteropTraceLogging *v15; // rcx
  bool v16; // [rsp+38h] [rbp-59h] BYREF
  char v17; // [rsp+39h] [rbp-58h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-55h] BYREF
  int v19; // [rsp+40h] [rbp-51h] BYREF
  WINBOOL v20; // [rsp+44h] [rbp-4Dh] BYREF
  WINBOOL v21; // [rsp+48h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-41h] BYREF
  LPVOID v23; // [rsp+58h] [rbp-39h] BYREF
  LPVOID v24; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-19h] BYREF
  void *v27; // [rsp+88h] [rbp-9h]
  int v28; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+94h] [rbp+3h]
  int *v30; // [rsp+98h] [rbp+7h]
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  bool *v32; // [rsp+A8h] [rbp+17h]
  __int64 v33; // [rsp+B0h] [rbp+1Fh]
  char *v34; // [rsp+B8h] [rbp+27h]
  __int64 v35; // [rsp+C0h] [rbp+2Fh]

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 18) + 296LL);
  AcquireSRWLockExclusive(v2);
  v3 = (*((_DWORD *)this + 18) & 0x40) != 0;
  v17 = 1;
  v4 = 0;
  v16 = v3;
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
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v19 = *((_DWORD *)this + 31);
    v30 = &v19;
    v32 = &v16;
    v34 = &v17;
    v31 = 4LL;
    v33 = 1LL;
    v35 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803971CC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v6 = *(_QWORD *)(v5 + 32);
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v27 = &unk_1803971D7;
    UserData.Reserved = 2;
    v28 = 64;
    v29 = 1;
    EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v7 = *((_WORD *)this + 162);
  v8 = *((_DWORD *)this + 18) & 0x40;
  *((_DWORD *)this + 18) |= 0xC0u;
  if ( (v7 & 0xC0) != 0xC0 )
  {
    *((_WORD *)this + 162) = v7 | 0xC0;
    v10 = (struct IUnknown *)*((_QWORD *)this + 21);
    if ( v10 )
    {
      v11 = *(ViewManagerBridge **)(*((_QWORD *)this + 18) + 520LL);
      v12 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v11 + 72LL);
      v13 = *((unsigned int *)this + 81);
      if ( v12 == ViewManagerBridge::SetImportanceVectorForView )
        ViewManagerBridge::SetImportanceVectorForView(v11, v10, v13);
      else
        v12(v11, v10, v13);
      v23 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v20, &v23) && v20 )
      {
        v23 = &qword_180438968;
        qword_180438968 = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
      }
      v14 = (_DWORD *)*((_QWORD *)v23 + 1);
      if ( v14 && *v14 )
      {
        v24 = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v21, &v24) && v21 )
        {
          v24 = &qword_180438968;
          qword_180438968 = &IamTraceLogging::`vftable';
          atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
          InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
        }
        ViewManagerInteropTraceLogging::CommitImportanceVector_(
          v15,
          *((_DWORD *)this + 31),
          (ViewWrapperBase *)((char *)this + 324));
      }
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  LOBYTE(v4) = v8 != 0;
  ViewEventDispatcher::BoostShellPriority(*((RTL_SRWLOCK **)this + 18), v4);
  return 0LL;
}
