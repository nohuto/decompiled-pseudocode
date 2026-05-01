/*
 * XREFs of ??$CreateGitHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@2@PEAPEAU342@@Z @ 0x1800022F0
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800034F0 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AA0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003EF0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003F10 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAVAppMemoryUsageLimitChanging.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180004B80 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  LPUNKNOWN v8; // rcx
  Windows::Internal::Details::Git *v9; // rcx
  void (*v10)(void); // rax
  int v11; // edi
  __int64 (__fastcall *v12)(_QWORD *, GUID *, _QWORD *); // rax
  int Interface; // eax
  void (__fastcall *v14)(_QWORD *); // rax
  LPUNKNOWN ppunkMarshal; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]

  *a2 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    ppunkMarshal = 0LL;
    *v5 = &Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>::`vftable';
    v5[1] = &Microsoft::WRL::FtmBase::`vftable';
    v5[3] = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v7 = v6[3];
      if ( v7 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v6 + 3);
    }
    v8 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v8->lpVtbl->Release)(v8);
    }
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
    v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_DWORD *)v6 + 9) = 1;
    if ( v9 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        v10();
    }
    *v6 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Windows::Internal::GitPtr,2>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
    v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    v6[5] = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
    *((_DWORD *)v6 + 12) = 0;
    *((_DWORD *)v6 + 13) = Windows::Internal::Details::Git::Acquire(v9);
    v4 = v6;
    v6[5] = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  }
  if ( v4 )
  {
    v11 = 0;
    if ( *((_DWORD *)v4 + 12) )
    {
      v11 = *((_DWORD *)v4 + 13);
      if ( v11 >= 0 )
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1800186A8 + 32LL))(qword_1800186A8);
    }
    *((_DWORD *)v4 + 12) = 0;
    if ( v11 >= 0 )
    {
      if ( a1 )
      {
        v11 = *((_DWORD *)v4 + 13);
        if ( v11 >= 0 )
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD *))(*(_QWORD *)qword_1800186A8 + 24LL))(
                  qword_1800186A8,
                  a1,
                  &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
                  v4 + 6);
      }
    }
    if ( v11 >= 0 )
    {
      v12 = *(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v4;
      if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      v4,
                      &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
                      a2);
      else
        Interface = v12(v4, &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0, a2);
      v11 = Interface;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v4 )
  {
    v14 = *(void (__fastcall **)(_QWORD *))(*v4 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
    else
      v14(v4);
  }
  return (unsigned int)v11;
}
