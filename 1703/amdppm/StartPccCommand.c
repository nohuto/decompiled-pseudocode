/*
 * XREFs of StartPccCommand @ 0x1C002CADC
 * Callers:
 *     AcquirePccSubspace @ 0x1C000BA00 (AcquirePccSubspace.c)
 * Callees:
 *     <none>
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C00118E8 + 88))(*(_QWORD *)(qword_1C00118E8 + 56));
}
