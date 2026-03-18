/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C003A0CC
 * Callers:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C0039700 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0135A50 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        __int64 a2)
{
  CMouseProcessor::CMouseQueue *v2; // rbx
  bool v3; // zf

  v2 = this;
  if ( !(_BYTE)a2 )
  {
    this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)this + 1153);
    v3 = (_WORD)this == 16;
    if ( (unsigned __int16)this > 0x10u )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
      this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)v2 + 1153);
      v3 = (_WORD)this == 16;
    }
    if ( v3 )
      return 0LL;
    LOWORD(this) = (_WORD)this + 1;
    *((_WORD *)v2 + 1152) = ((unsigned __int8)*((_WORD *)v2 + 1152) + 1) & 0xF;
    *((_WORD *)v2 + 1153) = (_WORD)this;
  }
  if ( *((_WORD *)v2 + 1153) > 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  return (CMouseProcessor::CMouseQueue *)((char *)v2 + 144 * *((unsigned __int16 *)v2 + 1152));
}
