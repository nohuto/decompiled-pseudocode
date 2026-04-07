/*
 * XREFs of ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18000F200
 * Callers:
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x18000F030 (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18000F10C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x18000F260 (--_ECDWMDXGIAdapter@@EEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBase::Release(CMILRefCountBase *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CDWMDXGIAdapter *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(CDWMDXGIAdapter *__hidden, unsigned int))(*(_QWORD *)this + 16LL);
    if ( v3 == CDWMDXGIAdapter::`vector deleting destructor' )
      CDWMDXGIAdapter::`vector deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
