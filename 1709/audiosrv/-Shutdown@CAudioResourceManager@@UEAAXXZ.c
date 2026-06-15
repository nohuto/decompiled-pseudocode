/*
 * XREFs of ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x18009BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CAudioResourceManager::Shutdown(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rbx
  std::_Ref_count_base *v5; // rcx

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  LOBYTE(this[2].DebugInfo) = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
  while ( this[3].DebugInfo )
  {
    v3 = *(_QWORD **)&this[2].LockCount;
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(_QWORD *)(v3[1] + 8 * (this[2].SpinCount & (v3[2] - 1LL)));
    SetThreadpoolTimer(*(PTP_TIMER *)(*(_QWORD *)v4 + 8LL), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(*(_QWORD *)v4 + 8LL), 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(*(_QWORD *)v4 + 8LL));
    v5 = *(std::_Ref_count_base **)(*((_QWORD *)this[2].OwningThread
                                    + (this[2].SpinCount & ((ULONG_PTR)this[2].LockSemaphore - 1)))
                                  + 8LL);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    if ( this[3].DebugInfo-- == (PRTL_CRITICAL_SECTION_DEBUG)1 )
      this[2].SpinCount = 0LL;
    else
      ++this[2].SpinCount;
  }
}
