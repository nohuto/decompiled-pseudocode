/*
 * XREFs of ??_GTargetingArbitrationComponent@@MEAAPEAXI@Z @ 0x1800A3E90
 * Callers:
 *     ??_ETargetingArbitrationComponent@@O7EAAPEAXI@Z @ 0x1800A4A50 (--_ETargetingArbitrationComponent@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
TargetingArbitrationComponent *__fastcall TargetingArbitrationComponent::`scalar deleting destructor'(
        TargetingArbitrationComponent *this,
        char a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rcx

  *(_QWORD *)this = &TargetingArbitrationComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &TargetingArbitrationComponent::`vftable'{for `RefCountedObject'};
  v4 = 0;
  v5 = (__int64 *)((char *)this + 24);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 5 );
  `eh vector destructor iterator'(
    (char *)this + 24,
    8uLL,
    5uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>::~ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
