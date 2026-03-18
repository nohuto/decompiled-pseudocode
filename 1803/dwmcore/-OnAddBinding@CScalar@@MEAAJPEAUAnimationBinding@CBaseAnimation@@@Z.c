/*
 * XREFs of ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1801A37B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C2004 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CScalar::OnAddBinding(CComposition **this, struct CBaseAnimation::AnimationBinding *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CBaseAnimation::RegisterAnimateResource(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x43u);
  return v3;
}
