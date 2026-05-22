/*
 * XREFs of ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x18003FE20
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     powf @ 0x1800CAA64 (powf.c)
 */

__int64 __fastcall ControllerProcessor::CalculateZoomDelta(ControllerProcessor *this, float a2)
{
  float v3; // xmm2_4
  float v4; // xmm6_4
  signed int v5; // eax
  float v6; // xmm6_4
  float v7; // xmm1_4

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm);
  if ( v3 > 0.00000011920929 )
  {
    v4 = a2 * powf(v3, 3.5999999);
    v5 = GetTickCount() - *((_DWORD *)this + 99);
    if ( (float)v5 < 2500.0 )
      v4 = v4 * (float)((float)(powf((float)v5 / 2500.0, 0.80000001) * 0.94999999) + 0.050000001);
    v6 = v4 * 0.050000001;
    if ( v6 >= 0.0 )
      v7 = v6 + 1.0;
    else
      v7 = 1.0 / (float)(1.0 - v6);
    *((float *)this + 98) = v7 + *((float *)this + 98);
  }
  else
  {
    *((_DWORD *)this + 99) = GetTickCount();
  }
  return 0LL;
}
