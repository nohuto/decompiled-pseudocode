/*
 * XREFs of ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x180002A60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x1800028BC (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CAnimationClock *__fastcall CAnimationClock::`scalar deleting destructor'(CAnimationClock *this, char a2)
{
  CTimer *v4; // rcx
  CBaseObject *v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CAnimationClock::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAnimationClock::`vftable'{for `ITimerCallbackListener'};
  v4 = (CTimer *)*((_QWORD *)this + 8);
  if ( v4 )
    CTimer::SetTimerCallback(v4, 0LL);
  v5 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationClock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
