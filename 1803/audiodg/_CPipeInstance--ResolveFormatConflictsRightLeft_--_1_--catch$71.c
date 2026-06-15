/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::catch$71 @ 0x14002023B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::catch_71(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 344);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 80) = *v3;
  return &loc_140027CED;
}
