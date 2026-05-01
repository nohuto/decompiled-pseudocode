/*
 * XREFs of ?v_ShutdownServices@CApplicationViewManager@@UEAAJPEAUIProfferService@@@Z @ 0x180074C20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::v_ShutdownServices(
        CApplicationViewManager *this,
        struct IProfferService *a2)
{
  int v2; // eax
  volatile signed __int32 *v3; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IProfferService *))(**((_QWORD **)this + 63) + 48LL))(
         *((_QWORD *)this + 63),
         a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v3 = (volatile signed __int32 *)GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals = 0LL;
  ReleaseSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 72LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
