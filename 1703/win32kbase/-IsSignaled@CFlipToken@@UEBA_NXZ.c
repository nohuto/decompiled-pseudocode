/*
 * XREFs of ?IsSignaled@CFlipToken@@UEBA_NXZ @ 0x1C0005C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 13) )
  {
    if ( *((_BYTE *)this + 89) )
      return 1LL;
  }
  return result;
}
