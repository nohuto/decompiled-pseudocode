/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180084DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  if ( *((_BYTE *)this + 800) )
    return MPCInputRouter::HitTestInternal(this, a2, a3);
  else
    return DWMInputRouter::HitTest(this, a2, a3);
}
