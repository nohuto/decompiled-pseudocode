/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0016AA4
 * Callers:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C0013D90 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0015ADC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     <none>
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        char a2)
{
  __int16 v2; // dx

  if ( a2 )
    return (CMouseProcessor::CMouseQueue *)((char *)this + 144 * *((unsigned __int16 *)this + 1152));
  v2 = *((_WORD *)this + 1153);
  if ( v2 != 16 )
  {
    *((_WORD *)this + 1152) = ((unsigned __int8)*((_WORD *)this + 1152) + 1) & 0xF;
    *((_WORD *)this + 1153) = v2 + 1;
    return (CMouseProcessor::CMouseQueue *)((char *)this + 144 * *((unsigned __int16 *)this + 1152));
  }
  return 0LL;
}
