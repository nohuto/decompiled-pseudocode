/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0072320
 * Callers:
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C00061A8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
