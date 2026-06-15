/*
 * XREFs of _CMonitor::ProcessRenderBufferReadyEvent_::_1_::catch$1 @ 0x1800E4FB1
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x18006186C (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitor::ProcessRenderBufferReadyEvent_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 120);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 272) = *v3;
  return &loc_1800E4E4F;
}
