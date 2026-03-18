/*
 * XREFs of ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18008FE70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180090308 (-Detach@CWindowNode@@QEAAJXZ.c)
 */

void __fastcall CWindowNode::DetachFromChannel(CWindowNode *this, struct CChannelContext *a2, char a3)
{
  int v5; // eax

  if ( a3 )
  {
    v5 = CWindowNode::Detach(this);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x149u);
  }
  CNotificationResource::DetachFromChannel(this, a2);
}
