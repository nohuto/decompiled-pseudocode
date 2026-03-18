/*
 * XREFs of ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800C287C
 * Callers:
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801A4060 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPtrArray<CVisual>::GetCount(_QWORD *a1)
{
  if ( (*a1 & 2) != 0 )
    return *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *a1 & 1LL;
}
