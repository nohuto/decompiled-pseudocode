/*
 * XREFs of StartPccCommand @ 0x1C002FF8C
 * Callers:
 *     AcquirePccSubspace @ 0x1C000C110 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C00118E8 + 88))(*(_QWORD *)(qword_1C00118E8 + 56));
}
