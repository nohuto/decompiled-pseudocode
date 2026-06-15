/*
 * XREFs of asm_AudioServerGetApplicationSubmixId @ 0x1800A04F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall asm_AudioServerGetApplicationSubmixId(_QWORD *a1, _QWORD *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 176LL))(*a1);
  return 0LL;
}
