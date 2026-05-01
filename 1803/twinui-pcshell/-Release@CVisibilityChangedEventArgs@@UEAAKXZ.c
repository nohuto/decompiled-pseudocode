/*
 * XREFs of ?Release@CVisibilityChangedEventArgs@@UEAAKXZ @ 0x18007E2F0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007E1E4 (-InternalRelease@-$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@M.c)
 *     ?Release@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x1800A4BA0 (-Release@CVisibilityChangedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CVisibilityChangedEventArgs@@WBA@EAAKXZ @ 0x1800A4BB0 (-Release@CVisibilityChangedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18007E470 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIVisibilityChangedEventArgs@Experien.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityChangedEventArgs::Release(CVisibilityChangedEventArgs *this)
{
  signed __int64 v1; // rax
  CVisibilityChangedEventArgs *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  __int64 (__fastcall *v5)(void *); // rax
  void (*v6)(void); // rax

  v1 = *((_QWORD *)this + 7);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 - 1, v1);
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
      v5 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v2 + 48LL);
      if ( v5 == Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`scalar deleting destructor' )
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(v2);
      else
        ((void (__fastcall *)(CVisibilityChangedEventArgs *, __int64))v5)(v2, 1LL);
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
