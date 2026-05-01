/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x180011438
 * Callers:
 *     ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x180011410 (-SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z.c)
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
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(
        _DWORD *a1,
        __int128 *a2)
{
  _DWORD *v4; // r14
  __int128 v5; // xmm6
  unsigned int v6; // r15d
  void *v7; // rdi
  _DWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  void (*v11)(void); // rax
  signed int v12; // ebx
  __int64 (__fastcall *v13)(void *); // rax
  void (__fastcall *v14)(_DWORD *); // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v12 = -2147019873;
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
    v16[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v16[1] = a1;
    v5 = *a2;
    v17 = *a2;
    v6 = a1[12];
    v7 = 0LL;
    v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    v10 = 0LL;
    if ( v8 )
    {
      *(_QWORD *)v8 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      v8[3] = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v11 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v11 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v11();
      }
      *v9 = off_18031D550;
      v9[2] = 0LL;
      if ( v9 + 2 != v16 )
      {
        v9[2] = a1;
        v4 = 0LL;
        v16[0] = 0LL;
      }
      v9[3] = a1;
      *((_OWORD *)v9 + 2) = v5;
      v7 = v9;
      v10 = v9;
    }
    v12 = v10 == 0LL ? 0x8007000E : 0;
    if ( v10 )
    {
      v12 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v6, v7, -2LL);
      v13 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL);
      if ( v13 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
      else
        v13(v7);
    }
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v12 >= 0 )
      ++a1[51];
    v14 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(a1);
    else
      v14(a1);
  }
  return (unsigned int)v12;
}
