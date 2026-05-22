/*
 * XREFs of _EdgyProcessorTarget::UpdateInputTarget_::_1_::catch$5 @ 0x1800E9608
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall EdgyProcessorTarget::UpdateInputTarget_::_1_::catch_5(__int64 a1, __int64 a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 28LL);
  *(_DWORD *)(a2 + 32) = v2;
  if ( v2 >= 0 )
    return &loc_1800B3C96;
  else
    return &loc_1800B3C75;
}
