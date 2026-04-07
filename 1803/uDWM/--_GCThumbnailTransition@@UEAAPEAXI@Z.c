/*
 * XREFs of ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x1800A4FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800A5434 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

CThumbnailTransition *__fastcall CThumbnailTransition::`scalar deleting destructor'(
        CThumbnailTransition *this,
        char a2)
{
  *(_QWORD *)this = &CThumbnailTransition::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
  CThumbnailTransition::StopAnimation(this);
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CThumbnailTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
