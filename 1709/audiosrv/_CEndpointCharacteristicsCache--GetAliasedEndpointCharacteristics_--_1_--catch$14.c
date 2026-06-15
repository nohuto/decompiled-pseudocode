/*
 * XREFs of _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::catch$14 @ 0x1800396D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 368);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 88) = *v3;
  return &loc_180050C20;
}
