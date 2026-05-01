/*
 * XREFs of ?NotifyHostChanged@ViewWrapperBase@@UEAAXXZ @ 0x18013ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewWrapperBase::NotifyHostChanged(ViewWrapperBase *this)
{
  char *v1; // rsi
  IUnknown *v2; // rdi
  IUnknown *v3; // rax
  IUnknown *v4; // rbx
  DWORD CurrentThreadId; // eax
  int v6; // ebx
  char *v7; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (char *)this - 8;
  if ( this != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))((char *)this - 8);
  v7 = v1;
  v2 = 0LL;
  v3 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v3->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v3[1].lpVtbl) = 1;
    v3->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v4->lpVtbl = (struct IUnknownVtbl *)off_18020D2B0;
    v4[2].lpVtbl = (struct IUnknownVtbl *)v1;
    v4[3].lpVtbl = 0LL;
    if ( &v4[3] != (IUnknown *)&v7 )
    {
      v4[3].lpVtbl = (struct IUnknownVtbl *)v1;
      v1 = 0LL;
      v7 = 0LL;
    }
    v2 = v4;
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v2, 0LL);
  if ( v2 )
    ((void (__fastcall *)(IUnknown *))v2->lpVtbl->Release)(v2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
  if ( v1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
}
