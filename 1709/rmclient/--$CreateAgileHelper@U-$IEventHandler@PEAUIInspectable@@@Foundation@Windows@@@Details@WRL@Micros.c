/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800028F0
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180002660 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C30 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180007AA0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 a1,
        _QWORD *a2)
{
  int AgileReference; // ebx
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v12; // rcx
  void (__fastcall *v13)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64); // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h]

  *a2 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  if ( a1 )
  {
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a1, &v16);
    if ( AgileReference < 0 )
      goto LABEL_21;
    v4 = v16;
  }
  else
  {
    v4 = 0LL;
  }
  v18 = v4;
  v5 = 0LL;
  v16 = 0LL;
  v6 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    ppunkMarshal = 0LL;
    *v6 = &Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>::`vftable';
    v6[1] = &Microsoft::WRL::FtmBase::`vftable';
    v6[5] = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v10 = v7[5];
      if ( v10 )
      {
        v7[5] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v7 + 5);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    v12 = Microsoft::WRL::Details::ModuleBase::module_;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IEventHandler<IInspectable *>'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_DWORD *)v7 + 17) = 1;
    if ( v12 )
    {
      v13 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64))(*(_QWORD *)v12 + 8LL);
      if ( (char *)v13 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(
          v12,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount,
          v8,
          v9);
      else
        v13(v12, Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount, v8, v9);
    }
    v7[9] = 0LL;
    if ( v7 + 9 != &v18 )
    {
      v7[9] = v4;
      v4 = 0LL;
    }
    v5 = v7;
    *v7 = &off_180010348;
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
  {
    *a2 = v5;
    AgileReference = 0;
  }
  else
  {
    AgileReference = -2147024882;
  }
LABEL_21:
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)AgileReference;
}
