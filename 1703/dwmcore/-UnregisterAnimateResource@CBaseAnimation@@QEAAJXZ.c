/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBAFC
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800BC7A4 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x180163740 (-UpdateAnimateValues@CScalar@@UEAA_NXZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18005BD2C (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 96) )
  {
    v3 = CComposition::UnregisterAnimateResource(this[2], (unsigned __int64)(this + 7));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x90u);
    else
      *((_BYTE *)this + 96) = 0;
  }
  return v1;
}
