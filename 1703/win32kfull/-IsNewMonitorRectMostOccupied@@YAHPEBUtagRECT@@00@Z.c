/*
 * XREFs of ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01BF0B4
 * Callers:
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 */

_BOOL8 __fastcall IsNewMonitorRectMostOccupied(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  IntersectRect(v6, &a1->left, &a2->left);
  IntersectRect(v7, &a1->left, &a3->left);
  return (v6[2] - v6[0]) * (v6[3] - v6[1]) > (v7[2] - v7[0]) * (v7[3] - v7[1]);
}
