/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x140476D9C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
