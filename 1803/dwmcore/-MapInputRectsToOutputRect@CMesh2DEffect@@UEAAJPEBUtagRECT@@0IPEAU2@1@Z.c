/*
 * XREFs of ?MapInputRectsToOutputRect@CMesh2DEffect@@UEAAJPEBUtagRECT@@0IPEAU2@1@Z @ 0x180222310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::MapInputRectsToOutputRect(
        CMesh2DEffect *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  if ( a4 != 1 )
    return 2147942487LL;
  a5->left = 0x80000000;
  a5->top = 0x80000000;
  a5->right = 0x7FFFFFFF;
  a5->bottom = 0x7FFFFFFF;
  *(_QWORD *)&a6->left = 0LL;
  *(_QWORD *)&a6->right = 0LL;
  return 0LL;
}
