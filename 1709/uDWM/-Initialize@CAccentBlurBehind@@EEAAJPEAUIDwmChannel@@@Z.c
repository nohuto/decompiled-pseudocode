/*
 * XREFs of ?Initialize@CAccentBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x180076ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::Initialize(struct CRenderDataVisual **this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CRenderDataVisual::Create(a2, this + 35);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x518u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x517u);
  }
  return v5;
}
