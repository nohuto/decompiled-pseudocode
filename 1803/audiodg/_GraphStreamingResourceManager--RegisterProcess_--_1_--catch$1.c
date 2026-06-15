/*
 * XREFs of _GraphStreamingResourceManager::RegisterProcess_::_1_::catch$1 @ 0x14001F760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall GraphStreamingResourceManager::RegisterProcess_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 128);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 232) = *v3;
  return &loc_140021FEA;
}
