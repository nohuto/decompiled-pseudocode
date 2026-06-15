/*
 * XREFs of _CResourcePriorityTracker::AddResourcePriorityToMap_::_1_::catch$47 @ 0x180059AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CResourcePriorityTracker::AddResourcePriorityToMap_::_1_::catch_47(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_180009139;
}
