/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18007CBC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18007CF50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007DAA8 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        NotificationDispatcher *this,
        __int64 a2)
{
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rbp
  struct IAsyncCallback *v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  _QWORD *v9; // rbx
  volatile signed __int32 *v10; // rcx
  int v12; // eax
  unsigned int v13; // edi
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IAsyncCallback *v17; // [rsp+88h] [rbp+20h]

  v4 = *(volatile signed __int32 **)a2;
  if ( *(_QWORD *)a2 )
    _InterlockedAdd(v4 + 19, 1u);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = 0LL;
  v17 = 0LL;
  v7 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v9 = v7 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 8));
    *((_DWORD *)v8 + 13) = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = off_1801FFEC0;
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v8 + 7) = v4;
    if ( v4 )
      _InterlockedAdd(v4 + 19, 1u);
    *((_QWORD *)v8 + 8) = v5;
    v6 = (struct IAsyncCallback *)v8;
    v17 = (struct IAsyncCallback *)v8;
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 19, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 56LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v6 = v17;
  }
  if ( v6 )
  {
    v12 = NotificationDispatcher::AddTask(this, v6);
    v13 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v6 + 16LL))(v6);
      v15 = *(volatile signed __int32 **)a2;
      if ( *(_QWORD *)a2 )
      {
        *(_QWORD *)a2 = 0LL;
        if ( _InterlockedExchangeAdd(v15 + 19, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v6 + 16LL))(v6);
      v14 = *(volatile signed __int32 **)a2;
      if ( *(_QWORD *)a2 )
      {
        *(_QWORD *)a2 = 0LL;
        if ( _InterlockedExchangeAdd(v14 + 19, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 56LL))(v14, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL);
    v10 = *(volatile signed __int32 **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)a2 = 0LL;
      if ( _InterlockedExchangeAdd(v10 + 19, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 56LL))(v10, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return 2147942414LL;
  }
}
