/*
 * XREFs of ?OnResetEvent@CMit@@CAJPEAXK0@Z @ 0x1801A05E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMit::OnResetEvent(_BYTE *a1, __int64 a2, void *a3)
{
  a1[25] = 0;
  (*(void (__fastcall **)(struct IMessageSession *, __int64, void *))(*(_QWORD *)CMit::s_pMessageSession + 232LL))(
    CMit::s_pMessageSession,
    a2,
    a3);
  return 0LL;
}
