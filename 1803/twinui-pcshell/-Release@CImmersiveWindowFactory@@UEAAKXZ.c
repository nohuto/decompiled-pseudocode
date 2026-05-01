/*
 * XREFs of ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x180027320
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x18007F74C (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 *     ?Release@CImmersiveWindowFactory@@W7EAAKXZ @ 0x1800B09F0 (-Release@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x1800B0A00 (-Release@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WEI@EAAKXZ @ 0x1800B0A10 (-Release@CImmersiveWindowFactory@@WEI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WFA@EAAKXZ @ 0x1800B0A20 (-Release@CImmersiveWindowFactory@@WFA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WKI@EAAKXZ @ 0x1800B0A30 (-Release@CImmersiveWindowFactory@@WKI@EAAKXZ.c)
 *     ??1?$ComPtr@VCImmersiveWindowFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB234 (--1-$ComPtr@VCImmersiveWindowFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x180305FE4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x1800273D0 (--_ECImmersiveWindowFactory@@EEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::Release(CImmersiveWindowFactory *this)
{
  signed __int64 v1; // rax
  CImmersiveWindowFactory *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  void *(__fastcall *v5)(CImmersiveWindowFactory *__hidden, unsigned int); // rax
  void (*v6)(void); // rax

  v1 = *((_QWORD *)this + 23);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 23, v1 - 1, v1);
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
      v5 = *(void *(__fastcall **)(CImmersiveWindowFactory *__hidden, unsigned int))(*(_QWORD *)v2 + 64LL);
      if ( v5 == CImmersiveWindowFactory::`vector deleting destructor' )
        CImmersiveWindowFactory::`vector deleting destructor'(v2, 1u);
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
