/*
 * XREFs of AcpiCStateIdleExecute @ 0x1C0004A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdleExecute(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  (*(void (__fastcall **)(__int64, _QWORD))(88LL * a3 + a1 + 88))(88LL * a3 + a1 + 96, a5);
  return 0LL;
}
