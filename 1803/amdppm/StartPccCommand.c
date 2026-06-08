/*
 * XREFs of StartPccCommand @ 0x1C0021554
 * Callers:
 *     AcquirePccSubspace @ 0x1C00032B0 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C0011918 + 88))(*(_QWORD *)(qword_1C0011918 + 56));
}
