/*
 * XREFs of ?Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180037D10
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180023694 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Initialize(CAnimatedTransitionVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x89u);
  else
    CVisual::DisablePrefiltering(this);
  return v4;
}
