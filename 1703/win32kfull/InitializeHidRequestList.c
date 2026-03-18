/*
 * XREFs of InitializeHidRequestList @ 0x1C011C3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C032F128 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C032F138 = (__int64)&qword_1C032F130;
  qword_1C032F130 = (__int64)&qword_1C032F130;
  result = &qword_1C032F140;
  qword_1C032F148 = (__int64)&qword_1C032F140;
  qword_1C032F140 = (__int64)&qword_1C032F140;
  return result;
}
