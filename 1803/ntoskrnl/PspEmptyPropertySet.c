/*
 * XREFs of PspEmptyPropertySet @ 0x1404B9534
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x1400CE420 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
