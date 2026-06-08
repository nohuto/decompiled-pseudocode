/*
 * XREFs of StartPccCommand @ 0x1C002D554
 * Callers:
 *     AcquirePccSubspace @ 0x1C00099C0 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C001AAD8 + 88))(*(_QWORD *)(qword_1C001AAD8 + 56));
}
