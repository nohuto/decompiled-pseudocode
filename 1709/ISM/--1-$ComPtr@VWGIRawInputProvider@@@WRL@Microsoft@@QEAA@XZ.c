/*
 * XREFs of ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E828
 * Callers:
 *     _WGIRawInputProvider::Create_::_1_::dtor$0 @ 0x1800D132C (_WGIRawInputProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x180003410 (-Release@GazeProcessor@@UEAAKXZ.c)
 */

GazeProcessor *__fastcall Microsoft::WRL::ComPtr<WGIRawInputProvider>::~ComPtr<WGIRawInputProvider>(GazeProcessor **a1)
{
  GazeProcessor *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (GazeProcessor *)GazeProcessor::Release(result);
  }
  return result;
}
