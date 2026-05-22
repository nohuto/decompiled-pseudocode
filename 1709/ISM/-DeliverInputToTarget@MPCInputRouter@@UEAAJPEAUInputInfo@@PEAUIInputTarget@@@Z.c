/*
 * XREFs of ?DeliverInputToTarget@MPCInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800A92A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCInputRouter::DeliverInputToTarget(
        MPCInputRouter *this,
        struct InputInfo *a2,
        struct IInputTarget *a3)
{
  return DWMInputRouter::DeliverInputToTarget(this, a2, a3);
}
