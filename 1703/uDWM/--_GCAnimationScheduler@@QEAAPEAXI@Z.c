/*
 * XREFs of ??_GCAnimationScheduler@@QEAAPEAXI@Z @ 0x180078184
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180077EA0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180005218 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x180010830 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CAnimationScheduler *__fastcall CAnimationScheduler::`scalar deleting destructor'(CAnimationScheduler *this)
{
  __int64 v1; // rbx
  CStoryboard *v3; // rcx

  v1 = 0LL;
  *(_QWORD *)this = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
  for ( *((_QWORD *)this + 1) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
        (unsigned int)v1 < *((_DWORD *)this + 10);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * v1);
    if ( v3 )
      CStoryboard::Release(v3);
  }
  CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 48);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationScheduler *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
