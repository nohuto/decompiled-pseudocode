/*
 * XREFs of _CDuckingManager::OnStateChanged_::_1_::catch$6 @ 0x180027DFF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CDuckingManager::OnStateChanged_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 144);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 68) = *v3;
  return &loc_180007B75;
}
