/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___::Run @ 0x1801008F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1800F91E0 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___::Run(
        __int64 a1)
{
  __int64 v1; // rbp
  RTL_SRWLOCK *v2; // rsi
  int MatchingViewEventRegistration; // eax
  int v4; // edi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(RTL_SRWLOCK **)(a1 + 16);
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(v2 + 28, &SRWLock);
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)v2, v1, &v11);
  v4 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration >= 0 )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    v7 = v11;
    v8 = (RTL_SRWLOCK *)v11[4];
    SRWLock = v8;
    if ( v8 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 1))(v8);
    v9 = ViewEventDispatcher::_RaiseViewEvent((__int64)v2, v1, 0x22u, &SRWLock);
    v4 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC22,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    v6 = *v7;
    v5 = v7;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xC1F,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)MatchingViewEventRegistration);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v5 = v11;
  if ( v11 )
  {
    v6 = *v11;
LABEL_13:
    (*(void (__fastcall **)(_QWORD *))(v6 + 16))(v5);
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x654,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
}
