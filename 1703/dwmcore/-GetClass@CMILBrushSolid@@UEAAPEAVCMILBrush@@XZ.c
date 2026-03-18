/*
 * XREFs of ?GetClass@CMILBrushSolid@@UEAAPEAVCMILBrush@@XZ @ 0x1801B2730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CMILBrushSolid::GetClass(CMILBrushSolid *this)
{
  return (struct CMILBrush *)(((unsigned __int64)this - 24) & -(__int64)(this != (CMILBrushSolid *)48));
}
