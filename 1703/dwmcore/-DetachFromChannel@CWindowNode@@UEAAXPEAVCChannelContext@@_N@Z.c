/*
 * XREFs of ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18004FEE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180050554 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowNode::DetachFromChannel(CWindowNode *this, struct CChannelContext *a2, bool a3)
{
  int v6; // eax

  if ( a3 )
  {
    v6 = CWindowNode::Detach(this);
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x183u);
  }
  CNotificationResource::DetachFromChannel(this, a2, a3);
}
