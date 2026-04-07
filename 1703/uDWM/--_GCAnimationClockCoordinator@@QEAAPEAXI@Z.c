/*
 * XREFs of ??_GCAnimationClockCoordinator@@QEAAPEAXI@Z @ 0x180078114
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180077EA0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CAnimationClockCoordinator *__fastcall CAnimationClockCoordinator::`scalar deleting destructor'(
        CAnimationClockCoordinator *this)
{
  __int64 v1; // rdi
  CBaseObject *v3; // rcx

  v1 = 0LL;
  for ( *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 20);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 7) + 8 * v1);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationClockCoordinator *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
