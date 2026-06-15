/*
 * XREFs of asm_ApplicationSubmixContextDestroy @ 0x1800A0410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall asm_ApplicationSubmixContextDestroy(__int64 a1)
{
  (*(void (__fastcall **)(CProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager + 40LL))(
    g_ProcessSubmixManager,
    a1);
  return 0LL;
}
