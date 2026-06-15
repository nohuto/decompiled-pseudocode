/*
 * XREFs of ??_GCTransportControlRouterWorkItem@@UEAAPEAXI@Z @ 0x180029C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CTransportControlRouterWorkItem *__fastcall CTransportControlRouterWorkItem::`scalar deleting destructor'(
        CTransportControlRouterWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
