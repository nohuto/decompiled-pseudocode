/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CFlipExBuffer@@UEBA_NXZ @ 0x1C0153060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char result; // al

  result = 1;
  if ( *((int *)this + 87) >= 2 )
    return *((_BYTE *)this + 501);
  return result;
}
