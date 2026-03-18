/*
 * XREFs of PspEmptyPropertySet @ 0x14053F0CC
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     PspRemoveProperty @ 0x140037664 (PspRemoveProperty.c)
 */

_QWORD *__fastcall PspEmptyPropertySet(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    PspRemoveProperty((__int64)a1, result[2], 0LL);
  return result;
}
