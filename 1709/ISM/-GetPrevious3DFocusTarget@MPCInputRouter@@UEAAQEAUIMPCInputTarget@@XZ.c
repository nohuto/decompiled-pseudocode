/*
 * XREFs of ?GetPrevious3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCInputTarget@@XZ @ 0x180036920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCInputTarget *__fastcall MPCInputRouter::GetPrevious3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCInputTarget *)*((_QWORD *)this + 3);
}
