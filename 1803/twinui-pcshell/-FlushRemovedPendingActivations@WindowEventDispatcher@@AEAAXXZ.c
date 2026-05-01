/*
 * XREFs of ?FlushRemovedPendingActivations@WindowEventDispatcher@@AEAAXXZ @ 0x1801D56AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___::Run @ 0x1801D84C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111___--Run.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801DAB40 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?erase@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801DA94C (-erase@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::FlushRemovedPendingActivations(RTL_SRWLOCK *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF

  while ( this[65].Ptr )
  {
    AcquireSRWLockExclusive(this + 58);
    v2 = *(_QWORD **)(*(_QWORD *)this[64].Ptr + 16LL);
    v4 = v2;
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
    std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::erase(
      &this[64],
      &v5,
      *(_QWORD *)this[64].Ptr);
    if ( this != (RTL_SRWLOCK *)-464LL )
      ReleaseSRWLockExclusive(this + 58);
    v3 = v2[3];
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v4);
  }
}
