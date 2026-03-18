/*
 * XREFs of ?IsSignaled@CFlipToken@@UEBA_NXZ @ 0x1C0037BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 13) )
    return *((_BYTE *)this + 89) != 0;
  return result;
}
