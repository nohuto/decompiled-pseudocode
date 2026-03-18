/*
 * XREFs of ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x1C0039570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 502) )
  {
    if ( !*((_DWORD *)this + 87) )
      return *((_DWORD *)this + 60) == 2;
  }
  return result;
}
