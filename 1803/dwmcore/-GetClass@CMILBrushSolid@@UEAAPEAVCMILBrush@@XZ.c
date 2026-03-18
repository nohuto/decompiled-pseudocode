/*
 * XREFs of ?GetClass@CMILBrushSolid@@UEAAPEAVCMILBrush@@XZ @ 0x18020F720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CMILBrushSolid::GetClass(CMILBrushSolid *this)
{
  return (struct CMILBrush *)(((unsigned __int64)this - 24) & -(__int64)(this != (CMILBrushSolid *)48));
}
