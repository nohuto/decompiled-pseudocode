/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeConstraintsCache@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073B40
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180072F04 (-InternalRelease@-$ComPtr@UIAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180073B20 (-InternalRelease@-$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_EAppSizeConstraintsCache@@UEAAPEAXI@Z @ 0x180073BC0 (--_EAppSizeConstraintsCache@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppSizeConstraintsCache>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  AppSizeConstraintsCache *v3; // r10
  void *(__fastcall *v4)(AppSizeConstraintsCache *__hidden, unsigned int); // rax
  __int64 v5; // rdx
  void (*v6)(void); // rax

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
    {
      v4 = *(void *(__fastcall **)(AppSizeConstraintsCache *__hidden, unsigned int))(*(_QWORD *)v3 + 40LL);
      v5 = v2 + 1;
      if ( v4 == AppSizeConstraintsCache::`vector deleting destructor' )
        AppSizeConstraintsCache::`vector deleting destructor'(v3, v5);
      else
        v4(v3, v5);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        v6();
    }
  }
  return v2;
}
