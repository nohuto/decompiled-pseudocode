/*
 * XREFs of _GraphStreamingResourceManager::RegisterProcess_::_1_::catch$1 @ 0x1400209CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall GraphStreamingResourceManager::RegisterProcess_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 168) = *v3;
  return &loc_140023869;
}
