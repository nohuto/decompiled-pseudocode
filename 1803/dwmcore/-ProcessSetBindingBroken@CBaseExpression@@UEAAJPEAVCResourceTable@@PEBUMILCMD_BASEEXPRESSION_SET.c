/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003BC50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003B420 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18003BC9C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  char v3; // al
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *((_BYTE *)this + 208);
  if ( (v3 & 2) != 0 )
  {
    v5 = CBaseExpression::NotifyAnimationDisconnected(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x12Au);
      return v6;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v3 = *((_BYTE *)this + 208);
  }
  *((_BYTE *)this + 208) = v3 | 0x10;
  return 0;
}
