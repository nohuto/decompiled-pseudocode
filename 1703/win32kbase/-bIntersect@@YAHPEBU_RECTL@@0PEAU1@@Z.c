/*
 * XREFs of ?bIntersect@@YAHPEBU_RECTL@@0PEAU1@@Z @ 0x1C008F1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIntersect(const struct _RECTL *a1, const struct _RECTL *a2, struct _RECTL *a3)
{
  const struct _RECTL *v3; // r9
  LONG left; // r10d
  LONG right; // r9d
  LONG top; // edx
  LONG bottom; // eax
  LONG v9; // ecx

  v3 = a2;
  if ( a1->left > a2->left )
    v3 = a1;
  left = v3->left;
  a3->left = v3->left;
  right = a2->right;
  if ( a1->right < right )
    right = a1->right;
  a3->right = right;
  if ( left >= right )
    return 0LL;
  top = a2->top;
  if ( a1->top > top )
    top = a1->top;
  a3->top = top;
  bottom = a1->bottom;
  v9 = a2->bottom;
  if ( bottom < v9 )
    v9 = bottom;
  a3->bottom = v9;
  return top < v9;
}
