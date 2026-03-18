/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0047A30
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     PostPendingMouseMove @ 0x1C007FE20 (PostPendingMouseMove.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z @ 0x1C00457C0 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  struct tagPOINT *v4; // rax
  struct tagPOINT v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a2 + 85) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
      v4 = (struct tagPOINT *)((char *)a2 + 152);
    else
      v4 = (struct tagPOINT *)((char *)gpsi + 5368);
    v5 = *v4;
    CMouseProcessor::PostMouseMoveToQ(this, a2, &v5);
  }
}
