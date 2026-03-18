/*
 * XREFs of ?AreEqualRects@CPTPProcessor@@AEAA_NUtagRECT@@0@Z @ 0x1C012AE8C
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPProcessor::AreEqualRects(CPTPProcessor *this, struct tagRECT *a2, struct tagRECT *a3)
{
  return a2->bottom == a3->bottom && a2->top == a3->top && a2->left == a3->left && a2->right == a3->right;
}
