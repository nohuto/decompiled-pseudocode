/*
 * XREFs of NtGdiDdDDIPollDisplayChildren @ 0x1C00A5F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIPollDisplayChildren(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C01905B8)(a1, a2);
}
