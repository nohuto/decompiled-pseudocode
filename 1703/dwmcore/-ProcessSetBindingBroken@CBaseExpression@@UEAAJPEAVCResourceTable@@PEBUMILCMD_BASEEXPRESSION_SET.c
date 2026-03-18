/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18002F180
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x18002F018 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@IEAAXXZ @ 0x18002F1C4 (-EnsureExpressionIsUnregistered@CBaseExpression@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v4; // eax
  unsigned int v5; // edi

  if ( (*((_BYTE *)this + 208) & 2) != 0 )
  {
    v4 = CBaseExpression::NotifyAnimationDisconnected(this);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x113u);
      return v5;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 208) |= 8u;
  return 0;
}
