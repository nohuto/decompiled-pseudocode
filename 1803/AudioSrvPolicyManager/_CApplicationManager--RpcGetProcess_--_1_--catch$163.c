/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::catch$163 @ 0x1800373B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CApplicationManager::RpcGetProcess_::_1_::catch_163(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 416);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 512) = *v3;
  return &loc_18001C1F6;
}
