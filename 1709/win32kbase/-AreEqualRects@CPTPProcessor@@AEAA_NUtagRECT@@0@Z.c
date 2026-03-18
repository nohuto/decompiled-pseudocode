/*
 * XREFs of ?AreEqualRects@CPTPProcessor@@AEAA_NUtagRECT@@0@Z @ 0x1C012A5E4
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012B348 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPTPProcessor::AreEqualRects(CPTPProcessor *this, struct tagRECT *a2, struct tagRECT *a3)
{
  return a2->bottom == a3->bottom && a2->top == a3->top && a2->left == a3->left && a2->right == a3->right;
}
