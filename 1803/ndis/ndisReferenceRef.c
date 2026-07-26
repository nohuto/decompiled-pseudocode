/*
 * XREFs of ndisReferenceRef @ 0x1C00122E0
 * Callers:
 *     ndisFNotifyDetach @ 0x1C00B2934 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisReferenceRef(KSPIN_LOCK *a1)
{
  return ndisReferenceRefEx(a1);
}
