/*
 * XREFs of ??0BufferedInputTarget@@IEAA@XZ @ 0x1800A4A6C
 * Callers:
 *     ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x1800A4E04 (-Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CB554 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
BufferedInputTarget *__fastcall BufferedInputTarget::BufferedInputTarget(BufferedInputTarget *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &BufferedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &BufferedInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 32,
    0x18uLL,
    6uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return this;
}
