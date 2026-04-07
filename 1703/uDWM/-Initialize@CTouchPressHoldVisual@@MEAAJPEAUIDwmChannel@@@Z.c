/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009EFE0
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180088CDC (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisua.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rax

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 74) = 0;
    *((_DWORD *)this + 78) = 90;
    *((_DWORD *)this + 77) = 90;
    v5 = *(_QWORD *)((char *)this + 308);
    *(_QWORD *)((char *)this + 324) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *(_QWORD *)((char *)this + 316) = v5;
    *((_DWORD *)this + 83) = 100;
    CVisual::SetOpacity(this, 0.0);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x24u);
  }
  return v4;
}
