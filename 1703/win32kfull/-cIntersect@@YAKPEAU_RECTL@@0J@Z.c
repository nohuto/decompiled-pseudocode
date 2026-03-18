/*
 * XREFs of ?cIntersect@@YAKPEAU_RECTL@@0J@Z @ 0x1C025D63C
 * Callers:
 *     bMoveDevDragRect @ 0x1C02664B0 (bMoveDevDragRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cIntersect(struct _RECTL *a1, struct _RECTL *a2)
{
  unsigned int v2; // r11d
  LONG *p_top; // r9
  LONG *v5; // r10
  int v6; // ebx
  struct _RECTL *v7; // r8
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx

  v2 = 0;
  p_top = &a2->top;
  v5 = &a2->top;
  v6 = 4;
  do
  {
    v7 = a1;
    if ( *(v5 - 1) > a1->left )
      v7 = (struct _RECTL *)(v5 - 1);
    left = v7->left;
    *(p_top - 1) = v7->left;
    right = a1->right;
    if ( v5[1] < right )
      right = v5[1];
    p_top[1] = right;
    if ( left < right )
    {
      top = a1->top;
      if ( *v5 > top )
        top = *v5;
      *p_top = top;
      bottom = a1->bottom;
      if ( v5[2] < bottom )
        bottom = v5[2];
      p_top[2] = bottom;
      if ( top < bottom )
      {
        p_top += 4;
        ++v2;
      }
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  return v2;
}
