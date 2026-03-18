/*
 * XREFs of ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180098CF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800993DC (-Detach@CWindowNode@@QEAAJXZ.c)
 */

void __fastcall CWindowNode::DetachFromChannel(CWindowNode *this, CAnimationLoggingManager **a2, char a3)
{
  signed int v5; // eax

  if ( a3 )
  {
    v5 = CWindowNode::Detach(this);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x184u);
  }
  CNotificationResource::DetachFromChannel(this, a2);
}
