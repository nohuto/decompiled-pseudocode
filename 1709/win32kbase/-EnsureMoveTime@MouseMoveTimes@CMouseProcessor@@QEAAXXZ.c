/*
 * XREFs of ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C0017E5C
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z @ 0x1C00146A0 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0014828 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C0017D64 (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 */

void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(CMouseProcessor::MouseMoveTimes *this)
{
  _QWORD *v1; // rax
  _OWORD *v2; // r9
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 1) )
    *(_QWORD *)this = 0LL;
  if ( !*(_QWORD *)this )
  {
    v1 = CMouseProcessor::EventTime::Now(v3);
    *v2 = *(_OWORD *)v1;
  }
}
