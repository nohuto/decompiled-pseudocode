/*
 * XREFs of ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x1C00DE230
 * Callers:
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z @ 0x1C00DE308 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeAdjacencyOverlap(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG left; // edi
  unsigned int v3; // r8d
  LONG right; // r10d
  LONG v5; // r9d
  LONG v6; // r8d
  LONG top; // ebx
  LONG bottom; // r11d
  LONG v9; // esi
  LONG v10; // r9d
  LONG v11; // r8d

  left = a1->left;
  v3 = 0;
  right = a2->right;
  if ( a1->left < right && (v5 = a1->right, v5 > a2->left) && (a1->top == a2->bottom || a1->bottom == a2->top) )
  {
    v6 = a2->right;
    if ( v5 < right )
      v6 = a1->right;
    if ( left > a2->left )
      a2 = a1;
    return (unsigned int)(v6 - a2->left);
  }
  else
  {
    top = a1->top;
    bottom = a2->bottom;
    if ( top < bottom )
    {
      v9 = a1->bottom;
      v10 = a2->top;
      if ( v9 > v10 && (left == right || a1->right == a2->left) )
      {
        v11 = a2->bottom;
        if ( v9 < bottom )
          v11 = a1->bottom;
        if ( top > v10 )
          v10 = a1->top;
        return (unsigned int)(v11 - v10);
      }
    }
  }
  return v3;
}
