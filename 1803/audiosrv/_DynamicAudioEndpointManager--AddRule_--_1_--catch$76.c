/*
 * XREFs of _DynamicAudioEndpointManager::AddRule_::_1_::catch$76 @ 0x1800FC12D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall DynamicAudioEndpointManager::AddRule_::_1_::catch_76(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 152);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 104) = *v3;
  return &loc_1800FBFA5;
}
