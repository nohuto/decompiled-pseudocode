/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x1404E1E4C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
