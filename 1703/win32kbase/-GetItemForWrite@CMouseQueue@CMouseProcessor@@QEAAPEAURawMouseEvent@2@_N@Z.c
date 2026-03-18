/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0081DC0
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0046C60 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     <none>
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        char a2)
{
  __int16 v2; // dx

  if ( a2 )
    return (CMouseProcessor::CMouseQueue *)((char *)this + 136 * *((unsigned __int16 *)this + 1088));
  v2 = *((_WORD *)this + 1089);
  if ( v2 != 16 )
  {
    *((_WORD *)this + 1088) = ((unsigned __int8)*((_WORD *)this + 1088) + 1) & 0xF;
    *((_WORD *)this + 1089) = v2 + 1;
    return (CMouseProcessor::CMouseQueue *)((char *)this + 136 * *((unsigned __int16 *)this + 1088));
  }
  return 0LL;
}
