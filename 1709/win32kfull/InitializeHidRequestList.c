/*
 * XREFs of InitializeHidRequestList @ 0x1C0126150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C032B4D0 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C032B4E0 = (__int64)&qword_1C032B4D8;
  qword_1C032B4D8 = (__int64)&qword_1C032B4D8;
  result = &qword_1C032B4E8;
  qword_1C032B4F0 = (__int64)&qword_1C032B4E8;
  qword_1C032B4E8 = (__int64)&qword_1C032B4E8;
  return result;
}
