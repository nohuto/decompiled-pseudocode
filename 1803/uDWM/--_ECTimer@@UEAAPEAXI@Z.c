/*
 * XREFs of ??_ECTimer@@UEAAPEAXI@Z @ 0x18000A830
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z @ 0x18000A8E0 (-_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CTimer *__fastcall CTimer::`vector deleting destructor'(CTimer *this, char a2)
{
  DWORD CurrentThreadId; // eax

  *(_QWORD *)this = &CTimer::`vftable';
  CurrentThreadId = GetCurrentThreadId();
  CTimer::_DestroyThreadPoolTimer(this, CurrentThreadId != *((_DWORD *)this + 18));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTimer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
