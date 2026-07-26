/*
 * XREFs of ndisReferenceRef @ 0x1C00256E0
 * Callers:
 *     ndisFNotifyDetach @ 0x1C00BF48C (ndisFNotifyDetach.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 */

bool __fastcall ndisReferenceRef(KSPIN_LOCK *a1, unsigned __int8 a2)
{
  int v3; // [rsp+40h] [rbp+18h] BYREF

  return ndisReferenceRefEx(a1, a2, &v3);
}
