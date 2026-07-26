/*
 * XREFs of ndisReferenceRef @ 0x1C0001618
 * Callers:
 *     ndisFNotifyDetach @ 0x1C00AB194 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisReferenceRef(KSPIN_LOCK *a1)
{
  return ndisReferenceRefEx(a1);
}
