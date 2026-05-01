/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___ @ 0x180011CCC
 * Callers:
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180013E00 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___(
        _DWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // r13
  __int64 v5; // r14
  void *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  void (*v10)(void); // rax
  signed int v11; // edi
  __int64 (__fastcall *v12)(void *); // rax
  void (__fastcall *v13)(_DWORD *); // rax
  __int64 v14; // rcx
  void (*v15)(void); // rax
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  unsigned int v20; // [rsp+B0h] [rbp+48h]
  __int64 v21; // [rsp+C0h] [rbp+58h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      -2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = a1;
    v17[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v17[1] = a1;
    v5 = *a2;
    v18[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v21 = a2[1];
    v18[1] = v21;
    v20 = a1[12];
    v6 = 0LL;
    v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
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
      *v8 = off_18031D578;
      v8[2] = 0LL;
      if ( v8 + 2 != v17 )
      {
        v8[2] = a1;
        v4 = 0LL;
        v17[0] = 0LL;
      }
      v8[3] = a1;
      v8[4] = 0LL;
      if ( v8 + 4 != v18 )
      {
        v8[4] = v5;
        v5 = 0LL;
        v18[0] = 0LL;
      }
      v8[5] = v21;
      v6 = v8;
      v9 = v8;
    }
    v11 = v9 == 0LL ? 0x8007000E : 0;
    if ( v9 )
    {
      v11 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v20, v6, -2LL);
      v12 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL);
      if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
      else
        v12(v6);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v11 >= 0 )
      ++a1[51];
    v13 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(a1);
    else
      v13(a1);
    v14 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release();
      else
        v15();
    }
    return (unsigned int)v11;
  }
}
