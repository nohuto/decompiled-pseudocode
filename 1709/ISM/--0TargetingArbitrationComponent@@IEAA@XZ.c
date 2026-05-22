/*
 * XREFs of ??0TargetingArbitrationComponent@@IEAA@XZ @ 0x1800A3DE4
 * Callers:
 *     ?Create@TargetingArbitrationComponent@@SAJPEAPEAV1@@Z @ 0x1800A3F50 (-Create@TargetingArbitrationComponent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CB554 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
TargetingArbitrationComponent *__fastcall TargetingArbitrationComponent::TargetingArbitrationComponent(
        TargetingArbitrationComponent *this)
{
  __int64 *v2; // rdi
  unsigned int i; // esi
  __int64 v4; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TargetingArbitrationComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &TargetingArbitrationComponent::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 24);
  `eh vector constructor iterator'(
    (char *)this + 24,
    8uLL,
    5uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<IInputTargetingComponent>::ComPtr<IInputTargetingComponent>,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>::~ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>);
  for ( i = 0; i < 5; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    ++v2;
  }
  *((_DWORD *)this + 16) = 0;
  return this;
}
