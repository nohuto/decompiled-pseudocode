/*
 * XREFs of ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1800F7418
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18010FD50 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run @ 0x1801101C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___--Run.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1800F91E0 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::OverrideNavigationLevelForView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 result; // rax
  const char *v8; // r9
  int MatchingViewEventRegistration; // eax
  __int64 *v10; // rbx
  RTL_SRWLOCK *v11; // rcx
  __int64 v12; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v18; // [rsp+68h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    v17 = 0LL;
    (**a2)(a2, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v17);
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 728LL);
    if ( a3 == 2 )
    {
      result = v6(v17, 1LL);
      if ( (_BYTE)result )
      {
        v18 = &v17;
        wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v14, &v18);
        v18 = 0LL;
        Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 28, SRWLock);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(a1, v17, &v18);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x95A,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( SRWLock[0] )
          ReleaseSRWLockShared(SRWLock[0]);
        v10 = v18;
        v11 = (RTL_SRWLOCK *)v18[4];
        SRWLock[0] = v11;
        if ( v11 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v11->Ptr + 1))(v11);
        ViewEventDispatcher::_RaiseViewEvent(a1, a2, 7LL, SRWLock);
        result = (*(__int64 (__fastcall **)(__int64 *))(*v10 + 16))(v10);
        if ( v15 )
          result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v14 + 728LL))(*v14, 2LL);
      }
    }
    else
    {
      result = v6(v17, 0LL);
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x968,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
             v8);
  }
  return result;
}
