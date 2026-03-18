/*
 * XREFs of ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C00153D0
 * Callers:
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C00F9E90 (DxgkSetMonitorColorSpaceTransform.c)
 *     DxgkSetGammaRamp @ 0x1C01A0AC0 (DxgkSetGammaRamp.c)
 * Callees:
 *     <none>
 */

DXGK_GAMMA_RAMP *__fastcall DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(DXGK_GAMMA_RAMP *this)
{
  DXGK_GAMMA_RAMP *result; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &ReferenceCounted::`vftable';
  *(_QWORD *)this = &DXGK_GAMMA_RAMP::`vftable';
  result = this;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 4) = 1;
  return result;
}
