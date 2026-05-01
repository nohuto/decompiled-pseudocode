/*
 * XREFs of ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ @ 0x1801B0F90
 * Callers:
 *     ?WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x1801B0F70 (-WorkAreaChanged@AccessibilityExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AccessibilityExperienceManager::NotifyWorkspaceRect(AccessibilityExperienceManager *this)
{
  struct IUnknownVtbl *v1; // rsi
  volatile signed __int32 *v2; // r14
  volatile signed __int32 *v3; // rbp
  IUnknown *v4; // rdi
  IUnknown *v5; // rax
  IUnknown *v6; // rbx
  int v7; // ebx
  volatile signed __int32 *v8; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (struct IUnknownVtbl *)((char *)this - 144);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  if ( v2 )
    _InterlockedIncrement(v2 + 11);
  v3 = v2;
  v8 = v2;
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 11);
    v3 = v8;
  }
  v4 = 0LL;
  v5 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v5[1].lpVtbl) = 1;
    v5->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6->lpVtbl = (struct IUnknownVtbl *)off_1802110B0;
    v6[2].lpVtbl = v1;
    v6[3].lpVtbl = 0LL;
    if ( &v6[3] != (IUnknown *)&v8 )
    {
      v6[3].lpVtbl = (struct IUnknownVtbl *)v2;
      v3 = 0LL;
      v8 = 0LL;
    }
    v4 = v6;
  }
  v7 = Windows::Internal::ComTaskPool::RunTask(3, 0, 0, 0, v4, 0LL);
  if ( v4 )
    ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v7);
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 11) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 72LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v2 && !_InterlockedDecrement(v2 + 11) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
