/*
 * XREFs of ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0127618
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0122FC0 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0123180 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0127680 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 * Callees:
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E568 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::SetPointerInfoNodeFlag(
        CTouchProcessor *this,
        int a2,
        __int64 a3,
        int a4)
{
  struct CPointerInputFrame *result; // rax
  CTouchProcessor *v6; // rcx
  __int16 v7; // r10
  unsigned int v8; // ebx
  struct CPointerInfoNode *NodeInFrame; // rax
  struct CPointerInputFrame *v10; // rdx
  int v11; // r9d
  CTouchProcessor *v12; // r11

  result = CTouchProcessor::FindFrameById(this, a2);
  v8 = 0;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)result + 11);
    NodeInFrame = CTouchProcessor::FindNodeInFrame(v6, result, v7, 0LL);
    if ( NodeInFrame )
    {
      *((_DWORD *)NodeInFrame + 65) |= a4;
      v8 = v11 + 1;
    }
    CTouchProcessor::UnreferenceFrameInt(v12, v10);
    return (struct CPointerInputFrame *)v8;
  }
  return result;
}
