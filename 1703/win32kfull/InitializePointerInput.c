/*
 * XREFs of InitializePointerInput @ 0x1C011B6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *InitializePointerInput()
{
  void *result; // rax

  dword_1C032C390 = 1;
  qword_1C0330358 = (__int64)&qword_1C0330350;
  qword_1C0330350 = (__int64)&qword_1C0330350;
  qword_1C0330368 = (__int64)&qword_1C0330360;
  qword_1C0330360 = (__int64)&qword_1C0330360;
  word_1C0338868 = 2;
  qword_1C0334528 = (struct tagPOINTERINPUTFRAME *)&gFrameListHead;
  gFrameListHead.Flink = &gFrameListHead;
  qword_1C0330300 = (__int64)&qword_1C03302F8;
  qword_1C03302F8 = (struct tagPOINTERHOLDINGFRAME *)&qword_1C03302F8;
  result = &gFrameTPListHead;
  qword_1C0334518 = (__int64)&gFrameTPListHead;
  gFrameTPListHead = &gFrameTPListHead;
  return result;
}
