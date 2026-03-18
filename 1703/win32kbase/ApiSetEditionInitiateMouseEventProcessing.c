/*
 * XREFs of ApiSetEditionInitiateMouseEventProcessing @ 0x1C008B39C
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0046C60 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionInitiateMouseEventProcessing(unsigned int a1)
{
  __int64 result; // rax

  result = IsEditionInitiateMouseEventProcessingSupported();
  if ( (int)result >= 0 )
    return EditionInitiateMouseEventProcessing(a1);
  return result;
}
