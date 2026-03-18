/*
 * XREFs of ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C0020580
 * Callers:
 *     ?vSetRendering@DC@@QEAAXXZ @ 0x1C0051FA0 (-vSetRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vLockSingleThread(W32PIDLOCK *this)
{
  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 5) + 64LL), UserRequest, 0, 0, 0LL);
}
