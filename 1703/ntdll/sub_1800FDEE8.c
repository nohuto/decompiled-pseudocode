/*
 * XREFs of sub_1800FDEE8 @ 0x1800FDEE8
 * Callers:
 *     sub_1800074BC @ 0x1800074BC (sub_1800074BC.c)
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     sub_18000AE60 @ 0x18000AE60 (sub_18000AE60.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_180102B68 @ 0x180102B68 (sub_180102B68.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800FDEE8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 615;
  v7[5] = a2;
  v7[6] = a3;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
