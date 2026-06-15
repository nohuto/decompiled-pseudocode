/*
 * XREFs of ??_GCStreamStartedWorkItem@@MEAAPEAXI@Z @ 0x180029E10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CStreamStartedWorkItem *__fastcall CStreamStartedWorkItem::`scalar deleting destructor'(
        CStreamStartedWorkItem *this,
        char a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CStreamStartedWorkItem::`vftable';
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
