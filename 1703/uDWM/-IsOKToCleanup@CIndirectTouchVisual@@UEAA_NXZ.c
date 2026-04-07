/*
 * XREFs of ?IsOKToCleanup@CIndirectTouchVisual@@UEAA_NXZ @ 0x1800956C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CIndirectTouchVisual::IsOKToCleanup(CIndirectTouchVisual *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 45) )
    return *((_QWORD *)this + 46) == 0LL;
  return result;
}
