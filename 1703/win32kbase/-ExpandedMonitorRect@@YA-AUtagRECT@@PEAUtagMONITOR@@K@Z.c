/*
 * XREFs of ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C007290C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z @ 0x1C00DE308 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0072984 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C00729F4 (MinimumMonitorDpi.c)
 */

struct tagRECT *__fastcall ExpandedMonitorRect(struct tagRECT *__return_ptr retstr, struct tagMONITOR *a2, char a3)
{
  int v3; // r8d
  BOOL v6; // edi
  unsigned __int16 v7; // bx
  struct tagPOINT v8; // rax
  struct tagPOINT v9; // r8

  v3 = a3 & 0xF;
  *retstr = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( v3 != 2 )
  {
    v6 = v3 == 0;
    v7 = MinimumMonitorDpi();
    v8 = ExpandMonitorSpaceVertex(v6, v7, *(struct tagPOINT *)&retstr->left);
    v9 = *(struct tagPOINT *)&retstr->right;
    *(struct tagPOINT *)&retstr->left = v8;
    *(struct tagPOINT *)&retstr->right = ExpandMonitorSpaceVertex(v6, v7, v9);
  }
  return retstr;
}
