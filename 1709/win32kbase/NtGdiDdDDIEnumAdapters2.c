/*
 * XREFs of NtGdiDdDDIEnumAdapters2 @ 0x1C008E2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIEnumAdapters2(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C0190418)(a1, a2, a3, 6LL);
}
