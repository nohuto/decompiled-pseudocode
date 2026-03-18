/*
 * XREFs of ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011178C
 * Callers:
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C010D98C (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C011CC7C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C010D890 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeInFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rsi
  bool v14; // zf

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v8, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  v11 = *((_DWORD *)a2 + 12);
  v12 = 0;
  v13 = *((_QWORD *)a2 + 12);
  if ( v11 )
  {
    LODWORD(v10) = *((_DWORD *)a2 + 12);
    do
    {
      v9 = (unsigned int)v10;
      v10 = *((_QWORD *)a2 + 12) + 576LL * (unsigned int)v10;
      if ( v13 >= v10 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
        v9 = *((unsigned int *)a2 + 12);
      }
      v11 = v9;
      if ( *(_WORD *)(v13 + 236) == a3 )
        break;
      v13 += 576LL;
      ++v12;
      v10 = (unsigned int)v9;
    }
    while ( v12 < (unsigned int)v9 );
  }
  v14 = v12 == v11;
  if ( v12 > v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    v14 = v12 == *((_DWORD *)a2 + 12);
  }
  if ( v14 )
    return 0LL;
  if ( a4 )
    *a4 = v12;
  return (struct CPointerInfoNode *)v13;
}
