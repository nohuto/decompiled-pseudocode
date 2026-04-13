/*
 * XREFs of ??_ECDelayedTaskLifetime@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180006800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComTaskPool::CDelayedTaskLifetime *__fastcall Windows::Internal::ComTaskPool::CDelayedTaskLifetime::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CDelayedTaskLifetime *this,
        char a2)
{
  __int64 v4; // rdi
  void *v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CDelayedTaskLifetime::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = (void *)_InterlockedExchange64((volatile __int64 *)(v4 + 16), 0LL);
    if ( v5 && DeleteTimerQueueTimer(0LL, v5, 0LL) )
    {
      v7 = *(_QWORD *)(v4 + 32);
      if ( v7 )
      {
        *(_QWORD *)(v4 + 32) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
