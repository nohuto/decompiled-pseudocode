/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C1FC8
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18003FBE4 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x1801A3850 (-UpdateAnimateValues@CScalar@@UEAAXXZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18002D7E8 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 96) )
  {
    v3 = CComposition::UnregisterAnimateResource(this[2], (struct IAnimationResource *)(this + 7));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x90u);
    else
      *((_BYTE *)this + 96) = 0;
  }
  return v1;
}
