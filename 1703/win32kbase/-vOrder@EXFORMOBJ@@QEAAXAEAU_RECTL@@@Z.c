/*
 * XREFs of ?vOrder@EXFORMOBJ@@QEAAXAEAU_RECTL@@@Z @ 0x1C0020FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vOrder(float **this, struct _RECTL *a2)
{
  float v2; // xmm1_4
  LONG left; // r8d
  LONG right; // eax
  float v5; // xmm1_4
  LONG top; // ecx
  LONG bottom; // eax

  v2 = **this;
  if ( v2 < 0.0 )
  {
    left = a2->left;
    right = a2->right;
    if ( a2->left < right )
      goto LABEL_6;
    if ( v2 < 0.0 )
      goto LABEL_3;
  }
  left = a2->left;
  right = a2->right;
  if ( a2->left > right )
  {
LABEL_6:
    a2->left = right;
    a2->right = left;
  }
LABEL_3:
  v5 = (*this)[3];
  if ( v5 >= 0.0 )
    goto LABEL_4;
  top = a2->top;
  bottom = a2->bottom;
  if ( top < bottom )
    goto LABEL_7;
  if ( v5 >= 0.0 )
  {
LABEL_4:
    top = a2->top;
    bottom = a2->bottom;
    if ( top <= bottom )
      return;
LABEL_7:
    a2->top = bottom;
    a2->bottom = top;
  }
}
