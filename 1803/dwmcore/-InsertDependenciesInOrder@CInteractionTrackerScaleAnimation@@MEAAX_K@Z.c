/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x1801BFBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        unsigned __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rcx

  v2 = *((_QWORD *)this + 37);
  v4 = 0LL;
  if ( v2 )
    v4 = *(_QWORD **)(v2 + 8);
  CInteractionTracker::InsertDependenciesForAxis(v4, a2, *((_DWORD *)this + 73));
}
