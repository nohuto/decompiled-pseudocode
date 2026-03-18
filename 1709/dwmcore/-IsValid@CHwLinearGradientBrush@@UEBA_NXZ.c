/*
 * XREFs of ?IsValid@CHwLinearGradientBrush@@UEBA_NXZ @ 0x1801BC4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwLinearGradientBrush::IsValid(CHwLinearGradientBrush *this)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 20) )
    return *((_QWORD *)this + 12) != 0LL;
  return result;
}
