/*
 * XREFs of ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x180086510
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::OnMessage(
        DesktopBlueLightReductionManager *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int32 *v4; // r12
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // r14
  int v7; // r13d
  IUnknown *v8; // rsi
  IUnknown *v9; // rax
  IUnknown *v10; // rdi
  int v11; // edi
  __int64 result; // rax
  volatile signed __int32 *v13; // [rsp+30h] [rbp-48h]
  volatile signed __int32 *v14; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    if ( a2 == 30 )
    {
      v4 = (volatile signed __int32 *)((char *)this - 104);
      v5 = (volatile signed __int32 *)((char *)this - 104);
      v13 = (volatile signed __int32 *)((char *)this - 104);
      if ( this != (DesktopBlueLightReductionManager *)104 )
      {
        _InterlockedIncrement(v4 + 43);
        v5 = (volatile signed __int32 *)((char *)this - 104);
      }
      v6 = v5;
      v14 = v5;
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 43);
        v5 = (volatile signed __int32 *)((char *)this - 104);
        v6 = v14;
      }
      v7 = *((_DWORD *)this + 25);
      v8 = 0LL;
      v9 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        v9->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
        HIDWORD(v9[1].lpVtbl) = 1;
        v9->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v10->lpVtbl = (struct IUnknownVtbl *)off_180200FB8;
        v10[2].lpVtbl = (struct IUnknownVtbl *)v4;
        v6 = 0LL;
        v14 = 0LL;
        v10[3].lpVtbl = (struct IUnknownVtbl *)v5;
        v8 = v10;
      }
      v11 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v7, 0, v8, 0LL);
      if ( v8 )
        ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd(v6 + 43, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*((_QWORD *)v14 + 5) + 64LL))(v14 + 10, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v5 = v13;
      }
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBF,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v11);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd(v5 + 43, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v13 + 5) + 64LL))((char *)v13 + 40, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC5,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
