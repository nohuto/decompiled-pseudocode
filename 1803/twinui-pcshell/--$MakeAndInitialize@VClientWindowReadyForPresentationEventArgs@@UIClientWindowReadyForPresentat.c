/*
 * XREFs of ??$MakeAndInitialize@VClientWindowReadyForPresentationEventArgs@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Details@WRL@Microsoft@@YAJPEAPEAUIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Z @ 0x18003A6F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___::Run @ 0x18003AED0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___--Run.c)
 *     _lambda_6e6576d5e67104240e8cccb7cd2bd69c_::operator() @ 0x1801F05F0 (_lambda_6e6576d5e67104240e8cccb7cd2bd69c_--operator().c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ClientWindowReadyForPresentationEventArgs,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,bool const &>(
        _QWORD *a1,
        _BYTE *a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  _QWORD *v9; // r15
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  _QWORD *v12; // rbp
  volatile signed __int64 *v13; // rdi
  void (*v14)(void); // rax
  __int64 (__fastcall *v15)(); // rax
  BOOL IsEqualGUID; // eax
  bool v17; // zf
  __int64 (__fastcall *v18)(); // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v5;
  v6 = v5;
  v7 = v5;
  if ( !v5 )
    return 2147942414LL;
  v9 = v5 + 2;
  ppunkMarshal = 0LL;
  v5[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v5[5] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v10 = v9[3];
    if ( v10 )
    {
      v9[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      v9 + 3);
  }
  v11 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
  }
  v6[7] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  v12 = v6 + 1;
  v6[1] = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
  v13 = v6 + 7;
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v14 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v6 = v22;
    }
    else
    {
      v14();
    }
  }
  *v6 = &ClientWindowReadyForPresentationEventArgs::`vftable';
  *v12 = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_BYTE *)v6 + 64) = *a2;
  v15 = *(__int64 (__fastcall **)())*v6;
  if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface )
  {
    *a1 = 0LL;
    IsEqualGUID = InlineIsEqualGUID(
                    &GUID_593ed2db_a1ee_4997_b822_f3fb111c012e,
                    &GUID_00000000_0000_0000_c000_000000000046);
    *a1 = v7;
    v17 = !IsEqualGUID;
    v18 = *(__int64 (__fastcall **)())(*v7 + 8LL);
    if ( v17
      && v18 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::AddRef )
    {
      v19 = *v13;
      while ( v19 >= 0 )
      {
        if ( (_DWORD)v19 != 0x7FFFFFFF )
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64(v13, v19 + 1, v19);
          if ( v20 != v19 )
            continue;
        }
        v6 = v22;
        goto LABEL_24;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v19 + 16));
      v6 = v22;
    }
    else
    {
      ((void (__fastcall *)(_QWORD *))v18)(v6);
    }
  }
  else
  {
    v2 = ((__int64 (__fastcall *)(_QWORD *, GUID *, _QWORD *))v15)(v6, &GUID_593ed2db_a1ee_4997_b822_f3fb111c012e, a1);
  }
LABEL_24:
  (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v2;
}
