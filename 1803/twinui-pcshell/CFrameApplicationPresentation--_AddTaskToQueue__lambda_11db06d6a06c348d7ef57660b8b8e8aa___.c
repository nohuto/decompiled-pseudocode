/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_11db06d6a06c348d7ef57660b8b8e8aa___ @ 0x180011B28
 * Callers:
 *     ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180013CA0 (-SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_11db06d6a06c348d7ef57660b8b8e8aa___(
        _DWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // r15
  unsigned int v5; // r12d
  void *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  void (*v10)(void); // rax
  signed int v11; // ebx
  __int64 (__fastcall *v12)(void *); // rax
  void (__fastcall *v13)(_DWORD *); // rax
  _QWORD v15[11]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v11 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      -2);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = a1;
    v15[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v15[1] = a1;
    v15[2] = a2;
    v5 = a1[12];
    v6 = 0LL;
    v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    v9 = 0LL;
    if ( v7 )
    {
      *v7 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      *((_DWORD *)v7 + 3) = 1;
      *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v10 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v10();
      }
      *v8 = off_18031D4D8;
      v8[2] = 0LL;
      if ( v8 + 2 != v15 )
      {
        v8[2] = a1;
        v4 = 0LL;
        v15[0] = 0LL;
      }
      v8[3] = a1;
      v8[4] = a2;
      v6 = v8;
      v9 = v8;
    }
    v11 = v9 == 0LL ? 0x8007000E : 0;
    if ( v9 )
    {
      v11 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v5, v6, -2LL);
      v12 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL);
      if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
      else
        v12(v6);
    }
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v11 >= 0 )
      ++a1[51];
    v13 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(a1);
    else
      v13(a1);
  }
  return (unsigned int)v11;
}
