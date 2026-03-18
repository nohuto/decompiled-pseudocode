/*
 * XREFs of ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x1C00E4E24
 * Callers:
 *     FindAdjacentMonitor @ 0x1C00E4EC0 (FindAdjacentMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeAdjacencyOverlap(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG left; // r11d
  unsigned int v3; // r8d
  LONG right; // r10d
  LONG v5; // ebx
  LONG v6; // r9d
  LONG v7; // r8d
  LONG top; // edi
  LONG bottom; // ebx
  LONG v10; // esi

  left = a1->left;
  v3 = 0;
  right = a2->right;
  if ( a1->left < right )
  {
    v5 = a1->right;
    v6 = a2->left;
    if ( v5 > a2->left && (a1->top == a2->bottom || a1->bottom == a2->top) )
    {
      v7 = a2->right;
      if ( v5 < right )
        v7 = a1->right;
      if ( left > v6 )
        v6 = a1->left;
      return (unsigned int)(v7 - v6);
    }
  }
  top = a1->top;
  bottom = a2->bottom;
  if ( top < bottom )
  {
    v10 = a1->bottom;
    v6 = a2->top;
    if ( v10 > v6 && (left == right || a1->right == a2->left) )
    {
      v7 = a2->bottom;
      if ( v10 < bottom )
        v7 = a1->bottom;
      if ( top > v6 )
        v6 = a1->top;
      return (unsigned int)(v7 - v6);
    }
  }
  return v3;
}
