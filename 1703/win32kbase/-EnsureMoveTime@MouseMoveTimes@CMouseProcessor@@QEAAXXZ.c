/*
 * XREFs of ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C007E408
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z @ 0x1C00457C0 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagPOINT@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0045950 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C007E43C (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 */

void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(
        CMouseProcessor::MouseMoveTimes *this,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v3; // rax
  _OWORD *v4; // r9
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_QWORD *)this + 1) )
    *(_QWORD *)this = 0LL;
  if ( !*(_QWORD *)this )
  {
    v3 = (_OWORD *)CMouseProcessor::EventTime::Now(v5, a2, a3, this);
    *v4 = *v3;
  }
}
