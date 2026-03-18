/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x18018A540
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
  struct CResource *v4; // rcx

  v2 = *((_QWORD *)this + 35);
  v4 = 0LL;
  if ( v2 )
    v4 = *(struct CResource **)(v2 + 8);
  CInteractionTracker::InsertDependenciesForAxis(v4, a2, *((_DWORD *)this + 69));
}
