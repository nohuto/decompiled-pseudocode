/*
 * XREFs of ?StartIdle@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x18019265C
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016C330 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DE54 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DFF8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E37C (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     _lambda_8380e597ab6a1cbcc934487904c94e86_::operator() @ 0x180192434 (_lambda_8380e597ab6a1cbcc934487904c94e86_--operator().c)
 */

void __fastcall CChainingHelper::StartIdle(CChainingHelper *this, const struct CInteractionTracker *a2)
{
  int v2; // ebx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  const struct CInteractionTracker *v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  v3[2] = this;
  v3[0] = &v4;
  v2 = 0;
  v3[1] = (char *)a2 + 520;
  do
    lambda_8380e597ab6a1cbcc934487904c94e86_::operator()((__int64)v3, v2++);
  while ( v2 < 3 );
}
