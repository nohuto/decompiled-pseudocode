/*
 * XREFs of _CDuckingManager::NotifyFilteredClientsAutoDuck_::_1_::catch$3 @ 0x180036741
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CDuckingManager::NotifyFilteredClientsAutoDuck_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 136);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 32) = *v3;
  return &loc_18000D723;
}
