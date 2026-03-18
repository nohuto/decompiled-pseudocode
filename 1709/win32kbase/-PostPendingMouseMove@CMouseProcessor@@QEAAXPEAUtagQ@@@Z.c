/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0014088
 * Callers:
 *     PostPendingMouseMove @ 0x1C0012B40 (PostPendingMouseMove.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z @ 0x1C00146A0 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  struct tagPOINT *v4; // rax
  struct tagPOINT v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a2 + 95) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
      v4 = (struct tagPOINT *)((char *)a2 + 184);
    else
      v4 = (struct tagPOINT *)((char *)gpsi + 4944);
    v5 = *v4;
    CMouseProcessor::PostMouseMoveToQ(this, a2, &v5);
  }
}
