/*
 * XREFs of ??1?$ComPtr@VWGIRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x180077A70
 * Callers:
 *     _WGIRawInputProvider::Create_::_1_::dtor$0 @ 0x1800E74B9 (_WGIRawInputProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800031D0 (-Release@EdgyInputTarget@@UEAAKXZ.c)
 */

EdgyInputTarget *__fastcall Microsoft::WRL::ComPtr<WGIRawInputProvider>::~ComPtr<WGIRawInputProvider>(
        EdgyInputTarget **a1)
{
  EdgyInputTarget *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (EdgyInputTarget *)EdgyInputTarget::Release(result);
  }
  return result;
}
