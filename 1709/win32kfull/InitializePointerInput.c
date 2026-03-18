/*
 * XREFs of InitializePointerInput @ 0x1C01256D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *InitializePointerInput()
{
  void *result; // rax

  dword_1C0327610 = 1;
  qword_1C032B818 = (__int64)&qword_1C032B810;
  qword_1C032B810 = (__int64)&qword_1C032B810;
  qword_1C032B828 = (__int64)&qword_1C032B820;
  qword_1C032B820 = (__int64)&qword_1C032B820;
  word_1C0333F98 = 2;
  qword_1C032FA98 = (struct tagPOINTERINPUTFRAME *)&gFrameListHead;
  gFrameListHead.Flink = &gFrameListHead;
  qword_1C032B7C0 = (__int64)&qword_1C032B7B8;
  qword_1C032B7B8 = (struct tagPOINTERHOLDINGFRAME *)&qword_1C032B7B8;
  result = &gFrameTPListHead;
  qword_1C032FA88 = (__int64)&gFrameTPListHead;
  gFrameTPListHead = &gFrameTPListHead;
  return result;
}
