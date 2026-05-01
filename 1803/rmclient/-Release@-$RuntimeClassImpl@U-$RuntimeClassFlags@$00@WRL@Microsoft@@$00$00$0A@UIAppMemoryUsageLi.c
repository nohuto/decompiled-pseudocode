/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001AE0
 * Callers:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800019E0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180008120 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180008120.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180008130 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180008130.c)
 * Callees:
 *     ??_G?$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800019F0 (--_G-$RuntimeClass@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@WRL@Microsoft.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800039B0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800075A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int64 *Block)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  void *(__fastcall *v5)(void *, char); // rax
  void (*v6)(void); // rax

  v1 = *((_QWORD *)Block + 7);
  v2 = Block;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(Block + 7, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
    {
      v5 = *(void *(__fastcall **)(void *, char))(*v2 + 64);
      if ( v5 == Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`scalar deleting destructor' )
        Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
          (void *)v2,
          1);
      else
        v5((void *)v2, 1);
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
  return v3;
}
