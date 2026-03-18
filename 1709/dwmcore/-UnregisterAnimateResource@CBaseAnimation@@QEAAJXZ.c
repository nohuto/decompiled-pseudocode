/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A5C
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18002CFB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x180175CA0 (-UpdateAnimateValues@CScalar@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AAD14 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  signed int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 96) )
  {
    v3 = CComposition::UnregisterAnimateResource(this[2], (unsigned __int64)(this + 7));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x90u);
    else
      *((_BYTE *)this + 96) = 0;
  }
  return v1;
}
