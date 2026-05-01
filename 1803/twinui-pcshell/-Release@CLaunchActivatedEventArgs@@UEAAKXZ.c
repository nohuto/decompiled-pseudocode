/*
 * XREFs of ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x180027820
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 *     ?Release@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1800B0790 (-Release@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1800B07A0 (-Release@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1800B07B0 (-Release@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1800B07C0 (-Release@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WHI@EAAKXZ @ 0x1800B07D0 (-Release@CLaunchActivatedEventArgs@@WHI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ @ 0x1800B07E0 (-Release@CLaunchActivatedEventArgs@@WIA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WII@EAAKXZ @ 0x1800B07F0 (-Release@CLaunchActivatedEventArgs@@WII@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WLI@EAAKXZ @ 0x1800B0800 (-Release@CLaunchActivatedEventArgs@@WLI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WMI@EAAKXZ @ 0x1800B0810 (-Release@CLaunchActivatedEventArgs@@WMI@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ @ 0x1800B0820 (-Release@CLaunchActivatedEventArgs@@WNA@EAAKXZ.c)
 *     ?Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1800B0830 (-Release@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 * Callees:
 *     ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x180027BC0 (--_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::Release(CLaunchActivatedEventArgs *this)
{
  signed __int64 v1; // rax
  CLaunchActivatedEventArgs *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  void *(__fastcall *v5)(CLaunchActivatedEventArgs *__hidden, unsigned int); // rax
  void (*v6)(void); // rax

  v1 = *((_QWORD *)this + 29);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 29, v1 - 1, v1);
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
      v5 = *(void *(__fastcall **)(CLaunchActivatedEventArgs *__hidden, unsigned int))(*(_QWORD *)v2 + 72LL);
      if ( v5 == CLaunchActivatedEventArgs::`scalar deleting destructor' )
        CLaunchActivatedEventArgs::`scalar deleting destructor'(v2, 1u);
      else
        v5(v2, 1u);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v6();
    }
  }
  return v3;
}
