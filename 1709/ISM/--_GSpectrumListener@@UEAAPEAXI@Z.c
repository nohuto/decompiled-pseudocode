/*
 * XREFs of ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x180068200
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180068274 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
SpectrumListener *__fastcall SpectrumListener::`scalar deleting destructor'(SpectrumListener *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &SpectrumListener::`vftable';
  SpectrumListener::Unregister(this);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
