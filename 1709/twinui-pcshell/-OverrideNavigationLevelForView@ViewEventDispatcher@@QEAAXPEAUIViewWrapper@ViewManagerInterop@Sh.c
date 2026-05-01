/*
 * XREFs of ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180122688
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18013A300 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run @ 0x18013A6B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___--Run.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180124460 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 *v15; // [rsp+30h] [rbp-18h]
  char v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v14 = -2LL;
  try
  {
    v18 = 0LL;
    (**a2)(a2, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v18);
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 728LL);
    if ( a3 == 2 )
    {
      result = v6(v18, 1LL);
      if ( (_BYTE)result )
      {
        v15 = &v18;
        v16 = 1;
        v19 = 0LL;
        AcquireSRWLockShared(a1 + 37);
        *(_QWORD *)v13 = a1 + 37;
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(a1, v18, &v19);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x9DC,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( a1 != (RTL_SRWLOCK *)-296LL )
          ReleaseSRWLockShared(a1 + 37);
        v10 = v19;
        v11 = *(_QWORD *)(v19 + 32);
        *(_QWORD *)v13 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        ViewEventDispatcher::_RaiseViewEvent(a1, a2, 7LL, v13);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 728LL))(v18, 2LL);
      }
    }
    else
    {
      result = v6(v18, 0LL);
    }
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x9EA,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
             v8);
  }
  return result;
}
