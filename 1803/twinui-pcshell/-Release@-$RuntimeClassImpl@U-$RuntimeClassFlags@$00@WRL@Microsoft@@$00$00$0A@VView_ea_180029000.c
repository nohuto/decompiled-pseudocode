/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029000
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A7F40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800A7F40.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800A7F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800A7F50.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1800A7F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800A7F60.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNavigationRequest@@@Z @ 0x1800FAEE8 (-Attach@-$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNa.c)
 *     ??$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1801D1494 (--$MakeAndInitialize@VViewEventArgsForNavigationRequest@@UIViewEventArgs@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // edi
  signed __int64 v4; // rtt
  void *(__fastcall *v6)(ViewEventArgsForNavigationRequest *__hidden, unsigned int); // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (*v9)(void); // rax

  v1 = *((_QWORD *)a1 + 11);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646LL;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 11, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( a1 )
    {
      v6 = *(void *(__fastcall **)(ViewEventArgsForNavigationRequest *__hidden, unsigned int))(*a1 + 64);
      if ( v6 == ViewEventArgsForNavigationRequest::`scalar deleting destructor' )
      {
        if ( *((__int64 *)a1 + 11) < 0 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2LL * *((_QWORD *)a1 + 11));
        v7 = *((_QWORD *)a1 + 7);
        if ( v7 )
        {
          *((_QWORD *)a1 + 7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v8 = *((_QWORD *)a1 + 4);
        if ( v8 )
        {
          *((_QWORD *)a1 + 4) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        operator delete((void *)a1, (const struct std::nothrow_t *)0x68);
      }
      else
      {
        v6((ViewEventArgsForNavigationRequest *)a1, 1u);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v9 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return 0LL;
      }
      v9();
    }
  }
  return v3;
}
