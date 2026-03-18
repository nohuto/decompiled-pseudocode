/*
 * XREFs of ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01172B0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C011A24C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011155C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::IsFrameReferenced(struct _KTHREAD **this, __int64 a2)
{
  unsigned int v2; // edi
  struct CPointerInputFrame *result; // rax
  unsigned int v5; // edi

  v2 = a2;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  result = CTouchProcessor::FindAndReferenceFrameById(this, v2);
  v5 = 0;
  if ( result )
  {
    LOBYTE(v5) = CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, result) != 0;
    return (struct CPointerInputFrame *)v5;
  }
  return result;
}
