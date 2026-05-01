/*
 * XREFs of ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801ACC2C
 * Callers:
 *     ??1ApplicationViewBackedViewHostItem@@UEAA@XZ @ 0x1801ACE78 (--1ApplicationViewBackedViewHostItem@@UEAA@XZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x1801ACF8C (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1Win32BackedViewHostItem@@UEAA@XZ @ 0x1801AD114 (--1Win32BackedViewHostItem@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        _QWORD *a1)
{
  int *i; // rdi
  __int64 result; // rax
  volatile int *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r10
  Microsoft::WRL::Details::EventTargetArray *v7; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v8)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v9)(void); // rax
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (int *)(a1 + 7); ; WaitOnAddress(i, &CompareAddress, 4uLL, 0xFFFFFFFF) )
  {
    CompareAddress = *i;
    if ( !CompareAddress )
      break;
  }
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 6);
  v5 = a1[5];
  if ( v5 )
  {
    a1[5] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v6 + 12), v4);
    if ( !(_DWORD)result )
    {
      v8 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v7 + 24LL);
      if ( v8 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        result = (__int64)Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
                            v7,
                            (const struct std::nothrow_t *)1);
      else
        result = (__int64)v8(v7, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v9 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v9 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          return Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          return v9();
      }
    }
  }
  return result;
}
